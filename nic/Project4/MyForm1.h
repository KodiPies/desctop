#pragma once

namespace EventListener {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ box;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	protected:

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
			this->label = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->box = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label->Location = System::Drawing::Point(12, 9);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(10, 82);
			this->label->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 89);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::button1_MouseDown);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MainForm::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MainForm::button1_MouseLeave);
			this->button1->MouseHover += gcnew System::EventHandler(this, &MainForm::button1_MouseHover);
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::button1_MouseMove);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::button1_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 422);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label1_MouseUp);
			// 
			// box
			// 
			this->box->Location = System::Drawing::Point(202, 156);
			this->box->Name = L"box";
			this->box->Size = System::Drawing::Size(126, 26);
			this->box->TabIndex = 3;
			this->box->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::box_KeyDown);
			this->box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::box_KeyPress);
			this->box->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::box_KeyUp);
			this->box->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &MainForm::box_PreviewKeyDown);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 257);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"label5";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 628);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->box);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label->Text = "X: " + e->X.ToString() + " Y: " + e->Y.ToString();
	}

	private: System::Void button1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label1->Text = "przycisk myszy zostal wcisniety";
	}

	private: System::Void label1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
	private: System::Void button1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label1->Text = "przycisk myszy zostal zwolniony";
	}
	private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "wskaŸnik myszy wszedl w obszar buttona";
	}
	private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "wskaznik myszy opuscil obszar buttona";
	}
	private: System::Void button1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "wskaŸnik myszy pozostaje nad kontrolk¹ przez okreœlony czas.";
	}
	private: System::Void box_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		this->label2->Text = "alt pressed: " + e->Alt.ToString();
	}
	private: System::Void box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		this->label3->Text = "Key pressed: " + e->KeyChar.ToString();
	}
	private: System::Void box_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		this->label4->Text = "shift pressed: " + e->Shift;
	}

	private: System::Void box_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) {
		this->label5->Text = "Hash Code: " + e->GetHashCode();
	}
	};
}