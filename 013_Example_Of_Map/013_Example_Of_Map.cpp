#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
template<typename type>
struct com {
    bool operator()(const type&first, const type&second) const {
        return first>second;
    }
};
int main() {
    //  Examples Of Map

    // Ex1: Find Every Element With Repeated Of Him
    int arr1[] = {1, 2, 3, 1, 5, 3};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    sort(arr1, arr1 + size);
    int a1 = 1;
    for(int i=0;i < size; i++) {
        if(arr1[i] == arr1[i + 1]) {
            a1++;
        } else {
            cout<<arr1[i]<<" ===> "<<a1<<endl;
            a1 = 1;
        }
    }

    // Ex2: Second Way To Solve This Problem
    int arr2[100];
    int frequences[100] = {0};
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>arr2[i];
        frequences[arr2[i]]++;
    }
    sort(arr2, arr2+n);
    for(int i=1;i<=n;i++) {
        if(arr2[i] != arr2[i+1]) {
            cout<<arr2[i]<< " ===> "<<frequences[arr2[i]]<<endl;
        }
    }
    // Output: Print All Values With Repeated

    // Ex3: Like Previous Example But By Map
    map<int, int> m2;
    cout<<"Enter Size Element :";
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++) {
        int a;
        cin>>a;
        m2[a]++;
    }
    for(auto i:m2) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    // Ex4: Make Sorted Speical For Me
    // Look Up And Complete Here
    map<int, string, com<int>> m3;
    m3[1] = "10";
    m3[2] = "20";
    m3[3] = "30";
    for(auto i:m3) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    /*
        Output:
        =======
        3 30
        2 20
        1 10
    */







    return 0;
    system("PAUSE");
}
