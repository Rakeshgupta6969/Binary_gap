class Solution {
    public:
        int binaryGap(int n) {
         // first of all using the brute force solution.
    
         string s = "";
    
         while(n>0){
            if(n%2 == 1){
                s += '1';
            }
            else{
                s += '0';
            }
            n = n/2;
         }
    
       // revesre the string
       reverse(s.begin(),s.end());
      
      int maxi = 0;
    
       for(int i = 0; i<s.size(); i++){
        
            if(s[i] == '1'){
             
             for(int j = i + 1; j<s.size(); j++){
             
              if(s[j] == '1'){
                maxi = max(maxi, j - i);
                break;
              }
    
    
             }
            }
    
       }
    
    
       return maxi;
    
    
        }
    };