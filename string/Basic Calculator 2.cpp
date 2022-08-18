class Solution {
public:
    int calculate(string s) {
        stringstream ss('+' + s + '+');
        int temp =0, num =0, sum =0;
        char op =' ';
        
        while(ss>>op)
        {
            ss >> num;
            if(op == '+'){
                sum += temp;
                temp = num;
            }
            if(op == '-'){
                sum += temp;
                temp = -num;
            }
            if(op == '*')
                temp *= num;
            if(op == '/')
                temp /= num;
        }
        return sum;
        
        
        
    }
};
