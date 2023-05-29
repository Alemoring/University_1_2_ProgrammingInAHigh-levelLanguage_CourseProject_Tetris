#pragma once
#include "Form1.h"
#include "Records.h"

namespace CppCLR_WinForms_GUI1_Tetris {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(String^ CurLogin)
		{
			InitializeComponent();
			Cur_Login = CurLogin;
			//
			//TODO: добавьте код конструктора
			//

		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Play_but;
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ About_but;
	private: System::Windows::Forms::Button^ Help_but;
	private: System::Windows::Forms::Button^ Exit_but;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		String^ Cur_Login;
	private: System::Windows::Forms::Button^ Rec_but;
	private: System::Windows::Forms::HelpProvider^ helpProvider1;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMenu::typeid));
			this->Play_but = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->About_but = (gcnew System::Windows::Forms::Button());
			this->Help_but = (gcnew System::Windows::Forms::Button());
			this->Exit_but = (gcnew System::Windows::Forms::Button());
			this->Rec_but = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->SuspendLayout();
			// 
			// Play_but
			// 
			this->Play_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Play_but->Location = System::Drawing::Point(107, 98);
			this->Play_but->Name = L"Play_but";
			this->Play_but->Size = System::Drawing::Size(173, 51);
			this->Play_but->TabIndex = 0;
			this->Play_but->Text = L"Играть";
			this->Play_but->UseVisualStyleBackColor = true;
			this->Play_but->Click += gcnew System::EventHandler(this, &FormMenu::Play_but_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(150, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Меню";
			// 
			// About_but
			// 
			this->About_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->About_but->Location = System::Drawing::Point(107, 244);
			this->About_but->Name = L"About_but";
			this->About_but->Size = System::Drawing::Size(173, 51);
			this->About_but->TabIndex = 3;
			this->About_but->Text = L"О программе";
			this->About_but->UseVisualStyleBackColor = true;
			this->About_but->Click += gcnew System::EventHandler(this, &FormMenu::About_but_Click);
			// 
			// Help_but
			// 
			this->Help_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Help_but->Location = System::Drawing::Point(107, 319);
			this->Help_but->Name = L"Help_but";
			this->helpProvider1->SetShowHelp(this->Help_but, true);
			this->Help_but->Size = System::Drawing::Size(173, 51);
			this->Help_but->TabIndex = 4;
			this->Help_but->Text = L"Справка";
			this->Help_but->UseVisualStyleBackColor = true;
			this->Help_but->Click += gcnew System::EventHandler(this, &FormMenu::Help_but_Click);
			// 
			// Exit_but
			// 
			this->Exit_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_but->Location = System::Drawing::Point(107, 400);
			this->Exit_but->Name = L"Exit_but";
			this->Exit_but->Size = System::Drawing::Size(173, 51);
			this->Exit_but->TabIndex = 5;
			this->Exit_but->Text = L"Выход";
			this->Exit_but->UseVisualStyleBackColor = true;
			this->Exit_but->Click += gcnew System::EventHandler(this, &FormMenu::Exit_but_Click);
			// 
			// Rec_but
			// 
			this->Rec_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Rec_but->Location = System::Drawing::Point(107, 171);
			this->Rec_but->Name = L"Rec_but";
			this->Rec_but->Size = System::Drawing::Size(173, 51);
			this->Rec_but->TabIndex = 6;
			this->Rec_but->Text = L"Рекорды";
			this->Rec_but->UseVisualStyleBackColor = true;
			this->Rec_but->Click += gcnew System::EventHandler(this, &FormMenu::Rec_but_Click);
			// 
			// helpProvider1
			// 
			this->helpProvider1->HelpNamespace = L"C:\\Users\\Алемор\\Desktop\\Саша\\Обучение\\Программирование\\Курсовая\\CppCLR_WinForms_G"
				L"UI1_Tetris_Log+Tetris\\CppCLR_WinForms_GUI1_Tetris\\Help.chm";
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 561);
			this->Controls->Add(this->Rec_but);
			this->Controls->Add(this->Exit_but);
			this->Controls->Add(this->Help_but);
			this->Controls->Add(this->About_but);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Play_but);
			this->HelpButton = true;
			this->helpProvider1->SetHelpKeyword(this, L"Help.chm");
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormMenu";
			this->helpProvider1->SetShowHelp(this, true);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exit_but_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void Play_but_Click(System::Object^ sender, System::EventArgs^ e) {
	Form1^ form2 = gcnew Form1(Cur_Login);
	form2->Show();
}
private: System::Void About_but_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Версия 1.0\nДата последних изменений: 25.05.23\nСделано студентом группы ИСТб22-1 Моргуновым Александром ");
}
private: System::Void Help_but_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::SendKeys::Send("{F1}");
}
private: System::Void Rec_but_Click(System::Object^ sender, System::EventArgs^ e) {
	Records^ form3 = gcnew Records();
	form3->Show();
}
};
}
