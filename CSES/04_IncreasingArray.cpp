#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int prev_int = INT_MIN;
    long long int ans = 0;
    for(int i=0; i<n; i++){
        long long int x1;
        cin>>x1;
        if(prev_int > x1){
            ans = ans + prev_int - x1;
        }
        prev_int = max(prev_int, x1);
    }
    cout<<ans;
}
