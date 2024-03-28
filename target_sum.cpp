#include<iostream>
using namespace std;
int main(){
    int arr[10],n,x;
    int pairs=0;
    cout<<"Enter sizr of array :";
    cin>>n;
    cout<<"Enter element :";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
cout<<"Enter element to find sum paires :";
cin>>x;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==x){
            pairs++;
        }
    }
}
cout<<"The paires of "<<x<<"is :"<<pairs<<endl;
return 0;
}