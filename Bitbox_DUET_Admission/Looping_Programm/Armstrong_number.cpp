// Armstrong number - C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int orig_no, p = 0, n, v, r, sum = 0;

    cout << "Enter any Number = ";
    cin >> orig_no;

    n = orig_no;
    while (n != 0) {
        n /= 10;
        ++p;
    }

    n = orig_no;
    while (n != 0) {
        r = n % 10;
        n /= 10;
        sum += round(pow(r,p));
    }

    if (sum == orig_no) {
        cout << "Armstrong Number.\n";
    }
    else {
        cout << "Not Armstrong Number.\n";
    }

    return 0;
}
