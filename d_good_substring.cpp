#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(void){
  string ins = "ababab";
  string good_definition = "01000000000000000000000000";
  bool good_bad[26];
  for(int i = 0;i<good_definition.length();i++){
    if(good_definition.c_str()[i]=='1') good_bad[i]=true;
    else good_bad[i]=false;
  }
  for(int i = 0;i<26;i++){
    cout<<good_bad[i]<<' ';
  }
  int max_good = 1;

  
  for(int i = 0;i<ins.length();i++){
    cout<<ins.c_str()[i];  
  }

  return 0;
}
