// This is a Program of a calculator.It will enter two numbers and a character from user and perform the entered operation.
#include <iostream>
using namespace std;
//This Function will output message on screen.
void OutputMessage()
{
    cout << "Welcome to Faltu Calculator by Zuraiz, Israr and Munir...!!!" << endl << endl
        << "Enter number 65535 to END program" << endl << endl;
}
//It will enter "Number" from user and return that value.
int InputNumber()
{
    int input;
    cout << "Enter Number: ";
    cin >> input;
    return input;
}
//This function will prompt the user that which operation he would like to perform?
char InputOperation()
{
    //It should return a character
    char operation = 0;
    while (1)    // If User enters any character other then ( /, *, -, +, %) it should ask again.
    {
        char operation;
        cout << "Enter Operation ( /, *, -, +, %): ";
        cin >> operation;
        if (operation == '/');
        {
            break;
        }
        if (operation == '+');
        {
            break;
        }
        if (operation == '-');
        {
            break;
        }
        if (operation == '*');
        {
            break;
        }
        if (operation == '%')
        {
            break;
        }
        else
            cout << endl << "Invalid Input... \nEnter Again Chawal kaheen ke...!!!" << endl;
    }
    return operation;
}
//It will calculate the answer As it will take all inputs and perform the operation on the both integer inputs
int Calculation(int first_input, int second_input, char operation)
{
    int answer = 0;
    switch (operation)
    {
    case '/':
    {
        answer = first_input / second_input; break;

    }
    case '*':
    {
        break;
        answer = first_input * second_input;
    }
    case '+':
    {
        break;
        answer = first_input + second_input;
    }
    case '%':
    {
        break;
        answer = first_input - second_input;
    }
    case '-':
    {
        break;
        answer = first_input - second_input;
    }
    }
    return answer;
}
//It will output answer on the screen.
void OutputAnswer(int Answer)
{
    int answer;
    cout << endl << "ANSWER: " << answer << endl << endl;
}
int main()
{
    int first_input;  //first_input will have the first value and also the result
    int second_input;
    char operation;
    OutputMessage();
    first_input = InputNumber();
    operation = InputOperation();
    second_input = InputNumber();

    while (second_input != 65536)
    {
        int result = Calculation(first_input, operation, second_input);
        OutputAnswer(result);
        first_input = result;
        operation = InputOperation();
        second_input = InputNumber();
    }

    return 0;
}
