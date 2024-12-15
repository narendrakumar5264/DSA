
#include<iostream>
#include<conio.h>
#include<stack>
#include<stdlib.h>

int power(int a , int b){
int ans= 1;
for(int i=1;i<=b;i++){
    ans =ans*a;
}
return ans;
}
using namespace std;

int main()
{ 
    system("cls");
int a,b;
cin>> a>>b;
int answer =power(a,b);
 
 
  cout<<"answe is"<<answer;


  int c,d;
cin>> c>>d;
int ans =power(c,d);
  cout<<"answe is"<<ans;
}
