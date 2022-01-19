#pragma once

namespace Kalkulātorss {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ātorsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standartsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zinātnisksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vēstureToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vēstureToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ izietToolStripMenuItem;


	private: System::Windows::Forms::TextBox^ txtDisplay;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripMenuItem^ temperatūraToolStripMenuItem;
	private: System::Windows::Forms::Label^ lblShowOp;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::RadioButton^ radioButton3;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ lblConvert;
	private: System::Windows::Forms::TextBox^ txtConvert;




	private:
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ātorsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standartsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zinātnisksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vēstureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vēstureToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temperatūraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->izietToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtConvert = (gcnew System::Windows::Forms::TextBox());
			this->lblConvert = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ātorsToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1176, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ātorsToolStripMenuItem
			// 
			this->ātorsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->standartsToolStripMenuItem,
					this->zinātnisksToolStripMenuItem, this->vēstureToolStripMenuItem, this->vēstureToolStripMenuItem1, this->temperatūraToolStripMenuItem,
					this->izietToolStripMenuItem
			});
			this->ātorsToolStripMenuItem->Name = L"ātorsToolStripMenuItem";
			this->ātorsToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->ātorsToolStripMenuItem->Text = L"Kalkulators";
			// 
			// standartsToolStripMenuItem
			// 
			this->standartsToolStripMenuItem->Name = L"standartsToolStripMenuItem";
			this->standartsToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->standartsToolStripMenuItem->Text = L"standarts";
			this->standartsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standartsToolStripMenuItem_Click);
			// 
			// zinātnisksToolStripMenuItem
			// 
			this->zinātnisksToolStripMenuItem->Name = L"zinātnisksToolStripMenuItem";
			this->zinātnisksToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->zinātnisksToolStripMenuItem->Text = L"zinātnisks";
			this->zinātnisksToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zinātnisksToolStripMenuItem_Click);
			// 
			// vēstureToolStripMenuItem
			// 
			this->vēstureToolStripMenuItem->Checked = true;
			this->vēstureToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->vēstureToolStripMenuItem->Name = L"vēstureToolStripMenuItem";
			this->vēstureToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->vēstureToolStripMenuItem->Text = L"Vēsture";
			this->vēstureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::vēstureToolStripMenuItem_Click);
			// 
			// vēstureToolStripMenuItem1
			// 
			this->vēstureToolStripMenuItem1->Name = L"vēstureToolStripMenuItem1";
			this->vēstureToolStripMenuItem1->Size = System::Drawing::Size(140, 22);
			this->vēstureToolStripMenuItem1->Text = L"Vēsture";
			this->vēstureToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::vēstureToolStripMenuItem1_Click);
			// 
			// temperatūraToolStripMenuItem
			// 
			this->temperatūraToolStripMenuItem->Name = L"temperatūraToolStripMenuItem";
			this->temperatūraToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->temperatūraToolStripMenuItem->Text = L"Temperatūra";
			this->temperatūraToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::temperatūraToolStripMenuItem_Click);
			// 
			// izietToolStripMenuItem
			// 
			this->izietToolStripMenuItem->Name = L"izietToolStripMenuItem";
			this->izietToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->izietToolStripMenuItem->Text = L"Iziet";
			this->izietToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::izietToolStripMenuItem_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->txtDisplay->Location = System::Drawing::Point(12, 27);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(286, 46);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btn7->Location = System::Drawing::Point(12, 79);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(67, 63);
			this->btn7->TabIndex = 2;
			this->btn7->Text = L"";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button1->Location = System::Drawing::Point(85, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 63);
			this->button1->TabIndex = 3;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button2->Location = System::Drawing::Point(158, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 63);
			this->button2->TabIndex = 4;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button3->Location = System::Drawing::Point(231, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 63);
			this->button3->TabIndex = 5;
			this->button3->Text = L"±";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button4->Location = System::Drawing::Point(231, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 63);
			this->button4->TabIndex = 9;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button5->Location = System::Drawing::Point(158, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 63);
			this->button5->TabIndex = 8;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button6->Location = System::Drawing::Point(85, 148);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 63);
			this->button6->TabIndex = 7;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button7->Location = System::Drawing::Point(12, 148);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 63);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button8->Location = System::Drawing::Point(231, 217);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 63);
			this->button8->TabIndex = 13;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button9->Location = System::Drawing::Point(158, 217);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 63);
			this->button9->TabIndex = 12;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button10->Location = System::Drawing::Point(85, 217);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 63);
			this->button10->TabIndex = 11;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button11->Location = System::Drawing::Point(12, 217);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 63);
			this->button11->TabIndex = 10;
			this->button11->Text = L"4";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button12->Location = System::Drawing::Point(231, 286);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(67, 63);
			this->button12->TabIndex = 17;
			this->button12->Text = L"*";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button13->Location = System::Drawing::Point(158, 286);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 63);
			this->button13->TabIndex = 16;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button14->Location = System::Drawing::Point(85, 286);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 63);
			this->button14->TabIndex = 15;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button15->Location = System::Drawing::Point(12, 286);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 63);
			this->button15->TabIndex = 14;
			this->button15->Text = L"1";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button16->Location = System::Drawing::Point(231, 355);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(67, 63);
			this->button16->TabIndex = 21;
			this->button16->Text = L"÷";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Arithmetic_Op);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button17->Location = System::Drawing::Point(158, 355);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(67, 63);
			this->button17->TabIndex = 20;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button18->Location = System::Drawing::Point(85, 355);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(67, 63);
			this->button18->TabIndex = 19;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button19->Location = System::Drawing::Point(12, 355);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(67, 63);
			this->button19->TabIndex = 18;
			this->button19->Text = L"0";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::Button_click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button20->Location = System::Drawing::Point(551, 355);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(67, 63);
			this->button20->TabIndex = 41;
			this->button20->Text = L"%";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button21->Location = System::Drawing::Point(478, 355);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(67, 63);
			this->button21->TabIndex = 40;
			this->button21->Text = L"Oct";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button22->Location = System::Drawing::Point(405, 355);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(67, 63);
			this->button22->TabIndex = 39;
			this->button22->Text = L"Mod";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button23->Location = System::Drawing::Point(332, 355);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(67, 63);
			this->button23->TabIndex = 38;
			this->button23->Text = L"Exp";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button24->Location = System::Drawing::Point(551, 286);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(67, 63);
			this->button24->TabIndex = 37;
			this->button24->Text = L"In x";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button25->Location = System::Drawing::Point(478, 286);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(67, 63);
			this->button25->TabIndex = 36;
			this->button25->Text = L"Hex";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button26->Location = System::Drawing::Point(405, 286);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(67, 63);
			this->button26->TabIndex = 35;
			this->button26->Text = L"Tan";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button27->Location = System::Drawing::Point(332, 286);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(67, 63);
			this->button27->TabIndex = 34;
			this->button27->Text = L"Tanh";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button28->Location = System::Drawing::Point(551, 217);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(67, 63);
			this->button28->TabIndex = 33;
			this->button28->Text = L"1/x";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button29->Location = System::Drawing::Point(478, 217);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(67, 63);
			this->button29->TabIndex = 32;
			this->button29->Text = L"Bin";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button30->Location = System::Drawing::Point(405, 217);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(67, 63);
			this->button30->TabIndex = 31;
			this->button30->Text = L"Cos";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button31->Location = System::Drawing::Point(332, 217);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(67, 63);
			this->button31->TabIndex = 30;
			this->button31->Text = L"Cosh";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button32->Location = System::Drawing::Point(551, 148);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(67, 63);
			this->button32->TabIndex = 29;
			this->button32->Text = L"x^3";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button33->Location = System::Drawing::Point(478, 148);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(67, 63);
			this->button33->TabIndex = 28;
			this->button33->Text = L"Dec";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button34->Location = System::Drawing::Point(405, 148);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(67, 63);
			this->button34->TabIndex = 27;
			this->button34->Text = L"Sin";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button35->Location = System::Drawing::Point(332, 148);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(67, 63);
			this->button35->TabIndex = 26;
			this->button35->Text = L"Sinh";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button36->Location = System::Drawing::Point(551, 79);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(67, 63);
			this->button36->TabIndex = 25;
			this->button36->Text = L"x^2";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button37->Location = System::Drawing::Point(478, 79);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(67, 63);
			this->button37->TabIndex = 24;
			this->button37->Text = L"Sqrt";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button38->Location = System::Drawing::Point(405, 79);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(67, 63);
			this->button38->TabIndex = 23;
			this->button38->Text = L"Log";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button39->Location = System::Drawing::Point(332, 79);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(67, 63);
			this->button39->TabIndex = 22;
			this->button39->Text = L"π";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtConvert);
			this->panel1->Controls->Add(this->lblConvert);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button41);
			this->panel1->Controls->Add(this->button40);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(639, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(515, 391);
			this->panel1->TabIndex = 42;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// txtConvert
			// 
			this->txtConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->txtConvert->Location = System::Drawing::Point(357, 246);
			this->txtConvert->Multiline = true;
			this->txtConvert->Name = L"txtConvert";
			this->txtConvert->Size = System::Drawing::Size(145, 46);
			this->txtConvert->TabIndex = 52;
			this->txtConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblConvert
			// 
			this->lblConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->lblConvert->Location = System::Drawing::Point(357, 19);
			this->lblConvert->Multiline = true;
			this->lblConvert->Name = L"lblConvert";
			this->lblConvert->Size = System::Drawing::Size(145, 46);
			this->lblConvert->TabIndex = 45;
			this->lblConvert->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(37, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 25);
			this->label2->TabIndex = 51;
			this->label2->Text = L"Konvertētā skaitļa rezultāts";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(14, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 25);
			this->label1->TabIndex = 50;
			this->label1->Text = L"Ievadiet konvertējamo vērtību";
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button41->Location = System::Drawing::Point(374, 306);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(100, 54);
			this->button41->TabIndex = 49;
			this->button41->Text = L"Atiestatīt";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button40->Location = System::Drawing::Point(81, 306);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(112, 54);
			this->button40->TabIndex = 48;
			this->button40->Text = L"Konvertēt";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->radioButton3->Location = System::Drawing::Point(15, 145);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(203, 28);
			this->radioButton3->TabIndex = 47;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Celsija uz Kelvinos";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Kevin_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->radioButton2->Location = System::Drawing::Point(15, 111);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(225, 28);
			this->radioButton2->TabIndex = 46;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Fārenheitu uz Celsija";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->radioButton1->Location = System::Drawing::Point(15, 77);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(225, 28);
			this->radioButton1->TabIndex = 45;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Celsija uz Fārenheitu";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblShowOp->Location = System::Drawing::Point(16, 31);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 13);
			this->lblShowOp->TabIndex = 43;
			this->lblShowOp->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 426);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(294, 186);
			this->listBox1->TabIndex = 44;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 624);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kalkulātors";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double iFirstnum;
		double iSecondnum;
		double iResult;
		double a;
		double b;
		String^ iOperator;
		float iCelsius, iFahrenheit, iKevin;
		char iOperation;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Width = 325;
		MyForm::Height = 467;
		txtDisplay->Width = 286;
		vēstureToolStripMenuItem->Visible = false;
	}
