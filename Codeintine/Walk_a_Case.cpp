#include<bits/stdc++.h> 
using namespace std;
  
int fib(int n) 
{ 
  int f[n+2];   
  int i; 
  

  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
  
int main () 
{ 

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin>>n; 
  cout<<(fib(n+1)); 
  return 0; 
} 
