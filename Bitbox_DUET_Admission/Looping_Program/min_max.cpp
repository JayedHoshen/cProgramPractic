// write a program that reads (n) numbers from keyboard and display the
// maximum and minimum of those numbers - C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, mx, mn, total_num;

    cout << "How many number you input ? = ";
    cin >> total_num;

    cout << "Enter your number = ";
    cin >> num;

    mx = mn = num;

    for (i = 1; i < total_num; i++) {
        cout << "Enter your number = ";
        cin >> num;
        if (num > mx) mx = num;
        else if (num < mn) mn = num;
    }

    cout << "Maximum Num: " << mx << endl;
    cout << "Minimum Num: " << mn << endl;

    return 0;
}
