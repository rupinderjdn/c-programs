#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;cin>>x>>y;
	int res=INT_MIN;
	for(int i=x;i<=y;i++){
		for(int j=i;j<=y;j++){
			res=max(res,i^j);
		}
	}
	cout<<res;
	return 0;
}