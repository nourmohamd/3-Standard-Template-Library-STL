#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
    // Why We Used Pair
    // ================
    // Made User Or Car Or Build Any Object Need More Property

    // Pair Container ( From Simple Containers )
    // =========================================
    /*
        - Need #include <utility> Import

        Ways To Create Object From Pair Container
        =========================================
        1- pair<string, int> p1;
           p1.first = "Nour";
           p1.second = 2001;

        Methods In Pair
        ===============
        1- make_pair( Values )
    */

    // Ex1:
    pair<string, int> p1;
    p1.first = "Nour";
    p1.second = 2001;
    cout<<p1.first<<endl<<p1.second<<endl;
    // Output: Noor\n2001\n

    // Ex2:
    pair<string, int> p2 = make_pair("Nour", 2001);

    // Ex3:
    pair<string, int> p3;
    cin>>p1.first;
    cin>>p2.second;

    // Ex4:
    pair<string, pair<int, double>> a;
    a.first = "Nour";
    a.second.first = 100;
    a.second.second = 100.1;
    cout<<a.first<<endl<<a.second.first<<endl<<a.second.second<<endl;

    // Ex5: Vector With Pair
    vector<pair<int, string>> vp;
    // Intering Values
    // 1
    vp.push_back(pair<int, string>(2001, "Nour"));
    // 2
    vp.push_back(make_pair(2002, "Ahmad"));
    // 3
    vp.push_back({2003, "Mohammad"});
    // Printing Values
    // 1
    cout<<vp[0].first<<endl<<vp[0].second<<endl;
    // 2
    // By For
    // 3
    // By For By Iterator
    // 1- By For Loop
    for(int i=0;i<vp.size();i++) {
        cout<<vp[i].first<< " "<<vp[i].second<<endl;
    }
    // 2- By Iterator
    vector<pair<int, string>>::iterator it = vp.begin();
    for(;it!=vp.end();it++) {
        cout<<it->first<< " "<<it->second<<endl;
    }


    return 0;
    system("PAUSE");
}
