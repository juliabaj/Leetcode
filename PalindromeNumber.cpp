//Palindrome number means that it is symetrical. From backwards it is gonna come out as the same number as from the front. f.ex - 1223221
class Solution {
public:
    bool isPalindrome(int x)                  
    {
        if(x < 0)                        //checking if the number is not negative
            return false;

        if(x != 0 && x%10 == 0)         //checking if there is a 0 at the end or the number is just simply 0 - then it cannot be a palindrome
            return false;

        int reverse=0;                  //Initializing a variable to store numbers from reverse order

        while(x > reverse)
        { 
            reverse = reverse*10 + x%10;  //Checking if the number is odd and adding last digit of the original number to the reverse variable
            x = x/10;                     //Removing the last digit from the original number
        }

        if(x == reverse)                  //Checking if the original number is equal to it's reverse form
        { 
            return true;
        }

        if(x == reverse/10)              //For odd numbers - checking if after removing middle digit from reverse form , it is equal to original number
        { 
             return true;
        }
        return false;                   //If none of the above is correct, the number is not a palindrome
    }
    
};
