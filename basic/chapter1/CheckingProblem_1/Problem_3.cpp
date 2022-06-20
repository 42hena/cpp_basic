#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "원하는 구구단을 입력하시오: ";
    cin >> num;

    for (int i = 0 ; i < 9 ; ++i)
    {
        cout << num << " x " << i + 1 << " = " << num * (i + 1) << endl;
    }

    return 0;
}