#include <iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main()
{
    list<float> l;
    l.push_front(1);
    l.push_back(3.14);
    l.push_back(3.4);
    l.push_back(4.3);
    l.push_back(5.5);
    for (auto it = l.begin(); it != l.end();it++)
        {
            cout << *it << ", ";
        }
        return 0;
}
