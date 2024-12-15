#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int power(int a , int b){
    //base case
    if(b == 0){
        return 0;
    }
    if(b == 1){
        return a;
    }
    //recursive call
    int ans = power(a , b/2);
    //even 
    if(b%2 == 0){
        return ans*ans;

    }
    else{
        return a*ans*ans;
    }
}




int main() {
    int a ; int b;
    cin>>a;
    cin>>b;
    int ans = power(a , b);
    cout<< "the power is "<< ans<<endl;
 cout << "all fine" <<endl;

    return 0;
}
