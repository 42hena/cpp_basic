#include <iostream>
using namespace std;

int main(void)
{
    int total = 0;

    for (int i = 0 ; i < 5 ; ++i)
    {
        cout << i + 1 << " 번째 정수 입력: ";
        int num;
        cin >> num;
        total += num;
    }
    cout << "합계: " << total << endl;

    return 0;
}