#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool palindrome(string s , int i , int j ){
    if(i>j){
        return true;
    }
    if(s[i] != s[j] ){
        return false;
    }
    else{
        return palindrome(s , i +1 , j -1 );
        
    }
}



int main() {
    string s = "ababa";
    bool str = palindrome(s , 0 , s.length()-1);
    if(str){
        cout<<"string is a Palindrome"<<endl;

    }
    else{
        cout<<"string is not a palindrome";
    }

 cout << "all fine" <<endl;

    return 0;
}
