    int sockMerchant(int n, vector<int> ar) {
    int pairs=0;
    map< int , int > tracker;
    for ( int i=0 ; i<n ; i++ )
    {
        tracker[ar[i]]=0;
    }
    for ( int i=0 ; i<n ; i++ )
    {
        tracker[ar[i]]++;
    }
    for( auto i : tracker )
    {
        //cout<<i.first<<"->"<<i.second<<endl;
        if( i.second>2)pairs+=i.second/2;
        if(i.second==2 )pairs+=1;
    }

    return pairs;
    }
