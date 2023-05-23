// Intuition
// The code uses a stack data structure to determine whether a given string s contains valid parentheses. 
// It iterates through each character in the string and performs the following operations:
// 1) If an opening parenthesis is encountered, it is pushed onto the stack.
// 2) If a closing parenthesis is encountered, it checks whether it matches the top element of the stack (i.e., they form a valid pair). If they do, the top element is popped from the stack. If they don't match, the closing parenthesis is pushed onto the stack.
// 3) After processing all characters, if the stack is empty, it means all opening parentheses have been matched and canceled out, resulting in a valid string.

// Approach
// Initialize an integer array stack of size 10000 and an integer variable top to -1 to represent an empty stack.
// Get the length of the input string s and store it in the variable n.
// Iterate through each character in the string using a loop.
// If the stack is empty (indicated by top==-1), push the current character onto the stack by incrementing top and assigning s[i] to stack[top].
// If the stack is not empty and the current character matches the closing parenthesis for the top element of the stack, pop the top element by decrementing top.
// If the stack is not empty and the current character does not match the closing parenthesis for the top element of the stack, push the current character onto the stack by incrementing top and assigning s[i] to stack[top].
// After processing all characters in the string, check if the stack is empty (i.e., top==-1). If it is empty, return true to indicate a valid string. Otherwise, return false.

// Complexity
// Time complexity:
// The code iterates through each character in the string once, resulting in a time complexity of O(n), where n is the length of the string.
// Space complexity:
// The code uses an integer array stack of fixed size 10000 to store the opening parentheses. Therefore, the space complexity is O(1) as the stack size remains constant regardless of the input string length.

// Code
class Solution {
public:
    bool isValid(string s) {
        int stack[10000];
        int n=s.length();
        int top=-1;
        for(int i=0; i<n; i++)
        {
            if(top==-1)
            {
                stack[++top]=s[i];
            }
            else if(stack[top]=='(' && s[i]==')' || stack[top]=='[' && s[i]==']' || stack[top]=='{' && s[i]=='}')
            {
                stack[top--];
            }
            else
            {
                stack[++top]=s[i];
            }
        }
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
