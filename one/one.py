import sys


def one(limit):
    sum = 0
    for i in range(limit):
        if i % 3 == 0 or i % 5 == 0:
            sum += i
    return sum


if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("Usage python3 one.py <limit>")
        sys.exit(1)

    limit = int(sys.argv[1])
    print(one(limit))
