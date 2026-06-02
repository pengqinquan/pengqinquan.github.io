#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> s;
	char ch;
	int x, y, k;
	
	while(cin >> ch){
		// 这里必须是 && ！！！
		if(ch >= '0' && ch <= '9'){
			s.push(ch - '0');
		}
		else if(ch == '+'){
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			k = y + x;
			s.push(k);
		}
		else if(ch == '-'){
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			k = y - x;
			s.push(k);
		}
		else if(ch == '*'){
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			k = y * x;
			s.push(k);
		}
		else if(ch == '/'){
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			k = y / x;
			s.push(k);
		}
	}
	
	cout << s.top() << endl;
	return 0;
}
