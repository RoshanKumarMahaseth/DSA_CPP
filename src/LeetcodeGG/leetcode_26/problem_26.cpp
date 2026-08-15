
// #include <iostream>
// using namespace std;

// int main(){

//     int arr[]={1,2,1,3};

//     int size = 4;

//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 for(int k = j; k<size-1;k++){
//                     arr[k] = arr[k+1];
//                 }
//                 size--;
//                 j--;
//             }
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
    int removeDuplicates(vector<int>& arr) {
        
        int size = arr.size();

        for(int i = 0; i < size; i++) {
            for(int j = i + 1; j < size; j++) {

                if(arr[i] == arr[j]) {

                    for(int k = j; k < size - 1; k++) {
                        arr[k] = arr[k + 1];
                    }

                    size--;
                    j--;
                }
            }
        }

        return size;
    }
};