#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	srand(time(NULL));
	cout << "Ведите номер задания  : ";
	cin >> nz;

	switch (nz)
	{

		//1.	Известны оценки двух учеников по четырем 
		//	предметам.Определить сумму оценок каждого ученика
	case 1:
	{
		int ocenka;
		int sum = 0;
		for (int i = 1; i <= 2; i++)
		{
			cout << "Ведите оценку первого ученикf " << i << endl;
			sum = 0;

			for (int a = 1; a <= 4; a++)
			{
				cin >> ocenka;

				sum += ocenka;
			}
			cout << sum << endl;
		}
		break;

	}


/*	2.	Известен возраст(в годах в виде 14, 5 лет и т.п.)
		каждого ученика двух классов.Определить средний возраст учеников каждого класса.В каждом классе учатся 20 человек*/
	case 2:
	{
		int uchenik=1+rand()%24;
		int suma=0,sumaob=0;

		for (int  a = 1; a <= 3; a++)
		{
			int uchenik = 1 + rand() % 24;
			for (int i = 1; i <= 25; i++)
			{
				int uchenik = 1 + rand() % 24;
				suma += uchenik;
				cout << uchenik<<endl;
			}
			sumaob = suma / 25;
			cout << "Общий возраст равен " << sumaob << endl;
			
		}
	}
	break;

	/*3.	Известно количество осадков, выпавших за каждый день
	января и марта. Определить среднедневное количество осадков за каждый месяц.*/
	case 3:
	{
		int osadok= 1 + rand() % 29;
		int suma = 0, sumaob = 0;

		for (int a = 1; a <= 2; a++)
		{
			int osadok = 1 + rand() % 29;
			for (int i = 1; i <= 30; i++)
			{
				int osadok = 1 + rand() % 29;
				suma += osadok;
				cout << "Осадок дня=  " << osadok << endl;
			}
			sumaob = suma / 2;
			cout << "Общие осадки равно " << sumaob << endl;

		}
	}
	break;


	/*4.	Известен рост каждого ученика двух классов.Определить
	средний рост учеников каждого класса.Численность обоих классов одинаковая.*/
	case 4:
	{
		int uchenikicol = 1 + rand() % 14;
		int summa = 0, obchaya = 0;
		for (int clas = 0; clas <=4 ; clas++)
		{
			int uchenikcol = 1 + rand() % 14;
			for (int clas1 = 0; clas1 <= 15; clas1++)
			{
				int uchenikcol = 1 + rand() % 14;
				summa += uchenikcol;
				cout << "Ученик " << uchenikcol << endl;
			}
			obchaya = summa / 15;
			cout << "средний рост учеников  " << obchaya << endl;
		}
	}
	break;


	/*5.	Написать программу поиска суммы последовательности положительных чисел,
	вводимых с клавиатуры, предшествующих первому введенному нулю. Контрольный пример: 1,2,3,-4,5,-2,0.*/

	case 5:
	{
		int a,sum = 0;
		do {
			cout << "Ведите число: " << endl;
			cin >> a;
			sum += a;
		} while (a != 0);
		cout << "Сумма общая = " << sum<<endl;
		
	}

	/*7.	Ежемесячная стипендия студента составляет А тенге., а расходы на проживание превышают ее и составляют B тенге.в месяц.Рост
		цен ежемесячно увеличивает расходы на 3 % .Определить, какую нужно иметь сумму денег, чтобы прожить учебный год(10 месяцев), используя только эти деньги и стипендию .*/
	case 6:
	{
		float stependia1, rasxodob, mececraz;
		stependia1 = 1200 + rand()% 30;
		cout << "Степендия студента в месяц составляет " << stependia1 << endl;
		rasxodob = stependia1 * 2;
		cout << "Расход  студента= " << rasxodob << endl;
		for (int mecec = 1;  mecec<=10 ; mecec++)
		{
			mececraz = rasxodob * 0.3 / 100;
			cout << mececraz << endl;
			rasxodob += mececraz;
			cout << "Месячный расход равен " << rasxodob << endl;
		}
		rasxodob += rasxodob * 9;
		cout << "За 10 месяцев расход равен " << rasxodob << endl;
	}
	break;

	/*8.	Остров Манхэттен был приобретен поселенцами 
	за $24 в 1826 г. Каково было бы в настоящее время состояние их счета, если бы эти
	24 доллара были помещены тогда в банк под 6% годового дохода?*/
	case 7:
	{
		float dengi = 24;
		float summaix = 0;
		for (int  god = 1826; god <= 2017; god++)
		{
			summaix = dengi*0.06;
			dengi += summaix;
			cout <<god  << "  Их сумма составила " << summaix <<endl;
		}
		cout.precision(20);
		cout << "Summa doxoda = " << dengi<<endl;
		
	}
	break;

	/*9.	Написать программу проверки знания таблицы умножения. Программа должна вывести 10 примеров и выставить 
	оценку: за 10 правильных ответов – «отлично», за 8 или 9 правильных ответов – «хорошо», за 6 или 7 правильный 
	ответов – «удовлетворительно», остальные варианты – «плохо».*/
	case 8:
	{
		char prov;
		cout << "2 * 1= ";
		cin >> prov;
		cout << "2 * 2= ";
		cin >> prov;
		cout << "2 * 3= ";
		cin >> prov;
		cout << "2 * 4= ";
		cin >> prov;
		cout << "2 * 5= ";
		cin >> prov;
		for (int otvet = 4; otvet <= 5; )
		{
			cout << "отлично" << endl;
			break;
		}
		for (int otvet = 3; otvet <= 4; )
		{
			cout << "хорошо" << endl;
			break;
		}
		for (int otvet = 2; otvet <= 3;)
		{
			cout << "удовлетворительно" << endl;
			break;
		}
		for (int otvet = 1; otvet <= 3;)
		{
			cout << "плохо" << endl;
			break;
		}
	}
	break;
	






	}
	system("pause");
}