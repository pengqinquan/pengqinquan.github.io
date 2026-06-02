#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	char ch;
	int x,y,k;
	int num = 0;

	while(cin.get(ch)){  // 改用 cin.get，读取回车
		if(ch >= '0' && ch <= '9'){
			num = num * 10 + (ch - '0');
		}
		else if(ch == '\n'){  // 读到回车，代表一个数字输完了
			if(num != 0){
				s.push(num);
				num = 0;
			}
		}
		else{  // 读到运算符 +-*/
			x = s.top(); s.pop();
			y = s.top(); s.pop();
			if(ch=='+') k=y+x;
			if(ch=='-') k=y-x;
			if(ch=='*') k=y*x;
			if(ch=='/') k=y/x;
			s.push(k);
		}
	}
	cout<<s.top()<<endl;
	return 0;
}
