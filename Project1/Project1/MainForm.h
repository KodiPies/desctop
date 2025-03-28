#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Label^ lbFirstName;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::Label^ lbLastName;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ lbWelcome;
	protected:

	protected:




	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;


	private: System::Windows::Forms::Button^ button2;

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
			this->lbFirstName = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lbLastName = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbFirstName
			// 
			this->lbFirstName->AutoSize = true;
			this->lbFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lbFirstName->Location = System::Drawing::Point(2, 66);
			this->lbFirstName->Name = L"lbFirstName";
			this->lbFirstName->Size = System::Drawing::Size(94, 20);
			this->lbFirstName->TabIndex = 0;
			this->lbFirstName->Text = L"Firts name";
			this->lbFirstName->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// tbFirstName
			// 
			this->tbFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFirstName->Location = System::Drawing::Point(4, 89);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(455, 26);
			this->tbFirstName->TabIndex = 1;
			// 
			// lbLastName
			// 
			this->lbLastName->AutoSize = true;
			this->lbLastName->Location = System::Drawing::Point(12, 173);
			this->lbLastName->Name = L"lbLastName";
			this->lbLastName->Size = System::Drawing::Size(84, 20);
			this->lbLastName->TabIndex = 2;
			this->lbLastName->Text = L"Last name";
			// 
			// tbLastName
			// 
			this->tbLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbLastName->Location = System::Drawing::Point(12, 196);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(447, 26);
			this->tbLastName->TabIndex = 3;
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Location = System::Drawing::Point(23, 266);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(51, 20);
			this->lbWelcome->TabIndex = 4;
			this->lbWelcome->Text = L"label3";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnOK, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 429);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(455, 57);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(221, 51);
			this->btnOK->TabIndex = 6;
			this->btnOK->Text = L"ok";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MainForm::btnOK_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(230, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 51);
			this->button2->TabIndex = 7;
			this->button2->Text = L"clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(469, 498);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->lbLastName);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->lbFirstName);
			this->MinimumSize = System::Drawing::Size(491, 554);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbFirstName->Text = "";
		this->tbLastName->Text = "";
		this->lbWelcome->Text = "";

	}
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = this->tbFirstName->Text;
	String^ lastName = this->tbLastName->Text;

	this->lbWelcome->Text = "Hello " + firstName + " " + lastName;
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->lbWelcome->Text = "";
}
};
}
