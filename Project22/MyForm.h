#pragma once
#include <cliext/vector>
#include <msclr\marshal_cppstd.h>
namespace Project22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Button^ myButton;
		Timer^ hoverTimer;
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ number1;
	private: System::Windows::Forms::TextBox^ number2;
	private: System::Windows::Forms::Button^ dodaj;

	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ razy;
	private: System::Windows::Forms::Button^ dziel;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->number1 = (gcnew System::Windows::Forms::TextBox());
			this->number2 = (gcnew System::Windows::Forms::TextBox());
			this->dodaj = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->razy = (gcnew System::Windows::Forms::Button());
			this->dziel = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(289, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Op";
			// 
			// number1
			// 
			this->number1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->number1->Location = System::Drawing::Point(74, 57);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(155, 57);
			this->number1->TabIndex = 1;
			this->number1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::number1_KeyPress);
			// 
			// number2
			// 
			this->number2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->number2->Location = System::Drawing::Point(443, 57);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(161, 57);
			this->number2->TabIndex = 2;
			this->number2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::number2_KeyPress);
			// 
			// dodaj
			// 
			this->dodaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dodaj->Location = System::Drawing::Point(298, 177);
			this->dodaj->Name = L"dodaj";
			this->dodaj->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dodaj->Size = System::Drawing::Size(85, 82);
			this->dodaj->TabIndex = 3;
			this->dodaj->Text = L"+";
			this->dodaj->UseVisualStyleBackColor = true;
			//this->dodaj->MouseHover += gcnew System::EventHandler(this, &MainForm::dodaj_MouseHover);
			this->dodaj->MouseEnter += gcnew EventHandler(this, &MyForm::dodaj_MouseEnter);
			this->dodaj->MouseLeave += gcnew EventHandler(this, &MyForm::OnButtonMouseLeave);
			this->hoverTimer = gcnew Timer();
			this->hoverTimer->Interval = 2000; // 2000 ms = 2 sekundy
			

			this->hoverTimer->Tick += gcnew EventHandler(this, &MyForm::OnHoverTimerTick);
			this->Controls->Add(this->dodaj);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->minus->ForeColor = System::Drawing::Color::Blue;
			this->minus->Location = System::Drawing::Point(298, 285);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(85, 84);
			this->minus->TabIndex = 4;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->MouseLeave += gcnew System::EventHandler(this, &MyForm::minus_MouseLeave);
			// 
			// razy
			// 
			this->razy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->razy->Location = System::Drawing::Point(298, 401);
			this->razy->Name = L"razy";
			this->razy->Size = System::Drawing::Size(85, 80);
			this->razy->TabIndex = 5;
			this->razy->Text = L"x";
			this->razy->UseVisualStyleBackColor = true;
			
			this->razy->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::razy_MouseMove);
			// 
			// dziel
			// 
			this->dziel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->dziel->ForeColor = System::Drawing::Color::Blue;
			this->dziel->Location = System::Drawing::Point(298, 521);
			this->dziel->Name = L"dziel";
			this->dziel->Size = System::Drawing::Size(85, 78);
			this->dziel->TabIndex = 6;
			this->dziel->Text = L"/";
			this->dziel->UseVisualStyleBackColor = true;
			this->dziel->Click += gcnew System::EventHandler(this, &MyForm::dziel_Click);
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->result->Location = System::Drawing::Point(446, 177);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(72, 25);
			this->result->TabIndex = 7;
			this->result->Text = L"Result";
			this->result->MouseEnter += gcnew System::EventHandler(this, &MyForm::result_MouseEnter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 8;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 686);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->result);
			this->Controls->Add(this->dziel);
			this->Controls->Add(this->razy);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->dodaj);
			this->Controls->Add(this->number2);
			this->Controls->Add(this->number1);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	
		private: System::Void dziel_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(number1->Text) / System::Convert::ToInt16(number2->Text);

		String^ firstNumber = this->number1->Text;
		String^ secondNumber = this->number2->Text;

		result->Text = firstNumber + " / " + secondNumber + " = " + System::Convert::ToString(output);
	}

	private: System::Void result_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->result->Text = "";

	}

	private: System::Void minus_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(number1->Text) - System::Convert::ToInt16(number2->Text);

		String^ firstNumber = this->number1->Text;
		String^ secondNumber = this->number2->Text;

		result->Text = firstNumber + " - " + secondNumber + " = " + System::Convert::ToString(output);

	}
	private: System::Void number1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			e->Handled = true;  // Zablokuj wprowadzenie znaku
			label2->Text = "Proszê podaæ tylko liczby!";
		}
		else {
			label2->Text = "";  // Czyœci komunikat, jeœli u¿ytkownik wpisuje cyfrê
		}
	}
	private: System::Void number2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			e->Handled = true;  // Zablokuj wprowadzenie znaku
			label2->Text = "Proszê podaæ tylko liczby!";
		}
		else {
			label2->Text = "";  // Czyœci komunikat, jeœli u¿ytkownik wpisuje cyfrê
		}
	}
	private: System::Void razy_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (e->X.ToString() == "30" && e->Y.ToString() == "30")
		{
			int output = System::Convert::ToInt16(number1->Text) * System::Convert::ToInt16(number2->Text);

			String^ firstNumber = this->number1->Text;
			String^ secondNumber = this->number2->Text;

			result->Text = firstNumber + " x " + secondNumber + " = " + System::Convert::ToString(output);
		}
	}
		   void dodaj_MouseEnter(Object^ sender, EventArgs^ e)
		   {
			   this->hoverTimer->Start();
		   }

		   void OnButtonMouseLeave(Object^ sender, EventArgs^ e)
		   {
			   this->hoverTimer->Stop();
			   this->hoverTimer->Tag = nullptr;
		   }

		   void OnHoverTimerTick(Object^ sender, EventArgs^ e)
		   {
			   int output = System::Convert::ToInt16(number1->Text) + System::Convert::ToInt16(number2->Text);

			   String^ firstNumber = this->number1->Text;
			   String^ secondNumber = this->number2->Text;

			   String^ result = firstNumber + " + " + secondNumber + " = " + System::Convert::ToString(output);
			   this->hoverTimer->Stop();
			   MessageBox::Show(result);
		   }
	};
}