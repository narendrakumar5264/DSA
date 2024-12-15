#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
                         
                                   // Printing Array
void print( int  a[] , int size){
for(int i =0; i<size;i++){
     cout << a[i] << " " ;
    
} 
cout<<endl;
}
                     
                                        //   Sum Of Array
void TotalofArray(int a[] , int size){
     int sum =0;
    for(int i =0; i<size;i++){
    
     sum = sum + a[i];
   
}
cout <<"Sum of Array" << " "<< sum << endl;


}                      
                                             // Swaping Of Array
void SwapAlternate(int a[] , int size){
     for(int i =0; i<size; i+=2){
          if(i+1 <size){
          swap(a[i] ,a[i+1]);
          }
     }

}                                 
                              //    Reverse Of Array 
void Reverse(int a[] ,int size){
     int start =0;
     int end = size -1 ;
     while(start <= end){     
      swap(a[start] , a[end]);
      start ++;
      end --;
     }
}                                        
                              //     Max and Min Of Array
void Max(int a[] , int size){

    int  max =0;
   
      for(int i =0; i<size; i++){
          if(max < a[i]){
               max = a[i];
          }
      }
      cout <<"Maximun of Array"<<max <<endl;
}
void Min(int a[] , int size){

    int  min = a[0];
   
      for(int i =0; i<size; i++){
          if(min > a[i]){
               min = a[i];
          }
      }
      cout <<"Minimum of Array"<<min <<endl;
}
                                                       //  Searching Of Array 
void Search(int a[] , int size){
     cout <<"enter the number to search in the array"<<endl;
     int key;
     bool found = false;
     cin>>key;
          for(int i =0; i<size; i++){
          if(key == a[i]){
               cout<<"the elment you are searching isn at this index"<<" "<<i<<endl;
              found = true;
              break; 
          }
        
      }
      if(!found){
               cout<<"no your key is not here"<<endl;
       
      }
      
}                            
                                        //   Unique Element
void UniqueElement(int a[] ,int size){
     
for(int i =0; i<size; i++){
     int count = 0;
for(int j =0; j<size;j++){

     if(a[i] == a[j]){
          count++;
     }}
     if (count == 1){
     cout<<"Unique Elemnt"<<a[i]<<endl;

               }

                         }
                           }


void UniqueElement1(int a[] ,int size){
int uni = 0 ;
    for(int i =0; i<size; i++){
uni = uni ^ a[i];
    }
cout<<"Unique Element by XOR"<<uni<<endl;
}

                                         //    Duplicate of Array
void Duplicate(int a[] ,int size){
for(int i =0; i<size; i++){
     int count = 0;
for(int j =0; j<size;j++){

     if(a[i] == a[j]){
          count++;
     }}
     if (count == 2){
     cout<<"Duplicate Element in an Array"<<a[i]<<endl;
break;
               }

                         }

}
                                             //  Intersection of Array
void Intersection(int a[] , int b[5] ,int size){
     int ans = 0;
for(int i =0; i<size; i++){
 for(int j= 0;j<5;j++){
    
     if(a[i] == b[j] ){
          cout<<"intersection point"<< " "<<a[i]<<endl;
          break;
     }
 }

}

}

int main() {
     int size;
     int sum =0;
int a[1000];
int b[5] = {1,2,3,4,5};


cout << "enter the array size" <<endl;
cin >>   size;
   for(int i =0; i<size;i++){
     cout << "enter " << i << "element of Array" <<endl;
    cin >> a[i];
}


TotalofArray(a ,size);
cout<<"printing before swaping"<<endl;
print( a , size);

 Reverse(a , size);
  cout <<"after Reverse"<<endl ;
   print( a , size);
Max(a , size);
Min(a ,size);
// Search(a , size);
UniqueElement(a ,size);
Duplicate(a , size);
UniqueElement1(a ,size);
Intersection(a ,b ,size);
 cout << "all fine" <<endl;


    return 0;
}
