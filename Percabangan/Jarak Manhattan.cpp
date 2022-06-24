#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	a=a-c;
	b=b-d;
	if(a<0){
		a=a*-1;
	}
	if(b<0){
		b=b*-1;
	}
	cout<<a+b<<endl;
}
