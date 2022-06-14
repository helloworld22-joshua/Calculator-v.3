#pragma once

namespace Calculatorv3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox_output;
	private: System::Windows::Forms::Panel^ panel_output;

	private: System::Windows::Forms::Button^ button_ans;
	private: System::Windows::Forms::Button^ button_ac;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Button^ button_enter;

	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_6;
	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_times;

	private: System::Windows::Forms::Button^ button_equal;
	private: System::Windows::Forms::Button^ button_0;
	private: System::Windows::Forms::Button^ button_comma;
	private: System::Windows::Forms::Button^ button_divide;

	private: System::Windows::Forms::Button^ button_square;
	private: System::Windows::Forms::Button^ button_root;
	private: System::Windows::Forms::Button^ button_pi;
	private: System::Windows::Forms::Button^ button_e;

	private: System::Windows::Forms::Button^ button_stow;
	private: System::Windows::Forms::Button^ button_varA;
	private: System::Windows::Forms::Button^ button_varB;
	private: System::Windows::Forms::Button^ button_varC;

		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox_output = (gcnew System::Windows::Forms::TextBox());
			this->panel_output = (gcnew System::Windows::Forms::Panel());
			this->button_ans = (gcnew System::Windows::Forms::Button());
			this->button_ac = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_6 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_times = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_comma = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_square = (gcnew System::Windows::Forms::Button());
			this->button_root = (gcnew System::Windows::Forms::Button());
			this->button_pi = (gcnew System::Windows::Forms::Button());
			this->button_e = (gcnew System::Windows::Forms::Button());
			this->button_stow = (gcnew System::Windows::Forms::Button());
			this->button_varA = (gcnew System::Windows::Forms::Button());
			this->button_varB = (gcnew System::Windows::Forms::Button());
			this->button_varC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_output
			// 
			this->textBox_output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_output->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->textBox_output->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_output->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_output->ForeColor = System::Drawing::Color::White;
			this->textBox_output->Location = System::Drawing::Point(13, 13);
			this->textBox_output->Name = L"textBox_output";
			this->textBox_output->Size = System::Drawing::Size(419, 36);
			this->textBox_output->TabIndex = 0;
			this->textBox_output->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox_output->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox_output_KeyDown);
			// 
			// panel_output
			// 
			this->panel_output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_output->BackColor = System::Drawing::Color::White;
			this->panel_output->Location = System::Drawing::Point(13, 50);
			this->panel_output->Name = L"panel_output";
			this->panel_output->Size = System::Drawing::Size(419, 1);
			this->panel_output->TabIndex = 1;
			// 
			// button_ans
			// 
			this->button_ans->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_ans->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ans->ForeColor = System::Drawing::Color::White;
			this->button_ans->Location = System::Drawing::Point(13, 57);
			this->button_ans->Name = L"button_ans";
			this->button_ans->Size = System::Drawing::Size(100, 50);
			this->button_ans->TabIndex = 2;
			this->button_ans->Text = L"Ans";
			this->button_ans->UseVisualStyleBackColor = false;
			this->button_ans->Click += gcnew System::EventHandler(this, &MyForm::button_ans_Click);
			// 
			// button_ac
			// 
			this->button_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_ac->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_ac->ForeColor = System::Drawing::Color::White;
			this->button_ac->Location = System::Drawing::Point(119, 57);
			this->button_ac->Name = L"button_ac";
			this->button_ac->Size = System::Drawing::Size(100, 50);
			this->button_ac->TabIndex = 3;
			this->button_ac->Text = L"AC";
			this->button_ac->UseVisualStyleBackColor = false;
			this->button_ac->Click += gcnew System::EventHandler(this, &MyForm::button_ac_Click);
			// 
			// button_delete
			// 
			this->button_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_delete->ForeColor = System::Drawing::Color::White;
			this->button_delete->Location = System::Drawing::Point(225, 57);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(100, 50);
			this->button_delete->TabIndex = 4;
			this->button_delete->Text = L" ⌫";
			this->button_delete->UseVisualStyleBackColor = false;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_enter
			// 
			this->button_enter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_enter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_enter->ForeColor = System::Drawing::Color::White;
			this->button_enter->Location = System::Drawing::Point(331, 57);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(100, 50);
			this->button_enter->TabIndex = 5;
			this->button_enter->Text = L"↩";
			this->button_enter->UseVisualStyleBackColor = false;
			this->button_enter->Click += gcnew System::EventHandler(this, &MyForm::button_enter_Click);
			// 
			// button_7
			// 
			this->button_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_7->ForeColor = System::Drawing::Color::White;
			this->button_7->Location = System::Drawing::Point(13, 113);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(100, 50);
			this->button_7->TabIndex = 6;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &MyForm::button_7_Click);
			// 
			// button_8
			// 
			this->button_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_8->ForeColor = System::Drawing::Color::White;
			this->button_8->Location = System::Drawing::Point(119, 113);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(100, 50);
			this->button_8->TabIndex = 7;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &MyForm::button_8_Click);
			// 
			// button_9
			// 
			this->button_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_9->ForeColor = System::Drawing::Color::White;
			this->button_9->Location = System::Drawing::Point(225, 113);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(100, 50);
			this->button_9->TabIndex = 8;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &MyForm::button_9_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(331, 113);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(100, 50);
			this->button_plus->TabIndex = 9;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_4
			// 
			this->button_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_4->ForeColor = System::Drawing::Color::White;
			this->button_4->Location = System::Drawing::Point(13, 169);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(100, 50);
			this->button_4->TabIndex = 10;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &MyForm::button_4_Click);
			// 
			// button_5
			// 
			this->button_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_5->ForeColor = System::Drawing::Color::White;
			this->button_5->Location = System::Drawing::Point(119, 169);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(100, 50);
			this->button_5->TabIndex = 11;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &MyForm::button_5_Click);
			// 
			// button_6
			// 
			this->button_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_6->ForeColor = System::Drawing::Color::White;
			this->button_6->Location = System::Drawing::Point(225, 169);
			this->button_6->Name = L"button_6";
			this->button_6->Size = System::Drawing::Size(100, 50);
			this->button_6->TabIndex = 12;
			this->button_6->Text = L"6";
			this->button_6->UseVisualStyleBackColor = false;
			this->button_6->Click += gcnew System::EventHandler(this, &MyForm::button_6_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_minus->ForeColor = System::Drawing::Color::White;
			this->button_minus->Location = System::Drawing::Point(331, 169);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(100, 50);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button_1
			// 
			this->button_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_1->ForeColor = System::Drawing::Color::White;
			this->button_1->Location = System::Drawing::Point(13, 225);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(100, 50);
			this->button_1->TabIndex = 14;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &MyForm::button_1_Click);
			// 
			// button_2
			// 
			this->button_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_2->ForeColor = System::Drawing::Color::White;
			this->button_2->Location = System::Drawing::Point(119, 225);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(100, 50);
			this->button_2->TabIndex = 15;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &MyForm::button_2_Click);
			// 
			// button_3
			// 
			this->button_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_3->ForeColor = System::Drawing::Color::White;
			this->button_3->Location = System::Drawing::Point(225, 225);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(100, 50);
			this->button_3->TabIndex = 16;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &MyForm::button_3_Click);
			// 
			// button_times
			// 
			this->button_times->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_times->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_times->ForeColor = System::Drawing::Color::White;
			this->button_times->Location = System::Drawing::Point(331, 225);
			this->button_times->Name = L"button_times";
			this->button_times->Size = System::Drawing::Size(100, 50);
			this->button_times->TabIndex = 17;
			this->button_times->Text = L"×";
			this->button_times->UseVisualStyleBackColor = false;
			this->button_times->Click += gcnew System::EventHandler(this, &MyForm::button_times_Click);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_equal->ForeColor = System::Drawing::Color::White;
			this->button_equal->Location = System::Drawing::Point(13, 281);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(100, 50);
			this->button_equal->TabIndex = 18;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::button_equal_Click);
			// 
			// button_0
			// 
			this->button_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_0->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_0->ForeColor = System::Drawing::Color::White;
			this->button_0->Location = System::Drawing::Point(119, 281);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(100, 50);
			this->button_0->TabIndex = 19;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &MyForm::button_0_Click);
			// 
			// button_comma
			// 
			this->button_comma->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_comma->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_comma->ForeColor = System::Drawing::Color::White;
			this->button_comma->Location = System::Drawing::Point(225, 281);
			this->button_comma->Name = L"button_comma";
			this->button_comma->Size = System::Drawing::Size(100, 50);
			this->button_comma->TabIndex = 20;
			this->button_comma->Text = L",";
			this->button_comma->UseVisualStyleBackColor = false;
			this->button_comma->Click += gcnew System::EventHandler(this, &MyForm::button_comma_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_divide->ForeColor = System::Drawing::Color::White;
			this->button_divide->Location = System::Drawing::Point(331, 281);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(100, 50);
			this->button_divide->TabIndex = 21;
			this->button_divide->Text = L"÷";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_square
			// 
			this->button_square->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_square->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_square->ForeColor = System::Drawing::Color::White;
			this->button_square->Location = System::Drawing::Point(13, 337);
			this->button_square->Name = L"button_square";
			this->button_square->Size = System::Drawing::Size(100, 50);
			this->button_square->TabIndex = 22;
			this->button_square->Text = L"x²";
			this->button_square->UseVisualStyleBackColor = false;
			this->button_square->Click += gcnew System::EventHandler(this, &MyForm::button_square_Click);
			// 
			// button_root
			// 
			this->button_root->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_root->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_root->ForeColor = System::Drawing::Color::White;
			this->button_root->Location = System::Drawing::Point(119, 337);
			this->button_root->Name = L"button_root";
			this->button_root->Size = System::Drawing::Size(100, 50);
			this->button_root->TabIndex = 23;
			this->button_root->Text = L"√x";
			this->button_root->UseVisualStyleBackColor = false;
			this->button_root->Click += gcnew System::EventHandler(this, &MyForm::button_root_Click);
			// 
			// button_pi
			// 
			this->button_pi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_pi->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_pi->ForeColor = System::Drawing::Color::White;
			this->button_pi->Location = System::Drawing::Point(225, 337);
			this->button_pi->Name = L"button_pi";
			this->button_pi->Size = System::Drawing::Size(100, 50);
			this->button_pi->TabIndex = 24;
			this->button_pi->Text = L"π";
			this->button_pi->UseVisualStyleBackColor = false;
			this->button_pi->Click += gcnew System::EventHandler(this, &MyForm::button_pi_Click);
			// 
			// button_e
			// 
			this->button_e->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_e->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_e->ForeColor = System::Drawing::Color::White;
			this->button_e->Location = System::Drawing::Point(331, 337);
			this->button_e->Name = L"button_e";
			this->button_e->Size = System::Drawing::Size(100, 50);
			this->button_e->TabIndex = 25;
			this->button_e->Text = L"e";
			this->button_e->UseVisualStyleBackColor = false;
			this->button_e->Click += gcnew System::EventHandler(this, &MyForm::button_e_Click);
			// 
			// button_stow
			// 
			this->button_stow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_stow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_stow->ForeColor = System::Drawing::Color::White;
			this->button_stow->Location = System::Drawing::Point(13, 393);
			this->button_stow->Name = L"button_stow";
			this->button_stow->Size = System::Drawing::Size(100, 50);
			this->button_stow->TabIndex = 26;
			this->button_stow->Text = L"Sto";
			this->button_stow->UseVisualStyleBackColor = false;
			this->button_stow->Click += gcnew System::EventHandler(this, &MyForm::button_stow_Click);
			// 
			// button_varA
			// 
			this->button_varA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_varA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_varA->ForeColor = System::Drawing::Color::White;
			this->button_varA->Location = System::Drawing::Point(119, 393);
			this->button_varA->Name = L"button_varA";
			this->button_varA->Size = System::Drawing::Size(100, 50);
			this->button_varA->TabIndex = 27;
			this->button_varA->Text = L"A";
			this->button_varA->UseVisualStyleBackColor = false;
			this->button_varA->Click += gcnew System::EventHandler(this, &MyForm::button_varA_Click);
			// 
			// button_varB
			// 
			this->button_varB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_varB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_varB->ForeColor = System::Drawing::Color::White;
			this->button_varB->Location = System::Drawing::Point(225, 393);
			this->button_varB->Name = L"button_varB";
			this->button_varB->Size = System::Drawing::Size(100, 50);
			this->button_varB->TabIndex = 28;
			this->button_varB->Text = L"B";
			this->button_varB->UseVisualStyleBackColor = false;
			this->button_varB->Click += gcnew System::EventHandler(this, &MyForm::button_varB_Click);
			// 
			// button_varC
			// 
			this->button_varC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button_varC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_varC->ForeColor = System::Drawing::Color::White;
			this->button_varC->Location = System::Drawing::Point(331, 393);
			this->button_varC->Name = L"button_varC";
			this->button_varC->Size = System::Drawing::Size(100, 50);
			this->button_varC->TabIndex = 29;
			this->button_varC->Text = L"C";
			this->button_varC->UseVisualStyleBackColor = false;
			this->button_varC->Click += gcnew System::EventHandler(this, &MyForm::button_varC_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(444, 461);
			this->Controls->Add(this->button_e);
			this->Controls->Add(this->button_pi);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_ans);
			this->Controls->Add(this->button_varA);
			this->Controls->Add(this->button_varC);
			this->Controls->Add(this->button_varB);
			this->Controls->Add(this->button_stow);
			this->Controls->Add(this->button_comma);
			this->Controls->Add(this->button_root);
			this->Controls->Add(this->button_square);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->button_ac);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_times);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_6);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->panel_output);
			this->Controls->Add(this->textBox_output);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(460, 500);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
