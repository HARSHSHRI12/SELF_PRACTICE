#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    cout<<"enter size of aarray :";
    cin>>n;
    cout<<"Enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    cout<<"enter element to find in array :";
    cin>>x;
    for(int i=0; i<n;i++){
        if(arr[i]==x){
            cout<<"the element :"<<arr[i]<<"is found at :"<<i<<endl;
            return 0;
        }
    }
    cout<<"The element is not found becouse it is not in array........."<<endl;
    return -1;
}
