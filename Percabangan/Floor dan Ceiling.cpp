#include<bits/stdc++.h>
using namespace std;

int main(){
	float N;
	cin>>N;
	int pembulatan=trunc(N);
	if(N>=0){
		if(N!=pembulatan){
		cout<<pembulatan<<" "<<pembulatan+1;
		}else{
	    cout<<pembulatan<<" "<<pembulatan;
		}
		
	}else if(N<0){
		
		if(N!=pembulatan){
	    cout<<pembulatan-1<<" "<<pembulatan<<endl;
		}else{
	    cout<<pembulatan<<" "<<pembulatan;
		}
	}
	return 0;
}
