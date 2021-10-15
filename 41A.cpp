#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int question(){
      string s,t;
      cin >> s >> t;
      int n=s.size();
      for(int i=0;i<n;i++){
        if(s[i]==t[n-i-1]){
          continue;
        }
        else{
          cout << "NO";
          return 0;
        }
      }
      cout << "YES";


  return 0;
}
int main(){
int n=1;
for(int i=0;i<n;i++){
question();
}
return 0;
}
