#pragma once
#include "MyFormOpt.h"
#include "Rodzaj_Zwierza.h"
#include "iostream"
#include "regs.h"

namespace PrRej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormOpt
	/// </summary>
	public ref class MyFormOpt : public System::Windows::Forms::Form
	{
	public:
		MyFormOpt(user_data^ data)
		{
			InitializeComponent();
			this->data=data;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFormOpt()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label1;

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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(536, 240);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 110);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Kupowanie lęków";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormOpt::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(418, 240);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 110);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Eutanazja";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormOpt::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(300, 240);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(112, 110);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Czyszczenie zębów";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyFormOpt::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(182, 240);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 110);
			this->button9->TabIndex = 20;
			this->button9->Text = L"Nefrologia";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyFormOpt::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(64, 240);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 110);
			this->button10->TabIndex = 19;
			this->button10->Text = L"Badanie lekarskie ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyFormOpt::button10_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(536, 114);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 110);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Otrzymywanie paszportu weterynaryjnego";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormOpt::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(418, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 110);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Odpryskiwanie";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormOpt::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(300, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 110);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Kardiologia";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormOpt::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(182, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 110);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Szczepionka";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormOpt::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 110);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Kastracja";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormOpt::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(246, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 26);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Proszę wybrać usługę:";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormOpt::label1_Click);
			// 
			// MyFormOpt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 411);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyFormOpt";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Proszę wybrać usługę:";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	user_data^ data;
	void next_step(String^ jednostka)
	{
		data->jednostka = jednostka;
		MyFormAdres^ f3 = gcnew MyFormAdres(data);
		f3->Show();
	}; 

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	next_step("Kastracja");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	next_step("Szczepionka");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	next_step("Kardiologia");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	next_step("Odpryskiwanie");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	next_step("Otrzymywanie paszportu weterynaryjnego");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	next_step("Badanie lekarskie");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	next_step("Nefrologia");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	next_step("Czyszczenie zębów");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	next_step("Eutanazja");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	next_step("Kupowanie lęków");
}
};
}
