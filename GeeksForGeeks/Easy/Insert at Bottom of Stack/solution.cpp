class Solution {
	public:
	stack<int> insertAtBottom(stack<int> &st, int x) {
		// code here
		stack<int> tempStack;
		while (!st.empty()) {
			tempStack.push(st.top());
			st.pop();
		}
		st.push(x);
		while (!tempStack.empty()) {
			st.push(tempStack.top());
			tempStack.pop();
		}
		
		return st;
	}
};
