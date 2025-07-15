#include <iostream>
#include <list>
#include <iterator>
using namespace std;
bool even(int i) {
    return (i%2);
}
int main() {
    /*
        What We Learnning In List Sequense Container
        ============================================
        1 - Don't Support Quick Access at(index), [index]
        2 - Add & Remove Very Quick ===> O(1) Because It Depend On Iterator
            And Iterator Depend On Pointers
             List ---> Iterator ---> Pointers
        3 - Search ===> O(n)
        4 - Every Box Take More Size [ pointer for Next | Value | pointer for Previous ]
    */
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
            13 - l.assign(num1, num2) ===> For Reserve num1 Boxes In List With num2 Values
            14 - l.size() ===> For Get The Size Of List
            15 - l.empty() ===> For Check If List Empty( True ) Or Not Empty( False )
            16 - l.resize(num) ===> For Resize List To Num New Size
            17 - l.clear() ===> For Clear List After Finish From Your Work
            18 - l1.merge(l2) ===> For Mergin l2 In l1 And Make Format For l2
            19 - l2.splice(l2.begin(), l1) ===> Take l1 And Put In Begin l2 And Format l1
            20 - l1.unique() ===> For Remove redundant Element 1, 2, 1 ===> 1, 2
            21 - l1.remove_if(function_name) ===> For Remove Element By Condition
            22 - l1.sort() ===> For Sorted Ascending
            23 - l1.sort(greater<int>()) ===> For Sorted Descending
            24 - l1.reverse() ===> For Reverse List
            25 - In List We Cannot Get Element l[0] ===> Wrong
                 Correct ===> Iterator
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

    // Ex4: Merge
    list<int> l4 = {1, 2, 3};
    list<int> l5 = {4, 5, 0};
    l5.merge(l4);
    for(auto i: l4)
        cout<<i<<" ";
    cout<<endl;
    if(l4.empty()) {
        cout<<"Empty"<<endl;
    }
    // Output: Empty ===> This is only
    for(auto i: l5)
        cout<<i<<" ";
    cout<<endl;
    // Output: 1 2 3 4 5 0

    // Ex5: remove_if
    l5.remove_if(even);
    for(auto i: l5)
        cout<<i<<" ";
    cout<<endl;
    // Output: 2 4 0



    return 0;
    system("PAUSE");
}
