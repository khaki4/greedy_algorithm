#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    int totalCoinCount = 0;

    scanf("%d %d", &n, &k);

    int* coins = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) scanf("%d", &coins[i]);

    for (int i = n - 1; i > -1; i--)
    {
        const int coin = coins[i];
        if (k >= coin)
        {
            totalCoinCount += k / coin;
            k %= coin;
        }
    }

    printf("%d", totalCoinCount);

    free(coins);

    return 0;
}