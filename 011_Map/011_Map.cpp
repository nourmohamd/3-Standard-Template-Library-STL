#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main() {
    /*
        Why You Need To Map:
        ====================
        1- unique ===> Keys
        2- Add & Delete ===> O(log n) ===> O(1)
        3- Search ===> O(log n)
        4- Random Access ===> Supported [], at()
        5- Map/Multimap: Key Cannot Be Modified
    */
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
        4- m.emplace() ===> Same Insert But Faster
        5- m.emplace_hint() ===> Recive Iterator <<< Required >>>
        6- m.erase() ===> Has More Form << Under In Examples >>
        7- m.equal_range() ===> Get Current Element And Next Element In Map
        8- m.key_comp() ===> Compare Between Two Key In Map
        9- lower_bound & upper_bound
        10- m.empty()
        11- m.size()
        12- m.max_size()
        13- m.swap() ===> Swap Two Maps
        14- m.clear()

        Note: For Reverse Sorted In Map Write This
        map<int, char, greater<int>> m; ===> Reverse Depend On Int(Key)
        map<int, char, greater<char>> m; ===> Reverse Depend On Char
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

    // Ex3:
    map<int, string> m33;
    m33.emplace(1, "Mohamed");
    for(auto i:m33)
        cout<<i.first<<" "<<i.second<<endl;
    // Output: 1 Mohamed

    // Ex4: emplace_hint
    auto it5 = m33.begin();
    m33.emplace_hint(it5, 2, "Nour");
    for(auto i:m33)
    cout<<i.first<<" "<<i.second<<endl;
    /*
        Output:
        =======
        1 Mohamed
        2 Nour
    */

    // Ex5: erase
    // 1- m.erase(key)
    // 2- by iterator
    auto it6 = m33.begin();
    it6++;
    m33.erase(it6);
    for(auto i:m33)
        cout<<i.first<<" "<<i.second<<endl;
    // Output: 1 Mohamed
    // 3- by range
    auto it7 = m33.begin();
    m33.erase(it7, m33.end());
    for(auto i:m33)
        cout<<i.first<<" "<<i.second<<endl;
    // Output: Nothing
    /*
        Or:
        ===
        auto it7 = m33.begin();
        m33.erase(it7, m33.find(3));
        Erase Elements From First Until 3(Key) But not erase 3 (Not Include End)
    */

    // Ex6: equal_range
    map<int, int> m44 {{1,11}, {2,22}, {3,33}, {4,44}};
    for(auto i: m44)
        cout<<i.first<<" "<<i.second<<endl;
    /*
        Output:
        =======
        1 11
        2 22
        3 33
        4 44
    */
    pair<map<int, int>::iterator, map<int, int>::iterator> it8;
    it8 = m44.equal_range(3);
    cout<<it8.first->first<<" "<<it8.first->second<<endl
    <<it8.second->first<<" "<<it8.second->second<<endl;
    /*
        Output:
        =======
        3 33
        4 44
    */

    // Ex7: key_comp
    map<int, char> m55;
    m55[1] = 'a';
    m55[2] = 'b';
    m55[3] = 'c';
    map<int, char>::key_compare com;
    com = m55.key_comp();
    auto it9 = m55.begin();
    int x = 3;
    for(;com(it9->first, x);it9++) {
        cout<<it9->first<<" "<<it9->second<<endl;
    }
    /*
        Output:
        =======
        1 a
        2 b
    */

    // Ex8:
    auto it10 = m55.lower_bound(1);
    auto it11 = m55.upper_bound(2);
    m55.erase(it10, it11);
    for(auto i:m55)
        cout<<i.first<< " "<<i.second<<endl;
    // Output: 3 c





    return 0;
    system("PAUSE");
}
