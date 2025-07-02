#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Vector Section 1
    // ================
    /*
        #include <iostream> ===> For Including Vector
        How Created Vector Object:
        ==========================
        1- vector <int>name(length); ===> All Boxes is Zero By Default
        2- vector <int>name(5);
           name[0] = 10;

        Form For Vector:
        ================
            Front <<< [0] [1] [2] ------- [n] >>> Back

        Vector's Method:
        ================
        1 - ob1.swap(ob2)
        2 - ob.push_back(value) ===> Add To The End Vector
        3 - ob.front() ===> Return The First Value Of Vector
        4 - ob.back() ===> Return The Last Value Of Vector
        5 - ob.at(index) ===> Return Value Of This Index
        6 - ob.size() ===> Return Size Of Vector
        7 - ob.capacity() ===> Return Size Without Resize, Size*2 Of Vector But After
                               Add Element Or Resize Vector
        8 - ob.max_size() ===> Return Max Of Size For Vector
        9 - ob.empty() ===> Return true if empty Or false if otherwise
        10 - ob.pop_back() ===> For Remove Last Element In Vector
        11 - iterator ===> With It's functions (begin, end)
        12 - reverse_iterator ===> Same iterator but reverse from end to begin
        13 - const_iterator ===> cbegin, cend
        14 - const_reverse_iterator ===> crbegin, crend
    */

    // Ex1:
    vector <int> ob1 = {1, 2, 3, 4};
    vector <int> ob2 = ob1;
    cout<<ob2[3]<<endl;
    // Output: 4

    // Ex2:
    vector <int> ob3(5, 100);// Create A Vector With 5 Places All Value Of Them is 100
    vector <int> ob4(6, 200);// The Same Think
    ob3.swap(ob4);
    cout<<ob4[2]<<endl;
    // Output: 100

    // Ex3:
    vector <int> ob5(100);
    cout<<ob5.size()<<endl;
    cout<<ob5.capacity()<<endl;
    ob5.push_back(10);
    cout<<ob5.size()<<endl;
    cout<<ob5.capacity()<<endl;
    /*
        Output:
        =======
        100
        100
        101
        200
    */

    // Ex4:
    vector <int>ob6(5);
    ob6[0] = 2;
    ob6.pop_back();
    cout<<ob6.size()<<endl;
    // Output: 4

    // Ex5: Start Iterator Examples
    // How To Create Iterator For Vector ===> vector <int>::iterator it;
    // Use begin() ===> For Get First Address Of Place in iterator
    // Use end() ===> For Get Address Last+1 Of Place in iterator
    // For Get Last address it.end()-1
    vector <int>ob7 = {10, 20, 30, 40, 50};
    vector <int>::iterator it1;
    it1 = ob7.begin();
    cout<<*it1<<endl;
    // Output: 10 The First Box in Vector

    // Ex6:
    vector <int> ob8 = {10, 20, 30, 40};
    vector <int>::iterator it2 = ob8.end() - 1;
    cout<<*it2<<endl;
    // Output: 40 The last values in Vector

    // Ex7: Iterator --- print values by for loop
    vector <int> ob9 = {1, 2, 3, 4, 5};
    for(vector<int>::iterator it=ob9.begin();it!=ob9.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    // Output: 1 2 3 4 5
    // Explaination For Iterator Working:
    // ==================================
    /*
        <<< [1, Here begin()] [2] [3] [4] [5] [6] >>> null, Here end()
    */

    // Ex8: reverse_iterator --- print values by for loop
    vector <int> ob10 = {1, 2, 3, 4, 5};
    vector <int>::reverse_iterator it3;
    for(it3=ob10.rbegin();it3!=ob10.rend();it3++) {
        cout<<*it3<<" ";
    }
    cout<<endl;
    // Output: 5 4 3 2 1

    // Ex9: const_reverse_iterator --- print values by for loop
    vector <int> ob11 = {11, 22, 33, 44, 55};
    vector <int>::const_reverse_iterator it4 = ob11.crbegin();
    for(;it4!=ob11.crend();it4++) {
        cout<<*it4<<" ";
    }
    cout<<endl;
    // Output: 55 44 33 22 11

    // Ex10: const_iterator
    vector <int> ob12 = {111, 222, 333, 444, 555};
    vector <int>::const_iterator it5 = ob12.cbegin();
    for(;it5!=ob12.cend();it5++) {
        cout<<*it5<<" ";
    }
    cout<<endl;
    // Output: 111 222 333 444 555



    return 0;
    system("PAUSE");
}