String^ answer;
String^ varA;
String^ varB;
String^ varC;
bool resultShown, stowPressed;

void addChar(String^ ch) {			// String instead of char because it would convert it to string anyways
	if (resultShown) {
		textBox_output->Text = ch;	// TextBox gets reset after showing result
		resultShown = false;
	} else {
		textBox_output->Text += ch;
	}
}

void displayAnswer() {
	textBox_output->Text = answer = calculate(textBox_output->Text);
}

void onStow() {
	stowPressed = false;
	button_stow->ForeColor = System::Drawing::Color::White;
	button_stow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
}

String^ calculate(String^ text) {
	/* How it works
	———————————————————————————————————————————
	|String index	  | 0 | 1 | 2 | 3 | 4 | 5 |
	———————————————————————————————————————————
	|Substring start  | 0 | 0 | 0 |   | 4 | 4 |
	———————————————————————————————————————————
	|Substring length | 1 | 2 | 3 |   | 1 | 2 |
	———————————————————————————————————————————
	|Example text	  | 4   2   0   +   6   9 |
	———————————————————————————————————————————
	*/

	double result;								// End result
	int start,									// Beginning of substring
		length,									// Length of substring
		op = 43;								// Operator (starts with "+")

	// TO DO: replace "3" with M_PI and M_E
	text = text->Replace("π", "3")->Replace("e", "3") + " ";	//Replaces "p" with M_PI and "e" with M_E; " " to run one last time

	for (int i = 0; i < text->Length; i++) {

		if (isdigit(text[i])) {
			length++;							// Length of substring increases per digit
			continue;
		}

		if (!length) {
			return "Error: Falscher Syntax";
			resultShown = true;
		}

		double num = Convert::ToDouble(text->Substring(start, length));	// Substring of range to double

		switch (op) {
			case 43:						// "+"
				result += num;
				break;
			case 45:						// "-"
				result -= num;
				break;
			case 215:						// "×"
				result *= num;
				break;
			case 42:						// "*"
				result *= num;
				break;
			case 247:						// "÷"
				result /= num;
				break;
			case 47:						// "/"
				result /= num;
				break;
			case 61:						// "="
				if (result.ToString() == calculate(text->Substring(i - 1, text->Length - i))) {
					return "True";
				} else {
					return "False";
				}
			case 32:						// " "
				break;
			default:
				return "Error: Unbekanntes Zeichen";
				resultShown = true;
		}

		op = text[i];						// Sets current char to operator
		start = i + 1;						// Beginning of new substring is next char
		length = 0;							// Length of substring reset
	}

	return result.ToString();
}

