#include "gepch.h"
#include "GodEngine.h"
#include "imgui/imgui.h"


class ExampleLayer : public GodEngine::Layer {
public:
	ExampleLayer()
	: Layer("Example")
	{}

	void OnUpdate() override {
		//GE_INFO("ExampleLayer::Update");

		if (GodEngine::Input::IsKeyPressed(GE_KEY_TAB))
			GE_INFO("Tab key is pressed");
}

	virtual void OnImGuiRender() override {
		ImGui::Begin("Test");
		ImGui::Text("Heelo world");
		
		ImGui::End();
	}
	void OnEvent(GodEngine::Event& event) override
	{
		if (event.GetEventType() == GodEngine::EventType::KeyPressed) {
			GodEngine::KeyPressedEvent& e = (GodEngine::KeyPressedEvent&)event;
			GE_TRACE("{0}", (char)e.GetKeyCode());
		}
		
	}
};

class Sandbox : public GodEngine::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
	}
	~Sandbox() {

	}
};


GodEngine::Application* GodEngine::CreateApplication() {
	return new Sandbox();
}