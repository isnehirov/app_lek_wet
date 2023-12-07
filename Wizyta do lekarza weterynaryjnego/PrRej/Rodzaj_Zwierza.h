#pragma once
#include "regs.h"
#include "Dane_osobowe.h"

namespace PrRej {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormAdres
	/// </summary>
	public ref class MyFormAdres : public System::Windows::Forms::Form
	{
	public:
		MyFormAdres(user_data^ data)
		{
			InitializeComponent();
			this->data = data;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFormAdres()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(34, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(336, 277);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Pies";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormAdres::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(400, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(336, 277);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Kot";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormAdres::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(214, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Prosze wybrać rodzaj zwierza:";
			// 
			// MyFormAdres
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 484);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyFormAdres";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wybieramy rodzaj zwierza";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		user_data^ data;
		void next_step(String^ rodzaj_zwierza)
		{
			data->rodzaj_zwierza = rodzaj_zwierza;
			Dane_Osobowe^ f4 = gcnew Dane_Osobowe(data);
			f4->Show();
		};
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		next_step("Pies");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		next_step("Kot");
	}
};
}
