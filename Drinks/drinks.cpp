#include <iostream>
#include <vector>
using namespace std;

int main (void)
{
    cout << "welcome to Vasya's fridge" << endl;
    cout << "Enter the number of drinks containing oranges ";

    int number;
    float percentage=0.0;

    cin >> number ;
    cout << "Enter the volume fraction(s) of orange juice in the drink(s)";
    vector <int> fractions (number);

    for (int i=0 ; i<number ; i++)
    {
        cin >> fractions[i];
        percentage+=fractions[i]/100.0;
    }

    percentage=(percentage/number)*100;
    cout << "the percentage of orange juice in the cocktail = " << percentage;

}
