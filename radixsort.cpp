#include<bits/stdc++.h>
using namespace std;

void countsort(int arr[], int n, int exp){
    int count[10] = {0};
    int output[n];

    for(int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for(int i = 1; i < 10; i++)
        count[i] += count[i-1];

    for(int i = n-1; i >= 0; i--){
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for(int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n){
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > m)
            m = arr[i];
    }

    for(int exp = 1; m/exp > 0; exp *= 10)
        countsort(arr, n, exp);
}

int main(){
    int arr[] = {107, 820, 2, 34, 56, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    radixsort(arr, n);

    cout << "Sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}