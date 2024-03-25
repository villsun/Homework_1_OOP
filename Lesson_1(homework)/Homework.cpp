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

};


int main()
{
	Student person;
	person.Show_Student();


	return 0;
}