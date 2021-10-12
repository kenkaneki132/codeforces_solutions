#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  string s;
  cin >> s;
  priority_queue<char> q;
  int x = s.size();
  for(int i=0;i < x; i+=2){
    q.push(s[i]);
  }
  for(int i=x-1;i >=0; i-=2){
    s[i]=q.top();
    q.pop();
  }
  cout << s;
  return 0;
}

int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
