#include<bits/stdc++.h>  // 你少写了 l → include
using namespace std;

// 函数名写错：Priorty → Priority
int getPriority(char op){
	if(op=='+'||op=='-') return 1;
	if(op=='*'||op=='/') return 2;
	return 0; // 括号返回0，优先级最低
} 

char suft[101]; // 存后缀表达式

int main()
{
	char c;
	stack<char> op;
	int i=0;
	
	while(cin>>c){
		// ===== 错误1：数字判断逻辑写反了 && 写成了 ||
		if(c>='0' && c<='9'){
			suft[i++]=c;
		}
		else if(c=='('){
			op.push(c);
		}
		else if(c==')'){
			// 弹出直到左括号
			while(op.top()!='('){
				suft[i++]=op.top();
				op.pop();
			}
			op.pop(); // ===== 错误2：必须弹出左括号，否则留在栈里
		}
		else{
			// ===== 错误3：括号不匹配，多了一个 )
			while(!op.empty() && getPriority(op.top()) >= getPriority(c)){
				suft[i++]=op.top();
				op.pop();
			}
			op.push(c); // ===== 错误4：漏了把当前运算符入栈
		}
	}
	
	// 弹出剩余所有运算符
	while(!op.empty()){
		suft[i++]=op.top();
		op.pop();
	}
	
	// 输出后缀表达式
	for(int j=0;j<i;j++){
		cout<<suft[j];
	}
	return 0;
}
