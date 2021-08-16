#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cin>>n;
    long long int ans = (long long int) n*(n+1)/2;
    for(int i=0; i<n-1; i++){
        cin>>x;
        ans -= x;
    }
    cout<<ans;
}
