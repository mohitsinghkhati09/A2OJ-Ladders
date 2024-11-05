#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s,ns;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]!='a'&& s[i]!='e'&& s[i]!='i' && s[i]!='o'  && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I'&& s[i]!='O' && s[i]!='U' && s[i]!='y' && s[i]!='Y'){
			ns+='.';
			ns+=tolower(s[i]);
		}
	}
	cout<<ns<<endl;
	return 0;
}
