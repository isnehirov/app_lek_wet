#pragma once
#include "regs.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;


void get_data::regist_user(user_data^ data)
{
    SqlConnection^ conn;
    SqlConnectionStringBuilder^ connStringBuilder;
    connStringBuilder = gcnew SqlConnectionStringBuilder;
    try
    {
        connStringBuilder->DataSource = "DESKTOP-JM5A5TA";
        connStringBuilder->InitialCatalog = "wizyta";
        connStringBuilder->IntegratedSecurity = true;
        conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
        conn->Open();
        String^ cmdText = "INSERT INTO db_rezerwacja (imie, nazwisko, jednostka, data, godzina, rodzaj_zwierza, nr_telefonu, email) VALUES (@imie, @nazwisko, @jednostka, @data, @godzina, @rodzaj_zwierza, @nr_telefonu, @email)";        
        SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

        SqlParameter^ param1 = gcnew SqlParameter("@imie", SqlDbType::VarChar);
        param1->Value = data->imie;
        cmd->Parameters->Add(param1);

        SqlParameter^ param2 = gcnew SqlParameter("@nazwisko", SqlDbType::VarChar);
        param2->Value = data->nazwisko;
        cmd->Parameters->Add(param2);

        SqlParameter^ param3 = gcnew SqlParameter("@jednostka", SqlDbType::VarChar);
        param3->Value = data->jednostka;
        cmd->Parameters->Add(param3);

        SqlParameter^ param4 = gcnew SqlParameter("@data", SqlDbType::VarChar);
        param4->Value = data->data;
        cmd->Parameters->Add(param4);

        SqlParameter^ param5 = gcnew SqlParameter("@godzina", SqlDbType::VarChar);
        param5->Value = data->godzina;
        cmd->Parameters->Add(param5);

        SqlParameter^ param6 = gcnew SqlParameter("@rodzaj_zwierza", SqlDbType::VarChar);
        param6->Value = data->rodzaj_zwierza;
        cmd->Parameters->Add(param6);

        SqlParameter^ param7 = gcnew SqlParameter("@nr_telefonu", SqlDbType::VarChar);
        param7->Value = data->nr_telefonu;
        cmd->Parameters->Add(param7);

        SqlParameter^ param8 = gcnew SqlParameter("@email", SqlDbType::VarChar);
        param8->Value = data->email;
        cmd->Parameters->Add(param8);

        cmd->ExecuteNonQuery();
    }
    finally
    {
        conn->Close();
    }
}