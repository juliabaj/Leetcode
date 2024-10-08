class Solution {
public:
    int mySqrt(int x) {
        
        long left = 0;               //Initializing both borders to iterate through
        long right = x;
        int result  = 0;             //Variable to store result
    
        while (left <= right){                                //Iterating untill left isn't crossing right
            long mid = left +(right-left) /2;                 //Calculating the middle value
            if (mid * mid > x)                                //If mid^2 is greater than x that means we have to change the right border to smaller one
            {
                right = mid - 1;
            }
            else if (mid*mid < x)                            //If mid^2 is smaller than x, that we have to change left border to bigger one and update result
            {
                left = mid + 1;
                result = mid;
            }else{                                           //If mid^2 is equal to x then we return mid as a result
                return mid;
            }
        }
        return result;
    }          
};
