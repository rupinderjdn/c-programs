#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int ans=1;
	while(b>0){
		if(b&1){
			ans*=a;
		}
		a*=a;
		b>>=1;
	}
	cout<<ans;
	return 0;
}