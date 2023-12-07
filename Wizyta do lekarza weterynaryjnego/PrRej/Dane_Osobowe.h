#pragma once
#include <msclr/marshal.h>
#include <msclr\marshal_cppstd.h>
#include "regs.h"
#include <iostream>
#include <Windows.h>

using namespace std;

namespace PrRej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dane_Osobowe
	/// </summary>
	public ref class Dane_Osobowe : public System::Windows::Forms::Form
	{
	public:
		Dane_Osobowe(user_data^ data)
		{
			InitializeComponent();
			this->data = data;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dane_Osobowe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Prosze wybrać datę wizyty:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(268, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prosze wybrać godzinę:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(729, 167);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Data i godzina";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(312, 32);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(325, 22);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"08:00", L"08:15", L"08:30", L"08:45", L"09:00",
					L"09:15", L"09:30", L"09:45", L"10:00", L"10:15", L"10:30", L"10:45"
			});
			this->comboBox1->Location = System::Drawing::Point(312, 86);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(325, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(13, 200);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(728, 276);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dane osobowe";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(360, 31);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 29);
			this->label7->TabIndex = 12;
			this->label7->Text = L"i nazwisko:";
			this->label7->Click += gcnew System::EventHandler(this, &Dane_Osobowe::label7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(496, 38);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(155, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Dane_Osobowe::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(9, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(219, 58);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Prosze dodać imie \r\nwłasciczela:";
			this->label6->Click += gcnew System::EventHandler(this, &Dane_Osobowe::label6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(234, 38);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(413, 199);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(238, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Dane_Osobowe::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(311, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(340, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Dane_Osobowe::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(9, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(322, 58);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Prosze dodać adres mailowy\r\nwłasćiciela:\r\n";
			this->label4->Click += gcnew System::EventHandler(this, &Dane_Osobowe::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(280, 58);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prosze dodać nr telefonu\r\nwłasćiciela:\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &Dane_Osobowe::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(13, 512);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(728, 37);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Omów się na wizytę";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dane_Osobowe::button1_Click);
			// 
			// Dane_Osobowe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 561);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Dane_Osobowe";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dane Osobowe";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		user_data^ data;

	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ imie;
	imie = Dane_Osobowe::textBox3->Text;
	String^ nazwisko;
	nazwisko = Dane_Osobowe::textBox4->Text;
	String^ nr_tel;
	nr_tel = Dane_Osobowe::textBox1->Text;
	String^ adres_mailowy;
	adres_mailowy = Dane_Osobowe::textBox2->Text;

	data->data = this->dateTimePicker1->Value.ToString();
	data->imie = imie;
	data->nazwisko = nazwisko;
	data->godzina = comboBox1->SelectedItem->ToString();;
	data->email = adres_mailowy;
	data->nr_telefonu = nr_tel;

	//string dtt1 = msclr::interop::marshal_as<std::string>(dddt);
	get_data gd;
	gd.regist_user(data);
	MessageBox::Show("Juz jesteśćie umowione na wizytę", "Info",
	MessageBoxButtons::OK, MessageBoxIcon::Information);
	//gd.regist_adlok(date);
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