private: System::Void button_0_Click(System::Object^ sender, System::EventArgs^ e) {addChar("0");}
private: System::Void button_1_Click(System::Object^ sender, System::EventArgs^ e) {addChar("1");}
private: System::Void button_2_Click(System::Object^ sender, System::EventArgs^ e) {addChar("2");}
private: System::Void button_3_Click(System::Object^ sender, System::EventArgs^ e) {addChar("3");}
private: System::Void button_4_Click(System::Object^ sender, System::EventArgs^ e) {addChar("4");}
private: System::Void button_5_Click(System::Object^ sender, System::EventArgs^ e) {addChar("5");}
private: System::Void button_6_Click(System::Object^ sender, System::EventArgs^ e) {addChar("6");}
private: System::Void button_7_Click(System::Object^ sender, System::EventArgs^ e) {addChar("7");}
private: System::Void button_8_Click(System::Object^ sender, System::EventArgs^ e) {addChar("8");}
private: System::Void button_9_Click(System::Object^ sender, System::EventArgs^ e) {addChar("9");}
private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {addChar("+");}
private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {addChar("-");}
private: System::Void button_times_Click(System::Object^ sender, System::EventArgs^ e) {addChar("×");}
private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {addChar("÷");}
private: System::Void button_comma_Click(System::Object^ sender, System::EventArgs^ e) {addChar(",");}
private: System::Void button_square_Click(System::Object^ sender, System::EventArgs^ e) {addChar("²");}
private: System::Void button_root_Click(System::Object^ sender, System::EventArgs^ e) {addChar("r");}
private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e) {addChar("=");}
private: System::Void button_pi_Click(System::Object^ sender, System::EventArgs^ e) {addChar("π");}
private: System::Void button_e_Click(System::Object^ sender, System::EventArgs^ e) {addChar("e");}
private: System::Void button_ac_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox_output->Text = "";
}
private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	displayAnswer();
}
private: System::Void textBox_output_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {		// On enter press
		displayAnswer();
	}
}
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ s = textBox_output->Text;
	
	if (!s->Length) return;						// Don't delete if string is empty

	textBox_output->Text = s->Substring(0, s->Length - 1);	// Same string without last letter
}
private: System::Void button_stow_Click(System::Object^ sender, System::EventArgs^ e) {
	if (stowPressed) {
		onStow();
	} else {
		stowPressed = true;
		button_stow->ForeColor = System::Drawing::Color::Black;
		button_stow->BackColor = System::Drawing::Color::Gold;
	};
}
private: System::Void button_varA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (stowPressed) {
		varA = answer;
		onStow();
	} else {
		addChar(varA);
	}
}
private: System::Void button_varB_Click(System::Object^ sender, System::EventArgs^ e) {
	if (stowPressed) {
		varB = answer;
		onStow();
	} else {
		addChar(varB);
	}
}
private: System::Void button_varC_Click(System::Object^ sender, System::EventArgs^ e) {
	if (stowPressed) {
		varC = answer;
		onStow();
	} else {
		addChar(varC);
	}
}
private: System::Void button_ans_Click(System::Object^ sender, System::EventArgs^ e) {
	addChar(answer);
}
};
}