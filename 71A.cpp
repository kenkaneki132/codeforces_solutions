#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    string x;
    cin >> x;
    int y=x.size();
    if(y<=10){
        cout << x << " ";
    }
    else{
      cout << x[0] << y-2 <<x[y-1] << " ";
    }
  }
  return 0;
}
