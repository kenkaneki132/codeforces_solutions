#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
    int n,k;
    cin >> n >> k;
    for(int i=0;i<k;i++){
      if(n%10==0){
        n/=10;
      }
      else{
        n-=1;
      }
    }
    cout << n;

   return 0;
}
int main(){
  int n=1;
  for(int i=0;i<n;i++){
    question();
  }
  return 0;
}
