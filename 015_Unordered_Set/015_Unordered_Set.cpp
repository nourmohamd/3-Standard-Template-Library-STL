#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    // Unordered_Set From ( Unordered Associative Container )
    // ======================================================
    /*
        About
        =====
        - Need To Implements #include <unordered_set>

        Methods:
        ========
        1- us.bucket(s) ===> For Know Every Element In Any Bucket Found ( s ===> Loop )
        2- us.bucket_count() ===> Get Number Of Buckets
    */

    // Ex1:
    unordered_set<string> us1;
    // Ex2:
    unordered_set<string> us2 ({"Sun", "Mon", "Tuth", "Wed", "Thur", "Fri", "Sat"});
    for(auto i: us2) {
        cout<<i<<" ";
    }
    cout<<endl;
    // Output: Sat Fri Wed Tuth Mon Thur Sun

    // Print All Buckets
    for(auto i: us2) {
        cout<<i<<" "<<us2.bucket(i)<<endl;
    }
    /*
        Output:
        =======
        Sat 11
        Fri 2
        Wed 2
        Tuth 0
        Mon 0
        Thur 12
        Sun 12
    */

    // Ex3: Print All Buckets With Elements In Them
    int c = us2.bucket_count();
    for(int i=0;i<c;i++) {
        cout<<"Bucket # 0"<<i<<" Contains:\n";
        for(auto it1 = us2.begin(i);it1!=us2.end(i);it1++) {
            cout<<*it1<<" ";
        }
        cout<<endl;
    }
    /*
        Output:
        =======
        Bucket # 01 Contains:

        Bucket # 02 Contains:
        Fri Wed
        Bucket # 03 Contains:

        Bucket # 04 Contains:

        Bucket # 05 Contains:

        Bucket # 06 Contains:

        Bucket # 07 Contains:

        Bucket # 08 Contains:

        Bucket # 09 Contains:

        Bucket # 010 Contains:

        Bucket # 011 Contains:
        Sat
        Bucket # 012 Contains:
        Thur Sun
    */





    return 0;
    system("PAUSE");
}
