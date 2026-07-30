//Sorting an array in asscending form by Selection method...

#include <iostream>
using namespace std;

int main(){


    int arr[]={2,1,5,3,6,4};
    int size = 6;
    
    //Outer loop
    for(int i=0;i<size-1;i++){
        int index = i;

        //inner loop
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }


    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
