#include <iostream>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int i, a[10], j = 0, n, f = 0;
    cout << "Enter OTP";
    cin >> n;
    clrscr();
    for (i = 0; i < 10; i++)
    {
        a[j] = rand() % 1000;
        j++;
    }

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << "OTP Matched";
    }
    getch();
}