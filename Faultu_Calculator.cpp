#include <iostream>
using namespace std;

void Init()
{
    cout << "Welcome to Faltu Calculator by Israr and Munir" << endl << endl
        << "Enter number 65535 to END program" << endl << endl;
}

void Inputnumber(int j)
{

    cout << "Enter Number: ";
    cin >> j;

}

int operation()
{
    char a;
    while (1)
    {

        cout << "Enter Operation ( /, *, -, +, %): ";
        cin >> a;

        if (a = '/')
        {
            break;
        }
        if (a = '+')
        {
            break;
        }
        if (a = '-')
        {
            break;
        }
        if (a = '*')
        {
            break;
        }
        if (a = '%')
        {
            break;
        }


        cout << endl << "Invalid Input Enter Again Chawal...!!" << endl;
    }
    return a;
}


int calculation(int j,  char op, int k)
{
    int answer;
    if (k != 65536)
    {
        switch (op)
        {
        case '/':
        {
            answer = j / k;
        }
        case '*':
        {
            answer = j * k;
        }
        case '+':
        {
            answer = j + k;
        }
        case '%':
        {
            answer = j - k;
        }
        case '-':
        {
            answer = j - k;
        }
        }
    }
    return answer;
}

int answer()
{
    int j;
    cout << endl << "ANSWER: " << j << endl << endl;
    return 0;
}

int main()
{
    int j = 0;  //j is also used to store the answers in the loop
    int k = 0;
    char op = 'a';

    Init();
    Inputnumber(j);


    while (k != 65536)
    {
        op = operation();
        Inputnumber(k);
        j = calculation(j, k, op);
        answer();
    }
    return 0;
}
