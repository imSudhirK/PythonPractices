#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void printList(list<int>l){
  list<int>:: iterator ptr;
  for( ptr= l.begin(); ptr !=l.end(); ptr++){
    cout<<*ptr<<" ";
  }
  cout<<'\n';
}

void printList1(list<float>l){
  list<float>:: iterator ptr;
  for( ptr= l.begin(); ptr !=l.end(); ptr++){
    cout<<*ptr<<" ";
  }
  cout<<'\n';
}

bool even(int const &value){
  return value%2 ==0;
}

bool compare(float a, float b){
  return((int)a == (int)b);
}

int main(){
  list<int>l;
  for(auto i=1; i<=5; i++){
    l.push_back(i);
    l.push_front(i*2);
  }

  printList(l);
  cout<<"front\t"<<l.front()<<"\t back \t"<<l.back()<<endl;

  l.pop_back();
  l.pop_front();
  l.reverse();
  cout<<"after reversing list \t";
  printList(l);

  l.sort();
  cout<<"after sorting list \t";
  printList(l);

  bool b = l.empty();
  cout<<"size\t"<<l.size()<<"\t is list empty\t"<<b<<endl;

  list<int> l1=l;
  cout<<"copied list \t";
  printList(l1);

  l1.assign(4, 7);
  cout<<"assigned list l1 \t";
  printList(l1);

  list<int>:: iterator ptr_l1 = l1.begin();
  advance(ptr_l1, 1);
  l1.insert(ptr_l1, 5); //default frequency =1
  advance(ptr_l1, 2);
  l1.insert(ptr_l1, 3, 8);   //position_pointer, frequency, number
  cout<<"after insertion, list \t";
  printList(l1);
  l1.erase(ptr_l1);
  cout<<"erase at pointer \t";
  printList(l1);

  list<int>:: iterator itr1, itr2;
  itr1 = itr2 = l1.begin();
  advance(itr1, 2);
  advance(itr2, 5);

  l1.erase(itr1, itr2);
  cout<<"range erase \t";
  printList(l1);

  l1.push_back(3);
  l1.push_front(9);
  l1.remove(5);
  l1.remove_if(even);
  cout<<"after remove operations \t";
  printList(l1);

  l1.resize(2);
  l1.resize(4);
  l1.resize(6, 8);
  cout<<"after resize \t";
  printList(l1);

  list<float>l2(l.begin(), l.end());
  l2.push_back(2.5);
  l2.push_front(3.77);
  l2.push_back(4.2);
  l2.sort();
  l2.unique();  //used on sorted list;
  cout<<"unique list \t";
  printList1(l2);
  l2.unique(compare);
  cout<<"unique integer list \t";
  printList1(l2);

  l2.clear();
  l1.swap(l2);
  l2.sort();
  l.sort();
  //l2.merge(l); //merge two sorted list into single sorted list
  //l2.merge(l, compare);


}
