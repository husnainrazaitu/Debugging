#include <iostream>
#include <conio.h>
using namespace std;


/*Error 1:

For the option 1 - SixDigitsSum is not returning correct output

For the option 2 - on input 8 4 the program is outputting 3 outputs which is incorrect. and similarly for 4 8 it is outputting 2 outputs.

For the option 13 (when you give input of any real value let us say 13.5 it exits the program.

    Error 2:

For the option 14 (when you give input of any real value let us say 13.5 it exits the program.


    Error 3:

For  the option 13 if the entered value is integer the output of the ceiling is wrong.

Error 4 :

    For  the option 14 if the entered value is integer the output of the ceiling is wrong.*/

int sixdigit(int num)
{

    int sum;
    sum = sum + num % 10;
    num = num / 10;

    sum = sum + num % 10;
    num = num / 10;

    sum = sum + num % 10;
    num = num / 10;

    sum = sum + num % 10;
    num = num / 10;

    sum = sum + num % 10;
    num = num / 10;

    sum += num;

    return sum;
}

int prob1()
{
    int num, result;
    cout << "Enter a six digit number" << endl;
    cin >> num;

    result = sixdigit(num);
    cout << result;

}


int multiple(int n1, int n2)
{
    if (n1 % n2 == 0)
        return 1;
    if (n2 % n1 == 0)
        return 2;

    return 3;

}


int prob2()
{
    int n1, n2, m;
    cout << "To know multiple write two numbers:" << endl;
    cin >> n1 >> n2;
    m = multiple(n1, n2);
    switch (m)
    {
    case 1:
        cout << n1 << " is multiple of" << n2 << endl;

    case 2:
        cout << n2 << " is multiple of" << n1 << endl;
        break;

    case 3:
        cout << "none" << endl;
    }


}

int midof3(int n1, int n2, int n3)
{
    if ((n1 > n2 && n1 < n3) || (n1<n2 && n1>n3))
    {
        return n1;
    }
    if ((n2 > n1 && n2 < n3) || (n2<n1 && n2>n3))
    {
        return n2;
    }
    return n3;
}

int prob3()
{
    int mid, q, w, e;
    cout << " enter number to know mid number: " << endl;
    cin >> q >> w >> e;
    mid = midof3(q, w, e);
    cout << mid << " is the mid" << endl;

}

int thecharacteris(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    if (ch >= 'a' && ch <= 'z')
        return 2;

    return 3;
}

int prob4()
{

    char ch;
    cout << "write to know: " << endl;
    cin >> ch;
    int result = thecharacteris(ch);
    switch (result)
    {
    case 1:
        cout << "the character is capital" << endl;
        break;
    case 2:
        cout << "it is smaller" << endl;
        break;
    case 3:
        cout << "none" << endl;
        break;
    }
}

int game(char p1, char p2)
{
    if ((p1 == 'r' && p2 == 's') ||
        (p1 == 's' && p2 == 'p') ||
        (p1 == 'p' && p2 == 'r'))
        return 1;

    if ((p2 == 'r' && p1 == 's') ||
        (p2 == 's' && p1 == 'p') ||
        (p2 == 'p' && p1 == 'r'))
        return 2;

    if (p1 == p2)
        return 3;

    return 4;
}

int prob5()
{
    char p1, p2, wl;
    cout << " himmat dekhao " << endl;
    p1 = getch();
    cout << "*" << endl;
    p2 = getch();
    cout << "*" << endl;

    wl = game(p1, p2);

    switch (wl)
    {
    case 1:
        cout << " p1 wins " << endl;
        break;

    case 2:
        cout << " p2 wins " << endl;
        break;

    case 3:
        cout << " drawn " << endl;
        break;

    case 4:
        cout << " invalid input" << endl;
    }

}

int calculator(int c1, char opr, int c2)
{
    if (opr == '+')
        return 1;

    if (opr == '-')
        return 2;

    if (opr == '*')
        return 3;

    if (opr == '/')
        return 4;

}
int prob6()
{
    int c1, c2, action;
    char opr;
    cout << " write operation " << endl;
    cin >> c1 >> opr >> c2;

    action = calculator(c1, opr, c2);

    switch (action)
    {
    case 1:
        cout << c1 << "+" << c2 << "=" << c1 + c2 << endl;
        break;
    case 2:
        cout << c1 << "-" << c2 << "=" << c1 - c2 << endl;
        break;
    case 3:
        cout << c1 << "x" << c2 << "=" << c1 * c2 << endl;
        break;
    case 4:
        cout << c1 << "/" << c2 << "=" << c1 / c2 << endl;
    }

}

