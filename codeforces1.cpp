#include <iostream>
using namespace std;
int main()
{
    int singleRoom;
    int doubleRoom;
    int watersupply;
    // cout << "enter single rooms" << endl;
    cin >> singleRoom;
    // cout << "enter double rooms" << endl;
    cin >> doubleRoom;
    // cout << "enter water needed per student" << endl;
    cin >> watersupply;
    int ans = (singleRoom * 3 + doubleRoom * 4) * watersupply;
    cout << ans;

    return 0;
}