class Solution {
  public:
  
  int priority(char ch){
      if(ch == '^') return 3;
      if(ch == '/'|| ch == '*') return 2;   
      else if(ch=='+' || ch == '-') return 1;
      else
        return -1;
  }
  
    string infixToPostfix(string& s) {
        // code here
        stack<char> st;
        string ans = "";
        for(int i =0; i<s.length(); i++){
         
            if(  s[i] >= 'A' && s[i] <= 'Z' 
                || s[i] >= 'a' && s[i] <= 'z'
                || s[i] >= '0' && s[i] <= '9'){
               
                ans = ans + s[i];
                }
            else if(s[i] == '('){
                st.push(s[i]);
                
            }
            else if (s[i] == ')'){
                while(!st.empty() && st.top()!='('){
                    ans = ans + st.top();
                    st.pop();
                }
                if(!st.empty()){
                st.pop();
                    
                } 
            
            }
            
            
            
            else{
             while(!st.empty() && st.top()!='(' 
             && priority(s[i]) <= priority(st.top())
             && s[i]!='^'){
                ans = ans + st.top();  
                st.pop();
                
            }
                st.push(s[i]);
            }
            
        }
            while(!st.empty()){
                ans = ans + st.top();
                st.pop();
            }
        return ans;
    }
};
