#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<n<<endl;
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else if(n%2 ==0){
        int  yj;
        yj = n/2+1;
        for(int i=1; i<=n/2; i++){
            cout<<yj<<" "<<i<<" ";
            yj +=1;
        }
    }
    else{
        int yj;
        yj = (n+1)/2+1;
        cout<<1<<" ";
        for(int i=1; i<(n+1)/2; i++){
            cout<<yj<<" "<<i+1<<" ";
            yj +=1;
        }
    }
}
