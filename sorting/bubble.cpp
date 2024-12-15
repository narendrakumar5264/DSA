#include<iostream>
using namespace std;
                    //Bubble sort
      int Bubble(int a[] , int n){
        for(int  i =1; i<=n;i++){
            for(int  j =0; j<n;j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
            }
        }

      }              
void print( int  a[] , int size){
for(int i =0; i<size;i++){
     cout << a[i] << " " ;
    
} 
cout<<endl;
}

int main(){
    int arr[5] = {0 ,2 ,1 ,2 ,0};
Bubble(arr , 5);
print(arr , 5);

     return 0;
}