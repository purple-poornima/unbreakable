#include <iostream>
using namespace std;
//left rotation
int main() {
  int size;//size
  cout<<"enter size of the array:\n";
  cin>>size;
  
  int original_arr[size];
  cout<<"enter the elements:\n";
  for(int i=0;i<size;i++){
      cin>>original_arr[i];
  }
  
  int left_rotation_by;//k value
  cout<<"enter the number left rotation:\n ";
  cin>>left_rotation_by;
  left_rotation_by %=size;//very helpful if large rotations happens u must use this 
  
  int temp[left_rotation_by];//size with value k
  for(int i=0;i<left_rotation_by;i++){
      temp[i]=original_arr[i];//copy the elements to a temporary array in which the elements starts from 0 to the k-1
  }
  int j=0;
  for(int i=left_rotation_by;i<size;i++){
      original_arr[j]=original_arr[i];//shift the elements of the last from k to n to the first
      j++;
  }
  for(int i=0;i<left_rotation_by;i++){
      original_arr[j]=temp[i];//copy the elements back to original array at last indices
      j++;
  }

  for(int a: original_arr){
      cout<<a<<" ";
  }
}
