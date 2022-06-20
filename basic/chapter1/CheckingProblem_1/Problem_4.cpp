#include <iostream>
using namespace std;

int main(void)
{
    int num;
    while (true)
    {
        cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        cin >> num;
        if (num == -1)
            break ;
        cout << "이번 달 급여: " << 50 + num * 0.12 << "만원" << endl;
    }
    cout << "프로그램을 종료합니다." << endl;

    return 0;
}