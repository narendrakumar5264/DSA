#include<iostream>
using namespace std;
                    //      Insertion sort
      int Insertion(int a[] , int n){
        for(int  i =1; i<=n;i++){
            int temp = a[i];
            int j =i-1;
           for(;j >= 0; j--){
            if(a[j] > temp){
                //shifting
                a[j+1] = a[j];
            }
            else{
                break;
            }
           

           }
            a[j+1] = temp;
        }

      }              
void print( int  a[] , int size){
for(int i =0; i<size;i++){
     cout << a[i] << " " ;
    
} 
cout<<endl;
}

int main(){
    int arr[6] = {5,7,3,5,1,10};
Insertion(arr , 6);
print(arr , 6);

     return 0;
}