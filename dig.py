import math

def find_digit(a, k):
    return a[k]

def main():
    q = int(input())
    for _ in range(q):
        n = int(input())
        sum_ = 0
        com = 0
        t = 0

        for i in range(18):
            sum_ +=int (9 * i * (10 ** (i - 1)))
            com = int (9 * ((i + 1) * (10 ** i) + com))
            t += int (9 * (10 ** (i - 1)))
            print(sum_,"sum","/n")
            print(com,"com")

            if n <= com:
                rem = int (n - sum_)
                print(rem,"rem","/n")
                add = int(rem // (i + 1))  # Use ceiling instead of integer division
                print(add)
                digit =int( rem % (i + 1))

                if digit == 0:
                    number = int (add + t)
                    a = find_digit(str(number), i)
                    print(a)
                else:
                    number =int( add + t + 1)
                    print(number)
                    
                    a = find_digit(str(number), digit - 1)
                    print(a)

                break
    

if __name__ == "__main__":
    main()
