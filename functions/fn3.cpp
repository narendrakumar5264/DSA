#include<iostream>
#include<conio.h>
#include<stack>
#include<stdlib.h>
using namespace std;

int factorial(int n) {
 int fact =1;
 for( int i=1; i<=n;i++)
{
    fact=fact*i;
}
return fact;
}
int ncr(int n , int r){
int a = factorial(n);
    int b = factorial(r)*factorial(n-r);
    int ncr = a/b;
    return ncr;
}

int main(){

int n ,r;
cin>> n>>r;
cout<<"the value of ncr"<<  ncr(n , r) <<endl;

return 0;
}