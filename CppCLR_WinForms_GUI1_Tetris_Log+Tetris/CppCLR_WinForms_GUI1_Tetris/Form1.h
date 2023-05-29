#pragma once
#include "Shape.h"
//#include "Login.h"

public value struct user1
{
    System::String^ login;
    System::String^ password;
    System::String^ score;
};
          //Tetris
namespace CppCLR_WinForms_GUI1_Tetris
{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    //using namespace CppCLR_WinForms_GUI1_Tetris;
    using namespace System::Text;
    using namespace System::IO;

    /// <summary>
    /// Сводка для Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(String^ Cur_login)
        {
            stock = gcnew array<Int16, 2>(20, 10);
            shape = gcnew Shape();
            curLogin = Cur_login;
            _pause = false;
            firstView = true;
            Invalidate();

            SetLevel(1);
            InitializeComponent();
            MaximizeBox = false;
        }

    protected:
        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private:
        System::Windows::Forms::MenuStrip^ menuStrip1;
    protected:
    private:
        System::Windows::Forms::ToolStripMenuItem^ gameToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripMenuItem^ newGameToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
    private:
        System::Windows::Forms::ToolStripMenuItem^ rulesToolStripMenuItem;
    private:

    private:
        System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
    private:

    private:

    private:

    private:

    private:
        System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private:
        System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private: System::Windows::Forms::ToolStripMenuItem^ difficultyToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ noobToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ dudeToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ jediToolStripMenuItem;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label_score;
    private: System::Windows::Forms::HelpProvider^ helpProvider1;
    private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Label^ labelspeed;

    private: System::Windows::Forms::Label^ labelbackcolor;
    private: System::Windows::Forms::NumericUpDown^ numericUpDownspeed;


    private: System::Windows::Forms::ColorDialog^ colorDialog1;
    private: System::Windows::Forms::Button^ buttonApplysettings;






    protected:

    protected:

    private:
        System::ComponentModel::IContainer^ components;
    private: System::Windows::Forms::ComboBox^ comboBoBackColor;



