#include<iostream>
using namespace std;
void change(int x[]){
  x[0]=20;
}
int main(){
int x[]={6};
change(x);
cout<<x[0]<<endl;//pass by reference
return 0;
}