//////////////////////////////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту – функція main
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Account.h"
#include <Windows.h>
using namespace std;
Account makeAccount(int no, string name, double summa, double percent)
{
	Account a;
	if (!a.Init(no, name, summa, percent))
		cout << "Неправильні данні!" << endl;
	return a;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Account a1;
	a1.Read();
	a1.Display();
	a1.Withdraw();
	a1.Put();
	a1.Perc();
	a1.toDollar();
	a1.toEuro();
	a1.Display();
	
	a1.Display();
	char s[100];
	strcpy(s, a1.SumToNumeral());
	cout << s << endl << endl;
	a1.SumToNumeral();
	Account a2;
	string name;
	int no;
	double summa;
	double percent;
	
	cout << " Номер рахунку = ? "; cin >> no;
	cout << " Імя= ? ";   cin >> name;
	cout << " Сума= ? "; cin >> summa;
	cout << " Відсоток нарахування= ? "; cin >> percent;
	cout << "____________________" << endl;
	a2 = makeAccount(no, name, summa, percent);
	a2.Display();
	return 0;
}