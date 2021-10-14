#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  int a,b;
  cin >> a >> b;
  int cnt=0;
  while(a<=b){
    a*=3;
    b*=2;
    cnt++;
  }
  cout << cnt;
  return 0;
}
int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
