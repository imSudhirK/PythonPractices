#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        long long int n2C2 = (long long int) pow(i, 2)*(pow(i, 2) -1)/2;
        long long int checkKnight =(long long int) 4*(i-1)*(i-2);
        cout<<n2C2 - checkKnight<<endl;
    }

}
