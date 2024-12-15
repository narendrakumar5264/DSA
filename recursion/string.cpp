#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// reverse a string
void reverse(string&  str , int i , int j){
    if(i> j){
        return ;

    }
    swap(str[i] , str[j]);
    i++;
j--;
reverse(str , i ,j);
}



int main() {
string s = "narendra";
int i =0; int j = s.length() -1;
reverse(s , i , j);
cout<< s ;
    return 0;
}
