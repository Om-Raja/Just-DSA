//binary serach
#include <iostream>
using namespace std;
int binarySearch(int *arr, int key, int start, int end){
    int mid = (start + end)/2;

    while(start <= end){// notice loop will also run for start == end
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) return binarySearch(arr, key, start, mid-1); // remember to return the value when calling funciton
        else return binarySearch(arr, key, mid+1, end);
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    //find 7 using binary search
    
    cout << binarySearch(arr, 1, 0, sizeof(arr)/sizeof(int)-1) << endl;
    cout << binarySearch(arr, 8, 0, sizeof(arr)/sizeof(int)-1) << endl;
    cout << binarySearch(arr, 5, 0, sizeof(arr)/sizeof(int)-1) << endl;
    cout << binarySearch(arr, 54, 0, sizeof(arr)/sizeof(int)-1) << endl;
    return 0;
}