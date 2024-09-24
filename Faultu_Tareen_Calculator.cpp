#include <iostream>
using namespace std;


void Init()
{
    cout << "Welcome to Faltu TAREEN Calculator by JUNAID and SARFRAZ for BEHTEREEN DEBUGGERS ONLY!" << endl << endl
        << "Enter number 65536 to END program" << endl << endl;
}

int number()
{
    float z;
    cout << "Enter Any REAL Number: ";
    cin >> z;
    return z;
}

char operation()
{
    char a;

    cout << "Enter Operation ( (D)ivide, (M)ul, Minu(s), (P)lus: ";
    cin >> a;

    while (1)
    {
        if (a == 'D' && a == 'd')
        {
            return '/';
        }
        if (a == 'M' && a == 'm')
        {
            return '*';
        }
        if (a == 'M' && a == 'm')
        {
            return '-';
        }
        if (a == 'P' && a == 'p')
        {
            return '-';
        }
        else
            cout << endl << "Invalid Input... Enter AGain !!" << endl;
    }
}

int DoCalculation(float j, float k, char op)
{
    int answer = 0;
    if (k != 65536)
    {
        switch (op)
        {
        case 'D':
        case 'd':
        {
            answer = j / k;
            break;
        }
        case 'M':
        case 'm':
        {
            answer = j * k;

        }
        case 'P':
        case 'p':
        {
            answer = j + k;
            break;
        }
        case 'S':
        case 's':
        {
            answer = j - k;
            break;
        }
        }
    }
    return answer;
}

void DisplayAnswer(float ans)
{
    cout << endl << "ANSWER: " << ans << endl << endl;
}


int main()
{
    float operand1 = 0, operand2 = 0;
    char op = 'a';

    Init();

    operand1 = number();

    while (operand2 != 65536)
    {
        op = operation();

        operand2 = number();

        operand1 = DoCalculation(operand1, op, operand2);

        DisplayAnswer(operand1);
    }
    return 0;
}