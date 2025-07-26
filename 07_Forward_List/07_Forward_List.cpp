#include <iostream>
#include <forward_list>
using namespace std;
int main() {
    /*
         What We Learnning In List Sequense Container
         ============================================
         1- Quick In Add And Remove
         2- Save More Storage
         3- Build By: Single Linked List
         4- It has one pointer point to next node
    */
    // Forward List From ( Sequense Container )
    // ========================================
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
        10 - fl.erase_after(fl.begin()) ===> Remove Second Element in Forward List
        11 - fl.remove(n) ===> Delete All Value === n In List
        12 - fl.remove_if() ===> Same List
        13 - fl.splice_after() ===> For Concat Two Forward Lists ( And Make fl2 empty )
        14 - resize() , empty() , max_size() , merge() , sort() ,
             sort(greater,<int>()) , unique() , swap() , clear ()
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

    // Ex5: erase_after()
    forward_list<int> fl3 = {1, 2, 3};
    fl3.erase_after(fl3.begin());
    for(int&i: fl3) {
        cout<<i<<" ";
    }
    cout<<endl;
    // 1 3
    // Error: fl3.erase_after(fl3.begin()+2) ===> Use Iterator With Next For This because It is List

    // Ex5: remove_if()
    fl3.remove_if([](int i){return i>0;});
    for(int&i: fl3) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: Nothing All Element Has Been Deleted

    // Ex6: Splice_After
    forward_list<int> fl4 = {1, 2, 3};
    forward_list<int> fl5 = {1, 2, 3};
    fl4.splice_after(fl4.begin(), fl5);
    for(int&i: fl4) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 1 2 3 2 3
    // fl5 is empty

    forward_list<int> fl6 = {1, 2, 3};
    forward_list<int> fl7 = {1, 2, 3};
    fl6.splice_after(fl6.before_begin(), fl7, fl7.begin());
    for(int&i: fl6) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 2 1 2 3
    for(int&i: fl7) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1 3

    forward_list<int> fl8 = {1, 2, 3};
    forward_list<int> fl9 = {1, 2, 3};
    fl8.splice_after(fl8.before_begin(), fl9, fl9.begin(), fl9.end());
    for(int&i: fl8) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 2 3 1 2 3
    for(int&i: fl9) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: 1
    // Take All Element Without First Element



    return 0;
    system("PAUSE");
}
