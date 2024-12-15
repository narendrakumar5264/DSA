#include<iostream>
using namespace std;

 int PivotElement(int arr[] ,int size){
int start =0;
int end = size -1;
int mid = start + (end - start)/2;
while(start < end){
if (arr[mid] >= arr[0]){
    start = mid +1;
}
else{
    end = mid;
}
mid = start + (end - start)/2;

}

return start;

 }


int main(){
   int arr[5] = {3,4,5,1,2};
int ans = PivotElement(arr ,5);

cout<< "Pivot Of array "<< " " <<ans<<endl;
return 0;
}