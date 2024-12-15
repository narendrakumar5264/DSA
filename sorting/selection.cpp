#include<iostream>
using namespace std;
                    //Selection sort
      int selection(int a[] , int n){
        for(int i =0; i<n;i++){
            int min = 0;
            for(int j =i;j<n;j++){
         if(a[min]< a[j]){
             min = j;
          }
            }
            swap(a[i] , a[min]);
        }

      }              
void print( int  a[] , int size){
for(int i =0; i<size;i++){
     cout << a[i] << " " ;
    
} 
cout<<endl;
}

int main(){
    int arr[4] = {3 , 11 , 2 , 5};
selection(arr , 4);
print(arr , 4);

     return 0;
}