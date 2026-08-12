
#include <iostream>
using namespace std;
void heap(int arr[],int n,int i){
    int large=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[large]){
        large=left;
    }
    if(right<n && arr[right]>arr[large]){
        large=right;
    }
    if(large!=i){
        swap(arr[large],arr[i]);
        heap(arr,n,large);
    }

}
void heap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heap(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);
        heap(arr,i,0);
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heap(arr,n);
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
}





