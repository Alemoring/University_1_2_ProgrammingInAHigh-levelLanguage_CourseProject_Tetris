#pragma once
//#using<system.dll>
#include "FormMenu.h"

public value struct User
{
	System::String^ login;
	System::String^ password;
	System::String^ score;
};
namespace CppCLR_WinForms_GUI1_Tetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
		
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::TextBox^ passwordTextBox;


	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ log_but;
	private: System::Windows::Forms::Button^ Reg_but;
	private:
	
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		String^ currentLogin;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->log_but = (gcnew System::Windows::Forms::Button());
			this->Reg_but = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(189, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизация";
			// 
			// loginTextBox
			// 
			this->loginTextBox->Location = System::Drawing::Point(195, 123);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(172, 20);
			this->loginTextBox->TabIndex = 1;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(195, 216);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(172, 20);
			this->passwordTextBox->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(100, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Логин";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(100, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Пароль";
			// 
			// log_but
			// 
			this->log_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->log_but->Location = System::Drawing::Point(72, 281);
			this->log_but->Name = L"log_but";
			this->log_but->Size = System::Drawing::Size(198, 47);
			this->log_but->TabIndex = 5;
			this->log_but->Text = L"Авторизация";
			this->log_but->UseVisualStyleBackColor = true;
			this->log_but->Click += gcnew System::EventHandler(this, &Login::log_but_Click);
			// 
			// Reg_but
			// 
			this->Reg_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Reg_but->Location = System::Drawing::Point(306, 281);
			this->Reg_but->Name = L"Reg_but";
			this->Reg_but->Size = System::Drawing::Size(198, 47);
			this->Reg_but->TabIndex = 6;
			this->Reg_but->Text = L"Регистрация";
			this->Reg_but->UseVisualStyleBackColor = true;
			this->Reg_but->Click += gcnew System::EventHandler(this, &Login::Reg_but_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 511);
			this->Controls->Add(this->Reg_but);
			this->Controls->Add(this->log_but);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array<User>^ ReadUsersFromFile()
		{
			array<User>^ users = gcnew array<User>(0);
			try
			{
				// Проверка, существует ли файл
				if (!File::Exists("users.bin"))
				{
					MessageBox::Show("Файл не существует");
					return users;
				}

				// Открытие файла для чтения
				FileStream^ fileStream = gcnew FileStream("users.bin", FileMode::Open, FileAccess::Read);
				BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

				// Проверка, можно ли читать данные из потока
				if (!fileStream->CanRead)
				{
					MessageBox::Show("Невозможно прочитать данные из файла");
					binaryReader->Close();
					fileStream->Close();
					return users;
				}
				// Чтение данных из файла
				int count = (binaryReader->BaseStream->Length-3)/13;
				users = gcnew array<User>(count);
				binaryReader->BaseStream->Position = 4;
				for (int i = 0; i < count; i++)
				{
					users[i].login = binaryReader->ReadString();
					users[i].password = binaryReader->ReadString();
					users[i].score = binaryReader->ReadString();
				}

				// Закрытие файла
				binaryReader->Close();
				fileStream->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

			return users;
		}
		void WriteUsersToFile(array<User>^ users)
		{
			try
			{
				// Открытие файла для записи
				FileStream^ fileStream = gcnew FileStream("users.bin", FileMode::Create, FileAccess::Write);
				BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

				// Запись данных в файл
				if (fileStream->CanWrite)
				{
					binaryWriter->Write(users->Length);
					for each (User user in users)
					{
						if (user.login != nullptr) {
							binaryWriter->Write(user.login);
							binaryWriter->Write(user.password);
							binaryWriter->Write(user.score);
						}
					}
				}
				

				// Закрытие файла
				binaryWriter->Close();
				fileStream->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	private: System::Void Reg_but_Click(System::Object^ sender, System::EventArgs^ e) {
		// Чтение данных из бинарного файла
		array<User>^ users = ReadUsersFromFile();

		// Добавление нового пользователя с проверкой на имеющийся логин
		User newUser;
		bool isuser = false;
		if (loginTextBox->Text->Contains(" ") || passwordTextBox->Text->Contains(" ")) {
			MessageBox::Show("Логин и пароль не должны содержать пробелы!");
		}
		else {
			for each (User user in users)
			{
				if (user.login == loginTextBox->Text)
				{
					isuser = true;
					MessageBox::Show("Пользователь с данным логином уже существует!");
					break;
				}
			}
			if (!isuser) {
				newUser.login = loginTextBox->Text;
				newUser.password = passwordTextBox->Text;
				newUser.score = "0";

				Array::Resize(users, users->Length + 1);
				users[users->Length - 1] = newUser;

				// Запись данных в бинарный файл
				WriteUsersToFile(users);

				MessageBox::Show("Регистрация успешна!");
			}
		}
	}
private: System::Void log_but_Click(System::Object^ sender, System::EventArgs^ e) {
	// Чтение данных из бинарного файла
	array<User>^ users = ReadUsersFromFile();

	// Поиск пользователя с указанным логином и паролем
	User currentUser;
	for each (User user in users)
	{
		if (user.login == loginTextBox->Text && user.password == passwordTextBox->Text)
		{
			currentUser = user;
			break;
		}
	}

	// Проверка, найден ли пользователь
	if (currentUser.login != nullptr)
	{
		currentLogin = currentUser.login;
		MessageBox::Show("Авторизация успешна!");
		// Открытие главной формы приложения
		FormMenu^ f1 = gcnew FormMenu(currentLogin);
		f1->Show();
		this->Hide();
	}
	else
	{
		MessageBox::Show("Неверный логин или пароль!");
	}
}
};
}
