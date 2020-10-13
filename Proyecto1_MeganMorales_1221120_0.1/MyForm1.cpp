#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main1(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto1MeganMorales122112001::MyForm1 mainForm1;
	Application::Run(% mainForm1);
	return 0;
}

