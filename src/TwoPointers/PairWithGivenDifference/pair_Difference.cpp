

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>arr = {3,1,4,1,5};
//     int target=2;
//     int count=0;
    
//     for(int i=arr.size();i>=0;i--){
//         for(int j=0;j<arr.size()-1;j++){
//             if(arr[i]-arr[j]==target){
//                 count++;
//             }
//         }
//     }

//     cout<<count<<endl;

//     return 0;
// }


#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr = {3,1,4,1,5};
    sort(arr.begin(),arr.end());
    int k=2,ans=0;
    int st=0,end=1,n=arr.size();
    if(k<0){
        k=k*-1;
    }

    while(end<n){
        if(arr[end]-arr[st]==k){
            return 1;
        }else if(arr[end]-arr[st]<k){
            end++;
        }else{
            st++;
        }
    }
    return 0;
}