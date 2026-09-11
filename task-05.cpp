#include <iostream>
using namespace std;

void reverseArray(int arr[],int index){
    if(index<0){
        return;
    }
    cout<<arr[index]<<" ";
    reverseArray(arr,index-1);  
}

int main() {
    int arr[6];
    int size = sizeof(arr)/sizeof(int);
    int index=size-1;
cout<<"Enter Original Array : "<<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
cout<<"Reversed Array is : "<<endl;
    reverseArray(arr,index);

    return 0;
}

