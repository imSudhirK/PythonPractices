#include<iostream>
#include<string>
using namespace std;


int main(){
    string str;
    getline(cin, str);

    str.push_back('k');
    //single quotes identify a single character,
    //while double quotes create a string literal
    str.pop_back();
    str.resize(5);
    cout<<str.length()<<"\n";
    str.shrink_to_fit();
    cout<<str.capacity()<<endl;

    string::iterator it;
    for(it=str.begin(); it!=str.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    string::reverse_iterator itr;
    for(itr = str.rbegin(); itr!=str.rend(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;


    char str2[20];
    str.copy(str2, 3, 0);
    //str2.swap(str);
    cout<<str<<endl<<str2<<endl;
    string str1 = "xyz";
    str.swap(str1);
    cout<<str1;

}
