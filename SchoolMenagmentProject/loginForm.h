#pragma once
#include "user.h"

namespace SchoolMenagmentProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPswd;
	private: System::Windows::Forms::Button^ btOk;
	private: System::Windows::Forms::Button^ btCancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;
	private: System::Windows::Forms::Label^ label4;






	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPswd = (gcnew System::Windows::Forms::TextBox());
			this->btOk = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(22, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(22, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(174, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 39);
			this->label3->TabIndex = 2;
			this->label3->Text = L"LOGIN";
			// 
			// tbUsername
			// 
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbUsername->Location = System::Drawing::Point(145, 100);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(296, 31);
			this->tbUsername->TabIndex = 3;
			// 
			// tbPswd
			// 
			this->tbPswd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPswd->Location = System::Drawing::Point(145, 162);
			this->tbPswd->Name = L"tbPswd";
			this->tbPswd->PasswordChar = '*';
			this->tbPswd->Size = System::Drawing::Size(296, 31);
			this->tbPswd->TabIndex = 4;
			// 
			// btOk
			// 
			this->btOk->Location = System::Drawing::Point(224, 258);
			this->btOk->Name = L"btOk";
			this->btOk->Size = System::Drawing::Size(112, 36);
			this->btOk->TabIndex = 5;
			this->btOk->Text = L"Ok";
			this->btOk->UseVisualStyleBackColor = true;
			this->btOk->Click += gcnew System::EventHandler(this, &loginForm::btOk_Click);
			// 
			// btCancel
			// 
			this->btCancel->Location = System::Drawing::Point(354, 258);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(112, 36);
			this->btCancel->TabIndex = 6;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			this->btCancel->Click += gcnew System::EventHandler(this, &loginForm::btCancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(392, 219);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(49, 13);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Register!";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginForm::llRegister_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(263, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Don\'t have an account\?";
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 316);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btOk);
			this->Controls->Add(this->tbPswd);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//quit from program
	private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	//login
	public: User^ user = nullptr;
	private: System::Void btOk_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->tbUsername->Text;
		String^ password = this->tbPswd->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter username and password","Username or password empty", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connStr = "Data Source=LAPTOP-2J3T2946;Initial Catalog=school;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
			SqlConnection sqlConn(connStr);
			sqlConn.Open();

			String^ sqlQuerry = "SELECT * FROM users WHERE username=@username AND password=@password;";
			SqlCommand command(sqlQuerry, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->password = reader->GetString(2);
				this->Close();
			}
			else {
				MessageBox::Show("Username or Password i incorrect", "Username or Password Error", MessageBoxButtons::OK);

			}
		}
		catch (Exception^ e) {
			throw(e);
		}
	}
	public: bool switchToRegister = false;
	private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
};
}
