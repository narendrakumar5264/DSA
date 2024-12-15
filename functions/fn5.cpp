#include<iostream>
using namespace std;

int Arth(int n){
int Arth = ((3*n) +7);
return Arth;
}

int main(){
    int n ;
    cin>> n;
int ans= Arth(n);
    cout<< "n th term is"<<ans;
  


}