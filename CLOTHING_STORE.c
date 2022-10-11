#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    // scanf("%d",&n);
    cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++){
        int p;cin>>p;
        m[p]++;
    }
    int t=0;
    for(auto i:m){
        t+=(i.second)/2;
    }
    cout<<t;
}