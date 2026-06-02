#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> a;
	int sun=0;
	int t;
	while(1){
		cin>>t;
		if(t==0){
			break;
		} 
		a.push(t); 
		sun+=t*a.size(); 
	}
	cout<<sun<<endl;
	while(!a.empty()){
		cout<<a.top()<<" ";
		a.pop();
	}
	cout<<endl;
 } 
