#include<bits/stdc++.h>
using namespace std;
int count_bits(int n){
	int c=0;
	while(n>0){
		c=c+(n&1);
		n=n>>1;
	}
	return c;
}
int main(){
	int n;cin>>n;
	cout<<count_bits(n)<<endl;
	return 0;
}