#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    string s="anirudh   is is delulu";
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    int count=1;
    int maxcount=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])count++;
        else count=1;
        maxcount=max(maxcount,count);

        
    }
    count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1])count++;
        else count=1;
        
        if(count==maxcount)
        {
            cout<<v[i]<<" "<<maxcount;
        }

        
    }
    

}