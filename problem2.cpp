#include<iostream>
using namespace std;
// Find total even no. and odd no. in an array
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int odd = 0;
    int even = 0;
    for(int i = 0; i < n; i++){
        if (arr[i]%2==0){
            even++;
        }
        else {
            odd++;
        }
    }
    cout<<"total even no. : "<<even<<endl;
    cout<<"total odd no. : "<<odd;
    return 0;
}