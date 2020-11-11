#include <bits/stdc++.h>
using namespace std;

int solution(int n, int arr[]){
    sort(arr, arr+n);
    if(n==1){
        return arr[0];
    }
    else if(n==2){
        return arr[1];
    }
    else if(n==3){
        int val1 = arr[0]+arr[2] > arr[2] ? arr[0]+arr[2] : arr[2];
        int val2 = arr[0]+arr[1] > arr[2] ? arr[0]+arr[1] : arr[2];
        return (val1 < val2?val1:val2);
    }
    else{
        int v1 = (arr[0]+arr[2]) > (arr[1]+arr[3])? (arr[0]+arr[2]) : (arr[1]+arr[3]);
        int v2 = (arr[0]+arr[1]) > (arr[2]+arr[3])? (arr[0]+arr[1]) : (arr[2]+arr[3]);
        int v3 = (arr[0]+arr[3]) > (arr[1]+arr[2])? (arr[0]+arr[3]) : (arr[1]+arr[2]);
        int v4 = (arr[0]+arr[2]+arr[3]) > arr[1] ? (arr[0]+arr[2]+arr[3]) : arr[1];
        int v5 = (arr[0]+arr[1]+arr[3]) > arr[2] ? (arr[0]+arr[1]+arr[3]) : arr[2];
        int v6 = (arr[0]+arr[1]+arr[2]) > arr[3] ? (arr[0]+arr[1]+arr[2]) : arr[3];
        
        
        int x1 = v1 < v2 ? v1:v2;
        int x2 = v3 < v4 ? v3:v4;
        int x3 = v5 < v6 ? v5:v6;
        
        
        return (x1< x2? (x1< x3?x1:x3):(x2<x3?x2:x3));
    }
}

int main() {
	int t = 0;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<solution(n , arr)<<endl;;
	}
	return 0;
}
