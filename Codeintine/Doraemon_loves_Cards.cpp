#include<cstring>
 #include<iostream>
 #include<algorithm>
 #include<cstdio>
 
 using namespace std;
 
 int main()
 {
     long long n,m;
     while(scanf("%I64d%I64d",&n,&m)!=EOF)
     {
         long long  ans,k;
        long long  mi;
         if(n<m) mi=n;
         else mi=m;
         if(n==0)
         {
             ans=-m*m;
             cout<<ans<<endl;
             for(long long  i=0;i<m;i++) printf("x");
             printf("\n");
             continue;
         }
         else if(m==0)
         {
             ans=n*n;
            cout<<ans<<endl;
             for(long long  i=0;i<n;i++) printf("o");
             printf("\n");
             continue;
         }
         for(long long  i=1;i<=mi;i++)
         {
             long long x=m/(i+1);
             long long le=m-x*(i+1);
             long long ansa=(n-i+1)*(n-i+1)+i-1;
             long long ansb=le*(x+1)*(x+1)+(i+1-le)*x*x;
             long long sum=ansa-ansb;
            // cout<<sum<<endl;
             if(i==1)
                 ans=sum,k=i;
             else if(sum>ans)
             {
                 ans=sum;
                 k=i;
             }
         }
 
         printf("%I64d\n",ans);
         long long  p=0;
         long long  x=m/(k+1);
         long long  le=m-x*(k+1);
         for(long long  i=0;i<le;i++)
         {
             for(long long  j=0;j<x+1;j++) printf("x");
             if(!i) for(long long j=0;j<n-k+1;j++) printf("o"),p++;
             else printf("o"),p++;
         }
 
         for(long long  i=0;i<k+1-le;i++)
         {
             for(long long  j=0;j<x;j++) printf("x");
             if(!p) for(long long j=0;j<n-k+1;j++) printf("o"),p++;
             else if(p<n) printf("o"),p++;
         }
         printf("\n");
     }
 }

