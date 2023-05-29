#pragma once

public value struct Record
{
	System::String^ login;
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
	/// —водка дл€ Records
	/// </summary>
	public ref class Records : public System::Windows::Forms::Form
	{
	public:
		Records(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Records()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 60;
			this->dataGridView1->Size = System::Drawing::Size(360, 537);
			this->dataGridView1->TabIndex = 0;
			// 
			// Records
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 561);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Records";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Records";
			this->Load += gcnew System::EventHandler(this, &Records::Records_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void LoadRecords() {
			try {
				BinaryReader^ reader = gcnew BinaryReader(File::Open("users.bin", FileMode::Open));
				int count = (reader->BaseStream->Length - 3) / 13;
				dataGridView1->Rows->Clear();
				dataGridView1->RowCount = count;
				String^ trash;
				reader->BaseStream->Position = 4;
				for (int i = 0; i < count; i++) {
					Record record{};
					record.login = reader->ReadString();
					trash = reader->ReadString();
					record.score = reader->ReadString();
					dataGridView1->Rows[i]->Cells[0]->Value = i + 1;
					dataGridView1->Rows[i]->Cells[1]->Value = record.login;
					dataGridView1->Rows[i]->Cells[2]->Value = record.score;
				}
				reader->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}
	private: System::Void Records_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = 3;
		dataGridView1->Columns[0]->Name = "є";
		dataGridView1->Columns[1]->Name = "Login";
		dataGridView1->Columns[2]->Name = "Score";
		LoadRecords();
	}
	};
}
