#include <iostream>
#include <cstring>
using namespace std;

int main(){
  string s;
  cin>>s;
  bool buff[26];
  memset(buff, 0, sizeof(buff));
  int count = 0;
  for (char c: s) {
	if (! buff[c-'a']) {
	  buff[c-'a'] = true;
	  count++;
	}
  }
  if (count%2 == 0)cout<<"CHAT WITH HER!";
  else cout <<"IGNORE HIM!";
  return 0;
}
