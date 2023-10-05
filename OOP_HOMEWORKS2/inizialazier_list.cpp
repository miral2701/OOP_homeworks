//В созданный ранее класс MyString добавить конструктор Initializer_list.
//Создать объект типа MyString с помощью этого конструктора

#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
private:
	//Строка
	char* S;
	//Длина строки
	int len;
public:
	//Конструктор по умолчанию
	//без параметров
	MyString();
	//Перегруженный конструктор
	//с параметром
	MyString(char* s);
	//Конструктор копирования
	MyString(const MyString& s);

	MyString(const std::initializer_list<char>& list) 
	{
		int i = 0;
		for (auto element : list)
		{
			S[i] = element;
			i++;
		}
	}

	//Деструктор
	~MyString() {
		delete[] S;
	}
	//Метод сортировки
	void Sort(MyString s[], int n);
	//Константный метод
	//возвращающий содержимое
	//строки
	const char* GetStr()const
	{
		return S;
	}
	//метод позволяющий изменить содержимое
	//с помощью пользователя
	void SetStr()
	{
		//если строка не пустая - очистить
		if (S != NULL)
			delete[]S;
		//создаем массив
		//и запрашиваем у пользователя данные
		char a[256];
		cin.getline(a, 256);
		//просчитываем размер
		len = strlen(a) + 1;
		//выделяем память
		S = new char[len];
		//переписываем в объект
		//введенную строку
		strcpy(S, a);
	}
	//метод позволяющий изменить содержимое
 //с помощью параметра
	void SetStr2(char* str)
	{
		//если строка не пустая - очистить
		if (S != NULL)
			delete[]S;
		//просчитываем размер
		len = strlen(str) + 1;
		//выделяем память
		S = new char[len];
		//переписываем в объект
		//введенную строку
		strcpy(S, str);
	}
};
MyString::MyString()
{
	//Начальная инициализация
	S = NULL;
	len = 0;
}
MyString::MyString (char* s)
{
	len = strlen(s);
	S = new char[len + 1];
	//Инициализация строкой,
	//переданной пользователем
	strcpy(S, s);
}
MyString::MyString(const MyString& s)
{
	len = s.len;
	//Безопасное копирование
	S = new char[len + 1];
	strcpy(S, s.S);
}
void MyString::Sort(MyString s[], int n)
{
	//Сортировка строк
	//Методом пузырька
	MyString temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			//сравнение двух строк
			if (strcmp(s[j].S, s[j - 1].S) < 0)
			{
				//запись строки s[j] в temp
				temp.SetStr2(s[j].S);
				//запись строки s[j-1] в s[j]
				s[j].SetStr2(s[j - 1].S);
				//запись строки temp в s[j-1]
				s[j - 1].SetStr2(temp.S);
			}
		}
	}
}

void main()
{

	MyString string1 = {'f','f','d'};
	MyString string2{ 'd','d' };

}