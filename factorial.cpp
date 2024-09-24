#include <iostream>
#include <conio.h>
using namespace std;

//A program that calculates factorial of a number and then counts its number of zeroes at the end of the answer
//5!=120
//it has 1 zero
//debug and find errors

int Factorial(int num)
{
	int fact;
	if (num == 0)
		return fact;
	for (int i = 2; i < num; i++)
	{
		fact = fact * i;
		return fact;
	}
}

int Zeroes(double fact)
{
	int mod = 0;
	int count = 0;
	fact = fact / 10;
	mod = fact % 10;

	while (mod == 0)
	{
		count = count + 1;
		mod = fact % 10;
		fact = fact / 10;
	}
	return count;
}

int main()
{
	int num, num1;
	cout << "Enter number :";
	cin >> num;
	int f = Factorial(num1);

	cout << "Factorial of " << num << "  is " << f;
	int z = Zeroes(f);

	cout << "\nNumber of zeroes are :" << z;
	system("pause");
}