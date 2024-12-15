#include<iostream>
#include<conio.h>
#include<stack>
#include<stdlib.h>
using namespace std;

bool Even(int a){

    if(a%2==0){
        return 0;
    }
    else{
        return 1;
    }
}



int main() {
    system("cls");
int num;
cin>> num;
if(Even(num)){
    cout<<"odd";

}
else{
    cout<<"even";
}
int num1;
cin>> num1;
if(Even(num1)){
    cout<<"odd";

}
else{
    cout<<"even";
}

int num2;
cin>> num2;
if(Even(num2)){
    cout<<"odd";

}
else{
    cout<<"even";
}


}
