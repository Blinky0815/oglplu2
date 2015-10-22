/**
 *  @example standalone/007_glfw_glew_cube.cpp
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#include <GL/glew.h>

#include <oglplus/context.hpp>
#include <oglplus/enum_values.hpp>
#include <oglplus/glsl/string_ref.hpp>
#include <oglplus/error/format.hpp>
#include <oglplus/utils/make_view.hpp>

#include <oglplus/math/vector.hpp>
#include <oglplus/math/matrix.hpp>
#include <oglplus/math/matrix_ctrs.hpp>

#include <eagine/scope_exit.hpp>

#include <GL/glfw.h>

#include <iostream>
#include <stdexcept>
#include <cmath>

static oglplus::enum_values GL;
static oglplus::context gl;

static
void handle_resize(
	int width, int height,
	const oglplus::uniform_location& projection
)
{
	gl.viewport(0, 0, width, height);
	GLfloat asp = GLfloat(width)/height;

	GLfloat h = 0.5f*1.618f;
	GLfloat w = h*asp;

	gl.uniform(
		projection,
		oglplus::matrix_perspective(-w,+w, -h,+h, 1, 3)*
		oglplus::matrix_translation(0,0,-2)
	);
}

static
void run_loop(int width, int height)
{
	using namespace oglplus;

	shader vs(GL.vertex_shader);

	vs.source(glsl_literal(
	"#version 120\n"

	"uniform mat4 Projection;"
	"uniform mat4 Modelview;"

	"attribute vec4 Position;\n"
	"attribute vec3 Normal;\n"
	"attribute vec2 Coord;\n"

	"varying vec3 vertPosition;\n"
	"varying vec3 vertNormal;\n"
	"varying vec2 vertCoord;\n"

	"void main(void)\n"
	"{\n"
	"	gl_Position = Projection*Modelview*Position;\n"
	"	vertPosition = Position.xyz;\n"
	"	vertNormal = Normal;\n"
	"	vertCoord = Coord;\n"
	"}\n"
	));
	vs.compile();

	shader fs(GL.fragment_shader);

	fs.source(glsl_literal(
	"#version 120\n"

	"varying vec3 vertPosition;\n"
	"varying vec3 vertNormal;\n"
	"varying vec2 vertCoord;\n"

	"void main(void)\n"
	"{"
	"	vec2 vc = abs(vertCoord);\n"
	"	float c1 = max(max(vc.x, vc.y)-0.9875, 0.0)*100;\n"
	"	float c2 = 1.0-0.4*dot(vc, vc);\n"
	"	vec3 lc = vec3(0);\n"
	"	vec3 fc1 = normalize(abs(vec3(1, 1, 1) - vertPosition));\n"
	"	vec3 fc2 = normalize(abs(vec3(1, 1, 1) - vertNormal));\n"
	"	vec3 fc = mix(fc1, fc2, 0.4);\n"
	"	gl_FragColor = vec4(mix(fc, lc, c1)*c2, 1.0);\n"
	"}\n"
	));
	fs.compile();

	program prog;

	prog.attach(vs);
	prog.attach(fs);
	prog.link();

	gl.use_program(prog);

	uniform_location projection, modelview;

	gl.query_location(projection, prog, "Projection");
	gl.query_location(modelview, prog, "Modelview");

	vertex_array vao;

	gl.bind(vao);

	// positions
	const GLfloat v[8][3] = {
		{-0.5f, -0.5f, -0.5f},
		{+0.5f, -0.5f, -0.5f},
		{-0.5f, +0.5f, -0.5f},
		{+0.5f, +0.5f, -0.5f},
		{-0.5f, -0.5f, +0.5f},
		{+0.5f, -0.5f, +0.5f},
		{-0.5f, +0.5f, +0.5f},
		{+0.5f, +0.5f, +0.5f}
	};

	const GLint f[6][2][3] = {
		{{0, 4, 2}, {2, 4, 6}},
		{{5, 1, 7}, {7, 1, 3}},
		{{0, 1, 4}, {4, 1, 5}},
		{{6, 7, 2}, {2, 7, 3}},
		{{1, 0, 3}, {3, 0, 2}},
		{{4, 5, 6}, {6, 5, 7}}
	};

	const GLuint vertex_count = 6 * 2 * 3;
	GLfloat cube_vertices[vertex_count * 3];

	for(GLuint fi=0;fi!=6;++fi)
	{
		for(GLuint ti=0;ti!=2;++ti)
		{
			for(GLuint vi=0;vi!=3;++vi)
			{
				for(GLuint ci=0;ci!=3;++ci)
				{
					cube_vertices[fi*2*3*3+ti*3*3+vi*3+ci] =
						v[f[fi][ti][vi]][ci];
				}
			}
		}
	}

	buffer pos;
	gl.bind(GL.array_buffer, pos);
	gl.data(GL.array_buffer, cube_vertices, GL.static_draw);

	gl.pointer(vertex_attrib_location(0), 3, GL.float_, false, 0, nullptr);
	gl.enable_array(vertex_attrib_location(0));

	vertex_attrib_location va_p;
	gl.query_location(va_p, prog, "Position");
	gl.pointer(va_p, 3, GL.float_, false, 0, nullptr);
	gl.enable_array(va_p);

	// normals
	const GLfloat n[6][3] = {
		{-1.0f,  0.0f,  0.0f},
		{ 1.0f,  0.0f,  0.0f},
		{ 0.0f, -1.0f,  0.0f},
		{ 0.0f,  1.0f,  0.0f},
		{ 0.0f,  0.0f, -1.0f},
		{ 0.0f,  0.0f,  1.0f}
	};
	GLfloat cube_normals[vertex_count * 3];
	for(GLuint fi=0;fi!=6;++fi)
	{
		for(GLuint vi=0;vi!=6;++vi)
		{
			for(GLuint ci=0;ci!=3;++ci)
			{
				cube_normals[(fi*6+vi)*3+ci] = n[fi][ci];
			}
		}
	}

	buffer nml;
	gl.bind(GL.array_buffer, nml);
	gl.data(GL.array_buffer, cube_normals, GL.static_draw);

	vertex_attrib_location va_n;
	gl.query_location(va_n, prog, "Normal");
	gl.pointer(va_n, 3, GL.float_, false, 0, nullptr);
	gl.enable_array(va_n);

	// face-coords
	const GLfloat c[6][2] = {
		{-1.0f, -1.0f},
		{+1.0f, -1.0f},
		{-1.0f, +1.0f},
		{-1.0f, +1.0f},
		{+1.0f, -1.0f},
		{+1.0f, +1.0f}
	};

	GLfloat cube_coords[vertex_count * 2];

	for(GLuint fi=0;fi!=6;++fi)
	{
		for(GLuint vi=0;vi!=6;++vi)
		{
			for(GLuint ci=0;ci!=2;++ci)
			{
				cube_coords[(fi*6+vi)*2+ci] = c[vi][ci];
			}
		}
	}

	buffer crd;
	gl.bind(GL.array_buffer, crd);
	gl.data(GL.array_buffer, cube_coords, GL.static_draw);

	vertex_attrib_location va_c;
	gl.query_location(va_c, prog, "Coord");
	gl.pointer(va_c, 2, GL.float_, false, 0, nullptr);
	gl.enable_array(va_c);


	gl.clear_color(0.7f, 0.7f, 0.7f, 0.0f);
	gl.clear_depth(1.0f);

	gl.enable(GL.depth_test);

	handle_resize(width, height, projection);

	float rad = 0.0f;

	while(true)
	{
		gl.clear(GL.color_buffer_bit|GL.depth_buffer_bit);

		gl.uniform(
			modelview,
			matrix_rotation_x(eagine::radians(rad*1))*
			matrix_rotation_y(eagine::radians(rad*2))*
			matrix_rotation_z(eagine::radians(rad*3))
		);

		rad += 0.01f;

		gl.draw_arrays(GL.triangles, 0, 6 * 2 * 3);

		glfwSwapBuffers();

		int new_width, new_height;
		glfwGetWindowSize(&new_width, &new_height);

		if((width != new_width) || (height != new_height))
		{
			width = new_width;
			height = new_height;

			handle_resize(width, height, projection);
		}
		

		if(glfwGetKey(GLFW_KEY_ESC))
		{
			glfwCloseWindow();
			break;
		}
		if(!glfwGetWindowParam(GLFW_OPENED))
		{
			break;
		}
	}
}

static
void init_and_run(void)
{
	if(!glfwInit())
	{
		throw std::runtime_error("GLFW initialization error");
	}
	else
	{
		auto ensure_glfw_cleanup = eagine::finally(glfwTerminate);

		int width = 800, height = 600;

		if(!glfwOpenWindow(width, height, 8, 8, 8, 0, 24, 0, GLFW_WINDOW))
		{
			throw std::runtime_error("Error creating GLFW window");
		}
		else
		{
			glfwSetWindowTitle("OGLplus example");

			glewExperimental = GL_TRUE;
			GLenum init_result = glewInit();
			glGetError();
			if(init_result != GLEW_OK)
			{
				throw std::runtime_error(
					"OpenGL/GLEW initialization error."
				);
			}
			else
			{
				run_loop(width, height);
			}
		}
	}
}

int main(void)
{
	try { init_and_run(); return 0; }
	catch(oglplus::error& gle)
	{
		oglplus::format_error(
			gle,
			"OpenGL error\n"
			"in GL function: %(gl_function_name)\n"
			"with object: %(gl_object)\n"
			"with enum parameter: %(gl_enum_value)\n"
			"from source file: %(source_file)\n"
			"%(message)",
			std::cerr
		) << std::endl;
	}
	catch(std::runtime_error& sre)
	{
		std::cerr
			<< "Runtime error: "
			<< sre.what()
			<< std::endl;
	}
	catch(std::exception& se)
	{
		std::cerr
			<< "Unknown error: "
			<< se.what()
			<< std::endl;
	}
	return 1;
}