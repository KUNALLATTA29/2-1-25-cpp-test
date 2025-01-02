//Find Kth Smallest Element in an Array

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int N, int K)
{

    sort(arr, arr + N);

    return arr[K - 1];
}

int main(){
    int arr[] = { 7, 10, 4, 3, 20, 15};
    int N = sizeof(arr) / sizeof(arr[0]), K = 3;

    cout << "K'th smallest element is "<< kthSmallest(arr, N, K);
    return 0;
}