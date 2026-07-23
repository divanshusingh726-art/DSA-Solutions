#include<iostream>
using namespace std;

int main() {
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements: ";
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
        
        sum += arr[i];
        if (arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        
    }
    cout<<"Maximum element: "<<max<<endl;
    cout<<"Minimum element: "<<min<<endl;
    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Average of elements: "<<(float)sum/n<<endl;
    cout<<"Total even no. of elements: "<<even<<endl;
    cout<<"Total odd no. of elements: "<<odd<<endl;


    return 0;
}