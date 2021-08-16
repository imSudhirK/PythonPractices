#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int i, j;
    while(n !=0){
        cin>>i>>j;
        long long int m = max(i, j);
        long long int m2 = (m-1)*(m-1);
        long long int ans;
        if(m%2 == 0){
            if(m == j){
                ans = m2 + i;
            }
            else{
                ans  = m2+2*m - j;
            }
        }
        else{
            if(m == i){
                ans = m2+ j;
            }
            else{
                ans = m2+2*m-i;
            }
        }
        cout<<ans<<" ";
        n--;
    }
    cout<<endl;
}
