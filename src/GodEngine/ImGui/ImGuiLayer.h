#pragma once
#include "GodEngine/Layer.h"
#include "GodEngine/Events/KeyEvent.h"
#include "GodEngine/Events/MouseEvent.h"
#include "GodEngine/Events/ApplicationEvent.h"
namespace GodEngine {
	class GODENGINE_API ImGuiLayer : public Layer {
	public:
		ImGuiLayer();
		~ImGuiLayer();	

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();
	private:
		
	private:
		float m_Time{ 0.0f };

	};
}
