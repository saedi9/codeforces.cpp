#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a=0,d=0;
	cin>>n;
	while(n--){
		char t;
		cin>>t;
		if(t=='A') a++;
		else d++;
	}
	if(a>d) cout<<"Anton"<<endl;
	else if(d>a) cout<<"Danik"<<endl;
	else cout<<"Friendship"<<endl;
}