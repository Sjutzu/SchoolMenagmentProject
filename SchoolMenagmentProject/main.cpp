#include "loginForm.h"


using namespace System;
using namespace System::Windows::Forms;



void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SchoolMenagmentProject::loginForm logForm;
	logForm.ShowDialog();

	User^ user = logForm.user;


	if (user != nullptr) {
		MessageBox::Show("succes, Welcome " + user->username, "lol", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("something went wrong", "lol", MessageBoxButtons::OK);

	}

}