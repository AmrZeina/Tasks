#include <iostream>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int applesCount = 0,orangesCount = 0;
    int m=apples.size();
    int n=oranges.size();
    for (int i = 0; i < m; i++)
    {
        apples[i] += a;
        if (apples[i] >= s && apples[i] <= t)
            applesCount++;
    }

    for (int i = 0; i < n; i++)
    {
        oranges[i] += b;
        if (oranges[i] >= s && oranges[i] <= t)
            orangesCount++;
    }

    cout << "Apples fall on the house = " << applesCount << endl;
    cout << "Oranges fall on the house = " << orangesCount << endl;
}

int main()
{
    int s,t,a,b,m,n;

    do
    {
        cout << "Note that the dimensions must be: a < s < t < b" << endl;
        do
        {
            cout << "Enter the house location s and t: ";
            cin >> s >> t;
        }
        while (s < 1 || s > 100000 || t < 1 || t > 100000);

        do
        {
            cout << "Enter the tree locations a and b: ";
            cin >> a >> b;
        }
        while (a < 1 || a > 100000 || b < 1 || b > 100000);

        do
        {
            cout << "Enter the number of apples m and oranges n: ";
            cin >> m >> n;
        }
        while (m < 1 || m > 100000 || n < 1 || n > 100000);

    }
    while (!(a < s && s < t && t < b));

    vector<int> apples(m), oranges(n);

    cout << "Enter the distances of apples: ";
    for (int i = 0; i < m; i++)
    {
        do
        {
            cin >> apples[i];
        }
        while (apples[i] > 100000 || apples[i] < -100000);
    }

    cout << "Enter the distances of oranges: ";
    for (int i = 0; i < n; i++)
    {
        do
        {
            cin >> oranges[i];
        }
        while (oranges[i] > 100000 || oranges[i] < -100000);
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}
