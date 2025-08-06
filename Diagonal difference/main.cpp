#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int diagonalDifference(vector<vector<int>> matrix,int n)
{
    int dSum1=0,dSum2=0,difference;
    for(int i=0;i<n;i++)
    {
        dSum1+=matrix[i][i];
        dSum2+=matrix[i][n-i-1];
    }
    difference=dSum1-dSum2;
    difference=fabs(difference);
    return difference;

}
int main()
{
    int n;
    cout<<"enter the size of the square matrix";
    cin >>n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i=0;i<n ; i++)
    {
        cout << "enter a row of the matrix";
        for (int j=0;j<n ; j++)
        {
           cin>>matrix[i][j];
        }
    }
    int absDifference=diagonalDifference(matrix,n);
    cout<< "the absolute diagonal difference for the matrix = " << absDifference;


}
