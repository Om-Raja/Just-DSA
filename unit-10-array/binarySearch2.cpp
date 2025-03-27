//binary search without recursion
#include <iostream>
using namespace std;
int binarySearch(int *arr, int n, int key){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end ) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) end = mid-1;
        else start = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 43, 54, 64, 67, 76, 77};
    cout << binarySearch(arr, sizeof(arr)/sizeof(int), 67) << endl;
    cout << binarySearch(arr, sizeof(arr)/sizeof(int), 1) << endl;
    cout << binarySearch(arr, sizeof(arr)/sizeof(int), 43) << endl;
    cout << binarySearch(arr, sizeof(arr)/sizeof(int), 453) << endl; // -1

    return 0;
}