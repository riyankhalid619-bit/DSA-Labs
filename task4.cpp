#include <iostream>
#include <climits>
using namespace std;

int main() {
      int arr[8];

int min_index=0;
int max_index=0;

    cout<<"Enter 8 elements of array : "<<endl;
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }

    int min = arr[0];
int max =arr[0];
    for(int i=0;i<8;i++){
        if(arr[i]>max){
            max =arr[i];
            max_index=i;
        }
          if(arr[i]<min){
            min =arr[i];
            min_index=i;
        }
    }
    cout<<"The largest element in array is : "<<max<<endl;
    cout<<"Its first index is : "<<max_index<<endl;
    
    

    cout<<"The smallest element in array is : "<<min<<endl;
    cout<<"Its first index is : "<<min_index<<endl;

    return 0;
}
}
