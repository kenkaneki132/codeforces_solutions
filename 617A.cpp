#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  int n;
  cin >> n;
  int ans=0;
  if(n<=5){
    ans=1;
  }
  else{
    if(n%5!=0){
    ans = n/5+1;
  }
  else{
      ans=n/5;
    }

  }
  cout << ans;

   return 0;
}
int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
