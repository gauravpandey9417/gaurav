#include <iostream>

using namespace std;

int main()
{
    int date;
    cout << "enter date" << endl;
    cin >> date;
    if(date>0)
    {
      if(date<32)
      {
        cout << "date is valid" << endl;
      if(date==31)
      {
        cout << " it's my birthday" << endl;
      }
      }
      else
      {
        cout << "date is invalid" << endl;
      }
    }
    return 0;
}
