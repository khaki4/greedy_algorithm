coins = [500, 100, 50, 10, 5, 1]
change = 1000 - int(input())

coin_cnt = 0

for coin in coins:
    if coin <= change:
        coin_cnt += change // coin
        change %= coin

print(coin_cnt)