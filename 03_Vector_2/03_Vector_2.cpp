#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // Vector Section 2
    /*
        Front <<< [0] [1] [2] [3] [4] [...] >>> Back
        Auto
        ====
        It is a type from data that allow you to define any datatype you want
        Example:
        --------
        ---Either
        vector<int>::iterator it = object.begin();
        ---Or
        auto it = object.begin(); ===> Best Way To Define Iterator
        Example:
        --------
        auto x = 100;
        auto x = 10.2;
        auto x = "Nour";

        Vector Method:
        ==============
        1 - v.insert(address, value)
        2 - v.emplace(address, value) ===> Fast For Add From insert function
        3 - v.emplace_back(value) ===> add in last
        4 - v.erase(v.begin() + 1, v.end()) ===> For Remove The second element
        5 - v.resize(number) ===> For Resizing Vector
        6 - v.shrink_to_fit();
        7 - sort(address start, address end) ===> Need #include <algorithm>
        8 - reverse(address start, address end) ===> For Reverse Vector Need #include <algorithm>
    */

    // Ex1:
    vector <int>v1 = {10, 20, 30, 40, 50};
    auto it1 = v1.begin();
    for(;it1!=v1.end();it1++) {
        cout<<*it1<<" ";
    }
    cout<<endl;
    // Output: 10 20 30 40 50

    // Ex2:
    v1.insert(v1.begin(), 100); // add 100 in first
    v1.insert(v1.end(), 200); // add 200 in last
    v1.insert(v1.begin()+1, 300); // add 300 in second place in vector
    v1.emplace(v1.end()-1, 33); // add 33 in before last place in vector
    v1.emplace_back(44); // add 44 in last
    v1.insert(v1.begin(), 5, 10); // Add 5 Element by 10 value

    for(int i=0;i<v1.size();i++) {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    // Output: 10 10 10 10 10 100 300 10 20 30 40 50 33 200 44

    // Ex3:
    v1.erase(v1.begin() + 1); // 10 10 10 10 100 300 10 20 30 40 50 33 200 44
    v1.erase(v1.begin(), v1.end() - 3); // 33 200 44
    for(int i=0;i<v1.size();i++) {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    // Output: 33 200 44

    // Ex4:
    vector <int>v2(10);
    cout<<v2.size()<<" ";
    v2.resize(5);
    // The New Size = 5 But There are places full in zero for removed it
    // v2.shrink_to_fit();
    v2.shrink_to_fit();
    cout<<v2.size()<<endl;
    // Output: 10 5

    // Ex5: For Resize Vector Sizing
    vector <int>v3(5);
    int n1 = 0;
    int i=0;
    for(;i<v3.size();i++) {
        cin>>v3[i];
        if(i + 1==v3.size()) {
            cout<<"Enter New Size If You Want : ";
            cin>>n1;
            if(n1==-1) {
                break;
            } else {
                v3.resize(n1);
                if(n1 < v3.size()) {
                    v3.shrink_to_fit();
                }
            }
        }
    }
    for(int i=0;i<v3.size();i++) {
        cout<<v3[i]<<" | ";
    }
    cout<<endl;
    // Output: By value User

    // Ex6: sort vector
    sort(v3.begin(), v3.end());
    for(auto it: v3) {
        // Here it Starts From First Value To End
        cout<<it<<" ";
    }
    cout<<endl;
    // Output: Vector Sorted

    // Ex7: Sorted Reversed
    sort(v3.rbegin(), v3.rend());
    for(auto it: v3) {
        // Here it Starts From First Value To End
        cout<<it<<" ";
    }
    cout<<endl;
    // Output: Vector Sorted Reversed

    // Ex8: Reverse Vector
    vector <int>v4 = {1, 2, 3, 4, 5};
    reverse(v4.begin(), v4.end());
    for(auto it: v4)
        cout<<it<<" ";
    cout<<endl;
    // Output: 5 4 3 2 1



    return 0;
    system("PAUSE");
}
