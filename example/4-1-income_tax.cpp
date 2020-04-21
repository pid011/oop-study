/*
근로소득세율 표를 이용하여 소득을 입력하면 세금을 계산하고 세금과 
세후소득을 출력하는 프로그램을 작성하시오.
예를 들어, 소득이 2000만원이면 1200만원까지는 6%를 내고, 다음
구간(1200만원~4600만원)에 포함하는 800만원에 대해서는 15%를
낸다.(전체세금:1200x6%+800x15%)

1200만원 이하           6%
1200만원~4600만원       15%
4600만원~8800만원       24%
8800만원~1억5000만원    35%
1억5000만원 초과        38%
*/

#include <iostream>

using namespace std;

int main()
{
    int income;
    cin >> income;

    int tmp = income;
    float tax = 0;

    if (tmp > 15000)
    {
        tax += ((tmp - 15000) * 0.38);
        tmp = 15000;
    }
    if (tmp > 8800)
    {
        tax += ((tmp - 8800) * 0.35);
        tmp = 8800;
    }
    if (tmp > 4600)
    {
        tax += ((tmp - 4600) * 0.24);
        tmp = 4600;
    }
    if (tmp > 1200)
    {
        tax += ((tmp - 1200) * 0.15);
        tmp = 1200;
    }
    tax += (tmp * 0.06);

    cout << tax << '\n';
    cout << income - tax << '\n';
}