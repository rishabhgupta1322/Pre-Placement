def prime(num):
    if n<2 :
        return False
    for i in range(2,num/2 +1):
        if(num%i == 0):
            return False
    return True

def main():
    num = int(raw_input('Enter a number : '))
    if(prime(num)):
        print("Prime Number")
    else:
        print("Not a Prime Number")

if __name__=="__main__" :
    main()
