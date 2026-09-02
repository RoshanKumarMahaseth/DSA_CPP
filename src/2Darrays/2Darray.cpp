// #include <iostream>
// using namespace std;


// void printcol(int arr[][4],int row,int col){
//     for(int j=0;j<col;j++){
//         for(int i=0;i<row;i++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
// int main(){


//     int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

//     for(int row=0;row<3;row++){
//         for(int col=0;col<4;col++){
//             cout<<arr[row][col]<<" ";
//         }
//     }

//     cout<<endl; 

//     printcol(arr,3,4);

//     cout<<endl;

//     //Find an element is present or not
 
//     int x = 61;

//     for(int row=0;row<3;row++){
//         for(int col=0;col<4;col++){
//             if(arr[row][col]==x){
//                 cout<<"Yes";
//                 return 0;
//             }
//         }
//     }

//     cout<<"no";
//     return 0;
// }


//Adding two different matrix;;;

#include <iostream>
using namespace std;

int main(){

    int ans[3][4];

    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {0,1,2,4,6,7,3,7,8,10,11,12};

    for (int row=0;row<3;row++){
        for(int col = 0;col<4;col++){
            ans[row][col] = arr1[row][col] + arr2[row][col];
        }
    }


    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<ans[row][col]<<" ";
        }
    }

    cout<<endl;

    return 0;
}