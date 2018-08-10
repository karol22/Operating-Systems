#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

class Structure{
private:


public:
  priority_queue<int, vector<int>, greater<int> > minheap;
  priority_queue<int> maxheap;

  void add(int k){
    float t0=time(0);
    if(maxheap.size()>minheap.size()){
      minheap.push(k);
    } else {
      maxheap.push(k);
    }
    if(minheap.size()>0){
      if(maxheap.top()>minheap.top()){
        int a=maxheap.top();
        maxheap.pop();
        int b=minheap.top();
        minheap.pop();
        minheap.push(a);
        maxheap.push(b);
      }
    }
    float t1=time(0);
    cout<<"Processing time for add new element: "<<t1-t0<<" milliseconds.\n";
  }
  float median(){
    float t0=time(0);
    if(minheap.size()==maxheap.size()){
      float t1=time(0);
      cout<<"Processing time for give the median: "<<t1-t0<<" milliseconds.\n";
      return ((float)minheap.top()+(float)maxheap.top())/2;
    } else{
      float t1=time(0);
      cout<<"Processing time for give the median: "<<t1-t0<<" milliseconds.\n";
      return maxheap.top();
    }
  }
};

int main(){
  Structure a;
  a.add(1);
  a.add(4);
  cout<<a.median()<<endl;
  a.add(7);
  cout<<a.median()<<endl;
  a.add(6);
  cout<<a.median()<<endl;
  a.add(1);
  cout<<a.median()<<endl;

  return 0;
}
