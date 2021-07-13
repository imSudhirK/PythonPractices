#include<iostream>
#include<queue>

using namespace std;

void showQ(queue<int> Q){
  queue<int> temp_q = Q;
  while(!temp_q.empty()){
    cout<<temp_q.front()<<" ";
    temp_q.pop();
  }
  cout<<endl;
}

int main(){

  queue<int> q;
  q.push(8);
  q.push(3);
  q.push(1);

  queue<int> q1, q2=q;
  q.swap(q1);
  q2.pop();
  q2.emplace(6);
  q2.emplace(9);

  showQ(q2);
  cout<<q1.front()<<" "<<q.size()<<endl;
  cout<<!q.empty()<<" "<<q1.back()<<endl;

}
