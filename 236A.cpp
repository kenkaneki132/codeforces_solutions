#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
  string a;
  int b[26]={0};
  cin >> a;
  int ans=0;
  int n=a.size();
  for(int i=0;i<n;i++){
    b[a[i]-'a']++;
    if(b[a[i]-'a']==1){
      ans++;
    }
  }
  if(ans%2==1){
    cout << "IGNORE HIM!";
  }
  else{
    cout << "CHAT WITH HER!";
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
