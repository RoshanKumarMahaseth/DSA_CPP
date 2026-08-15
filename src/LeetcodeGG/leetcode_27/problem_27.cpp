

// #include <iostream>
// using namespace std;

// int main(){

//     int arr[]={0,1,2,2,3,0,4,2};
//     int size = 8;
//     int val = 2;

//     for(int i=0;i<size;i++){
//         if(arr[i]==val){
//             for(int j=i;j<size-1;j++){
//                 arr[j] = arr[j+1];
//             }
//             size--;
//             i--;
//         }
//     }


//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;

//     return 0;
// }



class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int size = arr.size();

        for(int i=0;i<size;i++){
            if(arr[i]==val){
                for(int k=i;k<size-1;k++){
                    arr[k] = arr[k+1];
                }
                size--;
                i--;
            }
        }

        return size;
    }
};