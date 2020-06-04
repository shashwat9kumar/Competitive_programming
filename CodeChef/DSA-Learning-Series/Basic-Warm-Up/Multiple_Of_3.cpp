#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin>>t;
    while(t-- > 0)
    {
        ll d0, d1, k;
        cin>>k>>d0>>d1;
        ll sum = d0+d1;
        
        
        if(k==2)
        {
            if((d0+d1)%3 == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            continue;
        }
        
        ll lastdig = (d1 + d0)%10;
        sum += lastdig;
        
        
        ll remdig = k - 3;
        
        
        while(remdig > 0)
        {
            
            if(lastdig == 6)
            {
                ll set = remdig/4;
                sum += set*20;
                
                remdig = remdig - set*4;
                
                if(remdig==0)
                {
                    ;
                }
                else if(remdig==1)
                {
                    sum+=2;
                }
                else if(remdig==2)
                {
                    sum+=6;
                }
                else
                {
                    sum+=14;
                }
                remdig=0;
                break;
            }
            else if(lastdig == 0)
            {
                remdig=0;
                break;
            }
            else
            {
                lastdig = (lastdig + lastdig)%10;
                sum+=lastdig;
                remdig--;
            }
            
        }
        
        
        
        
        if(sum % 3 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
