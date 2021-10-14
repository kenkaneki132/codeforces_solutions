#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  int k,n,w;
  cin >> k >> n >> w;
  int ans;
  if((n-k*(w*(w+1)/2))>0){
    cout << 0;
  }
  else{
    ans =-n+k*(w*(w+1)/2);
    cout << ans;
  }
}
int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
