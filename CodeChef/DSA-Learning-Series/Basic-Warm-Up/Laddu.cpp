#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t-- > 0)
	{
	    
	    int n;
	    string nat;
	    cin>>n>>nat;
	    int laddu = 0;
	    
	    for(int i=0;i<n;i++)
	    {
	        
	        string act;
	        cin>>act;
	        
	        if(act == "CONTEST_WON")
	        {
	            int rank;
	            cin>>rank;
	            laddu += 300;
	            
	            int bonus= 0;
	            if(rank>20)
	            {
	                bonus = 0;
	            }
	            else
	            {
	                bonus = 20-rank;
	            }
	            
	            laddu+= bonus;
	        }
	        
	        else if(act == "TOP_CONTRIBUTOR")
	        {
	            laddu+= 300;
	        }
	        
	        else if(act == "BUG_FOUND")
	        {
	            int sev;
	            cin>>sev;
	            laddu+=sev;
	        }
	        
	        else if(act == "CONTEST_HOSTED")
	        {
	            laddu += 50;
	        }
	        
	        else
	        {
	            cout<<"In activities"<<endl;
	            assert(false);
	        }
	        
	    }
	    
	    if(nat == "INDIAN")
	    {
	        laddu= laddu/200;
	    }
	    else if(nat == "NON_INDIAN")
	    {
	        laddu = laddu / 400;
	    }
	    else
	    {
	        cout<<"In numbers"<<endl;
	        assert(false);
	    }
	    
	    cout<<laddu<<endl;
	    
	}
	return 0;
}
