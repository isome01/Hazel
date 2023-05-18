#include <Hazel.h>

class Sandbox : public Hazel::Application 
{
public:
	
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

/// Creating the Application
/// 
/// - Make sure this is fully implemented to 
/// <returns></returns>

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}