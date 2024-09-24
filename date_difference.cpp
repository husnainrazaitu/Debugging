#include <iostream>
using namespace std;

void DateDifference(int dob, int mob, int yob, int dod, int mod, int yod)
{
    //if day is greater than take carry from month
    if (dob > dod) {
        dod--;
        mod += 12;
    }
    //if month of birth is greater than take carry from year.
    if (mob > mod) {
        mod--;
        yod += 1;
    }


    //now we can simply subtract
    int days = dod - dob;
    int months = mod - mob;
    int years = yod - yob;

    cout << years << " years " << months << " months " << days << " days old" << endl;
}

int main()
{
    int dob, mob, yob, dod, mod, yod; // day, month, year of birth and death

    cout << "Enter date of birth: ";
    cin >> dob >> mob >> yob;

    cout << "Enter date of death: ";
    cin >> dod >> mod >> yod;

    DateDifference(dob, mob, yob, dod, mod, yod);


}