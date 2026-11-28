bool isSubsequence(char* s, char* t) {
    int len1=strlen(s),len2=strlen(t);
    int a=0;
    for(int i=0; i<len2; i++)
    {
        if(s[a]==t[i])
        {
            a++;
        }
    }
    if(a==len1)
    {
        return true;
    }
    return false;
}