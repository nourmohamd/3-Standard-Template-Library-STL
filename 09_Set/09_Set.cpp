#include <iostream>
#include <iterator>
#include <set>
#include <string.h>
using namespace std;
int main() {
    // Set The First Container From ( Associative Container )
    // ============================================
    /*  Why We Leanning Set:
        ====================

        Set:
        ====
        1- In Set All Elements Sorted
        2- Doesn't have any Repeated In Elements In Set
        3- Quick in remove and add Elements
        4- Search ===> O(n)
        5- Max & Min Elements ===> O(1) ===> Because It Sorted Elements
        6- Random Access Not Supported [], at()
        7- push_back(), push_front() ===> Not Supported
    */
    /*
        Set Section 1:
        ==============
        - Need #include <set>

        How create Object from set container:
        =====================================
        set<int> s = {1, 2, 3, 4, 5};

        By Iterator:
        ============
        Method Same in Vector ===>
        s.begin()
        s.end()
        s.rbegin()
        s.rend()
        s.crbegin()
        s.crend()
        s.cbegin()
        s.cend()

        Method In Set:
        ==============
        1- s.empty()
        2- s.size()
        3- s.max_size()
        4- s.insert(num)
        5- s.emplace(num) ===> Fast From insert in add element to set container
        6- s.emplace_hint() ===> For Add But It Recives Value, Position_of_Add
                                 But in string Sorted By First Letter And Return
                                 This Position
        Method In Set Section 2:
        ========================
        1- s.erase("nour") ===> Delete nour in Set
        2- s.find(Value) ===> For Search About Any Value In Set
        3- s.lower_bound(Value) ===> Pointers To Lower Value in SET
        4- s.upper_bound(Value) ===> Pointers To Upper Value in SET
        5- We Use s.lower_bound(Value) & s.upper_bound(Value) For Remove Range
        6- s.swap(s2) ===> For Swap Between Two Set Object
        7- s.clear()
        8- s.key_comp() ===> For Compare Between Values In Set
        9- s.count(num) ===> For Check If Number Sended Has Find In Set(1) Or No(0)
        10- s.equal_range(2) ===> Recives Number And Return This Number(2) And Next Number Greater Than From 2
                                  Need Iterator
        Note: In Set You Cann't Update Or Change Values Of Boxes
        11- set<int, greater<int>> ===> For Sorted Set Descending
    */
    // Ex1:
    set<int> s1 = {1, 2, 3, 4};
    s1.insert(6);
    s1.insert(6);
    // 1 2 3 4 6
    // In First Insert Operation Add 6
    // While In Second Insert Operation Not Add 6 ( Not Repeat 6 )
    for(auto i:s1) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 2 3 4 6

    // Ex2:
    auto it1 = s1.begin();
    s1.insert(it1, 99);
    // This Way Very Quick In Add ( By Iterator )
    for(auto i:s1) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 2 3 4 6 99

    // Ex3:
    s1.emplace(10);
    for(auto i:s1) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 2 3 4 6 10 99

    // Ex4:
    set<string> s2;
    auto it2 = s2.begin();
    s2.emplace_hint(it2, "Mohamed");      // O(1)
    it2 = s2.emplace_hint(it2, "Ali");    // O(1)
    it2 = s2.emplace_hint(it2, "Noor");   // O(1)
    it2 = s2.emplace_hint(it2, "Omar");   // O(1)
    it2 = s2.emplace_hint(it2, "Mustafa");// O(1)
    s2.emplace_hint(s2.end(), "Money");
    for(auto i:s2) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: Ali Mohamed Money Mustafa Noor Omar
    // This Is Faster Way To Add Elements in Set
    /*
        Some Explanitions:
        ==================
        set<string> s;
        auto it = s.emplace("Ahmad");
        it = s.emplace("Ahmad");
        //////
        Compiler Does to return in every Add operation Pair ( iterator, variable boolean )

        variable boolean:
        =================
        It Does Check If This Value Exists In Set Before(0) Or No(1)
        If Yes Doesn't Add(0)
        If No Add(1)

        //////
        // In First Way
        cout<<it<<endl;
        // 1
        cout<<*it<<endl;
        // ahmad
        // In Second Way
        cout<<it<<endl;
        // 0
        cout<<*it<<endl;
        // ahmad
    */

    // Ex5:
    set<int> s3 = {1, 2, 3, 4};
    auto it3 = s3.begin();
    s3.erase(it3);

    for(auto i:s3) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 2 3 4
    it3++++;
    // Every ++ Means Move For One Box Forward In Set
    s3.erase(it3);

    for(auto i:s3) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 3 4

    // Ex6:
    s3 = {1, 2, 3, 4, 5};
    auto it4 = s3.find(2);
    s3.erase(it4, s3.end());
    for(auto i:s3) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1
    // Because It Remove From 2 To End : s3.erase(it4, s3.end())

    // Ex7: Remove Range
    set<int> s4 = {10, 20, 30, 40, 50};
    auto it5 = s4.lower_bound(20);
    auto it6 = s4.upper_bound(50);
    s4.erase(it5, it6);
    for(auto i:s4) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Ouput: 10

    // Ex8: key_comp()
    set<int> s5 = {10, 20, 30, 40, 50, 60};
    auto t0 = s5.key_comp();
    auto t1 = s5.begin();
    int n = 30;
    for(;t0(*t1, n);t1++) {
        cout<<*t1<<" ";
    }
    cout<<endl;
    // Output: 10 20

    // Ex9: count
    cout<<s5.count(10)<<endl;
    // Output: 1

    // Ex10: equal_range
    set<int> s6 = {1, 2, 3};
    auto it7 = s6.equal_range(2);
    cout<<*it7.first<<" "<<*it7.second<<endl;
    // Output: 2 3

    // Ex11:
    set<int, greater<int>> s7 = {10, 20, 30};
    for(auto i:s7) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 30 20 10




    return 0;
    system("PAUSE");
}
