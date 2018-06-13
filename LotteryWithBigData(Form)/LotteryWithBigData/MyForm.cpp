#include "LotteryForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	LotteryForm::MyForm Form;
	Application::Run(%Form);
}