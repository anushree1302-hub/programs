#include <iostream> 
using namespace std; 
  
int calculate(int a, int b, int c) 
{
    int arr[2];
    int y;
    arr[0]=a;
    arr[1]=b;
    y=arr[c];
    return y;
}

int main()
{
    int a =5;
    int b=10;
    int c=1;
    cout<<" value assign to variable y is :"<< calculate(a,b,c);
    return 0;
}