#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,3,5,7,9};
    int sizea = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {2,4,6,8};
    int sizeb = sizeof(brr)/sizeof(brr[0]);

    vector<int> ans;

    // push all elements of vector arr a
    for( int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }

    // push all elements of vector arr b
    for( int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }

    // print ans
    cout<<"Printing ans arr: ";
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i] <<" ";
    }

    return 0;
}