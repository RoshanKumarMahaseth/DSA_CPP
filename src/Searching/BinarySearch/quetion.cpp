//printing target value first and last occurenece if it is;


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,1,2,3,4};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int st=0,end=size-1,mid,first=-1,last=-1,target=1;

//     //Find First

//     while(st<=end){
//         mid = st+(end-st)/2;

//         if(arr[mid]==target){
//             first=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]<target){
//             st = mid+1;
//         }else{
//             end=mid-1;
//         }
//     }

//     //find last
//     end=size-1,st=0;
//     while(st<=end){
//         mid = st+(end-st)/2;

//         if(arr[mid]==target){
//             last=mid;
//             st = mid+1;
//         }else if(arr[mid]<target){
//             st = mid+1;
//         }else{
//             end=mid-1;
//         }
//     }

//     cout<<first<<endl;
//     cout<<last<<endl;

//     return 0;

// }


// //printing target value if it is exist if does not we still print near by position


// #include <iostream>
// using namespace std;;

// int main(){
//     int arr[]={1,2,4,5,6,7,8};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int st=0,end=size-1,mid,target=3,index=size;

//     while(st<=end){
//         mid = st+(end-st)/2;

//         if(arr[mid]==target){
//             index = mid;
//             break;
//         }
//         else if(arr[mid]<target){
//             st = mid+1;

//         }else{
//             index=mid;
//             end = mid-1;
//         }

//     }
//     cout<<"the index is: "<<index;

//     return 0;

// }


// //finding square root in an array
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int st=1,end=size,index,mid,sqrt=80;

//     while(st<=end){
//         mid = st+(end-st)/2;

//         if(mid*mid==sqrt){
//             index = mid;
//             break;
//         }
//         else if(mid*mid<sqrt){
//             index = mid;
//             st=mid+1;
//         }else{
//             end = mid-1;
//         }
//     }

//     cout<<"the sqrt position is: "<<index<<endl;

//     return 0;
// }


// //printing repetitive number in an array


// //brute force by Linear search


// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={2,4,4,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int target=4;
//     int count=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             count++;
//         }
//     }

//     cout<<"number of time target is reapetated: "<<count<<endl;
//     return 0;
// }






// //returning index value of largest number in an mountain array;
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={2,5,6,8,9,6,5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int st=0,end=size-1,mid,index;

//     while(st<=end){
//         // mid = st+(end-st)/2;
//         mid = end+(st-end)/2;

//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//             index = mid;
//             break;
//         }
//         else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
//             st = mid+1;
//         }else{
//             end=mid-1;
//         }

//     }

//     cout<<"largest value is: "<<index<<endl;
//     return 0;
// }



//printing smallest number in a rotated array

#include <iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int st=0,end=size-1,mid,index=arr[0];

    while(st<=end){
        mid = st+(end-st)/2;

        if(arr[mid]>=arr[0]){
            st = mid +1;

        }else{
            index = arr[mid];
            end = mid-1;
        }
    }

    cout<<index<<endl;

    return 0;
}
