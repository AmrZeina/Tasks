#include <iostream>

using namespace std;

int main()
{
    int t;
    cout<<"enter the number of test cases: ";
    cin >> t;
    while (t)
    {
        int n;
        cout<<"enter a limit number to check the greatest gcd till reaching it : " ;
        cin >> n;
        cout << n / 2 << endl;
        t--;
    }
    return 0;
}
