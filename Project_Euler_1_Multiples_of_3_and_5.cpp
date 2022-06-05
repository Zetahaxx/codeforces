//Project Euler #1: Multiples of 3 and 5
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define nr (num-1)
typedef long l;

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        l num,add1,add2,sub;
        cin>>num;
        l ans=0;
        add1=nr/3;
        add2=nr/5;
        sub=nr/15;
        cout<<3*(add1*(add1+1)/2)+5*(add2*(add2+1)/2)-15*(sub*(sub+1)/2)<<"\n";
        
        /*int tm=3;
        for(int i=6;i<n;i=i+3)
        tm+=i;
        int fm=5;
        for(int i=10;i<n;i=i+5)
        fm+=i;
        int sub=15;
        while(sub<=n)
        {
            sub=sub+15;
        }
        cout<<tm+fm-sub<<"\n";*/
     }
    return 0;
}
