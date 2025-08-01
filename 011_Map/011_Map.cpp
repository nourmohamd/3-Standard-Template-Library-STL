#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main() {
    // Map Container From ( Associative Container )
    /*
        - In Map Every Element Has Two Section [key|Value]

        Attribute About Map:
        ====================
        1- Sorted By Key Ascending
        2- Doesn't Repeated Elements
        3- Supported Quick Access
        4- Need To #include <map>

        How To Create Object From Map:
        ==============================
        map<int, string> m{{1, "ali"}, {2, "ahmad"}, {3, "nour"}};

        Print Of Ways:
        ==============
        1- By Iterator
        2- By Foreach
        3- By int&i in Foreach

        Methods:
        ========
        1- m.at(key) ===> For Get Value Of This Key
        2- m.count(key) ===> Return 1 If Element is exists or 0 if not
        3- m.insert() ===> Has More Form << Under In Examples >>
    */

    // Ex1:
    map<int, string> m {{1123, "Ahmad"}, {413, "Nour"}, {655, "Tareq"}};
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    // How To Add New Element:
    m[312312] = "Mustafa";
    // To Update Value:
    m[312312] = "NNNN";

    cout<<m.at(312312)<<endl;
    // Output: NNNN
    m.at(312312) = "K";
    cout<<m.at(312312)<<endl;
    // Output: K

    // Ex2: print By Iterator
    auto it1 = m.begin();
    for(;it1!=m.end();it1++) {
        cout<<it1->first<<" "<<it1->second<<endl;
    }
    // Output: Print All Elements In Multi Lines

    /*
        You Can Print By:
        =================
        -reverse_iterator
        -const_iterator
        -const_reverse_iterator
    */

    // Ex2: Insert Method

    // Form1:
    m.insert({12322, "AA"});

    // Form2:
    m.insert(pair<int, string>(2, "AHJJ"));

    // Form3:
    m.insert(make_pair(12331, "JJJJJJJ"));

    // Form4:
    auto it2 = m.begin();
    m.insert(it2, {22,"AA"});

    // Form5:
    auto it3 = m.begin();
    it3 = m.insert(it3, {101, "101"});
    m.insert({102, "102"});
    // Here We Storage Iterator And Position Of Operation In Iterator

    // Form6:
    map<char, int> m2 {{'a', 10}, {'b', 20}, {'c', 30}};
    m2.insert({'d', 40});
    auto it4 = m2.begin();
    it4 = m2.insert(it4, {'e', 50});
    m2.insert(it4, {'f', 60});
    // Move From a to f ===> from m to m2;
    map<char, int> m22;
    m22.insert(m2.begin(), m2.find('f'));
    // Not Including End Stop At f(Not Include)
    for(auto i:m22) {
        cout<<i.first<<" "<<i.second<<" - ";
    }
    cout<<endl;
    // Output: a 10 - b 20 - c 30 - d 40 - e 50 -



    return 0;
    system("PAUSE");
}
