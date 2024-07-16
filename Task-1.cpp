int isPalindrom(string s,int first,int last) //function declaration to check if the string is palindrom or not
{
    //Recursive Case
    if(first<last+1)  //conditition check,if the first index is smaller than last+1
    {
        first++;  //if the first index is smaller than last+1 index than increase first by 1
        last--;   //decrease last by 1
        return isPalindrom(s,first,last);  //return the result of isPalindrom function with parameters s,first and last
    }
    //Base Case
    if(first==last)   //condition check.if first is equal to last,means there is only one character in the string then return 1
    {
        return 1;
    }
    if(s[first]!=s[last])  //condition check.if the first index character of string s is not equal to the last index character of string s return 0
    {
        return 0;
    }
   return 1;   //else return 1
}
void printResult(string s)  //function declaration to print the result
{
    int l=s.length();   //assigning the value of length of the string to variable l
    int result;   //variable declaration
    if(l==0)   //condition check,if l is 0 then print true 
    {
        cout<<"true";
    }
    else{    //else assign the value of isPalindrom to result with paramenters s,0 and l-1
        result=isPalindrom(s,0,l-1);
    }
    if(result==1)    //if result is 1 then print true
    {
        cout<<"true";
    }
    else{        //else print false
        cout<<"false";
    }

}


//Time Complexity : O(n)
//Space Complexity : O(n)