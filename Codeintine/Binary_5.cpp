#include<bits/stdc++.h> 
using namespace std;


vector<bool> prefixesDivBy5(vector<int>& A) 
{
    vector<bool> result(A.size());
    for (int i = 0, m = 0; i < A.size(); ++i) 
	{
        m = ((m << 1) + A[i]) % 5;
        result[i] = !m;
    }
    return result;
}

int main () 
{ 

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  vector<int> V;
  int input = 0;
  while ((cin >> input) && input != 9999)
  {
	V.push_back(input);
  }
    
  
  vector<bool> output = prefixesDivBy5(V);
  
  for (int i = 0; i < output.size(); i++) 
  {
	cout << output.at(i) << ' ';
  }
  
  return 0; 
} 
