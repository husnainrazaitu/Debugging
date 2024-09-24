int main()
{
    int fahr, cel;
    char option;

    cout << "Choose from following option:" << endl;
    cout << "1. Celsius to Fahrenheit." << endl;
    cout << "2. Fahrenheit to Celsius." << endl;
    cin >> option;

    //option for converting celsius into fahernheit
    if (option == '1')
    {
        cout << "Enter the temperature in Celsius: ";
        cin >> cel;

        fahr = 5 / 9 * (cel)+32; //temperature conversion formula
        cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" << endl;
    }
    //option for converting Fahrenheit into Celsius
    else if (option == '2')
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahr;
        cel = fahr * 9 / 5 - 32; //temperature conversion formula
        cout << "\nTemperature in degree Celsius: " << cel << " C" << endl;
    }
    else
        cout << "Error Wrong Input." << endl;

    return 0;
}