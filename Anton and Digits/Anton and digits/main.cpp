#include <iostream>
#include <cmath>

using namespace std;

int findMin(int x , int y)
{
    return x<y?x:y;
}

int findMinOfThree(int x,int y , int z)
{
    return findMin(findMin(x,y),z);
}

int main()
{
   int k2,k3,k5,k6,maxSum;
   cout << "Welcome to Antony digits" << endl;

   do
   {
       cout << "enter number of 2s 3s 5s 6s (must be less than 5*10^6): ";
       cin >> k2>>k3>>k5>>k6;
   }
   while( k2>(5*(pow(10,6))) || k3>(5*(pow(10,6)))|| k5>(5*(pow(10,6))) || k6>(5*(pow(10,6))) ) ;


   int number1= findMinOfThree(k2,k5,k6);
   k2-=number1;
   int number2=findMin(k2,k3);
   maxSum=(256*number1) + (32*number2);
   cout << "maximum sum = " <<maxSum;
}
