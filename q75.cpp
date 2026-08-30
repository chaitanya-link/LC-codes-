//program to sort colors
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int nums[n];

    cout << "Enter the digits (0, 1, 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Sorting
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                swap(nums[i], nums[j]);
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}