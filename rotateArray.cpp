#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>& arr, int i, int j) {
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}
int main() {
    vector<int> arr = {2, 3, 4, 5, 6};
    rotate(arr, 2);
    for(int x : arr) {
        cout << x << " ";
    }
    return 0;
}