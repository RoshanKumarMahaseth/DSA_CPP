#include <iostream>
using namespace std;

void printcol(int arr[][4],int row,int col){
    
    //column wise
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
    }

}

int main(){

    //creating 2d array
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
    }
    cout<<endl;
    //print all the value in an array col wise;

    // printcol(arr,3,4);


    //find an element in our array

    int x=7;
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==x){
                cout<<"Yes";
                return 0;
            }
            
        }
    }
    cout<<"no";
}
