#include<iostream>
using namespace std;
int main(){
    int arr[20],n;
    int sum=0;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
         sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"the element is :"<<arr[i]<<endl;
    }
    cout<<"the sum is :"<<sum;
    return 0;
}