#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    bool found = true;
    for (int i = 0; i < n; i++){
        if (arr[i]>arr[i+1]){
            found = false;
        }
    }
    if (found){
        cout<<"The array is sorted in ascending order";
    }
    else {
        cout<<"The array is not sorted in ascending order";
    }
    return 0;
}