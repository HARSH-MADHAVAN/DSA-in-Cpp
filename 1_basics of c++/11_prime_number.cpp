#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    int i=2;

    while(i<n){
        if(n%i==0){
            cout<<"not prime for "<<i<<endl;

        }
        else if(n%i!=0){
            cout<<"prime number for "<<i<<endl;
        }

        i=i+1;


    }
}