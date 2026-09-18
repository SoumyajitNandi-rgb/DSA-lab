#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50,60,70};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0, j = n - 1;

    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for(int ele : arr)
        cout << ele << " ";

    return 0;
}