//printing fibonacci number by poor approach

#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int sz = 12;

    //declaring first two number
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<sz;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }

    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}



//printing user demanded position fibonacci number

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the position: ";
    cin>>n;

    int arr[10000];
    int size=100;

    //declaring first two digit

    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<size;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<arr[n]<<endl;
}