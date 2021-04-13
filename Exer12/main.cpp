#include "JanelaPrincipal.h"

#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Exer12::JanelaPrincipal form;
	Application::Run(% form);
}