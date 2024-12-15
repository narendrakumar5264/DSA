#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// partition 

int  partition(int arr[] , int s , int e){
    int pivot = arr[s];
    int count = 0;

    for(int i =s+1;i<=e;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotindex = s + count;

                                             //  placing pivot at right index

    swap(arr[pivotindex] , arr[s]);


                           // right and left wala part 

    int i = s; int j = e;

    while(i < pivotindex && j > pivotindex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotindex && j > pivotindex){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;

}

 //  Quick Sort 
 void  quicksort(int arr[] , int s , int e){
             // base case
    if(s >= e){
        return ;
    }
       /// partition 
       int p = partition(arr , s , e);
       // left part
       quicksort(arr , s , p-1);
       //right part
       quicksort(arr , p+1 , e);

 }


int main() {

    int a[6] ={3,42,21,521,2,43};
    int n =6;
    quicksort(a , 0 , n-1);
    for(int i =0;i<n; i++){
        cout<<a[i]<< " ";
    }
 cout << "all fine" <<endl;

    return 0;
}