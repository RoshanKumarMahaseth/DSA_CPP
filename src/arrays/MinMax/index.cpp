//MAXIMUM ELEMENT IN AN ARRAY
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={3,5,2,6,4,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;        //INT_MAX=+infinity

    for(int i=0;i<size;i++){
        if(arr[i]<max){
            max = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Maximum number in the array is: "<<max<<endl;

    return 0;
}

//MINIMUM ELEMENT IN AN ARRAY
#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,5,3,2,6,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int min = INT_MAX;         //INT_MIN = -infinity

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum number in the array is: "<<min<<endl;

    return 0;
}