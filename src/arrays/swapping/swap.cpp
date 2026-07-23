//sapping the element present in the array


//without funstion

#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int st=0;
    int end=size-1;

    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}


//with function

#include <iostream>
using namespace std;

void swapp(int arr[],int size){
    int st=0;
    int end=size-1;

    while(st<end){
        swap(arr[st],arr[end]);

        st++;
        end--;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[5]={5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    swapp(arr,size);

    return 0;
}