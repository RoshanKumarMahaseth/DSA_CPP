// Rotating array by 1 and printing the array


//without function
#include <iostream>
using namespace std;

int main(){

    int arr[]={1,2,4,3,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int last = arr[size-1];

    for(int i=size-2;i>=0;i--){
        arr[i+1] = arr[i];
    }

    arr[0] = last;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}


//with function
#include <iostream>
using namespace std;

void Rotate_by_1(int arr[],int size){
    int last = arr[size-1];

    for(int i=size-2;i>=0;i--){
        arr[i+1]=arr[i];
    }

    arr[0]=last;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;

    int arr[1000];
    cout<<"enter the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    Rotate_by_1(arr,size);

    return 0;
}