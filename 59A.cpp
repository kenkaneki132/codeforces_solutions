#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
    string a;
    cin >> a;
    int up=0,n;
    n=a.size();
    for(int i=0;i<n;i++){
      if(a[i]<97){
        up++;
      }
    }
    if(up>n/2){
      for(int i=0;i<n;i++){
        if(a[i]>=97){
          a[i]-=32;
        }
      }
    }
    else{
      for(int i=0;i<n;i++){
        if(a[i]<97){
          a[i]+=32;
        }
      }
    }
    cout << a;

    return 0;
}
int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
