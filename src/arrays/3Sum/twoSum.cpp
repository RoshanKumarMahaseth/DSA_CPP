
//3sum
//brute force
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,4,45,6,10,8};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int x=13;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size-1;j++){
//             for(int k=j+1;k<size;k++){
//                 if(arr[i]+arr[j]+arr[k]==x){
//                     cout<<i<<j<<k<<endl;
//                 }
//             }
//         }
//     }

//     return 0;
// }


//binary search method
#include <iostream>
using namespace std;

bool threeSum(int arr[],int size,int x){

    //sorting
    for(int i=size-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size-2;i++){
        int ans = x-arr[i];
        int st=i+1,end=size-1;
        while(st<end){
            if(arr[st]+arr[end]==ans){
                return 1;
            }else if(arr[st]+arr[end]>ans){
                end--;
            }else{
                st++;
            }
            
        }
    }
    return 0;
}

int main(){
    int arr[]={1,4,45,6,10,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 13;

    cout<<threeSum(arr,size,x)<<endl;


}