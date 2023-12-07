#pragma once
#include <iostream>
#include <string>

public ref class user_data
{
public:
	System::String^ imie;
	System::String^ nazwisko;
	System::String^ jednostka;
	System::String^ data;
	System::String^ godzina;
	System::String^ rodzaj_zwierza;
	System::String^ nr_telefonu;
	System::String^ email;
};

public class get_data
{
public:
	void regist_user(user_data^ data);
};