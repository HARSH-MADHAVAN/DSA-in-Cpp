#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;

    int row=n;
    while(row>0) {
        int col=1;
        while(col>=row){
            cout<<"* ";
            col=col+1;
        }
        cout<<endl;
        row=row-1;
    }
}

// int main(){
//     int n;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;

//     int row=1;
//     while(row<=n) {
//         int col=1;
//         while(col<=row){
//             cout<<"* ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }