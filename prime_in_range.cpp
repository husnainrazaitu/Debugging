#include <iostream>
#include <conio.h>

using namespace std;

bool IsPrime(int Num)
{
	bool prime = true;
	int d = 3;
	while (d <= Num || prime)
	{
		if (Num % d == 0)
			prime = false;
		else
			prime = true;

		prime += 2;
	}
	return prime;
}

void AllPrimeRangePrint(int R1, int R2)
{
	for (int n = 1; n < R2; n++)
	{
		if (IsPrime(n));
		cout << n << " is a prime number...!" << endl;
		if (!IsPrime(n));
		cout << n << " is not a prime number...!" << endl;
	}
}

int main()
{
	int Range1, Range2;
	cout << "Range(R1-R2): ";
	cin >> Range1 >> Range2;
	AllPrimeRangePrint(Range2, Range1);

	// On Input of 1 19 it should print the following:
	// 1 is not a prime.
	// 2 is a prime
	// 3 is a prime
	// 4 is not a prime
	// .
	// .
	// .
	// 18 is not a prime
	// 19 is a prime.
}