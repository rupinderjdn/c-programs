#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],x=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		x=x^a[i];
	}
	int temp=x;
	int pos=0;
	while((temp&1)!=1){
		pos++;
		temp>>1;
	}
	int mask=1<<pos;
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]&mask>0){
			c=c^a[i];
		}
	}
	int b=x^c;
	cout<<c<<" "<<b;
	return 0;
}