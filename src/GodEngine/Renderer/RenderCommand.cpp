#include "gepch.h"
#include "RenderCommand.h"
#include "GodEngine/Platform/OpenGL/OpenGLRendererAPI.h"
namespace GodEngine {
	RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI;
}