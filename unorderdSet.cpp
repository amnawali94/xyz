#include <iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(12);
    s.insert(13);
    s.insert(11);
    s.insert(134);
    s.insert(1678);
    s.insert(1);
    s.insert(1678);

    cout << s.size() << endl;
    for (auto i = s.begin(); i !=s.end(); i++)
    {
        cout << *i << " ";
        /* code */
    }

    return 0;
}
