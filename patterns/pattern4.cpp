
#include<iostream>
#include<conio.h>
#include<stack>
#include<stdlib.h>


using namespace std;

int main()
{
  system("cls");
    int n;
    int count =0;
    
    cout<<"enter your number";
    cin>> n;

    for(int i=1;i<=n;i++)
    {
     
    for (int j=n;j<=i;j++){
        count =count+1;
        cout<<count<<" ";
        
    } cout<<endl;
    }
     

}