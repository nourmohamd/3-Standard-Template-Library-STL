#include <iostream>
#include <forward_list>
using namespace std;
int main() {
    // Forward List
    /*
        Forward List Made Up From Single Linked List
        ============================================

        [head] --Next--> [] --Next--> [Tail] --Null-->

        Fast In Add & Delete & Safe Storage More Than List
        And Has <<<(One)>>> Pointer From Back To Front Only
                ===========

        - Need Package: #include<forward_list>

        Forward_List's Methods
        ======================
        1 - fl.assign(num1, num2) ===> For Reserve num1 Boxes In List With num2 Values
        2 - 2 2Ways To Print By ForEach
        3 - fl.push_front(n) ===> Add Number To First Forward List
        4 - fl.pop_front() ===> Delete Number From Front Forward List
        5 - fl.emplace_front(20) ===> Add 20 to first Forward List (Save The Storage More Than push_front()
        6 - fl.insert_after(fl.begin(), 5) ===> Add 5 after first number in Forward List
        7 - fl.insert_after(fl.before_begin(), 5) ===> Add 5 in first number in Forward List
        8 - fl.emplace_after(fl.begin(), 5) ===> Like insert_after but this more faster and save ---storage---
        9 - fl.next() ===> Get The Address Of The next Element for this element in Forward List
    */
    // Ex1:
    forward_list<int> fl1;
    fl1.assign(2, 100);
    // 100 100
    fl1.assign({1, 2, 3});
    // 1 2 3
    for(auto i: fl1) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 2 3

    // Ex2: Print by foreach
    // way1
    for(auto i: fl1) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 2 3
    // way2
    // By Datatype forward list ===> int
    for(int&i:fl1) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 2 3

    // Ex3:
    forward_list<int> fl2;
    fl2.insert_after(fl2.before_begin(), {1, 2, 3});
    for(int&i: fl2) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 2 3

    // Ex4: next
    auto it1 = next(fl2.begin());
    cout<< *it1<<endl;
    // Output: 2
    auto it2 = next(fl2.begin(), 2);
    cout<< *it2<<endl;
    // Output: 3





    return 0;
    system("PAUSE");
}
