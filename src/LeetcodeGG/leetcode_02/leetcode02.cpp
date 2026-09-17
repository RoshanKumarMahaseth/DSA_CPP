#include <iostream>
using namespace std;

int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int arr3[size];

    for(int i=0;i<size;i++){
        arr3[i]=arr1[i]+arr2[i];
    }

    for(int j=0;j<size;j++){
        cout<<arr3[j]<<" ";
    }

    return 0;
}

