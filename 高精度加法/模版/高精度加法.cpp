#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	vector<int> a(s1.size());
	vector<int> b(s2.size());
	for(int i=0;i<s1.size();i++){
		a[i]=s1[i]-'0';
	}
	for(int i=0;i<s2.size();i++){
		b[i]=s2[i]-'0';
	}
	int compar=0;
	int max_size=max(s1.size(),s2.size());
	vector<int> sum(max_size);
	for(int i=0;i<max_size;i++){
		if(i>=a.size()){
			a.push_back(0);
		}
		if(i>=b.size()){
			b.push_back(0);
		}
		sum[i]=a[i]+b[i]+compar;
		if(sum[i]>=10){
			sum[i]-=10;
			compar=1;
		}else{
			compar=0;
		}
	}
	if(compar==1){
		sum.push_back(compar);
	}
	reverse(sum.begin(),sum.end());
	for(int i=0;i<sum.size();i++){
		cout<<sum[i];
	}
}
