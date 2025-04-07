from cs50 import get_float
while True:
    cents = get_float("make cash:")
    if cents > 0:
        break

cents = int(round(cents * 100))
count = 0

if (cents >= 25):
    count += cents // 25
    cents %= 25

if (cents >= 10):
    count += cents // 10
    cents %= 10

if (cents >= 5):
    count += cents // 5
    cents %= 5

if (cents >= 1):
    count += cents

print(count)
