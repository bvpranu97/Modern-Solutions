int atoi(string str)
{
   bool flag=true;
    for( int i=0 ; i<str.length() ; i++ )
    {
        if( str[i] == '-' ) continue;
        if ( isdigit(str[i]) )
         flag=true;
        else 
         return -1;
    }
    stringstream ss(str);
    int num;
    ss>>num;
    return num;
    
}
