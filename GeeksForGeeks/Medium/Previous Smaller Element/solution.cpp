class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n = arr.size();
        stack<int> st;
        vector<int> nge(n);
        for(int i = 0; i < n; i++){
           while(!st.empty() && st.top()>=arr[i]){
               st.pop();
           }     
           
           nge[i] = st.empty()? -1: st.top();
           
           st.push(arr[i]);
        }
        
        return nge;
    }
};