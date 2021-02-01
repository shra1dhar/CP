#include <iostream>
using namespace std;

int main() {
    int arr[] = { 32, 345, 654, 234, 4567, 2134, 43, 2};
    int k = 100;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    
    int ans = arr[n-1] - arr[0];
    
    int small = arr[0] + k;
    int big = arr[1] - k;
    
    if (small >big) {
        swap(small,big);
    }
    
    for (int i = 1; i < n-1; i++) {
        if (small < arr[i] - k || arr[i] + k < big) continue;
        
        if(big - (arr[k] - k) > small - arr[i]+k) {
            small = arr[i] - k
        } else {
            big = arr[i] + k;
        }
    }
    return min(ans, big-small);
}
