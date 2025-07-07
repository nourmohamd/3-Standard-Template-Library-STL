#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
bool p(int i) {
    return (i>1000);
}
int main() {
    /*
        What Do You Learnning In Vector ?
        =================================
        1- Add ===> O(1)
        2- Delete ===> From Back ===> O(1)
        3- Add ===> Any Where ===> O(n)
        4- Delete ===> Any Where ===> O(n)
        5- Access ===> [index] ===> at(index) ===> O(1)
        6- find() ===> O(log n)
        7- size ===> Dynamic
        8- When you widing the size this takes more time
        9- Depends On The Spaces Between Elements Like Array
    */
    // Vector Section 3
    /*
        Front <<< [0] [1] [2] [3] [4] [...] >>> Back

        Some Function:
        ==============
        =======================================
        1, 2, 3 ====> Neets #include <algorithm>
        =======================================
        1- *min_element(Start Address, End Address) ===> For Get minimum Element
        2- *max_element(Start Address, End Address) ===> For Get maximum Element
        3- *minmax_element(Start Address, End Address) ===> Get Min Max Elements ( Neets An iterator To Extract First Element And Second Element )
        4- find_if() ===> Searchs For Number In Vector But Should Vector Sorted
        5- copy(arr, arr+length, ve.begin()) ===> For Copy Array To Vector Or Vector To Vector
        6- copy_backward(a1.begin(), a1.end(), a2.end()) ===> Copy But Reverse From End
            To Begin() And From Vector To Vector
        7- copy() ===> For Print Element Of Vector
    */
    // Ex1:
    vector<int> v1 = {1, 2, 3, 4, 5};
    cout<<*min_element(v1.begin(), v1.end())<<endl;
    cout<<*max_element(v1.begin(), v1.end())<<endl;
    auto it1 = minmax_element(v1.begin(), v1.end());
    cout<<*it1.first<<endl;
    cout<<*it1.second<<endl;
    /*
        Output:
        =======
        1
        5
        1
        5
    */

    // Ex2: Sort Vector From First Element To Minimum Element
    vector<int> v2 = {44, 1, 0, 22};
    auto it2 = min_element(v2.begin(), v2.end());
    sort(v2.begin(), it2+1);
    for(auto x : v2) {
        cout<<x<<" ";
    }
    cout<<endl;
    // Output: 0 1 44 22

    // Ex3: find_if()
    // Should Vector Sorted
    vector<int> v3 = {1010, 111, 504, 121, 5};
    sort(v3.begin(), v3.end());
    auto it3 = find_if(v3.begin(), v3.end(), p);
    for(;it3!=v3.end();it3++) {
        cout<<*it3<<" ";
    }
    cout<<endl;
    // Output: 1010

    // Ex4:
    int arr1[] = {10, 20, 30, 40, 50};
    vector<int>v4(5);
    copy(arr1, arr1+5, v4.begin());
    for(auto i:v4) {
        cout<< i<<" ";
    }
    cout<<endl;
    // Output: 10 20 30 40 50

    // Ex5:
    vector<int> a1 = {1, 2, 3};
    vector<int> a2(3);
    copy_backward(a1.begin(), a1.end(), a2.end());
    for(auto i:a2) {
        cout<< i<<" ";
    }
    // Output: 1 2 3
    cout<<endl;

    // Ex6: Print Elements By copy function
    /*
        Needs:
        ======
        1- #include <iterator>
        2- Needs ostream_iterator Class
    */
    vector<int>v5 = {1, 2, 3, 40};
    copy(v5.begin(), v5.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    int arr2[4] = {1, 2, 3, 40};
    copy(arr2, arr2+4, ostream_iterator<int>(cout, " "));
    cout<<endl;
    // Output: 1 2 3 40
    // Output: 1 2 3 40

    // Ex7: Enter Vlaues Only By copy() function, Enter q For Out
    vector<int>v6(6);
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(v6));
    // Containning Entering The Values

    // Ex8: Enter Values And Print It
    vector<int>v7(4);
    copy(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, "\n Input: "));
    // Output: Input: num ....

    return 0;
    system("PAUSE");
}
