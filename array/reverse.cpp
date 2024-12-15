
#include<iostream>
#include<stack>
using namespace std;

void reverse(int arr[] , int n)
{
int start = 0;
int end = n-1;
while(start <= end){
swap(arr[start] , arr[end]);
start ++;
end --;
}
}
void print(int arr[] ,int n) 
{
    for (int i=0; i<n; i++){
        cout << arr[i] <<endl;
    }
}
int main()
{
    int a[5] = {3,2,4,5,4};
    int b[4] = {1,12,-6,2};
 
 reverse( a , 5);
 reverse( b , 4);

 print(a , 5);
 print(b , 4);
  
return 0;
}
