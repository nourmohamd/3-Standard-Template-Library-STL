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






    return 0;
    system("PAUSE");
}