private: System::Void izietToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void zinātnisksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 642;
	txtDisplay->Width = 605;
}
private: System::Void temperatūraToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 1161;
	txtDisplay->Width = 605;
}
private: System::Void standartsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 325;
	MyForm::Height = 467;
	txtDisplay->Width = 286;
	vēstureToolStripMenuItem->Visible = false;
}
private: System::Void Button_click(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0") {
		txtDisplay->Text = Numbers->Text;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Clear();
	iFirstnum == 0;
	iSecondnum == 0;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!txtDisplay->Text->Contains(".")){
		txtDisplay->Text = txtDisplay->Text + ",";
	}
}
private: System::Void Arithmetic_Op(System::Object^ sender, System::EventArgs^ e) {

	Button^ op = safe_cast<Button^>(sender);

	iFirstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	iOperator = op->Text;
	lblShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		//lblShowOp->Text = "";
		iSecondnum = Double::Parse(txtDisplay->Text);

		if (iOperator == "+") {
			iResult = iFirstnum + iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + iSecondnum + "=" + iResult);
		}

		else if (iOperator == "-") {
			iResult = iFirstnum - iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + iSecondnum + "=" + iResult);
		}

		else if (iOperator == "*") {
			iResult = iFirstnum * iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + iSecondnum + "=" + iResult);
		}

		else if (iOperator == "÷") {
			iResult = iFirstnum / iSecondnum;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + iSecondnum + "=" + iResult);
		}

		else if (iOperator == "Mod") {
			int iFirst, iSecond, iResults = 0;
			iFirst = Convert::ToInt32(iFirstnum);
			iSecond = Convert::ToInt32(iSecondnum);
			iResult = iFirst % iSecond;
			txtDisplay->Text = System::Convert::ToString(iResult);
			listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + iSecondnum + "=" + iResult);
		}
		else if (iOperator == "Exp") {
			iResult = (iFirstnum, (1 / iSecondnum));
			txtDisplay->Text = System::Convert::ToString(Math::Exp((iResult)));
			listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + iSecondnum + "=" + iResult);
		}
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void vēstureToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	vēstureToolStripMenuItem->Visible = true;
	listBox1 -> Width = 265;
	listBox1->Visible = false;
	MyForm::Height = 467;
	vēstureToolStripMenuItem1->Visible = false;

}

	   private: System::Void vēstureToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (vēstureToolStripMenuItem->Checked == true) {
			   listBox1->Visible = true;
			   vēstureToolStripMenuItem->Visible = false;
			   vēstureToolStripMenuItem1->Visible = true;
			   MyForm::Height = 663;
		   }
	   }

