#include <iostream>
#include<set>
using namespace std;
//it store unique element
//it store data in orderd form
int main()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(10);
    s1.insert(20);
    s1.insert(1);
    s1.insert(2);
    s1.erase(100);//it remove an element 
    s1.insert(200);
    for (auto it = s1.begin(); it != s1.end();it++)
    {
        cout << *it << " ";
    }
        return 0;

}
