#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int sumTillN = (long long int) n*(n+1)/2;
    if(sumTillN%2 !=0){
        cout<<"NO";
    }
    else{
        cout<<"YES\n";
        vector<int>a, b;
        long long int halfSum = sumTillN/2;
        long long int sumA = 0;
        for(int i=n; i>=1; i--){
            if(sumA + i <=halfSum){
                a.push_back(i);
                sumA +=i;
            }
            else{
                b.push_back(i);
            }
        }
        cout<<a.size()<<endl;
        for(int i=0; i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<b.size()<<endl;
        for(int i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
