//a= {"1 23" , "2 24" , "3 44"}
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> a= {"1 23" , "2 24" , "3 44"};

   // cout<<a.size();
    for(string x:a)
    {
        cout<<x; 
    }

    

}