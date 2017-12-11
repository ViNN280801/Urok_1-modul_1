#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
red:
	int h;
	cout << "Введите номер задание:" << "\n";
	cin >> h;
	if (h == 1)
	{
		unsigned int a;
		cout << "Введите данные:" << "\n";
		cin >> a;
		int d;
		cout << "Введите данные:" << "\n";
		cin >> d;
		float q = a / d;
		cout << "Частное:" << q << "\n";
		float r = a%d;
		cout << "Остаток от деления:" << r << "\n";
	}
	else if (h == 2)
	{
		int x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		int y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		if ((x == 0) && (y == 0))
		{
			int f = 0;
			cout << f << "Возвращается 0:" << "\n";
		}
		else if ((x > 0) && (y == 0))
		{
			cout << "Если у равен 0:" << "\t" << 12 / x << "\n";
		}
		else if ((x == 0) && (y > 0))
		{
			cout << "Если x равен 0:" << "\t" << 12 / y << "\n";
		}
		else
		{
			cout << "Иначе:" << "\t" << 144/(x*y) << "\n";
		}
	}
	else if (h == 3)
	{
		int x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		int y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		if (x > y)
		{
			int f = x - y;
			cout << "Если х больше у:" << "\t" << f << "\n";
		}
		else
		{
			cout << "Возвращает у-х:" << "\t" << endl;
		}
	}
	else if (h == 4)
	{
		double x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		double y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		//Что это за условие? 
		//если x больше y а у тебя? 
		if (x / y)
		{
			double f = x / y;
			cout << "Если х больше у:" << "\t" << f << "\n";
			}
		else
		{
			double f = y / x;
			cout << "Возвращает:" << "\t" << f << "\n";
		}
		}
	else if (h == 5)
	{
		double x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		double y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		double z;
		cout << "Введите данные:" << "\n";
		cin >> z;
		int k;
		cout << "Введите данные:" << "\n";
		cin >> k;
		int n;
		cout << "Введите данные:" << "\n";
		cin >> n;
		float m = (x + y + z) / 2;
		cout << m << "\n";
		if ((x > k) && (y > k) && (z > k) && (x < n) && (y < n) && (z < n))
		{
			double f = m*(n/k);
			cout << "Возвращает:" << "\t" << f << "\n";
		}
		else
		{
			cout << "Не возвращает:" << "\t"  << "\n";
		}
		
	}
	else if (h == 6)
	{
		int a;
		cout << "Введите данные:" << "\n";
		cin >> a;
		int b;
		cout << "Введите данные:" << "\n";
		cin >> b;
		int c;
		cout << "Введите данные:" << "\n";
		cin >> c;
		if ((a > b) && (b < c))
		{
			int f = b;
			cout << "Наименьшее значение:" << f << "\n";
		}
		else if ((a < b) && (a < c))
		{
			int f = a;
			cout << "Наименьшее значение:" << f << "\n";
		}
		else
		{
			int f = c;
			cout << "Наименьшее значение:" << f << "\n";
		}
	}
	else if (h == 7)
	{
		int a;
		cout << "Введите данные:" << "\n";
		cin >> a;
		int b;
		cout << "Введите данные:" << "\n";
		cin >> b;
		int c;
		cout << "Введите данные:" << "\n";
		cin >> c;
		if ((a < b) && (b > c))
		{
			int f = b;
			cout << "Наибольшее значение:" << f << "\n";
		}
		else if ((a > b) && (a > c))
		{
			int f = a;
			cout << "Наибольшее значение:" << f << "\n";
		}
		else
		{
			int f = c;
			cout << "Наибольшее значение:" << f << "\n";
		}
	}
	else if (h == 8)
	{
		int x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		int y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		int z= sqrt (pow (x,2)+pow (y,3));
		cout << z <<"\n" ;
		if ((x > 0) && (y >0))
		{
			
			bool f = z;//True
		}
		else if ((x<0)&&(y>0))
		{
			
			bool f = z;//False
		}
		else
		{
			cout << "Не возвращает:" << "\t" << "\n";
		}
	}
	else if (h == 9)
	{
		int x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		int y;
		cout << "Введите данные:" << "\n";
		cin >> y;
	
		//Если оно делиться то будет 0, а если нет,то будетбольше нуля
		//По твоей логине если не делеиться - то пишешь Делиться на цело!
		if ((x%y) >0)
		{
			bool f = x%y;//True
			cout << "Делится на цело:"<< f<<"\n";

		}
		else if (y%x>0)
		{
			bool f = y%x;//True
			cout << "Делится на цело:" << f << "\n";
					}
		else 
		{
			bool f;//False 
			cout << "Не делится на цело:" << f << "\n";
		}
	}
	else if (h == 10)
	{
		int x;
		cout << "Введите данные:" << "\n";
		cin >> x;
		int y;
		cout << "Введите данные:" << "\n";
		cin >> y;
		int z;
		cout << "Введите данные:" << "\n";
		cin >> z;
		if ((x > y) && (y < z))
		{
			bool f = y;//True
		
			cout << "Могут быть сторонами треугольника:" << f << "\n";
		}
		else
		{
			bool f = y;//False
		
			cout << "Не могут быть сторонами треугольника:" << f << "\n";

		}

	}


	
	goto red;
	return 0;
}
