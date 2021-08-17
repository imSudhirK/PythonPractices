#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b;
    for(t>0; t--;){
        cin>>a>>b;
        if(a > 2*b || b > 2*a){
            cout<<"NO\n";
            continue;
        }
        else if(a > b){
            a = a - 2*(a-b);
            b = a;
        }
        else if(b > a){
            b = b - 2*(b-a);
            a = b;
        }
        if(a%3 !=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}
