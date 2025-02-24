#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
        if(a>b && a>c){
            cout<<a<<" is greatest of all.";
        }
        else if(b>c && b>a){
            cout<<b<<" is greatest of all.";
        }
        else{
            cout<<c<<" is greatest of all.";
        }
    return 0;
}