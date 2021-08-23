#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

string PR(string str){
    unordered_map<char, int> umap;
    for(int i=0; i<str.size(); i++){
        umap[str[i]]++;
    }
    int odd_count =0;
    char odd_char;
    string ans;
    for(auto x : umap){
        if(x.second % 2 !=0){
            odd_count++;
            if(odd_count > 1){
                return "NO SOLUTION";
            }
            else odd_char = x.first;
        }
        else{
            for(int i=1; i<=(x.second/2); i++){
                ans += x.first;
            }
        }
    }
    string result = ans + odd_char;
    for(int i=ans.size()-1; i>=0; i--){
        result +=ans[i];
    }
    return result;
}

int main(){
    string str;
    getline(cin, str);
    cout<<PR(str);

}
