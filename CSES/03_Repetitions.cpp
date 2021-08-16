#include<bits/stdc++.h>
using namespace std;

int main(){
    string dna;
    getline(cin, dna);
    char prev_char = dna.back();
    int prev_max=0;
    int counter=0;
    while(dna.length() !=0){
        if(prev_char == dna.back()){
            counter++;
        }
        else{
            prev_char = dna.back();
            prev_max = max(prev_max, counter);
            counter =1;
        }
        prev_max = max(prev_max, counter);
        dna.pop_back();
    }
    cout<<prev_max;
}
