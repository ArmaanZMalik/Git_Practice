bool isPalindrome(int x) {
    long int rev=0;
    int b=x;
    while(b>0)
    {
        rev=rev*10+b%10;
        b/=10;
    }
    if(rev==x)
    {
        return true;
    }
    return false;
}