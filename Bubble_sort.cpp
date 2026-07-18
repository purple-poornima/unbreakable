#include <iostream>
using namespace std;
//bubble sort 
int main(){
 int size;//size of the array
 cin>>size;
 int arr[size];
 for(int i=0;i<size;i++){
     cin>>arr[i];//get the array
 }
 //in this sort we do the swap where the greateast element reaches  last each time 
 for(int i=0;i<size;i++){//here the loop runs size times
     for(int j=0;j<size-i-1;j++){//here the loop performs swap at the unsorted array from the start 
         if(arr[j]>arr[j+1]){
             swap(arr[j],arr[j+1]);//swap if the element greater than next element
         }
     }
 }
 for(int a:arr){
     cout<<a<<" "; //print out the element
 }
}
