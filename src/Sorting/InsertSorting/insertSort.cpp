//sortin an array using insertion sorting method


#include <iostream>
using namespace std;

int main(){
    int arr[]={5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=4;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
        
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
