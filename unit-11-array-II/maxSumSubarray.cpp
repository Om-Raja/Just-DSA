//brute force approach O(n^3)
#include <iostream>
#include <climits>
using namespace std;
void maxSumSubarray(int *arr, int n){
    int maxSum = INT_MIN; //include <climits>
    for(int start = 0; start < n; start++){
        cout << "loop first" << start << " round";
        for(int end = start; end < n; end++){
            cout << "loop second" << end-start << " round";            
            int currentSum = 0;
            for(int k = start; k <= end; k++){
                cout << "loop third" << k-start << " round";            
                currentSum += arr[k];
                cout << currentSum << " ";
            }
            maxSum = max(currentSum, maxSum);
        }
        cout << endl;
    }
    cout << "maximum sum is " << maxSum << endl;
}
int main()
{
    int arr[6] = {-5, 4, 2, -6, 2, -1};
    maxSumSubarray(arr, 6);
    return 0;
}