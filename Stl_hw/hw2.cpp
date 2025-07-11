#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct OurStack {
	queue<int> q;
	void push(int val) {
	    q.push(val);
		for(int i=0; i<q.size()-1; i++)
        {
            q.push(q.front());  //الي في الاول اعمله بوش  في الكيو يصبح في الاخر واعمله بوب من مكانه في الاول فتتقدم العناصر اللي ورا ل قدام
            q.pop();
        }

	}
	void pop() {
		if (!q.empty())
			q.pop();
	}
	int top() {
		return q.front();
	}
	bool empty() {
		return q.empty();
	}
};

int main() {

	OurStack s;
	s.push(1);
	s.push(2);
	s.push(3);

	while (!s.empty())
		cout << s.top() << " ", s.pop();

	return 0;
}
