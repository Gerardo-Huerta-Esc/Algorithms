# #ordenar 3 números de mayor a menor

num1 = 1
num2 = 5
num3 = -11

def main():
    if num1 > num2 and num1 > num3:
        if num2 > num3:
            print(f"{num1} > {num2} > {num3}")
        if num3 > num2:
            print(f"{num1} > {num3} > {num2}")
    elif num2 > num1 and num2 > num3:
        if num1 > num3:
            print(f"{num2} > {num1} > {num3}")
        if num3 > num1:
            print(f"{num2} > {num3} > {num1}")
    elif num3 > num1 and num3 > num2:
        if num1 > num2:
            print(f"{num3} > {num1} > {num2}")
        if num2 > num1:
            print(f"{num3} > {num2} > {num1}")

if __name__ == '__main__' and num1 != num2 != num3:
    main()

