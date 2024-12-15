#include<iostream>
using namespace std;
                    // BinearySearch
int BinearySearch(int arr[] , int size , int key){
   
    int start = 0;
    int End = size -1;
    int mid = start + ( End - start )/ 2;
    while (start <= End){
        if (key ==  arr[mid]){
            return mid;
        }
        else if (key > arr[mid]){
            start = mid +1;
        }
        else{
            End = mid -1;
        }
mid = (start + End)/ 2;

    }
return -1 ;


}
                                // Find First and Last Position of Element in Sorted Array
int FirstOccurance(int arr[] , int size , int key){
   int ans =-1;
    int start = 0;
    int End = size -1;
 int  mid = start + ( End - start )/ 2;
    while (start <= End){
        if (key ==  arr[mid]){
            ans = mid;
            End = mid -1;
        }
        else if (key > arr[mid]){
            start = mid +1;
        }
        else{
            End = mid -1;
        }
int mid = start + ( End - start )/ 2;

    }
return ans ;


}
int LastOccurance(int arr[] , int size , int key){
      int ans =-1;
    int start = 0;
    int End = size -1;
   int  mid = start + ( End - start )/ 2;
    while (start <= End){
        if (key ==  arr[mid]){
            ans = mid;
start = mid + 1;
        }
        else if (key > arr[mid]){
            start = mid +1;
        }
        else{
            End = mid -1;
        }
int mid = start + ( End - start )/ 2;

    }
return ans ;


}



int main () {

// int Odd[5] = {5,7,7,8,8,10};
// int Even[6]= {2 , 5 , 7 ,20 , 25 ,30};
// int key ;
// cout<< "Enter the key to find " << endl;
// cin>>key ;
// int ODD = BinearySearch(Odd , 5 , key );
// int EVEN = BinearySearch(Even , 6 , key);
// cout << " in  Odd array your key is at "<< ODD <<endl;
// cout << " in  Even  array your key is at "<< EVEN <<endl;
int a[6] = {5,7,7,8,8,10};
int F = FirstOccurance(a , 6 , 6);
int L =LastOccurance(a , 6 , 6);
cout<< "first occurance at "<<F<<endl;
cout<< "Last occurance at "<<L<<endl;
    return 0;
}