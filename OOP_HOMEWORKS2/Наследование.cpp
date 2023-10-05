
//2) Создайте класс Passport(паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования реализуйте класс ForeignPassport(загранпаспорт), производный от Passport.
//Напомним, что загранпаспорт содержит помимо паспортных данных также данные о визах, номер загранпаспорта.

#include <iostream>
#include <string>
using namespace std;


class Passport {
protected:
	string name;
	string surname;
	string fathers_name;
	bool gender;
public:
	Passport() 
	{
		name = "0";
		surname = "0";
		fathers_name = "0";
		gender = 0;
	}
	Passport(string a,string b,string c,bool d ) {
		name = a;
		surname = b;
		fathers_name = c;
		gender = d;

	}

};

class ForeignPassport :public Passport
{
	int visa;
	long long number;

public:
	ForeignPassport() {
		visa = 0;
		number = 0;

	}
	ForeignPassport(string a,string b,string c, bool d,int a1,long long b1) :Passport( a, b, c, d)
	{
		visa = a1;
		number = b1;
	}
};
int main() {
	
	//2

	ForeignPassport passport1("Mira", "Madani", "Abd", 1, 2, 1224944322);

}
