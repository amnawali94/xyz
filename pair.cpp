#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
pair<string,pair<int,int>> p;
p = make_pair("Amna", make_pair(25,35));
p.first = "Amna";
p.second.first = 25;
p.second.second = 80;
for (auto &&i : container)
{
    
}



cout <<"name : "<< p.first << ",age : " << p.second.first<<",waight: "<<p.second.second;
return 0;
}
