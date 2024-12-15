#include<iostream> 
using namespace std;
void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}



  void Aswap(int arr[], int size){
    for(int i = 0; i < size; i += 2) {
        if(i + 1 < size) {
       swap(arr[i] ,arr[i+1]);
        }
    }
}

int main(){

    int a[8] = {2,3,1,7,8,7,19,12};
    int b[5] = {5,6,2,7,8};
    Aswap(a, 8);
    print(a, 8);
    cout<<endl;
        Aswap(b, 5);
    print(b, 5);
    
}