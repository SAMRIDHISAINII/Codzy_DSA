// gfg easy category
// easy way of doing it
int digitalRoot(int n)
    {
        if(n<10)return n;
        n=n%10+digitalRoot(n/10);
        return digitalRoot(n);
        
    }
