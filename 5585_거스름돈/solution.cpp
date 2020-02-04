#include <iostream>
#define COIN_SORT_NUM 6

using namespace std;

int main(void)
{

    int coins[] = {500, 100, 50, 10, 5, 1};
    int change;
    int coinCnt = 0;
    cin >> change;
    change = 1000 - change;

    for (int coin : coins) {
        if (coin <= change) {
            coinCnt += (change / coin);
            change %= coin;
        }
    }

    cout << coinCnt;
    return 0;
}
