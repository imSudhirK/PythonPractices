#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int d =pow(10, 9) + 7;
    long long int rs =1;
    while(n>0){
        if(n<=60){
            long long int a = pow(2, n);
            rs *= a%d;
            rs = rs%d;
            break;
        }
        else{
            long long int a = pow(2, 60);
            rs *= a%d;
            n -=60;
            rs = rs%d;
        }
    }
    cout<<rs%d;
}
