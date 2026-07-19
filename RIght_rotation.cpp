
#include <iostream>
using namespace std;
//right rotation
int main() {
  int size;//size
  cout<<"enter size of the array:\n";
  cin>>size;
  if(size==0){
      cout<<"there will be no rotation\n";
      return 0;
  }
  int original_arr[size];
  cout<<"enter the elements:\n";
  for(int i=0;i<size;i++){
      cin>>original_arr[i];
  }
  
  int right_rotation_by;//k value
  cout<<"enter the number right rotation:\n ";
  cin>>right_rotation_by;
  right_rotation_by %=size;//very helpful if large rotations happens u must use this 
  
  int temp[size-right_rotation_by];//size with value k

  for(int i=0;i<size-right_rotation_by;i++){
      temp[i]=original_arr[i];//copy the elements to a temporary array in which the elements starts from k to the size
     
  }
  int j=0;
  for(int i=size-right_rotation_by;i<size;i++){
      original_arr[j]=original_arr[i];//shift the elements of the first from 0 to k-1 to the last
      j++;
 
  }
 
  for(int i=0;i<size-right_rotation_by;i++){
      original_arr[j]=temp[i];//copy the elements back to original array at first indices
      j++;
  }

  for(int a: original_arr){
      cout<<a<<" ";
  }
}
