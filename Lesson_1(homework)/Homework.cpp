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
		cout << "Enter SFP:\n";
		cin >> sfp;
	}
	void Set_Date_of_birth()
	{
		cout << "Enter date of birth:\n";
		cin >> date_of_birth;
	}
	void Set_Phone()
	{
		cout << "Enter phone:\n";
		cin >> phone;
	}
	void Set_City()
	{
		cout << "Enter city:\n";
		cin >> city;
	}
	void Set_Country()
	{
		cout << "Enter country:\n";
		cin >> country;
	}
	void Set_Name_educational_institution()
	{
		cout << "Enter name educational institution:\n";
		cin >> name_educational_institution;
	}
	void Set_City_institution()
	{
		cout << "Enter city institution:\n";
		cin >> city_institution;
	}
	void Set_Country_institution()
	{
		cout << "Enter country institution:\n";
		cin >> country_insitution;
	}
	void Set_Group_number()
	{
		cout << "Enter group number:\n";
		cin >> group_number;
	}

	void Add_Student()
	{
		Set_SFP();
		Set_Date_of_birth();
		Set_Phone();
		Set_City();
		Set_Country();
		Set_Name_educational_institution();
		Set_City_institution();
		Set_Country_institution();
		Set_Group_number();
	}
};

class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point()
	{
		FILE* p_file = fopen(R"(F:\Temp_file\temp_point.txt)", "r");
		if (p_file == nullptr)
		{
			cout << "ERROR!\n";
			exit(-1);
		}
		fscanf(p_file, "%i %i %i", &x, &y, &z);
	}

	void Show_Point()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
		cout << "Z = " << z << endl;
	}

	int Get_X()
	{
		return x;
	}
	int Get_Y()
	{
		return y;
	}
	int Get_Z()
	{
		return z;
	}

	void Set_X()
	{
		/*int temp_x;*/
		cout << "Enter x:\n";
		cin >> x;
	}
	void Set_Y()
	{
		/*int temp_x;*/
		cout << "Enter y:\n";
		cin >> y;
	}
	void Set_Z()
	{
		/*int temp_x;*/
		cout << "Enter z:\n";
		cin >> z;
	}

	void Add_Point()
	{
		Set_X();
		Set_Y();
		Set_Z();
	}

	void Save_to_File()
	{
		FILE* p_file = fopen(R"(F:\Temp_file\temp_point.txt)", "w");
		fprintf(p_file, "%i %i %i", x, y, z);
	}
};


int main()
{
	// Завдання 1

	//Student person;
	//person.Show_Student();
	////person.Set_City();
	////person.Show_Student();
	///*char* country_insitution = person.Get_Country_insitution();
	//cout << "Country insitution = " << country_insitution << endl;
	//person.Add_Student();
	//person.Show_Student();*/

	Point point;
	point.Show_Point();
	point.Set_Y();
	point.Show_Point();
	point.Add_Point();
	point.Show_Point();
	point.Save_to_File();


	return 0;
}