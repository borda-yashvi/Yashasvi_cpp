#include <cmath>
#include <iostream>
#include <string>
using namespace std;
class cycle
{
private:
    int mobile;
    string name;

public:
    int bal;
    void user()
    {
        string x;
        int y;
        name = x;
        mobile = y;
        cout << "\nEnter your name :";
        getline(cin, x);
        cout << "\n Your Name is " << x;
        cout << "\nEnter your mobile no. :";
        cout<<"\nyour mobile no. :"<<y;
        cin >> y;
    }
    void deposit()
    {
        do
        {
            cout << "Enter the amount of deposit :";
            cin >> bal;
            if (bal <= 300)
            {
                cout << "Sorry you cannot forward";
                break;
            }
            else
            {
                cout << "You can proceed on app!!!!";
            }
        } while (bal <= 50);
    }
    void charges()
    {
        int ft = 1, ch, maxc;
        double charge, min;
        do
        {
            cout << "\nEnter the Time you used bicycle :";
            cin >> min;
            if (min >= 10 && min < 240)
            {
                charge = min / 10;
                cout << "\nYou are charged by amount " << ceil(charge) << "\n";
                maxc = bal - charge;
                cout << "\n Your balance is " << maxc;
            }
            else if (min >= 240)
            {
                cout << "\nYou are charged by the amount 300 from the balance.";
                maxc = bal - 300;
                cout << "\n Your balance is " << maxc;
                break;
            }
        } while (ft >= 12);
    }
};
int main()
{
        cycle c1;
        c1.user();
        c1.deposit();
        c1.charges();
}