#include<iostream>
using namespace std;

int findmajority(int a[],int n){
    int maj=0,co=1;
    for(int i=1;i<n;i++){
        if(a[maj]==a[i]){
            co++;
        }
        else{
            co--;
        }
        if(co==0)
        {
            maj=i;
            co=1;
        }
    }
    return a[maj];
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<findmajority(a,n);
    return 0;
   
}

// 3 3 2