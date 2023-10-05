//1) Создайте класс Transport(транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.
//2) Создайте класс Passport(паспорт), который будет содержать паспортную информацию о гражданине Украины.
//С помощью механизма наследования реализуйте класс ForeignPassport(загранпаспорт), производный от Passport.
//Напомним, что загранпаспорт содержит помимо паспортных данных также данные о визах, номер загранпаспорта.

#include <iostream>
#include <string>
using namespace std;

class Transport {
protected:
	int speed;
	double distance;
	int cost_per_mile;
	 
public:
	Transport() {
		speed = 0;
		distance = 0;
		cost_per_mile = 0;
	}
	Transport(int a,int b,int c) {
		speed = a;
		distance = b;
		cost_per_mile = c;
	}
	void Time() {
		cout <<"Time in secondds to pass "<<distance<<" miles: " << distance / speed*1000;
		cout << endl;
	}
	void Cost() {
		cout <<"Money to spent: " << cost_per_mile * distance;
		cout << endl;
	}
};

class Car : public Transport
{
	string firma;
	string color;
public:
	Car() {
		firma = "BMW";
		color = "red";
	}
	Car(int a ,int b,int c,string a1, string b1): Transport(a,b,c)
	{
		firma = a1;
		color=b1;
	}
};

class Cart : public Transport
{
	string color;
public:
	Cart() {
		color = "red";
	}
	Cart(int a, int b, int c,  string b1) : Transport(a, b, c)
	{
		color = b1;
	}
};

class Bike : public Transport
{
	string firma;
	string color;
	int wheel_count;
public:
	Bike() {
		firma = "BMW";
		color = "red";
		wheel_count = 0;
	}
	Bike(int a, int b, int c,int d, string a1, string b1) : Transport(a, b, c)
	{
		firma = a1;
		color = b1;
		wheel_count = d;
	}
};




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
	//1
	/*Car car1(60,7,60,"Audi","blue");
	Cart cart1(3, 7, 5, "brown");
	Bike bike1(18, 7, 0 ,2, "CITYBIKE", "yellow");

	car1.Cost();
	cart1.Cost();
	bike1.Cost();

	car1.Time();
	cart1.Time();
	bike1.Time();*/

	//2

	ForeignPassport passport1("Mira", "Madani", "Abd", 1, 2, 1224944322);

}
