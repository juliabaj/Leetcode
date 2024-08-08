class Solution {
public:
    int mySqrt(int x) {
        
        long left = 0;
        long right = x;
        int result  = 0;
    
        while (left <= right){
            long mid = left +(right-left) /2;
            if (mid * mid > x)
            {
                right = mid - 1;
            }
            else if (mid*mid < x)
            {
                left = mid + 1;
                result = mid;
            }else{
                return mid;
            }
        }
        return result;
    }          
};