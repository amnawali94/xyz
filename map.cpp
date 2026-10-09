#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert(make_pair(12, 13));
    m.insert(make_pair(12, 130));
    m.insert(make_pair(12, 13));
    m.insert(make_pair(13, 139));
    m.insert(make_pair(10, 13));
    m.insert(make_pair(11, 9));
    m[100] = 30;
    m[13] = 138;
    m[700] = 6;
    for (auto i = m.begin(); i != m.end();i++)
    {
        cout << "index :"<<(*i).first << " " << "value :"<< (*i).second<<endl;
    }
    cout << m[700]<<endl;//for present value
    cout << m[900];
    return 0;
}
