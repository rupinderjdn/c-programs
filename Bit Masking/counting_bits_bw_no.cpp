#include<bits/stdc++.h>
using namespace std;
int countbits(int n){
	int cnt=0;
	while(n>0){
		cnt=cnt+(n&1);
		n=n>>1;
	}
	return cnt;
}
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		int count=0;
		for(int i=a;i<=b;i++){
			count+=countbits(i);
		}
		cout<<count<<endl;
	}
	return 0;
}