#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter 10 elements in array : ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"Origial array [";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

int count=0;
    for(int i=0;i<10;i++){
        bool found = false;
        for(int j=0;j<count;j++){

         if(arr[i]==arr[j]){
            found = true;
            break;

            }
        }
        if(!found){
            arr[count]=arr[i];
            count++;
        }
    }
cout<<"] produces [";
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"] after unique elements are placed at start of array."<<endl;
    cout<<"Number of unique elements are : "<<count;
}