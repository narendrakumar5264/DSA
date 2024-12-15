#include<iostream>
using namespace std;
//fact using recursion
int fact(int n){
    if(n ==0){
        return 1;
    }
    int b = n* fact(n-1);
    return b;
}
//power of 2
int power(int n){
    if(n  == 0){
        return 1;
    }
    int ans = 2 * power(n-1);
    return ans;
}
//printing counting
void count(int n ){
    if(n == 0){
        return ;

    }
    cout<<n<<endl;
    count(n-1);
}
                //is array is sorted
bool  issorted(int arr[] , int n){
    //Base Case
    if(n == 0 || n==1){
       return true;
    }
    // recursive relation
    if(arr[0] > arr[1]){
       return false;
    } 
    else{
        int ans = issorted(arr+1,n-1);
        return ans;
    }
}  
  //sum of the array
int Sum (int arr[] , int n){
    if(n == 0 ){
       return 0;
    }
  
   int sum  = arr[0] +  Sum(arr + 1 , n-1);
   return sum;
}              
int main(){
    int n;
    int a[5] = {3,23,114,14,12};
    int b[6] = {2,4,5,7,8,9};
      cout<<"Enter the number :"<<endl;
    cin>>n;
    int pow  = power(n);
    int ans  = fact(n);
    
    cout<<ans<<endl<<pow<<endl;
     count(n);
    bool result =  issorted(b ,6);
  
    if(result){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
int c = Sum(a , 5);
cout<<c<<endl;

    return 0;
}