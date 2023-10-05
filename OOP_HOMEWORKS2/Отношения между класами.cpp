//Создать класс ноутбук на основе других объектов :
//Процессор
//ОЗУ
//Мышка
//Веб - камера
//Принтер
//Видеокарта
//Каждый объект представлен отдельным классом.Собрать ноутбук, используя агрегацию и композицию

#include <iostream>
using namespace std;

class CPU {
	int yadro_count;
public:
	CPU() {
		yadro_count = 0;
	}
	CPU(int a) {
		yadro_count = a;
	}
};

class RAM {
	int capacity;
public:
	RAM() {
		capacity = 0;
	}
	RAM(int a) {
		capacity = a;
	}
};

class Mouse {
	string color;
public:
	Mouse() {
		color = "black";
	}
	Mouse(string a) {
		color = a;
	}
};

class Printer {
	string type;
public:
	Printer() {
		type = "laserniy";
	}
	Printer(string a) {
		type = a;
	}
};

class Camera {
	string country;
public:
	Camera() {
		country = "China";
	}
	Camera(string a) {
		country = a;
	}
};
class GPU {
	string firma;
public:
	GPU() {
		firma = "GeForce";
	}
	GPU(string a) {
		firma = a;
	}
};


class Laptop {
	CPU intel_i5;
	RAM kingston;
	Mouse* mouse;
	Camera* cam;
	Printer* printer;
	GPU* videocarta;
public:
	Laptop(int a, int b, Mouse* c, Camera* d, Printer* e, GPU* f) : intel_i5(a), kingston(b), mouse(c), cam(d),printer(e),videocarta(f)
	{

	}
	
};

int main() {
	Mouse m1("grey");
	Printer p1("struyniy");
	GPU g1("sdc");
	Camera c1("Ukr");
	Laptop Tuf_A15(6,16,&m1,&c1,&p1,&g1);

}