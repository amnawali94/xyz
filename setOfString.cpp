#include <iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    set<string> s;
    s.insert("Amna");
    s.insert("Amna");
    s.insert("Amina");
    s.insert("qmna");
    s.insert("smna");
    s.insert("smna");
    cout<<"Size of :" << s.size() << endl;
    for (auto i = s.begin(); i != s.end();i++)
    {
        cout << *i << " ";
    }

        return 0;
}
