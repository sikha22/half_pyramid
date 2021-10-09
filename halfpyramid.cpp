#include<iostream>
using namespace std;
int main(){
    int i,j ,r;
    cout<<"Enter the number of rows:";
    cin>>r;
    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    return 0;
}