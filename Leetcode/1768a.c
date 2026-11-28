

char * mergeAlternately(char * word1, char * word2){
    int len1=strlen(word1),len2=strlen(word2);
    char* res=malloc(len1+len2+1);
    int a=0,b=0,i;
    for(i=0; i<len1+len2; i++)
    {
        if(a==b && a<len1)
        {
            res[i]=word1[a++];
        }
        else if(a>b && b<len2)
        {
            res[i]=word2[b++];
        }
        else if(a<len1 && b==len2)
        {
            res[i]=word1[a++];
        }
        else if(b<len2 && a==len1)
        {
            res[i]=word2[b++];
        }
    }
    res[i]='\0';
    return res;
}