#include "loginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;



void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;
	while (true) {
		SchoolMenagmentProject::loginForm loginForm;
		loginForm.ShowDialog();
		if (loginForm.switchToRegister) {
			SchoolMenagmentProject::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				loginForm.ShowDialog();
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		SchoolMenagmentProject::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("something went wrong", "lol", MessageBoxButtons::OK);

	}

}