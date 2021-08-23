#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> grayCode(int n){
    vector<string> gc;
    if(n==1){
        gc.push_back("0");
        gc.push_back("1");
        return gc;
    }
    else{
        vector<string> prev_gc = grayCode(n-1);
        for(int i=0; i<prev_gc.size(); i++){
            string x= "0"+prev_gc[i];
            gc.push_back(x);
        }
        for(int i=prev_gc.size()-1; i>=0; i--){
            string x = "1"+prev_gc[i];
            gc.push_back(x);
        }
        return gc;
    }
}


int main(){
    int n;
    cin>>n;
    vector<string> ans =grayCode(n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