private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
}

private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
//PI	
	txtDisplay->Text = "3.14159265359";
}

private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	//Log
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("log" + "(" + (txtDisplay->Text) + ")");
	a = Math::Log(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + "=" + a);
}

private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	//Sqrt
	b = Double::Parse(txtDisplay->Text);
	a = Double::Parse(txtDisplay->Text);
	a = Math::Sqrt(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text)+"Sqrt("+b+")" + "=" + a);
}

private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	//Sinh
	b = Double::Parse(txtDisplay->Text);
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("sinh" + "(" + (txtDisplay->Text) + ")");
	a = Math::Sinh(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + "=" + a);
}

private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	//Sin
	b = Double::Parse(txtDisplay->Text);
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("sin" + "(" + (txtDisplay->Text) + ")");
	a = Math::Sin(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + "=" + a);
}

private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cos
	b = Double::Parse(txtDisplay->Text);
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("Cos" + "(" + (txtDisplay->Text) + ")");
	a = Math::Cos(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + "=" + a);
}

private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	//Dec
	b = Double::Parse(txtDisplay->Text);
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a,16);
	listBox1->Items->Add(System::Convert::ToString("Dec(" + b + ")" + "=" + System::Convert::ToString(a, 16)));
}

private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	//Cosh
	b = Double::Parse(txtDisplay->Text);
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("Cosh" + "(" + (txtDisplay->Text) + ")");
	a = Math::Cosh(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + "=" + a);
	lblShowOp->Text = "";
}

