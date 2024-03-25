#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private:
	char sfp[200];
	char date_of_birth[100];
	char phone[100];
	char city[50];
	char country[50];
	char name_educational_institution[200];
	char city_institution[50];
	char country_insitution[50];
	int group_number;
public:
	Student()
	{
		strcpy(sfp, "None");
		strcpy(date_of_birth, "None");
		strcpy(phone, "None");
		strcpy(city, "None");
		strcpy(country, "None");
		strcpy(name_educational_institution, "None");
		strcpy(city_institution, "None");
		strcpy(country_insitution, "None");
		group_number = 0;
	}

	void Show_Student()
	{
		cout << "SFP: " << sfp << endl;
		cout << "Date of birth: " << date_of_birth << endl;
		cout << "Phone: " << phone << endl;
		cout << "City: " << city << endl;
		cout << "Country: " << country << endl;
		cout << "Name educational institution: " << name_educational_institution << endl;
		cout << "City institution: " << city_institution << endl;
		cout << "Country institution: " << country_insitution << endl;
		cout << "Group number: " << group_number << endl;
	}

	char* Get_SFP()
	{
		return sfp;
	}
	char* Get_Date_of_birth()
	{
		return date_of_birth;
	}
	char* Get_Phone()
	{
		return phone;
	}
	char* Get_Country()
	{
		return country;
	}
	char* Get_Name_educational_institution()
	{
		return name_educational_institution;
	}
	char* Get_City_institution()
	{
		return city_institution;
	}
	char* Get_Country_insitution()
	{
		return country_insitution;
	}
	int Get_Group_number()
	{
		return group_number;
	}

	void Set_SFP()
	{
		char temp_sfp[200];
		cout << "Enter SFP:\n";
		cin >> temp_sfp;
		strcpy(sfp, temp_sfp);
	}
	void Set_Date_of_birth()
	{
		char temp_date_of_birth[100];
		cout << "Enter date of birth:\n";
		cin >> temp_date_of_birth;
		strcpy(date_of_birth, temp_date_of_birth);
	}
	void Set_Phone()
	{
		char temp_phone[100];
		cout << "Enter phone:\n";
		cin >> temp_phone;
		strcpy(phone, temp_phone);
	}
	void Set_City()
	{
		char temp_city[50];
		cout << "Enter city:\n";
		cin >> temp_city;
		strcpy(city, temp_city);
	}
	void Set_Country()
	{
		char temp_country[50];
		cout << "Enter country:\n";
		cin >> temp_country;
		strcpy(country, temp_country);
	}
	void Set_Name_educational_institution()
	{
		char temp_name_educational_institution[200];
		cout << "Enter name educational institution:\n";
		cin >> temp_name_educational_institution;
		strcpy(name_educational_institution, temp_name_educational_institution);
	}
	void Set_City_institution()
	{
		char temp_city_institution[50];
		cout << "Enter city institution:\n";
		cin >> temp_city_institution;
		strcpy(city_institution, temp_city_institution);
	}
	void Set_Country_institution()
	{
		char temp_country_institution[50];
		cout << "Enter country institution:\n";
		cin >> temp_country_institution;
		strcpy(country_insitution, temp_country_institution);
	}
	void Set_Group_number()
	{
		int temp_group_number;
		cout << "Enter group number:\n";
		cin >> temp_group_number;
		group_number = temp_group_number;
	}



};


int main()
{
	Student person;
	person.Show_Student();
	person.Set_City();
	person.Show_Student();


	return 0;
}