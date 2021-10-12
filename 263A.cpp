#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  int a[5][5];
  int r=0,c=0;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin >> a[i][j];
      if(a[i][j]==1){
        r=i;
        c=j;
      }
    }
  }
  int ans=abs(r-2)+abs(c-2);
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
