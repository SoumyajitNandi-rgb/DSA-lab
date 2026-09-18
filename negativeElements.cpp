#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
cout << "Negative elements are : ";
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            cout <<arr[i] << " ";
        }
    }

    return 0;
}