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
	cout << "������ ����� �������  : ";
	cin >> nz;

	switch (nz)
	{

		//1.	�������� ������ ���� �������� �� ������� 
		//	���������.���������� ����� ������ ������� �������
	case 1:
	{
		int ocenka;
		int sum = 0;
		for (int i = 1; i <= 2; i++)
		{
			cout << "������ ������ ������� ������f " << i << endl;
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


/*	2.	�������� �������(� ����� � ���� 14, 5 ��� � �.�.)
		������� ������� ���� �������.���������� ������� ������� �������� ������� ������.� ������ ������ ������ 20 �������*/
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
			cout << "����� ������� ����� " << sumaob << endl;
			
		}
	}
	break;

	/*3.	�������� ���������� �������, �������� �� ������ ����
	������ � �����. ���������� ������������� ���������� ������� �� ������ �����.*/
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
				cout << "������ ���=  " << osadok << endl;
			}
			sumaob = suma / 2;
			cout << "����� ������ ����� " << sumaob << endl;

		}
	}
	break;


	/*4.	�������� ���� ������� ������� ���� �������.����������
	������� ���� �������� ������� ������.����������� ����� ������� ����������.*/
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
				cout << "������ " << uchenikcol << endl;
			}
			obchaya = summa / 15;
			cout << "������� ���� ��������  " << obchaya << endl;
		}
	}
	break;


	/*5.	�������� ��������� ������ ����� ������������������ ������������� �����,
	�������� � ����������, �������������� ������� ���������� ����. ����������� ������: 1,2,3,-4,5,-2,0.*/

	case 5:
	{
		int a,sum = 0;
		do {
			cout << "������ �����: " << endl;
			cin >> a;
			sum += a;
		} while (a != 0);
		cout << "����� ����� = " << sum<<endl;
		
	}

	/*7.	����������� ��������� �������� ���������� � �����., � ������� �� ���������� ��������� �� � ���������� B �����.� �����.����
		��� ���������� ����������� ������� �� 3 % .����������, ����� ����� ����� ����� �����, ����� ������� ������� ���(10 �������), ��������� ������ ��� ������ � ��������� .*/
	case 6:
	{
		float stependia1, rasxodob, mececraz;
		stependia1 = 1200 + rand()% 30;
		cout << "��������� �������� � ����� ���������� " << stependia1 << endl;
		rasxodob = stependia1 * 2;
		cout << "������  ��������= " << rasxodob << endl;
		for (int mecec = 1;  mecec<=10 ; mecec++)
		{
			mececraz = rasxodob * 0.3 / 100;
			cout << mececraz << endl;
			rasxodob += mececraz;
			cout << "�������� ������ ����� " << rasxodob << endl;
		}
		rasxodob += rasxodob * 9;
		cout << "�� 10 ������� ������ ����� " << rasxodob << endl;
	}
	break;

	/*8.	������ ��������� ��� ���������� ����������� 
	�� $24 � 1826 �. ������ ���� �� � ��������� ����� ��������� �� �����, ���� �� ���
	24 ������� ���� �������� ����� � ���� ��� 6% �������� ������?*/
	case 7:
	{
		float dengi = 24;
		float summaix = 0;
		for (int  god = 1826; god <= 2017; god++)
		{
			summaix = dengi*0.06;
			dengi += summaix;
			cout <<god  << "  �� ����� ��������� " << summaix <<endl;
		}
		cout.precision(20);
		cout << "Summa doxoda = " << dengi<<endl;
		
	}
	break;

	/*9.	�������� ��������� �������� ������ ������� ���������. ��������� ������ ������� 10 �������� � ��������� 
	������: �� 10 ���������� ������� � ��������, �� 8 ��� 9 ���������� ������� � �������, �� 6 ��� 7 ���������� 
	������� � ������������������, ��������� �������� � ������.*/
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
			cout << "�������" << endl;
			break;
		}
		for (int otvet = 3; otvet <= 4; )
		{
			cout << "������" << endl;
			break;
		}
		for (int otvet = 2; otvet <= 3;)
		{
			cout << "�����������������" << endl;
			break;
		}
		for (int otvet = 1; otvet <= 3;)
		{
			cout << "�����" << endl;
			break;
		}
	}
	break;
	






	}
	system("pause");
}