int higheraverage(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int max, index;
    max = a1;
    index = 1;
    if (a2 > max)
    {
        max = a2;
        index = 2;
    }
    if (a3 > max)
    {
        max = a3;
        index = 3;
    }

    if (a4 > max)
    {
        max = a4;
        index = 4;
    }

    if (a5 > max)
    {
        max = a5;
        index = 5;
    }

    if (a6 > max)
    {
        max = a6;
        index = 6;
    }
    return index;
}


int prob7()
{
    int a1, a2, a3, a4, a5, a6, result;
    char s1, s2, s3, s4, s5, s6;
    cout << "1st Section Name and it Average:";
    cin >> s1 >> a1;
    cout << "2nd Section Name and it Average:";
    cin >> s2 >> a2;
    cout << "3rd Section Name and it Average:";
    cin >> s3 >> a3;
    cout << "4th Section Name and it Average:";
    cin >> s4 >> a4;
    cout << "5th Section Name and it Average:";
    cin >> s5 >> a5;
    cout << "6th Section Name and it Average:";
    cin >> s6 >> a6;

    result = higheraverage(a1, a2, a3, a4, a5, a6);
    switch (result)
    {
    case 1:
        cout << s1 << " " << "with higher average " << a1;
        break;
    case 2:
        cout << s2 << " " << "with higher average " << a2;
        break;
    case 3:
        cout << s3 << " " << "with higher average " << a3;
        break;
    case 4:
        cout << s4 << " " << "with higher average " << a4;
        break;
    case 5:
        cout << s5 << " " << "with higher average " << a4;
        break;
    case 6:
        cout << s6 << " " << "with higher average " << a6;
        break;
    }
    return 0;
}


void digit2word(int num)

{

    switch (num)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    case 6:
        cout << "six" << endl;
        break;
    case 7:
        cout << "seven" << endl;
        break;
    case 8:
        cout << "eight" << endl;
        break;
    case 9:
        cout << "nine" << endl;
        break;
    case 0:
        cout << "zero" << endl;
    }
}
int prob9()
{
    int num;
    cout << "write the number" << endl;
    cin >> num;

    int d1, d2, d3, d4, d5, d6;


    d6 = num % 10;
    num = num / 10;

    d5 = num % 10;
    num = num / 10;

    d4 = num % 10;
    num = num / 10;

    d3 = num % 10;
    num = num / 10;

    d2 = num % 10;
    num = num / 10;

    d1 = num;
    num = num / 10;

    digit2word(d1);
    digit2word(d2);
    digit2word(d3);
    digit2word(d4);
    digit2word(d5);
    digit2word(d6);

}



int distance(int x1, int y1, int x2, int y2)
{
    int d;
    d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return d;
}
int side(int d1, int d2, int d3, int d4, int dg1, int dg2)
{
    if (d1 == d2 && d2 == d3 && d3 == d4 && dg1 == dg2)
        return 1;

    if (d1 == d3 && d2 == d4 && dg1 == dg2)
        return 2;

    if (d1 == d2 && d2 == d3 && d3 == d4 && dg1 != dg2)
        return 3;

    if (d1 == d3 && d2 == d4 && dg1 != dg2)
        return 4;

    return 5;

}

int prob10()
{

    int p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y, d1, d2, d3, d4, dg1, dg2;
    cout << " ENTER POINTS " << endl;
    cin >> p1x >> p1y >> p2x >> p2y >> p3x >> p3y >> p4x >> p4y;
    d1 = distance(p1x, p1y, p2x, p2y);
    d2 = distance(p2x, p2y, p3x, p3y);
    d3 = distance(p3x, p3y, p4x, p4y);
    d4 = distance(p1x, p1y, p4x, p4y);
    dg1 = distance(p3x, p3y, p1x, p1y);
    dg2 = distance(p4x, p4y, p2x, p2y);
    int result = side(d1, d2, d3, d4, dg1, dg2);
    switch (result)
    {
    case 1:
        cout << "It is a square " << endl;
        break;
    case 2:
        cout << "It is a rectangle " << endl;
        break;
    case 3:
        cout << "It is a rhombus " << endl;
        break;
    case 4:
        cout << "It is a parallelogram " << endl;
        break;
    case 5:
        cout << "It is a quadrilateral ";
    }

}



