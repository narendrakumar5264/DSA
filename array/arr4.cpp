#include<iostream>


using namespace std;



int main(){
int size ;
cout<< "size of array";
cin>>size;
int a[100];
int sum =0;
cout << "enter the elements of the array";
for(int i=0;i<size;i++){
    cin >> a[i];

sum = sum + a[i];

}
cout<< "sum of area" << sum;

return 0;
}