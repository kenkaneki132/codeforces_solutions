#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  string a,b;
  cin >> a;
  cin >> b;
  int ans=0;
  int x= a.size();
  for(int i=0;i<x;i++){
    if(a[i]<97){
      a[i]+=32;
    }
    if(b[i]<97){
      b[i]+=32;
    }
      if(a[i]<b[i]){
      ans--;
      cout << ans;
      break;
    }
    else if(a[i]>b[i]){
      ans++;
      cout << ans;
      break;
    }
    else{
      continue;
    }
  }
  if(ans == 0){
    cout << ans;
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
