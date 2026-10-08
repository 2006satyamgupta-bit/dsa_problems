class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans = "";
    for(char &ch : s){
        if(ch == '('){
            if(count>0){
            ans = ans + ch;
            }
        count++;    
        }

    else{
    
        count --;

        if(count > 0){
            ans = ans + ch;
            }
        }
    }
    return ans;
    }
};