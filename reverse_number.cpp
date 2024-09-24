#include <iostream>
#include <conio.h>
using namespace std;

int reverseNumber(int N, int reverse)
{
	int Remainder;
	while (N != 0)
	{
		Remainder = N % 10;
		N /= 10;
		reverse = reverse * 10 + Remainder;
	}
	return reverse;
}

bool IsPalindrome(int Number)
{
	int reverse = 0;
	reverse = reverseNumber(Number, reverse);
	if (Number = reverse)
		return reverse;
}

char main()
{
	int n = 0, reverse = 0;
	cout << "\nEnter an integer: ";
	cin >> n;
	reverseNumber(n, reverse);
	cout << "Reversed Number = " << reverse;

	if (IsPalindrome(n))
		cout << "\nThis is a Palindrome number";
	else
		cout << "\nNot Palindrome";
	return _getch();
}