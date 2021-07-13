#include<iostream>
#include<stack>

using namespace std;


int main(){

  stack<int> st;
  st.push(2);
  st.push(53);
  st.push(3.5);

  stack<int> st1 = st;
  while(!st1.empty()){
    cout<<st1.top()<<" ";
    st1.pop();
  }
  cout<<endl;

  stack<int> st2;
  st.swap(st2);
  cout<<st.size()<<endl;

  st2.emplace(8);
  while(!st2.empty()){
    cout<<st2.top()<<" ";
    st2.pop();
  }
  cout<<endl;
}
