#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string> namelist;
    namelist.push_front("I");
    namelist.push_back("am");
    namelist.push_back("Amna");
    cout << "size of list :"<<namelist.size();
    cout << endl;
    for (auto i = namelist.begin(); i != namelist.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}
