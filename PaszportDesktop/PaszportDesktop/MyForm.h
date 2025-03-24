#pragma once

namespace PaszportDesktop {

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
	private: System::Windows::Forms::Label^ labelNumer;
	private: System::Windows::Forms::Label^ labelImie;
	private: System::Windows::Forms::Label^ labelNazwisko;
	private: System::Windows::Forms::TextBox^ textBoxNumer;
	private: System::Windows::Forms::TextBox^ textBoxImie;
	private: System::Windows::Forms::TextBox^ textBoxNazwisko;
	private: System::Windows::Forms::GroupBox^ groupBoxOczy;
	private: System::Windows::Forms::RadioButton^ radioButtonPiwneOczy;
	private: System::Windows::Forms::RadioButton^ radioButtonZieloneOczy;
	private: System::Windows::Forms::RadioButton^ radioButtonNiebieskieOczy;
	private: System::Windows::Forms::PictureBox^ pictureBoxOsoba;
	private: System::Windows::Forms::PictureBox^ pictureBoxOdcisk;
	private: System::Windows::Forms::Button^ buttonOk;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelNumer = (gcnew System::Windows::Forms::Label());
			this->labelImie = (gcnew System::Windows::Forms::Label());
			this->labelNazwisko = (gcnew System::Windows::Forms::Label());
			this->textBoxNumer = (gcnew System::Windows::Forms::TextBox());
			this->textBoxImie = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxOczy = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonPiwneOczy = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonZieloneOczy = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonNiebieskieOczy = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBoxOsoba = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxOdcisk = (gcnew System::Windows::Forms::PictureBox());
			this->buttonOk = (gcnew System::Windows::Forms::Button());
			this->groupBoxOczy->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOsoba))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOdcisk))->BeginInit();
			this->SuspendLayout();
			// 
			// labelNumer
			// 
			this->labelNumer->AutoSize = true;
			this->labelNumer->Location = System::Drawing::Point(73, 64);
			this->labelNumer->Name = L"labelNumer";
			this->labelNumer->Size = System::Drawing::Size(56, 20);
			this->labelNumer->TabIndex = 0;
			this->labelNumer->Text = L"Numer";
			// 
			// labelImie
			// 
			this->labelImie->AutoSize = true;
			this->labelImie->Location = System::Drawing::Point(73, 132);
			this->labelImie->Name = L"labelImie";
			this->labelImie->Size = System::Drawing::Size(39, 20);
			this->labelImie->TabIndex = 1;
			this->labelImie->Text = L"Imi�";
			// 
			// labelNazwisko
			// 
			this->labelNazwisko->AutoSize = true;
			this->labelNazwisko->Location = System::Drawing::Point(73, 213);
			this->labelNazwisko->Name = L"labelNazwisko";
			this->labelNazwisko->Size = System::Drawing::Size(76, 20);
			this->labelNazwisko->TabIndex = 2;
			this->labelNazwisko->Text = L"Nazwisko";
			// 
			// textBoxNumer
			// 
			this->textBoxNumer->BackColor = System::Drawing::Color::Azure;
			this->textBoxNumer->Location = System::Drawing::Point(255, 64);
			this->textBoxNumer->Name = L"textBoxNumer";
			this->textBoxNumer->Size = System::Drawing::Size(137, 26);
			this->textBoxNumer->TabIndex = 3;
			this->textBoxNumer->Leave += gcnew System::EventHandler(this, &MyForm::aktualizacja);
			// 
			// textBoxImie
			// 
			this->textBoxImie->BackColor = System::Drawing::Color::Azure;
			this->textBoxImie->Location = System::Drawing::Point(253, 132);
			this->textBoxImie->Name = L"textBoxImie";
			this->textBoxImie->Size = System::Drawing::Size(139, 26);
			this->textBoxImie->TabIndex = 4;
			// 
			// textBoxNazwisko
			// 
			this->textBoxNazwisko->BackColor = System::Drawing::Color::Azure;
			this->textBoxNazwisko->Location = System::Drawing::Point(253, 210);
			this->textBoxNazwisko->Name = L"textBoxNazwisko";
			this->textBoxNazwisko->Size = System::Drawing::Size(139, 26);
			this->textBoxNazwisko->TabIndex = 5;
			// 
			// groupBoxOczy
			// 
			this->groupBoxOczy->Controls->Add(this->radioButtonPiwneOczy);
			this->groupBoxOczy->Controls->Add(this->radioButtonZieloneOczy);
			this->groupBoxOczy->Controls->Add(this->radioButtonNiebieskieOczy);
			this->groupBoxOczy->Location = System::Drawing::Point(86, 373);
			this->groupBoxOczy->Name = L"groupBoxOczy";
			this->groupBoxOczy->Size = System::Drawing::Size(346, 230);
			this->groupBoxOczy->TabIndex = 6;
			this->groupBoxOczy->TabStop = false;
			this->groupBoxOczy->Text = L"Kolor oczu";
			// 
			// radioButtonPiwneOczy
			// 
			this->radioButtonPiwneOczy->AutoSize = true;
			this->radioButtonPiwneOczy->Location = System::Drawing::Point(30, 191);
			this->radioButtonPiwneOczy->Name = L"radioButtonPiwneOczy";
			this->radioButtonPiwneOczy->Size = System::Drawing::Size(75, 24);
			this->radioButtonPiwneOczy->TabIndex = 2;
			this->radioButtonPiwneOczy->TabStop = true;
			this->radioButtonPiwneOczy->Text = L"piwne";
			this->radioButtonPiwneOczy->UseVisualStyleBackColor = true;
			// 
			// radioButtonZieloneOczy
			// 
			this->radioButtonZieloneOczy->AutoSize = true;
			this->radioButtonZieloneOczy->Location = System::Drawing::Point(30, 122);
			this->radioButtonZieloneOczy->Name = L"radioButtonZieloneOczy";
			this->radioButtonZieloneOczy->Size = System::Drawing::Size(84, 24);
			this->radioButtonZieloneOczy->TabIndex = 1;
			this->radioButtonZieloneOczy->TabStop = true;
			this->radioButtonZieloneOczy->Text = L"zielone";
			this->radioButtonZieloneOczy->UseVisualStyleBackColor = true;
			// 
			// radioButtonNiebieskieOczy
			// 
			this->radioButtonNiebieskieOczy->AutoSize = true;
			this->radioButtonNiebieskieOczy->Checked = true;
			this->radioButtonNiebieskieOczy->Location = System::Drawing::Point(30, 52);
			this->radioButtonNiebieskieOczy->Name = L"radioButtonNiebieskieOczy";
			this->radioButtonNiebieskieOczy->Size = System::Drawing::Size(104, 24);
			this->radioButtonNiebieskieOczy->TabIndex = 0;
			this->radioButtonNiebieskieOczy->TabStop = true;
			this->radioButtonNiebieskieOczy->Text = L"niebieskie";
			this->radioButtonNiebieskieOczy->UseVisualStyleBackColor = true;
			// 
			// pictureBoxOsoba
			// 
			this->pictureBoxOsoba->ImageLocation = L"";
			this->pictureBoxOsoba->Location = System::Drawing::Point(552, 101);
			this->pictureBoxOsoba->Name = L"pictureBoxOsoba";
			this->pictureBoxOsoba->Size = System::Drawing::Size(215, 260);
			this->pictureBoxOsoba->TabIndex = 7;
			this->pictureBoxOsoba->TabStop = false;
			// 
			// pictureBoxOdcisk
			// 
			this->pictureBoxOdcisk->ImageLocation = L"";
			this->pictureBoxOdcisk->Location = System::Drawing::Point(860, 101);
			this->pictureBoxOdcisk->Name = L"pictureBoxOdcisk";
			this->pictureBoxOdcisk->Size = System::Drawing::Size(204, 260);
			this->pictureBoxOdcisk->TabIndex = 8;
			this->pictureBoxOdcisk->TabStop = false;
			// 
			// buttonOk
			// 
			this->buttonOk->BackColor = System::Drawing::Color::Azure;
			this->buttonOk->Location = System::Drawing::Point(659, 495);
			this->buttonOk->Name = L"buttonOk";
			this->buttonOk->Size = System::Drawing::Size(311, 50);
			this->buttonOk->TabIndex = 9;
			this->buttonOk->Text = L"OK";
			this->buttonOk->UseVisualStyleBackColor = false;
			this->buttonOk->Click += gcnew System::EventHandler(this, &MyForm::buttonOk_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(1113, 772);
			this->Controls->Add(this->buttonOk);
			this->Controls->Add(this->pictureBoxOdcisk);
			this->Controls->Add(this->pictureBoxOsoba);
			this->Controls->Add(this->groupBoxOczy);
			this->Controls->Add(this->textBoxNazwisko);
			this->Controls->Add(this->textBoxImie);
			this->Controls->Add(this->textBoxNumer);
			this->Controls->Add(this->labelNazwisko);
			this->Controls->Add(this->labelImie);
			this->Controls->Add(this->labelNumer);
			this->Name = L"MyForm";
			this->Text = L"Wprowadzanie danych do paszportu. Wykona�: 00000000000";
			this->groupBoxOczy->ResumeLayout(false);
			this->groupBoxOczy->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOsoba))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOdcisk))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aktualizacja(System::Object^ sender, System::EventArgs^ e) {
		pictureBoxOsoba->ImageLocation = textBoxNumer->Text + "-zdjecie.png";
		pictureBoxOdcisk->ImageLocation = textBoxNumer->Text + "-odcisk.png";
	}
	private: System::Void buttonOk_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ kolorOczu = nullptr;
		if (radioButtonNiebieskieOczy->Checked) {
			kolorOczu = radioButtonNiebieskieOczy->Text;
		}
		if (radioButtonZieloneOczy->Checked) {
			kolorOczu = radioButtonZieloneOczy->Text;
		}
		if (radioButtonPiwneOczy->Checked) {
			kolorOczu = radioButtonPiwneOczy->Text;
		}

		if (textBoxNumer->Text->Length > 0) {
			if (textBoxImie->Text->Length > 0) {
				if (textBoxNazwisko->Text->Length > 0) {
					MessageBox::Show(textBoxNumer->Text + " " + textBoxImie->Text + " kolor oczu " + kolorOczu);
				}
				else {
					MessageBox::Show("Wprowad� dane");
				}
			}
			else {
				MessageBox::Show("Wprowad� dane");
			}
		}
	}
	};
}