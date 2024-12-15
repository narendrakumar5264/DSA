#include<iostream>


using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++
    ){
if(n%i==0){
return 0;

}
else{
    return 1;
}}
}





int main(){

int n;
cin>> n;
if(isPrime(n)){

    cout<< "prime";
}
else{
    cout<< "not prime";
}
int n1;
cin>> n1;
if(isPrime(n1)){

    cout<< "prime";
}
else{
    cout<< "not prime";
}
int n2;
cin>> n2;
if(isPrime(n2)){

    cout<< "prime";
}
else{
    cout<< "not prime";
}
return 0;
}