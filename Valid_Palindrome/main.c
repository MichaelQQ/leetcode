char isAlphanumeric(char c);
bool isPalindrome(char* s) {
    unsigned int len;
    int head, tail;
    
    if((len = strlen(s)) == 0)
        return true;
    
    head = 0;
    tail = len-1;
    while(head != tail && head < tail ){
        while( (s[head] = isAlphanumeric(s[head])) == 0 && head < len){
            head++;
        }
        while( (s[tail] = isAlphanumeric(s[tail])) == 0 && tail >= 0){
            tail--;
        }
        if(s[head] != s[tail])
            return false;
        head++;
        tail--;
    }
    
    return true;
}

char isAlphanumeric(char c){
    if(c >= 97 && c <= 122)
        return (c-32);
    if(c >=65 && c <= 90)
        return c;
    if(c >=48 && c <= 57)
        return c;
    return 0;
}
