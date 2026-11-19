#include <bits/stdc++.h>
using namespace std;

int findSum(int nums[5], int arr[5][5]) {
    return arr[nums[0]][nums[1]] + arr[nums[1]][nums[0]]
    + arr[nums[1]][nums[2]] + arr[nums[2]][nums[1]]
    + 2*(arr[nums[2]][nums[3]] + arr[nums[3]][nums[2]]
        + arr[nums[3]][nums[4]] + arr[nums[4]][nums[3]]);
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nums[5] = {0, 1, 2, 3, 4};
    int arr[5][5];
    int max = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }
    do{
        if (int sum = findSum(nums, arr); sum > max) {
            max = sum;
        }
    } while (next_permutation(nums, nums + 5));
    cout << max;
}