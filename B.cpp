#include <iostream>
#include <math.h>
using namespace std;
void function(int num)
{
    int first_rem = 0, last_rem = 0;
    last_rem = num / 100;
        first_rem = num;
        first_rem %= static_cast<int>(pow(10, static_cast<size_t>(log10(first_rem))));
        first_rem %= static_cast<int>(pow(10, static_cast<size_t>(log10(first_rem))));
        if (first_rem > last_rem)
        {
            cout << endl
                 << first_rem << " last elements is greater" << endl;
        }
        else if (last_rem > first_rem)
        {
            cout << endl
                 << last_rem << " first elements is greater" << endl;
        }
        else
        {
            cout << "\nNumbers are Equal!" << endl;
        }

}
int main()
{
    int num;
    cout << "Enter number : ";
    cin >> num;
    
    if (num < 100)
    {
        cout << "\nNumber is too Short!" << endl;
    }
    else
    {
        function(num);
    }
    return 0;
}
