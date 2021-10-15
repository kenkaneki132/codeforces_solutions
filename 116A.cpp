#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
    int n;
    cin >> n;
    int a,b;
    int num[n];
    num[0]=0;
    cin >> a >> b;

    for(int i=1;i<n;i++){

      num[i]=num[i-1]+b-a;
            cin >> a >> b;
    }
    int ans=0;
    for(int i=0;i<n;i++){
      if(ans<num[i]){
        ans=num[i];
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
