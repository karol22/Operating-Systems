
// Example program
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void firstNotRepeated(string s){
    float x0=time(0);
    short int characters[256]={0};
    for(int i=0; i<s.length(); i++){
        if(characters[s[i]]==0){
            characters[s[i]]=1;
        }else if(characters[s[i]]==1){
            characters[s[i]]=2;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(characters[s[i]]==1){
          float x1=time(0);
          cout<<"The first character that doesn't repeat is: "<<s[i]<<". \nTime of processing: "<<x1-x0<<" milliseconds.";
          return;
        }
    }
    float x1=time(0);
    cout<<"That character doesn't exist. "<<"\nTime of processing: "<<x1-x0<<" milliseconds.";
}

int main()
{
  string s;
  cout << "Enter your string:\n";
  getline (cin, s);
  firstNotRepeated(s);
}
