#pragma once
#include <string>
namespace GodEngine {
	class shader {
	public:
		shader(const std::string& vertexSrc, const std::string& fragmentSrc);
		~shader();

		void Bind() const;
		void UnBind() const;
	private:
		uint32_t m_RendererID{};
	};
}