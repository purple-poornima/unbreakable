#include <iostream>
using namespace std;
//selection sort 
int main(){
 int size;//size of the array
 cin>>size;
 int arr[size];
 for(int i=0;i<size;i++){
     cin>>arr[i];//get the array
 }
 //in this sort use the minimum value of the array and put it in front
 //initalize starting value as minimum value
 for(int i=0;i<size;i++){//here the loop runs size times
  int min_index=i;//start index of the unsorted array is denoted as key
     for(int j=i+1;j<size;j++){//here j=i+1 cause we will check all its next elements
         if(arr[min_index]>arr[j]){//if the element of key is greater then
            min_index=j;//store the index to key
         }
     }
     swap(arr[min_index],arr[i]);//finally swap the minimum element of an iteration
     
 }
 for(int a:arr){
     cout<<a<<" "; //print out the element
 }
}
