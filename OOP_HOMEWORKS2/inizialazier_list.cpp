//� ��������� ����� ����� MyString �������� ����������� Initializer_list.
//������� ������ ���� MyString � ������� ����� ������������

#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
private:
	//������
	char* S;
	//����� ������
	int len;
public:
	//����������� �� ���������
	//��� ����������
	MyString();
	//������������� �����������
	//� ����������
	MyString(char* s);
	//����������� �����������
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

	//����������
	~MyString() {
		delete[] S;
	}
	//����� ����������
	void Sort(MyString s[], int n);
	//����������� �����
	//������������ ����������
	//������
	const char* GetStr()const
	{
		return S;
	}
	//����� ����������� �������� ����������
	//� ������� ������������
	void SetStr()
	{
		//���� ������ �� ������ - ��������
		if (S != NULL)
			delete[]S;
		//������� ������
		//� ����������� � ������������ ������
		char a[256];
		cin.getline(a, 256);
		//������������ ������
		len = strlen(a) + 1;
		//�������� ������
		S = new char[len];
		//������������ � ������
		//��������� ������
		strcpy(S, a);
	}
	//����� ����������� �������� ����������
 //� ������� ���������
	void SetStr2(char* str)
	{
		//���� ������ �� ������ - ��������
		if (S != NULL)
			delete[]S;
		//������������ ������
		len = strlen(str) + 1;
		//�������� ������
		S = new char[len];
		//������������ � ������
		//��������� ������
		strcpy(S, str);
	}
};
MyString::MyString()
{
	//��������� �������������
	S = NULL;
	len = 0;
}
MyString::MyString (char* s)
{
	len = strlen(s);
	S = new char[len + 1];
	//������������� �������,
	//���������� �������������
	strcpy(S, s);
}
MyString::MyString(const MyString& s)
{
	len = s.len;
	//���������� �����������
	S = new char[len + 1];
	strcpy(S, s.S);
}
void MyString::Sort(MyString s[], int n)
{
	//���������� �����
	//������� ��������
	MyString temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			//��������� ���� �����
			if (strcmp(s[j].S, s[j - 1].S) < 0)
			{
				//������ ������ s[j] � temp
				temp.SetStr2(s[j].S);
				//������ ������ s[j-1] � s[j]
				s[j].SetStr2(s[j - 1].S);
				//������ ������ temp � s[j-1]
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