#pragma once

namespace kalkulātors {

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

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;



	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;



	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnSub;




	private: System::Windows::Forms::Button^ btn0;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::TextBox^ txtDisplay;

	protected:


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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button4->Location = System::Drawing::Point(261, 101);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 77);
			this->button4->TabIndex = 4;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->Location = System::Drawing::Point(12, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 77);
			this->button1->TabIndex = 5;
			this->button1->Text = L"";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button2->Location = System::Drawing::Point(95, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 77);
			this->button2->TabIndex = 6;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button3->Location = System::Drawing::Point(178, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 77);
			this->button3->TabIndex = 7;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn7->Location = System::Drawing::Point(12, 184);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(77, 77);
			this->btn7->TabIndex = 8;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn8->Location = System::Drawing::Point(95, 184);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(77, 77);
			this->btn8->TabIndex = 9;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn9->Location = System::Drawing::Point(178, 184);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(77, 77);
			this->btn9->TabIndex = 10;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button8->Location = System::Drawing::Point(261, 184);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 77);
			this->button8->TabIndex = 11;
			this->button8->Text = L"÷";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn4->Location = System::Drawing::Point(12, 267);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(77, 77);
			this->btn4->TabIndex = 12;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn5->Location = System::Drawing::Point(95, 267);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(77, 77);
			this->btn5->TabIndex = 13;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn6->Location = System::Drawing::Point(178, 267);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(77, 77);
			this->btn6->TabIndex = 14;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button12->Location = System::Drawing::Point(261, 267);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(77, 77);
			this->button12->TabIndex = 15;
			this->button12->Text = L"x";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn1->Location = System::Drawing::Point(12, 350);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(77, 77);
			this->btn1->TabIndex = 16;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn2->Location = System::Drawing::Point(95, 350);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(77, 77);
			this->btn2->TabIndex = 17;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn3->Location = System::Drawing::Point(178, 350);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(77, 77);
			this->btn3->TabIndex = 18;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btnSub->Location = System::Drawing::Point(261, 350);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(77, 77);
			this->btnSub->TabIndex = 19;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btn0->Location = System::Drawing::Point(12, 433);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(77, 77);
			this->btn0->TabIndex = 20;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::NumberOnly);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button18->Location = System::Drawing::Point(95, 433);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(77, 77);
			this->button18->TabIndex = 21;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->button19->Location = System::Drawing::Point(178, 433);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(77, 77);
			this->button19->TabIndex = 22;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->btnAdd->Location = System::Drawing::Point(261, 433);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(77, 77);
			this->btnAdd->TabIndex = 23;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->txtDisplay->Location = System::Drawing::Point(12, 38);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->ReadOnly = true;
			this->txtDisplay->Size = System::Drawing::Size(326, 44);
			this->txtDisplay->TabIndex = 24;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			this->txtDisplay->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtDisplay_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 532);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Name = L"MyForm";
			this->Text = L"Kalkulātors";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::ArithmeticOP);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		double firstnum, Secondnum, answer;
		String^ charOP;



private: System::Void NumberOnly(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numb = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numb->Text;
	}
	else {
		txtDisplay->Text = txtDisplay->Text + Numb->Text;
	};
}
private: System::Void ArithmeticOP(System::Object^ sender, System::EventArgs^ e) {

	Button^ Aop = safe_cast<Button^>(sender);
	firstnum = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	charOP = Aop->Text;;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
	
}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(",")) {
		txtDisplay->Text = txtDisplay->Text + ",";
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0){
		txtDisplay->Text = txtDisplay->Text ->Remove(txtDisplay->Text->Length -1, 1);
	}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text == "") {
		txtDisplay->Text =  "0";
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;

	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	Secondnum = double::Parse(txtDisplay->Text);

	if (charOP == "+") {
		answer = firstnum + Secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
	else if (charOP == "-"){
		answer = firstnum - Secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}

	else if (charOP == "x") {
		answer = firstnum * Secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}

	else if (charOP == "÷") {
		answer = firstnum / Secondnum;
		txtDisplay->Text = System::Convert::ToString(answer);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtDisplay_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (e->KeyChar == '.') {
		if (this->txtDisplay->Text->Contains(".") && !this->txtDisplay->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Allow negative numbers
	else if (e->KeyChar == '-' && !(this->txtDisplay->Text->Contains("-"))) {
		e->Handled = true;
		txtDisplay->Text = "-" + txtDisplay->Text;
	}

	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}

}
};
}

