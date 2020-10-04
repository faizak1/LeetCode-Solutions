class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        for (int i=0; i<s.length(); i++){
            if (s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || 
                s[i]== 'o' || s[i] == 'u' || 
                s[i]== 'A' || s[i] == 'E' || s[i] == 'I' || 
                s[i]== 'O' || s[i] == 'U'){
                st.push(s[i]);
            }
        }
         for (int j=0; j<s.length(); j++){
            if (s[j]== 'a' || s[j] == 'e' || s[j] == 'i' || 
                s[j]== 'o' || s[j] == 'u' || 
                s[j]== 'A' || s[j] == 'E' || s[j] == 'I' || 
                s[j]== 'O' || s[j] == 'U'){
                s[j]= st.top();
                st.pop();
            }
        }
        return s;
    }
};