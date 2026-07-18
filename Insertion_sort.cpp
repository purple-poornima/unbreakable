
#include <iostream>
using namespace std;
//insertion sort
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //first elements at index 0 is always considered sorted
    for(int i=1;i<size;i++){//start index from 1
        int key=arr[i];// the start of the index of the unsorted is considered as a key
        int j=i-1;//gives the size of the sorted array 
        while(j>=0 && arr[j]>key){//check if the index is greater than or equal to zero and check if the key is smaller than the front elements 
            arr[j+1]=arr[j];//then shift the elements from left to right
            j--;//move to the leftside index
        }
        arr[j+1]=key;//here after shift the key gets inserted where it need to be
        
    }
    
    
    for(int a: arr){
        cout<<a<<" ";
    }
}
