#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
            int a,b,c,r;
            cin>>a>>b>>c>>r;
            int x=max(a,b);
            int y=min(a,b);
            int c1=c-r;
            int c2=c+r;
          int cm=min(c1,c2);

          int flag=0;
            bool b1=(c1<=x && c1>=y);
            bool b2=(c2<=x && c2>=y);
            //if(cm>=y){
        if((cm>=x && cm>=y) || (c1<=y && c2<=y))
          cout<<abs(a-b)<<endl;
            else if(b1 && b2)
             cout<<abs(a-b)-2*r<<"\n";
            else if(b1^b2)
            {
                if(b1==1)
                {
                    if(c1>=y)
                    cout<<abs(y-c1)<<"\n";
                    else cout<<abs(x-c1)<<"\n";  
                }
                
                else {
                    if(c2>=y)
                    cout<<abs(x-c2)<<"\n";
                    else cout<<abs(y-c2)<<"\n";
                }

            }
            else if((!b1) && (!b2))
            cout<<0<<"\n";
        
        


    

    }
}