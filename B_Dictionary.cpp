#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
     string bl="aa";//Berland language
        map<string,int>ix;
        int i=0;
        for(bl[0]='a';bl[0]<='z';bl[0]++)
        {
            for(bl[1]='a';bl[1]<='z';bl[1]++)
            {
                if(bl[0]!=bl[1])
                ix[bl]=++i;
            }
            
        }
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s; 
        cout<<ix[s]<<"\n";
    }
}
*/
        /*
        Word 1: ab
Word 2: ac
...
Word 25: az
Word 26: ba
Word 27: bc
...
Word 649: zx
Word 650: zy
*/
int main()
{
     int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s; 
        //ascii value of a=96// a=1,b=2; a=a-96; b=b-96//
        int c1,c0;
        /* cout<<(int)s[0]<<endl;
        cout<<(int)s[1]<<endl;
        c1=((int)s[0])-96;
        cout<<c1<<endl;
        c0=((int)s[1])-96;
        cout<<c0<<endl;
        */
        c1=((int)s[0])-96;
        c0=((int)s[1])-96;
        int plus=0;
        if(s[1]<s[0])
        plus=1;
        cout<<((c1-1)*26)+c0-c1+plus<<endl;

    }


}
