#pragma once
#include "GodEngine/Renderer/Renderer.h"
namespace GodEngine {
	class OpenGLRendererAPI :public RendererAPI{
	public:
		virtual void SetClearColor(const glm::vec4& color) override;
		virtual void Clear() override;

		virtual void DrawIndexed(const std::shared_ptr<VertexArray>& VertexArray) override;
	};
}