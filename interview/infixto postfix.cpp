
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int priority(char c) {
	int rank;
	if (c == '*' || c == '/')
		rank = 1;
	else  if (c == '+' || c == '-')
		rank = 2;
	return rank;
}
string infixPostfix(string infix){
	stack<char> st;
	int i = 0;
	string out;
	while(infix.length() != i){
		if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/'){
			while (!st.empty()){
				if(priority(st.top()) <= priority(infix[i])){
					out.push_back(st.top());
					st.pop();
				}
				else break;
			}
			st.push(infix[i]);
		}
		else if (infix[i] == '(')
			st.push(infix[i]);
		else if (infix[i] == ')') {
			while (st.top() != '(') {
				out.push_back(st.top());
				st.pop();
			}
			st.pop();
		}
		else
			out.push_back(infix[i]);
		i++;
	}
	while (!st.empty()){
		out.push_back(st.top());
		st.pop();
	}
	return out;
}
int evaluate(char *postfix){
	char *p, t,*q;
	stack <int> st;
	int num1, num2, result;
	p=&postfix[0];
	while(*p != NULL){
		while(*p == ' ')
			p++;

		if(isdigit(*p)){
			t= *p;
			q =&t;
			st.push(atoi(q));
		}
		else{
			num1 = st.top();
			st.pop();
			num2 = st.top();
			st.pop();
			switch(*p){
			case '+':
				result = num2  + num1;
				break;
			case '-':
				result = num2 - num1;
				break;
			case '/':
				result = num2 / num1;
				break;
			case '*':
				result = num2 * num1;
				break;
			default:
				return 0;
			}
			st.push(result);
		}
		p++;
	}
	result = st.top();
	st.pop();
	return result;
}
int main() {
	string infix, postfix;
	cout << "Enter an infix expression: " << endl;
	getline(cin, infix);
	cout << endl;
	postfix = infixPostfix(infix);
	cout << "Infix:   " << infix << endl;
	cout << "Prefix:  " << endl;
	cout << "Postfix: " << postfix << endl;
	cout << endl;
	cout << "Answer:  " << evaluate(&postfix[0]) << endl;
	cout << endl;
}
