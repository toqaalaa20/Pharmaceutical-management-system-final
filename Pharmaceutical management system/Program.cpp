
#include "LoginForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user= nullptr;

	if (user != nullptr) {
		MessageBox::Show("Successfull authentecation for" + user->username,
			"Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}
