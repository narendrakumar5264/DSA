#include <iostream>
using namespace std;
//binary with Recursion
bool Binary(int arr[] ,int s , int e ,int  key  ){

    // basecase 
    if(s > e){
        return false;
    }
    
    
    int mid = (s + e)/2;
    if(arr[mid] == key){
   
        return true;
    }
    //recursice relation
    if(arr[mid] >key){
      
       return  Binary(arr  ,s , mid -1  , key);
        
    }
    else{
     
        return Binary(arr  ,mid + 1, e , key);
        
    }
}



int main() {
    int arr[5] = {1,3,5,67,100};
    int s = 0 ; int e = 4;

 bool ans = Binary(arr ,s ,e,23 );
if(ans){
    cout<<"found"<<endl;
}
else{
      cout<<"Not found"<<endl;
}

    return 0;
}