private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	//Bin
	b = Double::Parse(txtDisplay->Text);
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 2);
	listBox1->Items->Add(System::Convert::ToString("Bin(" + b + ")" + "=" + System::Convert::ToString(a, 2)));
	lblShowOp->Text = "";
}

private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	//Tanh
	b = Double::Parse(txtDisplay->Text);
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("tanh" + "(" + (txtDisplay->Text) + ")");
	a = Math::Tanh(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + "=" + a);
}

private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	//Tan
	b = Double::Parse(txtDisplay->Text);
	a = Double::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("tan" + "(" + (txtDisplay->Text) + ")");
	a = Math::Tan(a);
	txtDisplay->Text = System::Convert::ToString(a);
	listBox1->Items->Add(System::Convert::ToString(lblShowOp->Text) + "=" + a);
}

private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	//Hex
	b = Double::Parse(txtDisplay->Text);
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 16);
	lblShowOp->Text = "";
	listBox1->Items->Add(System::Convert::ToString("Hex(" + b + ")" + "=" + System::Convert::ToString(a, 16)));
}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	//Oct
	b = Double::Parse(txtDisplay->Text);
	int a = int::Parse(txtDisplay->Text);
	txtDisplay->Text = System::Convert::ToString(a, 8);
	lblShowOp->Text = "";
	listBox1->Items->Add(System::Convert::ToString("Oct(" + b + ")" + "=" + System::Convert::ToString(a, 8)));
}

private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	//x2
	b = Double::Parse(txtDisplay->Text);
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
	listBox1->Items->Add(b + "^2" + "=" + a);
}

private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	//x3
	b = Double::Parse(txtDisplay->Text);
	a = Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text) * Convert::ToDouble(txtDisplay->Text);
	txtDisplay->Text = Convert::ToString(a);
	listBox1->Items->Add(b+"^3" + "=" + a);
}

private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	//1/x
	b = Double::Parse(txtDisplay->Text);
	a = Convert::ToDouble(1.0 / Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
	listBox1->Items->Add("1 /"+ b + "=" + a);
}

private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	//In x
	b = Double::Parse(txtDisplay->Text);
	a = System::Math::Log(Convert::ToDouble(txtDisplay->Text));
	txtDisplay->Text = Convert::ToString(a);
	listBox1->Items->Add(b + "In x =" + a);
}

private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	//%
	b = Double::Parse(txtDisplay->Text);
	a = Convert::ToDouble(txtDisplay->Text) / Convert::ToDouble(100);
	txtDisplay->Text = Convert::ToString(a);
	listBox1->Items->Add(b + "% =" + a);
}

private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	iOperation = 'C';
}

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	iOperation = 'F';
}

private: System::Void Kevin_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	iOperation = 'K';
}

private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (iOperation)
	{
	case'C':
		(float::TryParse(lblConvert->Text, iCelsius));
		txtConvert->Text = ((((9 * iCelsius) / 5) + 32).ToString());;
	break;

	case'F':
		(float::TryParse(lblConvert->Text, iFahrenheit));
		txtConvert->Text = ((((iFahrenheit - 32) * 5) / 9).ToString());
	break;

	case'K':
		(float::TryParse(lblConvert->Text, iKevin));
		txtConvert->Text = (iKevin + 273.15).ToString();
	break;
	}
}

private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	lblConvert->Text = "";
	txtConvert->Text = "";
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
}
};
}
