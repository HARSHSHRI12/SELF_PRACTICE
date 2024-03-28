#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    int count=0;
    cout<<"enter size of array :";
    cin>>n;
    cout<<"enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int max;
   int min;
  int S_max;
   for(int i=0;i<n;i++){
           if(arr[i]>max){
               S_max=max;
               max=arr[i];
           }
           else if(arr[i]>S_max){
               S_max=arr[i];
               
           }
           if(arr[i]<min){
               min=arr[i];
           }
       }
cout<<"The maximum number is :"<<max<<endl;
cout<<"The second max number is :"<<S_max<<endl;
cout<<"The minimum number is :"<<min<<endl;
    return 0;
}