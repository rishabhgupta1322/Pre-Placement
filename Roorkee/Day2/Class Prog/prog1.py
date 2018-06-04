def sumDigits(num):
    sum = 0;
    while(num>0):
        sum+=num%10
        num/=10
    return sum

def main():
    print(sumDigits(123))

if __name__=='__main__':
    main()
