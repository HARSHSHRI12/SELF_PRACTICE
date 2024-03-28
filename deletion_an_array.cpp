#include<iostream>
using namespace std;
int main(){
    int A[10],n,k,x;
    cout<<"enter a size of array :";
    cin>>n;
    cout<<"enter a element in array :";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"enter a position :";
    cin>>k;
    x=A[k];
    for(int i=k;i<n-1;i++){
       A[i]=A[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<"the value is :"<<A[i]<<endl;
    }
    return 0;
}