#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>arr(5,18);
  int n=arr.size();
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  arr.push_back(5);//add an element at end
  arr.pop_back();//removes last element
}