    private: float updateInterval;
        /// <summary>
        /// Требуется переменная конструктора.
        /// </summary>


#pragma region Windows Form Designer generated code
/// <summary>
/// Обязательный метод для поддержки конструктора - не изменяйте
/// содержимое данного метода при помощи редактора кода.
/// </summary>
        void InitializeComponent(void)
        {
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->difficultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->noobToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->dudeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->jediToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->rulesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label_score = (gcnew System::Windows::Forms::Label());
            this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->comboBoBackColor = (gcnew System::Windows::Forms::ComboBox());
            this->buttonApplysettings = (gcnew System::Windows::Forms::Button());
            this->numericUpDownspeed = (gcnew System::Windows::Forms::NumericUpDown());
            this->labelspeed = (gcnew System::Windows::Forms::Label());
            this->labelbackcolor = (gcnew System::Windows::Forms::Label());
            this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
            this->menuStrip1->SuspendLayout();
            this->groupBox1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownspeed))->BeginInit();
            this->SuspendLayout();
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->gameToolStripMenuItem,
                    this->difficultyToolStripMenuItem, this->helpToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(462, 24);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // gameToolStripMenuItem
            // 
            this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->newGameToolStripMenuItem,
                    this->настройкиToolStripMenuItem, this->toolStripSeparator3, this->exitToolStripMenuItem
            });
            this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
            this->gameToolStripMenuItem->Size = System::Drawing::Size(46, 20);
            this->gameToolStripMenuItem->Text = L"Игра";
            // 
            // newGameToolStripMenuItem
            // 
            this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
            this->newGameToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
            this->newGameToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->newGameToolStripMenuItem->Text = L"Новая игра";
            this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newGameToolStripMenuItem_Click);
            // 
            // настройкиToolStripMenuItem
            // 
            this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
            this->настройкиToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->настройкиToolStripMenuItem->Text = L"Настройки";
            this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::настройкиToolStripMenuItem_Click);
            // 
            // toolStripSeparator3
            // 
            this->toolStripSeparator3->Name = L"toolStripSeparator3";
            this->toolStripSeparator3->Size = System::Drawing::Size(152, 6);
            // 
            // exitToolStripMenuItem
            // 
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
            this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::X));
            this->exitToolStripMenuItem->Size = System::Drawing::Size(155, 22);
            this->exitToolStripMenuItem->Text = L"Выход";
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
            // 
            // difficultyToolStripMenuItem
            // 
            this->difficultyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->noobToolStripMenuItem,
                    this->dudeToolStripMenuItem, this->jediToolStripMenuItem
            });
            this->difficultyToolStripMenuItem->Name = L"difficultyToolStripMenuItem";
            this->difficultyToolStripMenuItem->Size = System::Drawing::Size(81, 20);
            this->difficultyToolStripMenuItem->Text = L"Сложность";
            // 
            // noobToolStripMenuItem
            // 
            this->noobToolStripMenuItem->Name = L"noobToolStripMenuItem";
            this->noobToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->noobToolStripMenuItem->Text = L"Легко";
            this->noobToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::noobToolStripMenuItem_Click);
            // 
            // dudeToolStripMenuItem
            // 
            this->dudeToolStripMenuItem->Name = L"dudeToolStripMenuItem";
            this->dudeToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->dudeToolStripMenuItem->Text = L"Нормально";
            this->dudeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::dudeToolStripMenuItem_Click);
            // 
            // jediToolStripMenuItem
            // 
            this->jediToolStripMenuItem->Name = L"jediToolStripMenuItem";
            this->jediToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->jediToolStripMenuItem->Text = L"Сложно";
            this->jediToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::jediToolStripMenuItem_Click);
            // 
            // helpToolStripMenuItem
            // 
            this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->rulesToolStripMenuItem,
                    this->оПрограммеToolStripMenuItem
            });
            this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
            this->helpToolStripMenuItem->Size = System::Drawing::Size(65, 20);
            this->helpToolStripMenuItem->Text = L"Справка";
            this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::helpToolStripMenuItem_Click);
            // 
            // rulesToolStripMenuItem
            // 
            this->rulesToolStripMenuItem->Name = L"rulesToolStripMenuItem";
            this->rulesToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
            this->rulesToolStripMenuItem->Size = System::Drawing::Size(149, 22);
            this->rulesToolStripMenuItem->Text = L"Правила";
            // 
            // оПрограммеToolStripMenuItem
            // 
            this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
            this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(149, 22);
            this->оПрограммеToolStripMenuItem->Text = L"О программе";
            this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::оПрограммеToolStripMenuItem_Click);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->DefaultExt = L"tst";
            this->openFileDialog1->FileName = L"openFileDialog1";
            // 
            // saveFileDialog1
            // 
            this->saveFileDialog1->DefaultExt = L"tst";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->Location = System::Drawing::Point(0, 60);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(201, 343);
            this->panel1->TabIndex = 1;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint_1);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(-5, 24);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(388, 31);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Выберите уровень сложности";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label2->Location = System::Drawing::Point(207, 201);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(83, 31);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Счёт:";
            // 
            // label_score
            // 
            this->label_score->AutoSize = true;
            this->label_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label_score->Location = System::Drawing::Point(296, 207);
            this->label_score->Name = L"label_score";
            this->label_score->Size = System::Drawing::Size(23, 25);
            this->label_score->TabIndex = 4;
            this->label_score->Text = L"0";
            // 
            // helpProvider1
            // 
            this->helpProvider1->HelpNamespace = L"C:\\Users\\Алемор\\Desktop\\Саша\\Обучение\\Программирование\\Курсовая\\CppCLR_WinForms_G"
                L"UI1_Tetris_Log+Tetris\\CppCLR_WinForms_GUI1_Tetris\\Help.chm";
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->comboBoBackColor);
            this->groupBox1->Controls->Add(this->buttonApplysettings);
            this->groupBox1->Controls->Add(this->numericUpDownspeed);
            this->groupBox1->Controls->Add(this->labelspeed);
            this->groupBox1->Controls->Add(this->labelbackcolor);
            this->groupBox1->Enabled = false;
            this->groupBox1->Location = System::Drawing::Point(207, 235);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(255, 289);
            this->groupBox1->TabIndex = 5;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"groupBox1";
            this->groupBox1->Visible = false;
            // 
            // comboBoBackColor
            // 
            this->comboBoBackColor->FormattingEnabled = true;
            this->comboBoBackColor->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тёмный", L"Светлый" });
            this->comboBoBackColor->Location = System::Drawing::Point(109, 30);
            this->comboBoBackColor->Name = L"comboBoBackColor";
            this->comboBoBackColor->Size = System::Drawing::Size(121, 21);
            this->comboBoBackColor->TabIndex = 4;
            this->comboBoBackColor->Text = L"Светлый";
            // 
            // buttonApplysettings
            // 
            this->buttonApplysettings->Location = System::Drawing::Point(79, 246);
            this->buttonApplysettings->Name = L"buttonApplysettings";
            this->buttonApplysettings->Size = System::Drawing::Size(116, 32);
            this->buttonApplysettings->TabIndex = 3;
            this->buttonApplysettings->Text = L"Применить";
            this->buttonApplysettings->UseVisualStyleBackColor = true;
            this->buttonApplysettings->Click += gcnew System::EventHandler(this, &Form1::buttonApplysettings_Click);
            // 
            // numericUpDownspeed
            // 
            this->numericUpDownspeed->Location = System::Drawing::Point(132, 86);
            this->numericUpDownspeed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
            this->numericUpDownspeed->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDownspeed->Name = L"numericUpDownspeed";
            this->numericUpDownspeed->ReadOnly = true;
            this->numericUpDownspeed->Size = System::Drawing::Size(117, 20);
            this->numericUpDownspeed->TabIndex = 2;
            this->numericUpDownspeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
            // 
            // labelspeed
            // 
            this->labelspeed->AutoSize = true;
            this->labelspeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelspeed->Location = System::Drawing::Point(12, 86);
            this->labelspeed->Name = L"labelspeed";
            this->labelspeed->Size = System::Drawing::Size(121, 18);
            this->labelspeed->TabIndex = 1;
            this->labelspeed->Text = L"Скорость игры :";
            // 
            // labelbackcolor
            // 
            this->labelbackcolor->AutoSize = true;
            this->labelbackcolor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->labelbackcolor->Location = System::Drawing::Point(6, 29);
            this->labelbackcolor->Name = L"labelbackcolor";
            this->labelbackcolor->Size = System::Drawing::Size(88, 18);
            this->labelbackcolor->TabIndex = 0;
            this->labelbackcolor->Text = L"Цвет фона:";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Control;
            this->ClientSize = System::Drawing::Size(462, 525);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->label_score);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->menuStrip1);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Tetris";
            this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownspeed))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private:
        System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            System::Windows::Forms::SendKeys::Send("{F1}");
        }
    private:
        System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->Close();
        }
    public:
        void NewShape(void) // Новая фигура
        {
            t1->Start();
            curPoint = gcnew Point(0, 60);
            Random^ rand = gcnew Random();
            ShapeType t = ShapeType(rand->Next(7));
            shape->NewShape(t);
            color = rand->Next(6);
        };
        Color ShapeColor(Int16 color) // Цвета фигур
        {
            switch (color)
            {
            case 0:
                return Color::FromName("Lime");
            case 1:
                return Color::FromName("Purple");
            case 2:
                return Color::FromName("DarkOrange");
            case 3:
                return Color::FromName("Red");
            case 4:
                return Color::FromName("Gold");
            case 5:
                return Color::FromName("Blue");
            }
            return Color::FromName("Black");
        }
        //Уровни сложности
        void SetLevel(Int16 lev)
        {

            switch (lev)
            {
            case 1:
                level = 700.0;
                break;
            case 2:
                level = 500.0;
                break;
            case 3:
                level = 100.0;
                break;
            }
        }
        Boolean CheckLeft(void) // Возможность идти налево
        {
            for (Int16 i = 0; i != 4; i++)
            {
                for (Int16 j = 0; j != 4; j++)
                {
                    if (shape->cells[i, j] == true)
                    {
                        if ((curPoint->X / 20 + j) <= 0 || stock[curPoint->Y / 20 + i, curPoint->X / 20 + j - 1] != -1)
                            return true;
                    }
                }
            }
            return false;
        }
        Boolean CheckRight(void) // Возможность идти направо
        {
            for (Int16 i = 0; i != 4; i++)
            {
                for (Int16 j = 0; j != 4; j++)
                {
                    if (shape->cells[i, j] == true)
                    {
                        if ((curPoint->X / 20 + j) >= 9 || stock[curPoint->Y / 20 + i, curPoint->X / 20 + j + 1] != -1)
                            return true;
                    }
                }
            }
            return false;
        }
        void CheckForLine(void) // Проверка на заполненную линию
        {
            Int16 i, j, k, c = 0;
            Boolean flag;

            for (i = 0; i < 20; i++)
            {
                flag = true;
                for (j = 0; j < 10; j++)
                    flag &= (stock[i, j] != -1);

                if (flag == true && j != 0)
                {
                    c++;
                    score++;

                    for (k = i; k > 0; k--)
                    {
                        for (j = 0; j < 10; j++)
                        {
                            stock[k, j] = stock[k - 1, j];
                        }
                    }
                }
            }
            for (k = 0; k < c; k++)
                for (j = 0; j < 10; j++)
                    stock[k, j] = -1;
            this->Invalidate();
            String^ record = score.ToString();
            this->label_score->Text = record;
        }
        Boolean IsAtBottom(void) //Можно ли ещё опускаться
        {
            for (Int16 i = 0; i < 4; i++)
            {
                for (Int16 j = 0; j < 4; j++)
                {
                    if (shape->cells[i, j] == true)
                    {
                        if ((curPoint->Y / 20 + i) >= 19 || stock[curPoint->Y / 20 + i + 1, curPoint->X / 20 + j] != -1)
                            return true;
                    }
                }
            }
            return false;
        }

        void ClearStock(void) // Зачистка всего поля
        {
            for (Int16 i = 0; i < 20; i++)
                for (Int16 j = 0; j < 10; j++)
                    stock[i, j] = -1;
        }
        System::Drawing::Region^ GetReg(void) // Получить регион с фигурой
        {
            System::Drawing::Region^ region1 = gcnew System::Drawing::Region(Rectangle(curPoint->X - size, curPoint->Y - size, size * 5, size * 5));
            return region1;
        }
        void TimerEventProcessor(Object^ myObject, System::Timers::ElapsedEventArgs^ e)
        {
            if (bGame == true)
            {
                if (IsAtBottom())
                {
                    for (Int16 i = 0; i < 4; i++)
                        for (Int16 j = 0; j < 4; j++)
                        {
                            if (shape->cells[i, j] == true)
                                stock[curPoint->Y / 20 + i, curPoint->X / 20 + j] = color;
                        }
                    NewShape();
                    if (IsAtBottom())
                    {
                        bGame = false;
                    }
                    this->Invalidate();
                    CheckForLine();
                    return;
                }
                curPoint->Y += 20;
                this->Invalidate();
            }
            else if (bGame == false)
            {
                this->t1->Stop();
                UpdateRecord(score, curLogin);
                MessageBox::Show("Вы проиграли !\rВаш рекорд : " + score);
            }
        }
        void UpdateRecord(int score, String^ curLogin) {
            array<user1>^ users = ReadUsersFromFile();
            for (int i = 0; i < users->Length; i++)
            {
                if (users[i].login == curLogin)
                {
                    int us_score = Convert::ToInt32(users[i].score);
                    if (score > us_score) {
                        users[i].score = score.ToString();
                    }
                }
            }
            WriteUsersToFile(users);
        }
        array<user1>^ ReadUsersFromFile()
        {
            array<user1>^ users = gcnew array<user1>(0);
            try
            {
                 //Проверка, существует ли файл
                if (!File::Exists("users.bin"))
                {
                    MessageBox::Show("Файл не существует");
                    return users;
                }

                 //Открытие файла для чтения
                FileStream^ fileStream = gcnew FileStream("users.bin", FileMode::Open, FileAccess::Read);
                BinaryReader^ binaryReader = gcnew BinaryReader(fileStream);

                 //Проверка, можно ли читать данные из потока
                if (!fileStream->CanRead)
                {
                    MessageBox::Show("Невозможно прочитать данные из файла");
                    binaryReader->Close();
                    fileStream->Close();
                    return users;
                }
                 //Чтение данных из файла
                int count = (binaryReader->BaseStream->Length - 3) / 13;
                users = gcnew array<user1>(count);
                binaryReader->BaseStream->Position = 4;
                for (int i = 0; i < count; i++)
                {
                    users[i].login = binaryReader->ReadString();
                    users[i].password = binaryReader->ReadString();
                    users[i].score = binaryReader->ReadString();
                }

                 //Закрытие файла
                binaryReader->Close();
                fileStream->Close();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(ex->Message);
            }

            return users;
        }
        void WriteUsersToFile(array<user1>^ users)
        {
            try
            {
                 //Открытие файла для записи
                FileStream^ fileStream = gcnew FileStream("users.bin", FileMode::Create, FileAccess::Write);
                BinaryWriter^ binaryWriter = gcnew BinaryWriter(fileStream);

                 //Запись данных в файл
                if (fileStream->CanWrite)
                {
                    binaryWriter->Write(users->Length);
                    for each (user1 user in users)
                    {
                        if (user.login != nullptr) {
                            binaryWriter->Write(user.login);
                            binaryWriter->Write(user.password);
                            binaryWriter->Write(user.score);
                        }
                    }
                }


                 //Закрытие файла
                binaryWriter->Close();
                fileStream->Close();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(ex->Message);
            }
        }
    private:
        Shape^ shape;
        array<Int16, 2>^ stock;
        Point^ curPoint;
        Boolean	bGame;
        Boolean _pause;
        Boolean firstView;
        Int16	score;
        Double	level;
        String^ curLogin;
        Int16 color; // Текущий цвет
        System::Timers::Timer^ t1;
    protected:
        virtual void OnPaint(System::Windows::Forms::PaintEventArgs^ pea) override
        {

            Graphics^ grfx = pea->Graphics;
            Int16 i, j;
            SolidBrush^ brush = gcnew SolidBrush(ShapeColor(color));

            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (shape->cells[i, j] == true)
                        grfx->FillRectangle(brush, curPoint->X + j * size, curPoint->Y + i * size, size, size);
                }
            }

            for (i = 0; i < 20; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    if (stock[i, j] != -1)
                    {
                        brush->Color = ShapeColor(stock[i, j]);
                        grfx->FillRectangle(brush, j * size, i * size, size, size);
                    }
                }
            }

            if (_pause)
            {
                System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 20);
                SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
                PointF drawPoint = PointF(201.0F, 100.0F);
                grfx->DrawString("Игра на паузе.\nНажмите \"Esc\"\n Для продолжения", drawFont, drawBrush, drawPoint);
            }
            if (firstView)
            {
                firstView = false;
            }

        }


    private:
        System::Void newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
        {
            firstView = false;
            SetLevel(1);
            this->t1 = gcnew System::Timers::Timer(level);
            this->t1->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &Form1::TimerEventProcessor);
            ClearStock();
            score = 0;
            bGame = true;
            NewShape();
            this->Invalidate();
        }
    private: System::Void настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (groupBox1->Visible == false) {
            //Приостанавливаем игру
            System::Windows::Forms::SendKeys::Send("{Esc}");
            //Показываем элементы
            labelbackcolor->Enabled = true;
            labelspeed->Enabled = true;
            numericUpDownspeed->Enabled = true;
            numericUpDownspeed->ReadOnly = false;
            groupBox1->Visible = true;
            groupBox1->Enabled = true;
        }
        else {
            //Скрываем элементы
            t1->Stop();
            labelbackcolor->Enabled = false;
            labelspeed->Enabled = false;
            numericUpDownspeed->Enabled = false;
            numericUpDownspeed->ReadOnly = true;
            groupBox1->Visible = false;
            groupBox1->Enabled = false;
            this->Invalidate();
        }
    }
    private: System::Void buttonApplysettings_Click(System::Object^ sender, System::EventArgs^ e) {
        //Сохраняем значения
        updateInterval = Convert::ToSingle(numericUpDownspeed->Value);
        t1->Interval = updateInterval;

        if (comboBoBackColor->Text == "Светлый") {
            this->BackColor = System::Drawing::SystemColors::Control;
            label1->ForeColor = System::Drawing::SystemColors::ControlText;
            label2->ForeColor = System::Drawing::SystemColors::ControlText;
            label_score->ForeColor = System::Drawing::SystemColors::ControlText;
            groupBox1->BackColor = System::Drawing::SystemColors::Control;
            labelspeed->ForeColor = System::Drawing::SystemColors::ControlText;
            labelbackcolor->ForeColor = System::Drawing::SystemColors::ControlText;
            panel1->ForeColor = System::Drawing::SystemColors::ControlText;

        }
        else {
            this->BackColor = System::Drawing::SystemColors::ControlText;
            label1->ForeColor = System::Drawing::SystemColors::Control;
            label2->ForeColor = System::Drawing::SystemColors::Control;
            label_score->ForeColor = System::Drawing::SystemColors::Control;
            groupBox1->BackColor = System::Drawing::SystemColors::ControlText;
            labelspeed->ForeColor = System::Drawing::SystemColors::Control;
            labelbackcolor->ForeColor = System::Drawing::SystemColors::Control;
            panel1->ForeColor = System::Drawing::SystemColors::Control;
        }
        //Скрываем элементы
        t1->Stop();
        labelbackcolor->Enabled = false;
        labelspeed->Enabled = false;
        numericUpDownspeed->Enabled = false;
        numericUpDownspeed->ReadOnly = true;
        groupBox1->Visible = false;
        groupBox1->Enabled = false;
        //Продолжаем игру
        System::Windows::Forms::SendKeys::Send("{Esc}");
        this->Invalidate();
    }
    private:
        System::Void Form1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
        {
            switch (e->KeyCode)
            {
            case Keys::Up:
                if (IsAtBottom() || CheckRight()) return;
                shape->Rotate();
                this->Invalidate(GetReg());
                break;
            case Keys::Left:
                if (CheckLeft()) return;
                curPoint->X -= 20;
                this->Invalidate(GetReg());
                break;
            case Keys::Right:
                if (CheckRight()) return;
                curPoint->X += 20;
                this->Invalidate(GetReg());
                break;
            case Keys::Down:
                while (!IsAtBottom()) {
                    curPoint->Y += 20;
                    this->Invalidate(GetReg());
                }

                break;
            case Keys::Escape:
                if (!_pause) {
                    t1->Stop();
                    _pause = true;
                }
                else {
                    t1->Start();
                    _pause = false;
                }
                this->Invalidate();
                break;
            default:
                break;
            }
        }
    private: System::Void noobToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        SetLevel(1);
        this->t1 = gcnew System::Timers::Timer(level);
        this->t1->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &Form1::TimerEventProcessor);
        ClearStock();
        score = 0;
        bGame = true;
        this->label1->Visible = false;
        NewShape();
        this->Invalidate();
    }
    private: System::Void dudeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        SetLevel(2);
        this->t1 = gcnew System::Timers::Timer(level);
        this->t1->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &Form1::TimerEventProcessor);
        ClearStock();
        score = 0;
        bGame = true;
        this->label1->Visible = false;
        NewShape();
        this->Invalidate();
    }
    private: System::Void jediToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        SetLevel(3);
        this->t1 = gcnew System::Timers::Timer(level);
        this->t1->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &Form1::TimerEventProcessor);
        ClearStock();
        score = 0;
        bGame = true;
        this->label1->Visible = false;
        NewShape();
        this->Invalidate();
    }
    private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
        int cellSize = 20; // размер ячейки в пикселях
        int width = panel1->Width / cellSize; // количество ячеек по ширине
        int height = panel1->Height / cellSize; // количество ячеек по высоте

        Pen^ pen = gcnew Pen(Color::Gray); // цвет линий

        for (int x = 0; x <= width; x++) {
            e->Graphics->DrawLine(pen, x * cellSize, 0, x * cellSize, panel1->Height);
        }

        for (int y = 0; y <= height; y++) {
            e->Graphics->DrawLine(pen, 0, y * cellSize, panel1->Width, y * cellSize);
        }
    }
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    MessageBox::Show("Версия 1.0\nДата последних изменений: 25.05.23\nСделано студентом группы ИСТб22-1 Моргуновым Александром");
}

};
}
