#pragma once

namespace Project3 {

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
			SetupEventHandlers();
		}

		void SetupEventHandlers()
		{
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseMove);
			this->button2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button2_MouseDown);
			this->button3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button3_MouseUp);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &MyForm::button4_MouseEnter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &MyForm::button5_MouseLeave);
			this->button6->MouseHover += gcnew System::EventHandler(this, &MyForm::button6_MouseHover);
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 114);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(289, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 114);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(21, 151);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(222, 118);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(305, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(239, 118);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(32, 299);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(211, 98);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(305, 290);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(233, 106);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 393);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
		}
#pragma endregion

	private: System::Void button1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->button1->Text = "X: " + e->X.ToString() + " Y: " + e->Y.ToString();
	}

	private: System::Void button2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->button2->Text = "X: " + e->X.ToString() + " Y: " + e->Y.ToString();
	}

	private: System::Void button3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->button3->Text = "X: " + e->X.ToString() + " Y: " + e->Y.ToString();
	}

	private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->button4->Text = "Dzia³a!";
	}

	private: System::Void button5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->button5->Text = "Dzia³a!";
	}

	private: System::Void button6_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->button6->Text = "Dzia³a";
	}
	};

}
