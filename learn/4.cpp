#include<bits/stdc++.h>
using namespace std;
int main(){

    // array - 1D
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<< arr[3]<<'\n';
    arr[3] = 4;
    cout<< arr[3]<<'\n';

    // 2D 
    int arr2[5][2]={0};
    arr2[1][1] = 67;
    cout<<arr2[1][1]<<'\n';

    // string as array 
    string str = "Shivam";
    int len = str.size();
    cout<<str[len-1];
    return 0;
}