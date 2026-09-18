#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of array ";
  cin>>n;
  int arr[n];
  cout << "Enter array elements: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cout<<"Enter the target element ";
  cin>>target;
  bool flag=false;
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      flag=true;
      break;
    }
  }
   if(flag==true)cout<<"Element found!";
   else cout<<"Element not found!";
  return 0;
}