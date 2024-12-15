#include<iostream>
using namespace std;
  int peakIndexInMountainArray(int  arr[] , int size) {
        int start  = 0;
        int end = size -1;
        int  mid = start + ( end - start )/ 2;
        while(start <= end){
            if (arr[mid] < arr[mid+1]){
                start = mid +1;
            }
         
            else{
            end = mid;
            }

 int  mid = start + ( end - start )/ 2;
        }
    return start;
    }

int main(){
   int arr[3] = {0,1,0};
int ans = peakIndexInMountainArray(arr ,3);

cout<< " "<< " " <<ans<<endl;
return 0;
}