#pragma once

namespace calculator {

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
	private: System::Windows::Forms::Button^ butSpace;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ butClear;
	private: System::Windows::Forms::Button^ butClearEntry;
	protected:

	protected:



	private: System::Windows::Forms::Button^ butPlusMinus;

	private: System::Windows::Forms::Button^ butAdd;

	private: System::Windows::Forms::Button^ butDigit9;

	private: System::Windows::Forms::Button^ butDigit8;

	private: System::Windows::Forms::Button^ butDigit7;
	private: System::Windows::Forms::Button^ butMinus;



	private: System::Windows::Forms::Button^ butDigit6;

	private: System::Windows::Forms::Button^ butDigit5;

	private: System::Windows::Forms::Button^ butDigit4;
	private: System::Windows::Forms::Button^ butMultiply;


	private: System::Windows::Forms::Button^ butDigit3;

	private: System::Windows::Forms::Button^ butDigit2;

	private: System::Windows::Forms::Button^ butDigit1;
	private: System::Windows::Forms::Button^ butDivide;


	private: System::Windows::Forms::Button^ butEqual;
	private: System::Windows::Forms::Button^ butDecimal;




	private: System::Windows::Forms::Button^ butDigit0;


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
			this->butSpace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->butClear = (gcnew System::Windows::Forms::Button());
			this->butClearEntry = (gcnew System::Windows::Forms::Button());
			this->butPlusMinus = (gcnew System::Windows::Forms::Button());
			this->butAdd = (gcnew System::Windows::Forms::Button());
			this->butDigit9 = (gcnew System::Windows::Forms::Button());
			this->butDigit8 = (gcnew System::Windows::Forms::Button());
			this->butDigit7 = (gcnew System::Windows::Forms::Button());
			this->butMinus = (gcnew System::Windows::Forms::Button());
			this->butDigit6 = (gcnew System::Windows::Forms::Button());
			this->butDigit5 = (gcnew System::Windows::Forms::Button());
			this->butDigit4 = (gcnew System::Windows::Forms::Button());
			this->butMultiply = (gcnew System::Windows::Forms::Button());
			this->butDigit3 = (gcnew System::Windows::Forms::Button());
			this->butDigit2 = (gcnew System::Windows::Forms::Button());
			this->butDigit1 = (gcnew System::Windows::Forms::Button());
			this->butDivide = (gcnew System::Windows::Forms::Button());
			this->butEqual = (gcnew System::Windows::Forms::Button());
			this->butDecimal = (gcnew System::Windows::Forms::Button());
			this->butDigit0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// butSpace
			// 
			this->butSpace->Font = (gcnew System::Drawing::Font(L"Wingdings", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->butSpace->Location = System::Drawing::Point(23, 124);
			this->butSpace->Name = L"butSpace";
			this->butSpace->Size = System::Drawing::Size(80, 80);
			this->butSpace->TabIndex = 0;
			this->butSpace->Text = L"";
			this->butSpace->UseVisualStyleBackColor = true;
			this->butSpace->Click += gcnew System::EventHandler(this, &MyForm::butSpace_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 25);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtDisplay->Size = System::Drawing::Size(347, 63);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// butClear
			// 
			this->butClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butClear->Location = System::Drawing::Point(107, 124);
			this->butClear->Name = L"butClear";
			this->butClear->Size = System::Drawing::Size(80, 80);
			this->butClear->TabIndex = 2;
			this->butClear->Text = L"C";
			this->butClear->UseVisualStyleBackColor = true;
			this->butClear->Click += gcnew System::EventHandler(this, &MyForm::butClear_Click);
			// 
			// butClearEntry
			// 
			this->butClearEntry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butClearEntry->Location = System::Drawing::Point(193, 124);
			this->butClearEntry->Name = L"butClearEntry";
			this->butClearEntry->Size = System::Drawing::Size(80, 80);
			this->butClearEntry->TabIndex = 3;
			this->butClearEntry->Text = L"CE";
			this->butClearEntry->UseVisualStyleBackColor = true;
			this->butClearEntry->Click += gcnew System::EventHandler(this, &MyForm::butClearEntry_Click);
			// 
			// butPlusMinus
			// 
			this->butPlusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butPlusMinus->Location = System::Drawing::Point(279, 124);
			this->butPlusMinus->Name = L"butPlusMinus";
			this->butPlusMinus->Size = System::Drawing::Size(80, 80);
			this->butPlusMinus->TabIndex = 4;
			this->butPlusMinus->Text = L"±";
			this->butPlusMinus->UseVisualStyleBackColor = true;
			this->butPlusMinus->Click += gcnew System::EventHandler(this, &MyForm::butPlusMinus_Click);
			// 
			// butAdd
			// 
			this->butAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butAdd->Location = System::Drawing::Point(279, 210);
			this->butAdd->Name = L"butAdd";
			this->butAdd->Size = System::Drawing::Size(80, 80);
			this->butAdd->TabIndex = 8;
			this->butAdd->Text = L"+";
			this->butAdd->UseVisualStyleBackColor = true;
			this->butAdd->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// butDigit9
			// 
			this->butDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit9->Location = System::Drawing::Point(193, 210);
			this->butDigit9->Name = L"butDigit9";
			this->butDigit9->Size = System::Drawing::Size(80, 80);
			this->butDigit9->TabIndex = 7;
			this->butDigit9->Text = L"9";
			this->butDigit9->UseVisualStyleBackColor = true;
			this->butDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butDigit8
			// 
			this->butDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit8->Location = System::Drawing::Point(107, 210);
			this->butDigit8->Name = L"butDigit8";
			this->butDigit8->Size = System::Drawing::Size(80, 80);
			this->butDigit8->TabIndex = 6;
			this->butDigit8->Text = L"8";
			this->butDigit8->UseVisualStyleBackColor = true;
			this->butDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butDigit7
			// 
			this->butDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit7->Location = System::Drawing::Point(23, 210);
			this->butDigit7->Name = L"butDigit7";
			this->butDigit7->Size = System::Drawing::Size(80, 80);
			this->butDigit7->TabIndex = 5;
			this->butDigit7->Text = L"7";
			this->butDigit7->UseVisualStyleBackColor = true;
			this->butDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butMinus
			// 
			this->butMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butMinus->Location = System::Drawing::Point(279, 296);
			this->butMinus->Name = L"butMinus";
			this->butMinus->Size = System::Drawing::Size(80, 80);
			this->butMinus->TabIndex = 12;
			this->butMinus->Text = L"-";
			this->butMinus->UseVisualStyleBackColor = true;
			this->butMinus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// butDigit6
			// 
			this->butDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit6->Location = System::Drawing::Point(193, 296);
			this->butDigit6->Name = L"butDigit6";
			this->butDigit6->Size = System::Drawing::Size(80, 80);
			this->butDigit6->TabIndex = 11;
			this->butDigit6->Text = L"6";
			this->butDigit6->UseVisualStyleBackColor = true;
			this->butDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butDigit5
			// 
			this->butDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit5->Location = System::Drawing::Point(107, 296);
			this->butDigit5->Name = L"butDigit5";
			this->butDigit5->Size = System::Drawing::Size(80, 80);
			this->butDigit5->TabIndex = 10;
			this->butDigit5->Text = L"5";
			this->butDigit5->UseVisualStyleBackColor = true;
			this->butDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butDigit4
			// 
			this->butDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit4->Location = System::Drawing::Point(23, 296);
			this->butDigit4->Name = L"butDigit4";
			this->butDigit4->Size = System::Drawing::Size(80, 80);
			this->butDigit4->TabIndex = 9;
			this->butDigit4->Text = L"4";
			this->butDigit4->UseVisualStyleBackColor = true;
			this->butDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butMultiply
			// 
			this->butMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butMultiply->Location = System::Drawing::Point(279, 382);
			this->butMultiply->Name = L"butMultiply";
			this->butMultiply->Size = System::Drawing::Size(80, 80);
			this->butMultiply->TabIndex = 16;
			this->butMultiply->Text = L"*";
			this->butMultiply->UseVisualStyleBackColor = true;
			this->butMultiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// butDigit3
			// 
			this->butDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit3->Location = System::Drawing::Point(193, 382);
			this->butDigit3->Name = L"butDigit3";
			this->butDigit3->Size = System::Drawing::Size(80, 80);
			this->butDigit3->TabIndex = 15;
			this->butDigit3->Text = L"3";
			this->butDigit3->UseVisualStyleBackColor = true;
			this->butDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butDigit2
			// 
			this->butDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit2->Location = System::Drawing::Point(107, 382);
			this->butDigit2->Name = L"butDigit2";
			this->butDigit2->Size = System::Drawing::Size(80, 80);
			this->butDigit2->TabIndex = 14;
			this->butDigit2->Text = L"2";
			this->butDigit2->UseVisualStyleBackColor = true;
			this->butDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butDigit1
			// 
			this->butDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit1->Location = System::Drawing::Point(23, 382);
			this->butDigit1->Name = L"butDigit1";
			this->butDigit1->Size = System::Drawing::Size(80, 80);
			this->butDigit1->TabIndex = 13;
			this->butDigit1->Text = L"1";
			this->butDigit1->UseVisualStyleBackColor = true;
			this->butDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// butDivide
			// 
			this->butDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDivide->Location = System::Drawing::Point(279, 468);
			this->butDivide->Name = L"butDivide";
			this->butDivide->Size = System::Drawing::Size(80, 80);
			this->butDivide->TabIndex = 20;
			this->butDivide->Text = L"/";
			this->butDivide->UseVisualStyleBackColor = true;
			this->butDivide->Click += gcnew System::EventHandler(this, &MyForm::EnterOperators);
			// 
			// butEqual
			// 
			this->butEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butEqual->Location = System::Drawing::Point(193, 468);
			this->butEqual->Name = L"butEqual";
			this->butEqual->Size = System::Drawing::Size(80, 80);
			this->butEqual->TabIndex = 19;
			this->butEqual->Text = L"=";
			this->butEqual->UseVisualStyleBackColor = true;
			this->butEqual->Click += gcnew System::EventHandler(this, &MyForm::butEqual_Click);
			// 
			// butDecimal
			// 
			this->butDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDecimal->Location = System::Drawing::Point(107, 468);
			this->butDecimal->Name = L"butDecimal";
			this->butDecimal->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->butDecimal->Size = System::Drawing::Size(80, 80);
			this->butDecimal->TabIndex = 18;
			this->butDecimal->Text = L".";
			this->butDecimal->UseVisualStyleBackColor = true;
			this->butDecimal->Click += gcnew System::EventHandler(this, &MyForm::butDecimal_Click);
			// 
			// butDigit0
			// 
			this->butDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butDigit0->Location = System::Drawing::Point(23, 468);
			this->butDigit0->Name = L"butDigit0";
			this->butDigit0->Size = System::Drawing::Size(80, 80);
			this->butDigit0->TabIndex = 17;
			this->butDigit0->Text = L"0";
			this->butDigit0->UseVisualStyleBackColor = true;
			this->butDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 587);
			this->Controls->Add(this->butDivide);
			this->Controls->Add(this->butEqual);
			this->Controls->Add(this->butDecimal);
			this->Controls->Add(this->butDigit0);
			this->Controls->Add(this->butMultiply);
			this->Controls->Add(this->butDigit3);
			this->Controls->Add(this->butDigit2);
			this->Controls->Add(this->butDigit1);
			this->Controls->Add(this->butMinus);
			this->Controls->Add(this->butDigit6);
			this->Controls->Add(this->butDigit5);
			this->Controls->Add(this->butDigit4);
			this->Controls->Add(this->butAdd);
			this->Controls->Add(this->butDigit9);
			this->Controls->Add(this->butDigit8);
			this->Controls->Add(this->butDigit7);
			this->Controls->Add(this->butPlusMinus);
			this->Controls->Add(this->butClearEntry);
			this->Controls->Add(this->butClear);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->butSpace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if ( txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}
}
private: System::Void EnterOperators(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);

	txtDisplay->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void butDecimal_Click(System::Object^ sender, System::EventArgs^ e) {

	if (!txtDisplay->Text->Contains("."))
	{
		txtDisplay->Text = txtDisplay->Text + ".";
	}
} 

private: System::Void butEqual_Click(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = Double::Parse(txtDisplay->Text);
	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit /secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	   
}
private: System::Void butClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void butClearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void butPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);

	}
	else
	{
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void butSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}

	if (txtDisplay->Text =="")
	{
		txtDisplay->Text = "0";
	}
} 
};
}
