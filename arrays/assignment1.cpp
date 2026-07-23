#include<iostream>
using namespace std;

int main() {
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    };
    cout<<endl;
    cout<<"The elements are: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum of the elements is: ";
    int sum = 0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;
    cout<<endl;
    cout<<"Maximum element is: ";
    int max = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    cout<<endl;
    cout<<"Minimum element is: ";
    int min = arr[0];
    for (int i = 1; i < n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min;
    cout<<endl;
    cout<<"Linear search for an element: ";
    int key;
    cin>>key;
    bool found = false;
    for (int i = 0; i < n; i++){
        if (arr[i]==key){
            found = true;
         }
         }
    if (found){

        cout<<"Element found ";
        
        }
    else {
            cout<<"Element not found";
            
        }
    cout<<endl;
    cout<<"Average of the elements is: ";
    float average = (float)sum/n;
    cout<<average;

    return 0;
}