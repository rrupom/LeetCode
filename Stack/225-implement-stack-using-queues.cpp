#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
	queue<int> q;
	MyStack() {
	}

	void push(int x) {
		// reverse the existing queue
		queue<int> r;
		while (!q.empty()) {
			r.push(q.front());
			q.pop();
		}

		// insert the current element
		q.push(x);

		while (!r.empty()) {
			q.push(r.front());
			r.pop();
		}
	}

	int pop() {
		int data = q.front();
		q.pop();

		return data;
	}

	int top() {
		return q.front();
	}

	bool empty() {
		return q.empty();
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}