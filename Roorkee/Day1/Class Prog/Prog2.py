def coPrime(num1, num2):
    if(num1==1 or num2==1):
        return True
    low = min(num1,num2)
    for i in range (2,low+1):
        if(num1%i==0 and num2%i==0):
            return False
    return True

def main():
    print ("Enter Two numbers :")
    num1 = int(input())
    num2 = int(input())
    if (coPrime(num1,num2)):
        print("Numbers are Co-prime")
    else:
        print("Numbers are not co-prime")

if __name__=='__main__':
    main();
