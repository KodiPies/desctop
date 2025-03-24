#pragma once

namespace Zegar {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::Label^ timeLabel;  // Label do wy�wietlania czasu
        System::Windows::Forms::Timer^ timer;  // Timer, kt�ry b�dzie od�wie�a� czas

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->SuspendLayout();

            // Tworzenie etykiety do wy�wietlania czasu
            this->timeLabel = gcnew System::Windows::Forms::Label();
            this->timeLabel->Location = System::Drawing::Point(50, 50);
            this->timeLabel->Size = System::Drawing::Size(200, 40);
            this->timeLabel->Font = gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular);
            this->timeLabel->Text = L"00:00:00";  // Pocz�tkowy czas
            this->Controls->Add(this->timeLabel);

            // Tworzenie Timera
            this->timer = gcnew System::Windows::Forms::Timer();
            this->timer->Interval = 5000;  // Ustawiamy interwa� na 5000 ms (5 sekund)
            this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
            this->timer->Start();

            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(278, 244);
            this->Name = L"MyForm";
            this->Text = L"Zegar";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
        }
#pragma endregion

    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        
    }

           // Funkcja, kt�ra b�dzie wywo�ywana co 5 sekund przez Timer
    private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
        DateTime now = DateTime::Now;  // Pobieramy bie��cy czas
        this->timeLabel->Text = now.ToString("HH:mm:ss");  // Aktualizujemy tekst w Label
    }
    };
}
