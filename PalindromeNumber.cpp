//Palindrome number means that it is symetrical. From backwards it is gonna come out as the same number as from the front. f.ex - 1223221
class Solution {
public:
    bool isPalindrome(int x)                  
    {
        if(x < 0)                        //checking if the number is not negative
            return false;

        if(x != 0 && x%10 == 0)         //checking if there is a 0 at the end or the number is just simply 0 - then it cannot be a palindrome
            return false;

        int reverse=0;

        while(x > reverse)
        { reverse = reverse*10 + x%10;
            x = x/10;
        }

        if(x == reverse)
        { 
            return true;
        }

        if(x == reverse/10)
        { 
             return true;
        }
        return false;
    }
    
};
