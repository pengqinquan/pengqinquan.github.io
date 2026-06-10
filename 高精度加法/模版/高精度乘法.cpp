#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	vector<int> a(s1.size());
	vector<int> b(s2.size());
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	for(int i=0;i<s1.size();i++){
		a[i]=s1[i]-'0';
	}
	for(int i=0;i<s2.size();i++){
		b[i]=s2[i]-'0';
	}
	vector<int> dom(s1.size()+s2.size());
	for(int i=0;i<s1.size();i++){
		for(int j=0;j<s2.size();j++){
			dom[i+j]+=a[i]*b[j]; //一定是dom[i+j]+ 不是dom[i+j] 
		}
	}
	for(int i=0;i<dom.size();i++){
		dom[i+1]+=dom[i]/10;
		dom[i]=dom[i]%10;
	}
	while(dom.size()>1 && dom.back()==0)
		dom.pop_back();
		
	for (int i = dom.size() - 1; i >= 0; i--)
        cout << dom[i];
    return 0;
}
