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





    return 0;
    system("PAUSE");
}
