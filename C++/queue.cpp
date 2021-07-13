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

void showPQ(priority_queue<int> pq){
  priority_queue<int> clone = pq;
  while(!clone.empty()){
    cout<<clone.top()<<" ";
    clone.pop();
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
  
  priority_queue<int>pq;
  pq.push(1);
  pq.push(5);
  pq.push(9);
  pq.push(6);
  pq.push(2);
  showPQ(pq);

}
