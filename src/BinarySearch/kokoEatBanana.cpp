

// #include <iostream>
// using namespace std;


// int kokoEatHour(int arr[],int n, int k){
//     if(n>k){
//         return -1;
//     }

//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }

//     int st=0,end=sum;
//     int ans=-1;

//     while(st<=end){
//         int mid = st+(end-st)/2;

//         if(arr[mid]>=k){
//             ans = mid;
//             end = mid-1;
//         }
//         else{
//             st = mid+1;
//         }
//     }
// }


// int main(){
//     int arr[]={30,11,23,4,20};
//     int k = 5;
//     int n = 5;

//     cout<<kokoEatHour(arr,n,k)<<endl;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int minEatingSpeed(int arr[],int h,int n){
//     int st=1,end=0,mid,ans;
    

//     for(int i=0;i<n;i++){
//         st+=arr[i];
//         end = max(end,arr[i]);

//     }

//     st/=h;

//     while(st<=end){
//         mid = st+(end-st)/2;

//         int total_time=0;
//         for(int i=0;i<n;i++){
//             total_time+=arr[i]/mid;
//             if(arr[i]%mid){
//                 total_time++;
//             }
//         }
//         if(total_time>h){
//             st=mid+1;
//         }else{
//             ans = mid;
//             end = mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[]={30,11,23,4,20};
//     int h = 5;
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout<<minEatingSpeed(arr,h,n)<<endl;

//     return 0;
// }




class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int st=0,end=0,ans,mid,n=arr.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            end=max(end,arr[i]);
        }

        st=sum/h;
        if(!st){
            st=1;
        }

        while(st<=end){
            mid = st+(end-st)/2;
            int total_time = 0;
            for(int i=0;i<n;i++){
                total_time+=arr[i]/mid;
                if(arr[i]%mid != 0){
                    total_time++;
                }
            }
            if(total_time>h){
                st=mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
    }
};

