// Example program
#include <bits/stdc++.h>
using namespace std;

char firstNotRepeated(string s){
    short int characters[256]={0};
    for(int i=0; i<s.length(); i++){
        if(characters[s[i]]==0){
            characters[s[i]]=1;
        }else if(characters[s[i]]==1){
            characters[s[i]]=2;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(characters[s[i]]==1)
        return s[i];
    }
    return 0;
}

int main()
{
  string s;
  cout << "Enter your string:\n";
  getline (cin, s);
  cout << "The first character that doesn't repeat is: " << firstNotRepeated(s) << "\n";
}
