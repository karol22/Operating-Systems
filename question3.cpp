#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
using namespace std;

int randomNumber (vector<int> v, int n, int k){
  srand (time(NULL));
  vector<int> ans;
  int j=0;
  for(int i=0; i<n; i++){
    if(v[j]==i){
      if(j<v.size()-1)
      j++;
    }else{
      ans.push_back(i);
    }
  }

  int r=rand()%(n-k);
  return ans[r];
}



int main(){
  int k=6;
  int n=10;
  int array[6]={1, 2, 4, 6, 7, 9};
  vector<int> a(array, array + sizeof array / sizeof array[0]);
  int b=randomNumber(a, n, k);
  cout<<b;
}
