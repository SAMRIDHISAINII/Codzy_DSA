class Solution {
public:
    bool rotateString(string A, string B) {
         if(A.size() != B.size()) return false;
        if(A.size() == 0) return true;
        
        vector<int> candidateA;
        
        for(int i = 0; i < A.size(); i++){
            if(A[i] == B[0]){
                candidateA.push_back(i);
            }
        }
        
        for(int start : candidateA){
            bool isRotate = true;
            for(int i = 0; i < A.size(); i++){
                if(A[(start+i)%A.size()] != B[i]){
                    isRotate = false;
                    break;
                }
            }
            if(isRotate){
                return true;
            }
        }
        
        return false;
    }
};
