

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,1,0,1,1,1};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int count=0;
//     int maxcount=0;
    
//     for(int i=0;i<size;i++){
//         if(arr[i]==1){
//             count++;
//             if(count>maxcount){
//                 maxcount = count;
//             }
//         }
//         else{
//             count = 0;
//         }
//     }

//     cout<<"count: "<<maxcount<<endl;
//     return 0;
// }




class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(count>maxcount){
                    maxcount=count;
                }
            }
            else{
                count = 0;
            }
        }

        return maxcount;
    }
};




