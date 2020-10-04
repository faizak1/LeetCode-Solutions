class Solution {
public:
    bool isHappy(int n) {
    int sum = 0, factor1=0, factor2=0;
    stack<int> st;
    int iteration = 0;
    int temp = n, counter= 0;
    while(temp)
    {        
            temp=temp/10;
            counter++;
    }
    
    if (n==1) return true;
    while (n>1 && iteration < 20){
        iteration++;
        for (int i =0; i<counter;i++){
            st.push (n % 10);

            n = n/10;
        }
        while(!st.empty()){

            factor1 = st.top();
            factor2 = st.top();
            int prod = factor1 * factor2;
           
            sum = sum + prod;
         
            st.pop();
        }
        if (sum==1){
            return true;                
            break;
        }
   
        n = sum;
        temp = n;
        sum = 0;
        counter = 0;

        while(temp)
        {        
            temp=temp/10;
            counter++;
        }
        
    }
    return false;

    }
};