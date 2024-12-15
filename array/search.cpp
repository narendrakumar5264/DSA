#include<iostream>
#include<stack>
#include<climits>

using namespace std;
bool search(int a[],int size,int key){
for(int i=0;i<size;i++){

if(a[i] == key){
    return 1;
}

}
return 0;
}

int main(){

int a[10] = {1, 34, 12, 43, 3, 5, 7, 2, 7, 8};
cout<<"enter your value of search"<<endl;
int key ;
cin>> key;
bool found = search(a ,10, key);
if( found  ){

cout<<"present";
}
else{
    cout<<"absent";
}


return 0;
}