#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	private: System::Windows::Forms::Button^ btnClr;
	private: System::Windows::Forms::Button^ btnMod;


	private: System::Windows::Forms::Button^ btnSign;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btnMul;





	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btnSub;




	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btnAdd;




	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnEq;



	private: System::Windows::Forms::Button^ btnDec;



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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnClr = (gcnew System::Windows::Forms::Button());
			this->btnMod = (gcnew System::Windows::Forms::Button());
			this->btnSign = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnEq = (gcnew System::Windows::Forms::Button());
			this->btnDec = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::MenuText;
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::SystemColors::Window;
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(298, 60);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnClr
			// 
			this->btnClr->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClr->Location = System::Drawing::Point(12, 78);
			this->btnClr->Name = L"btnClr";
			this->btnClr->Size = System::Drawing::Size(70, 70);
			this->btnClr->TabIndex = 1;
			this->btnClr->Text = L"C";
			this->btnClr->UseVisualStyleBackColor = true;
			this->btnClr->Click += gcnew System::EventHandler(this, &MyForm::btnClr_Click);
			// 
			// btnMod
			// 
			this->btnMod->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMod->Location = System::Drawing::Point(164, 78);
			this->btnMod->Name = L"btnMod";
			this->btnMod->Size = System::Drawing::Size(70, 70);
			this->btnMod->TabIndex = 1;
			this->btnMod->Text = L"%";
			this->btnMod->UseVisualStyleBackColor = true;
			this->btnMod->Click += gcnew System::EventHandler(this, &MyForm::eChosen);
			// 
			// btnSign
			// 
			this->btnSign->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSign->Location = System::Drawing::Point(88, 78);
			this->btnSign->Name = L"btnSign";
			this->btnSign->Size = System::Drawing::Size(70, 70);
			this->btnSign->TabIndex = 1;
			this->btnSign->Text = L"+/-";
			this->btnSign->UseVisualStyleBackColor = true;
			this->btnSign->Click += gcnew System::EventHandler(this, &MyForm::btnSign_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::DarkOrange;
			this->btnDiv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDiv->Location = System::Drawing::Point(240, 78);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(70, 70);
			this->btnDiv->TabIndex = 1;
			this->btnDiv->Text = L"?";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::opChosen);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn7->Location = System::Drawing::Point(12, 154);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(70, 70);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn8->Location = System::Drawing::Point(88, 154);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(70, 70);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btnMul
			// 
			this->btnMul->BackColor = System::Drawing::Color::DarkOrange;
			this->btnMul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMul->Location = System::Drawing::Point(240, 154);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(70, 70);
			this->btnMul->TabIndex = 1;
			this->btnMul->Text = L"?";
			this->btnMul->UseVisualStyleBackColor = false;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm::opChosen);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn9->Location = System::Drawing::Point(164, 154);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(70, 70);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn4->Location = System::Drawing::Point(12, 230);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(70, 70);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn5->Location = System::Drawing::Point(88, 230);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(70, 70);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::Color::DarkOrange;
			this->btnSub->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnSub->Location = System::Drawing::Point(240, 230);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(70, 70);
			this->btnSub->TabIndex = 1;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::opChosen);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn6->Location = System::Drawing::Point(164, 230);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(70, 70);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn1->Location = System::Drawing::Point(12, 306);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(70, 70);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn2->Location = System::Drawing::Point(88, 306);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(70, 70);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::DarkOrange;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAdd->Location = System::Drawing::Point(240, 306);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(70, 70);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::opChosen);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn3->Location = System::Drawing::Point(164, 306);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(70, 70);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn0->Location = System::Drawing::Point(12, 382);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(146, 70);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::numChosen);
			// 
			// btnEq
			// 
			this->btnEq->BackColor = System::Drawing::Color::DarkOrange;
			this->btnEq->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEq->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEq->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEq->Location = System::Drawing::Point(240, 382);
			this->btnEq->Name = L"btnEq";
			this->btnEq->Size = System::Drawing::Size(70, 70);
			this->btnEq->TabIndex = 1;
			this->btnEq->Text = L"=";
			this->btnEq->UseVisualStyleBackColor = false;
			this->btnEq->Click += gcnew System::EventHandler(this, &MyForm::btnEq_Click);
			// 
			// btnDec
			// 
			this->btnDec->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDec->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDec->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDec->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDec->Location = System::Drawing::Point(164, 382);
			this->btnDec->Name = L"btnDec";
			this->btnDec->Size = System::Drawing::Size(70, 70);
			this->btnDec->TabIndex = 1;
			this->btnDec->Text = L".";
			this->btnDec->UseVisualStyleBackColor = false;
			this->btnDec->Click += gcnew System::EventHandler(this, &MyForm::btnDec_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(321, 462);
			this->Controls->Add(this->btnDec);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnMod);
			this->Controls->Add(this->btnEq);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnSign);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnClr);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Initializing variables needed to make the calculation
		double first, second, result;
		String^ currop;

private: System::Void numChosen(System::Object^ sender, System::EventArgs^ e) {
	Button^ num = safe_cast<Button^>(sender); //'num' is the number that was clicked on
	if (txtDisplay->Text == "0") { //if starting calculation replace our holding value which is 0
		txtDisplay->Text = num->Text;
	}
	else {
		txtDisplay->Text += num->Text;	 //else add the next number to our string to form the number the user wants
	}
}

private: System::Void opChosen(System::Object^ sender, System::EventArgs^ e) {
	Button^ op = safe_cast<Button^>(sender); //'op' is the operator that was clicked on
	first = Double::Parse(txtDisplay->Text); //Save current number displayed to our variable
	txtDisplay->Text = ""; //Clear display for next number
	currop = op->Text; //storing the operator
}

private: System::Void btnDec_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(".")) { //if our display does not contain '.', then we can add one
		txtDisplay->Text += ".";
	}
}

private: System::Void btnEq_Click(System::Object^ sender, System::EventArgs^ e) {
	second = Double::Parse(txtDisplay->Text);
	if(currop == "+") {
		result = first + second;
		txtDisplay->Text = Convert::ToString(result);
	}
	else if(currop == "-") {
		result = first - second;
		txtDisplay->Text = Convert::ToString(result);
	}
	else if (currop == "?") {
		result = first * second;
		txtDisplay->Text = Convert::ToString(result);
	}
	else if (currop == "?") {
		result = first / second;
		txtDisplay->Text = Convert::ToString(result);
	}
	else {
		txtDisplay->Text = "OPERATOR ERROR";
	}

	
}
private: System::Void eChosen(System::Object^ sender, System::EventArgs^ e) {
	first = Double::Parse(txtDisplay->Text);
	result = first / 100;
	txtDisplay->Text = Convert::ToString(result);
}
private: System::Void btnClr_Click(System::Object^ sender, System::EventArgs^ e) {
	first = 0;
	second = 0;
	txtDisplay->Text = "0";
}
private: System::Void btnSign_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
};
}
