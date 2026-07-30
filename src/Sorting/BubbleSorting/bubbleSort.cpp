//sorting an array with the help of bubble sorting
//time complexity is O(n^2)

#include <iostream>
using namespace std;

int main(){
    int arr[]={1,4,3,5,2};
    int size = 5;

    for(int i=0;i<size;i++){

        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}




//reverse bubble sorting 
#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=size-1;i>0;i--){
        for(int j=0;j<size-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}