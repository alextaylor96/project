void   Shader::SetDefaultAttributes() {
	glBindAttribLocation(program, VERTEX_BUFFER, "position");
	glBindAttribLocation(program, COLOUR_BUFFER, "colour");
}

#pragma once
#include "../../nclgl/OGLRenderer.h"

class Renderer : public OGLRenderer	{
public:
	Renderer(Window &parent);
	virtual ~Renderer(void);
	virtual void RenderScene();

protected:
	Mesh*	triangle;
};

