
#include <iostream>
using namespace std;
//quicksort
int partition(int arr[],int low,int high){
    int pivot=arr[high];//pivot here chosen as the last element of the array
    int i=low-1;//here i points before the 1st element 
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){//if any element in the array is lesser than the pivot
            i++;//move the i at next index
            swap(arr[j],arr[i]);//then swap
        }
    }
    swap(arr[high],arr[i+1]);//at last swap the pivot element to its right position where everything in the front is small
    return i+1;//return the positon of the pivot element
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int p=partition(arr,low,high);//position of pivot after partion
        quicksort(arr,low,p-1);//now quicksort at left array
        quicksort(arr,p+1,high);//quicksort at right array
        
    }
}
int main() {
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
      cin>>arr[i];
  }
  quicksort(arr,0,size-1);//quicksort
  for(int a: arr){
      cout<<a<<" ";
  }
}
