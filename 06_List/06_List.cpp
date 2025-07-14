#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main() {
    // List From ( Sequense Container )
    // ================================
    /*
        Note: Need To Import #include <list>
        Why We Need The List Container
        ==============================
            The List Sequense Container Loves Because
            It Have Two <<< Double Linked List >>>
                            ==================
            --> [ | ] --> [ | ] --> [ | ] <---
                [ | ] <-- [ | ] <-- [ | ]
            That Means Each Element In List Contains Two Pointers But There are Some Issues About That:
            ===========================================================================================
            1 - First Value|Element Have Two Pointer( P1 pointers To Head[First Value], P2 Pointer To Null Because )
            2 - Last Value|Element Have One Pointer( P1 pointers To Null )

        How Can You Create Object From List
        ===================================
            1 - list<int> a = {1, 2, 3};
            2 - list<int> b (6);
            3 - list<int> c;

        All Method In List
        ==================
            1 - l.push_back(value) ===> Add Value To End List
            2 - l.push_front(value) ===> Add Value To First List
            3 - l.pop_back() ===> Delete Last Value In List
            4 - l.pop_front() ===> Delete First Value In List
            5 - Print Element in list by <<< foreach >>>
              A-for(auto a:l) {
                    cout<<a<<endl;
                }
            6 - Print Element By Iterator
              A-list<int>::iterator it = l.begin();
                for(;it!=l.end();it++) {
                    cout<<*it<<endl;
                }
            7 - reverse_iterator ===> Same Vector And Deque
            8 - l.front() ===> Get First Value In List
            9 - l.back() ===> Get Last Value In List
            10 - l.remove(n) ===> Delete All Value === n In List
            11 - l.erase(first address, last address) ===> Delete Value In List
            12 - l.insert(Argments) ===> Add Values To List


    */
    // Ex1: Erase
    list<int> l = {1, 2, 3, 4, 5};
    l.erase(l.begin());
    // 2, 3, 4, 5
    l.erase(l.end());
    // Delete All Values In List
    for(auto i:l)
        cout<<i<<" ";
    cout<<endl;
    // Null
    list<int> l2 = {1, 2, 3, 4, 5};
    l.erase(l.begin(), l.end());
    // Delete All Values In List

    // Ex2: Erase
    list<int> l3 = {123, 123, 32};
    auto it1 = l3.begin();
    it1++;
    l3.erase(it1, l3.end());
    for(auto i:l3)
        cout<<i<<" ";
    cout<<endl;
    // Output: 123
    // Delete All Values In List

    // Ex3: Insert
    l3.insert(l3.begin(), 2);
    // 2 123
    // l3.insert(l.begin()+1, 10); ===> Error Because List Depend On Pointers
    auto it2 = l3.begin();
    it2++;
    l3.insert(it2, 10);
    // 2 10 123
    l3.insert(l.begin(), 2, 100);
    // 100 100 2 10 123

    return 0;
    system("PAUSE");
}
