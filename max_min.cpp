#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum =arr[0];
    int minimum =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
          maximum=arr[i];
        }
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    cout<<"the maximum number is :"<<maximum<<endl;
    cout<<"the minimum number is :"<<minimum<<endl;
    return 0;
}