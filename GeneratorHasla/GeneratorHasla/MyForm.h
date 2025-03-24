#pragma once

namespace GeneratorHasla {

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
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;


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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(571, 97);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(390, 369);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Generowanie has³a";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(111, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 29);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Generuj has³o";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(59, 249);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(145, 24);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Znaki specjalne";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(59, 196);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(70, 24);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Cyfry";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(59, 142);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(163, 24);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Ma³e i wielkie litery";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(223, 53);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 26);
			this->textBox3->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ile znaków\?";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(65, 97);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(350, 369);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dane pracownika";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 26);
			this->textBox1->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Kierownik", L"Starszy Programista", L"M³odszy Programista",
					L"Tester"
			});
			this->comboBox1->Location = System::Drawing::Point(139, 157);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 28);
			this->comboBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Stanowisko";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nazwisko";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Imiê";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(357, 554);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(313, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ZatwierdŸ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1149, 639);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"Dodaj pracownika";

			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		System::String^ haslo;





private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	bool maleLitery = checkBox1->Checked;
	bool cyfry = checkBox2->Checked;
	bool znakiSpecjalne = checkBox3->Checked;

	Random^ rand = gcnew Random();

	
	array<String^>^ maleLiteryTab = gcnew array<String^>{ "abcdefghijklmnopqrstuvwxyz" };
	array<String^>^ wielkieLiteryTab = gcnew array<String^>{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	array<String^>^ cyfryTab = gcnew array<String^>{ "0123456789" };
	array<String^>^ znakiSpecjalneTab = gcnew array<String^>{ "!@#$%^&*()_+-=<>?/" };

	
	int ilosc = Int32::Parse(textBox3->Text);

	
	String^ dostepneZnaki = "";

	if (maleLitery)
		dostepneZnaki += maleLiteryTab[0];
	if (cyfry)
		dostepneZnaki += cyfryTab[0];
	if (znakiSpecjalne)
		dostepneZnaki += znakiSpecjalneTab[0];
	if (checkBox1->Checked)
		dostepneZnaki += wielkieLiteryTab[0];

	
	haslo = "";

	
	if (znakiSpecjalne) {
		
		int specjalnyIndex = rand->Next(znakiSpecjalneTab[0]->Length);
		haslo += znakiSpecjalneTab[0][specjalnyIndex];
		ilosc--; 
	}

	if (cyfry) {
		
		int cyfryIndex = rand->Next(cyfryTab[0]->Length);
		haslo += cyfryTab[0][cyfryIndex];
		ilosc--; 
	}

	
	for (int i = 0; i < ilosc; i++) {
		int index = rand->Next(dostepneZnaki->Length);
		haslo += dostepneZnaki[index];
	}

	
	MessageBox::Show(haslo);
};

		   
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		System::String^ imie = textBox1->Text;
		System::String^ nazwisko = textBox2->Text;
		System::String^ stanowisko = comboBox1->Text;

		
		MessageBox::Show("Dane pracownika: " + imie + " " + nazwisko + " " + stanowisko + " " + haslo);
	}

		   
		   
	};
}