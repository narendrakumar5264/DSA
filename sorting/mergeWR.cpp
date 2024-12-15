#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
//  merging both array 
void merge(int a[] , int s , int e){
    int mid = (s  + e)/2;

    int len1 = mid -s +1;
    int len2 = e -mid ;

    int first[len1];
    int second[len2];
    // copy values 

    int sindex  = s ;
    for(int i =0;i<len1;i++){
        first[i] = a[sindex];
        sindex++;
    }
     sindex = mid +1;
     for(int i =0;i<len2;i++){
        second[i] = a[sindex];
        sindex++;
    }


    // merge 2 sorted array 
    int index1 =0; int index2 =0;
          sindex = s;
    while (index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            a[sindex++] = first[index1++];
        }
        else{
            a[sindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        a[sindex++] = first[index1++];
    }
    while(index2 < len2){
        a[sindex++] = second[index2++];
    }
    
}


///  merge sorting  
void mergeS(int a[] , int s, int e){
    if(s >= e){
        return ;
    }
    int mid = (s + e)/2;
    // sorting left part
    mergeS(a , s , mid);

    //sorting right part
    mergeS(a , mid + 1 , e);

    //merge 
    merge(a ,s , e );


}


int main() {
    int a[6] ={3,42,21,521,2,43};
    int n =6;
    mergeS(a , 0 , n-1);
    for(int i =0;i<n; i++){
        cout<<a[i]<< " ";
    }
 cout << "all fine" <<endl;

    return 0;
}
