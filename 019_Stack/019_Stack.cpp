#include <iostream>
#include <stack>
#include <deque>
#include <vector>
#include <list>
using namespace std;
int main() {
    /*
        Why We Learnning Stack Adapter Container
        ========================================
        1- Push ===> O(1)
        2- Pop ===> O(1)
        3- Size ===> O(1)
    */
    // Stack From ( Adapter ) Container
    /*
        The Stack is building on LEFO ===> Last In First Out

        Need To Include: #include <stack>

        Note: Look At Stack.png For Understand What is A Stack

        Methods:
        ========
        1- push() ===> For Add Element
        2- emplace() ===> For Add Element/s
        3- pop() ===> For Remove Top Element
        4- top() ===> For Get A Top Element
        5- empty() ===> Give Me true if stack is empty and false if not empty
        6- size() ===> For Get Size
        7- swap() ===> For Swap Between Two Stacks

        Note: You Can Storage List, Deque, Vector In Stack
    */
    // Ex1:
    stack<string> s1;
    s1.push("A");
    s1.emplace("B");
    s1.push("C");
    cout<<s1.top()<<endl;
    s1.pop();
    for(int i=0;!s1.empty();i++) {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    /*
        Output:
        =======
        C
        B A
    */

    // Ex2:
    stack<string, deque<string>> s2;
    stack<string, vector<string>> s3;
    stack<string, list<string>> s4;

    // Ex3: Assign Range To Stack
    stack<string> s5;
    for(string st1: {"a", "b", "c"}) {
        s5.push(st1);
    }
    for(int i=0;!s5.empty();i++) {
        cout<<s5.top()<<" ";
        s5.pop();
    }
    cout<<endl;
    // Output: c b a

    // Ex4: Swap Between Two Stacks
    stack<int> s6;
    s6.push(1);
    s6.push(2);
    s6.push(3);
    s6.push(4);
    stack<int> s7;
    s7.push(11);
    s7.push(22);
    s7.push(33);
    s7.push(44);

    return 0;
    system("PAUSE");
}
