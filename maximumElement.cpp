#include<iostream>
using namespace std;
int main(){
  int max=INT32_MIN;
  int n;
  cout<<"Enter the array size: ";
  cin>>n;
  int arr[n];
  cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  for(int i=0;i<n;i++){
    if(arr[i]>max){
     max=arr[i];
    }
  }
  cout<<max;
  return 0;
}