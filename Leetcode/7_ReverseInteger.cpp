class Solution {
public:
    int reverse(int x) {
        int fanz=0;
        int c;
        while(x){
            c=fanz;
            fanz=fanz*10+x%10;
            //判断得到的数复原后是否和它之前相等来判断溢出
            if(fanz/10!=c){
                return 0;
            }
            x=x/10;
        }        
        return fanz;
    }
};