int sides(int z, int b, int n)
{
    if ((z == b) && (b == n))
        return 1;

    if ((z == b) && (z == n) && (b != n))
        return 2;

    if ((z != b) && (b != n) && (z != n))
        return 3;

    if ((z * z) + (b * b) == (n * n))
        return 4;


}

int prob11()
{
    int p1a, p1b, p2a, p2b, p3a, p3b, z, b, n;
    cout << " ENTER POINTS " << endl;
    cin >> p1a >> p1b >> p2a >> p2b >> p3a >> p3b;
    z = distance(p1a, p1b, p2a, p2b);
    b = distance(p2a, p2b, p3a, p3b);
    n = distance(p3a, p3b, p1a, p1b);

    int result = sides(z, b, n);

    switch (result)
    {
    case 1:
        cout << "Triangle is equilateral " << endl;
        break;
    case 2:
        cout << " Triangle is isoceles " << endl;
        break;
    case 3:
        cout << " Triangle is scalene " << endl;
        break;
    case 4:
        cout << " Triangle is Right angled " << endl;
    }
}

int point(int p1x, int p1y, int p2x, int p2y, int p3x, int p3y, int p4x, int p4y, int px, int py)
{
    if (px<p1x || py<p2y || px>p3y || py>p4y)
        return 1;

    if (px > p1x || py > p2y || px < p3y || py < p4y)
        return 2;

    return 3;
}

int prob12()
{
    int p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y, px, py;
    cout << " enter coordinates" << endl;
    cin >> p1x >> p1y >> p2x >> p2y >> p3x >> p3y >> p4x >> p4y >> px >> py;

    int ans = point(p1x, p1y, p2x, p2y, p3x, p3y, p4x, p4y, px, py);

    switch (ans)
    {
    case 1:
        cout << "point is outside" << endl;
        break;
    case 2:
        cout << "point is inside" << endl;
        break;
    case 3:
        cout << "point on line" << endl;
    }

}

int ceiling(float n1)
{
    int cv = n1;
    if (n1 > 0 && n1 != 0)
    {
        n1 = n1 + 1;
    }
    return n1;
}
int p13()
{
    int result, numb;
    cout << "Enter a Real(+ve/-ve) number: ";
    cin >> numb;

    result = ceiling(numb);
    cout << result;

}


int floor(float n2)
{
    int fv = n2;
    if (n2 > 0 && fv != n2)
    {
        n2 = n2 - 1;
    }
    return fv;
}

int p14()
{
    int result, numb;
    cout << "Enter a Real(+ve/-ve) number: ";
    cin >> numb;

    result = floor(numb);
    cout << result;
}

void menu()
{
    cout << "\n\n\n"
        << "P1: summation of six digit \n" 
        << "P2: is it multiple? \n"
        << "P3: write to know the middle \n"
        << "P4: capital or small \n"
        << "P5: play the game \n"
        << "P6: calculator \n"
        << "P7: ask to top section \n"
        << "P9: digit into words \n"
        << "P10: which quadrilateral? \n"
        << "P11: triangles \n"
        << "P12: point in or out \n"
        << "P13: ceiling value \n"
        << "P14: floor value \n";
}

int main()
{
    char choice;

    do
    {
        int pchoice;
        menu();
        cout << "\n\nProblem # ";
        cin >> pchoice;

        switch (pchoice)
        {
        case 1:
            prob1();
            break;

        case 2:
            prob2();
            break;

        case 3:
            prob3();
            break;

        case 4:
            prob4();
            break;

        case 5:
            prob5();
            break;

        case 6:
            prob6();
            break;

        case 7:
            prob7();
            break;

        case 9:
            prob9();
            break;

        case 10:
            prob10();
            break;

        case 11:
            prob11();
            break;

        case 12:
            prob12();
            break;

        case 13:
            p13();
            break;

        case 14:
            p14();
            break;
        }

        cout << " \n\n choose Y/y to continue :";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}
