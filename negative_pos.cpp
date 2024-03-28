#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Enter element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int negative;
    int positive;
for(int i=0;i<n;i++){
    if(arr[i]<0){
        negative=arr[i];
    }
    if(arr[i]>0){
        positive=arr[i];
    }
}

cout<<"Negative number in array is :"<<negative<<endl;
cout<<"Positive number in array  is :"<<positive<<endl;
return 0;

}