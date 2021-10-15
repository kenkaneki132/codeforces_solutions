#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
bool lucky(int cnt){
  while(cnt>0){
    if(cnt%10==4||cnt%10==7){
      cnt/=10;
      continue;
    }
    else{
      return false;
    }
  }
  return true;
}
int question(){
      long long n;
      cin >> n;
      int cnt=0;
      while(n>0){
        if(n%10==4||n%10==7){
          cnt++;
        }
        n/=10;
      }
      if(lucky(cnt)){
        cout << "YES";
      }
      else{
        cout << "NO";
      }

     return 0;
}
int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
