#define _USE_MATH_DEFINES

#include <ctype.h>
#include <math.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Calculatorv3::MyForm frm;
	Application::Run(% frm);
}