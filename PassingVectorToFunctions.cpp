#include <iostream>
using namespace std;
void change(vector<int>v){//pass by value
  v[2]=99;
}
void change1(vector<int>&v){//pass by reference
  v[2]=99;
}
int main() {
    vector<int>v={4,3,8,2,9,7};
    change1(v);
    cout<<v[2]<<endl;
    return 0;
}