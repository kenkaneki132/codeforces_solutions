#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
  int n;
  cin >> n;
    int ans=0;
  for (int i=0; i < n; i++) {
    string x;
    cin >> x;

    if(x=="X++"||x=="++X"){
      ans++;
    }
    if(x=="X--"||x=="--X"){
      ans--;
    }
  }
  cout << ans << " ";
  return 0;
}
