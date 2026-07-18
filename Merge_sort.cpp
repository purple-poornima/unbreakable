#include <iostream>
using namespace std;
//mergesort
void merge(int arr[],int low,int mid,int high){
    int left_size=mid-low+1;//left size is from the low to the mid
    int right_size=high-mid;//right size is from the mid+1 to the high
    
    int left[left_size],right[right_size];
    
    //spliting the array to left and right
    for(int l=0;l<left_size;l++){
        left[l]=arr[low+l];//copy the elements to left from low to mid
    }
    for(int r=0;r<right_size;r++){
        right[r]=arr[mid+1+r];//copy the elements to right from mid+1 to high
    }
    //merge (changing the original array)
    int left_pointer=0;//pointer pointing at index 0 of the left array
    int right_pointer=0;//pointer pointing at index 0 of the right array
    int arr_index=low;//changes the array starting from the low index
    while(left_pointer<left_size && right_pointer<right_size){//do this untill any of the pointer reaches the limit
        if(left[left_pointer]<right[right_pointer]){//compare left array with the right array (left element smaller than right element)
        //then
            arr[arr_index]=left[left_pointer];//change the value of the array
            left_pointer++;//move the pointer
        }
        else{//else when the right element smaller than left element
            arr[arr_index]=right[right_pointer];//change the value of the array
            right_pointer++;//move the pointer
        }
        arr_index++;//move the array index
    }
    //copy the left out elements at last
    while(left_pointer<left_size){
         arr[arr_index]=left[left_pointer];
            left_pointer++;
             arr_index++;
    }
    while(right_pointer<right_size){
        arr[arr_index]=right[right_pointer];
            right_pointer++;
            arr_index++;
    }
    
}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=(low + high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,size-1);
    for(int a: arr){
        cout<<a<<" ";
    }
}
