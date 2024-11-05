#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
	int n;
	float sum=0;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	int c =0;
	int i=0;
	float mid = ceil(sum/2);
	while(sum>=mid){
		c++;
		sum-=v[i];
		i++;
	}
	cout<<c<<endl;
	return 0;
}
