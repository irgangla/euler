def calc():
    minus_two = 1
    minus_one = 2
    current = 3
    sum = 2

    while current <= 4000000:
        minus_two = minus_one
        minus_one = current
        current = minus_one + minus_two

        if current % 2 == 0:
            sum += current

    return sum


if __name__ == '__main__':
    print(calc())
