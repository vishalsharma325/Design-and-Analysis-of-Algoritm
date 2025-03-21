#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[8] ;
    for (int i = 0; i < 8; i++)
    {
       cin>>arr[i];
    }
    
    int size = 8;
    int target;
    cin>>target;
    int result = binarySearch(arr, size, target);
    if (result != -1)
        cout << "Element present at the index :" << result << endl;
    else
        cout << "Element is not present in array" << endl;

    return 0;
}
