#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  int n;
  cin >> n;
  int c=0;
  string a;
  cin >> a;
  for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
      c++;
    }
  }
  int ans=c;
  cout << ans;
}
int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
