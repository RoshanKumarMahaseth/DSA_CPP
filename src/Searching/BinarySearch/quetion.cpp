//printing target value first and last occurenece if it is;


#include <iostream>
using namespace std;

int main(){
    int arr[]={1,1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int st=0,end=size-1,mid,first=-1,last=-1,target=1;

    //Find First

    while(st<=end){
        mid = st+(end-st)/2;

        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            st = mid+1;
        }else{
            end=mid-1;
        }
    }

    //find last
    end=size-1,st=0;
    while(st<=end){
        mid = st+(end-st)/2;

        if(arr[mid]==target){
            last=mid;
            st = mid+1;
        }else if(arr[mid]<target){
            st = mid+1;
        }else{
            end=mid-1;
        }
    }

    cout<<first<<endl;
    cout<<last<<endl;

    return 0;

}


//printing target value if it is exist if does not we still print near by position


#include <iostream>
using namespace std;;

int main(){
    int arr[]={1,2,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int st=0,end=size-1,mid,target=3,index=size;

    while(st<=end){
        mid = st+(end-st)/2;

        if(arr[mid]==target){
            index = mid;
            break;
        }
        else if(arr[mid]<target){
            st = mid+1;

        }else{
            index=mid;
            end = mid-1;
        }

    }
    cout<<"the index is: "<<index;

    return 0;

}
