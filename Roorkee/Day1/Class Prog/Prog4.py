import math

def factorial():
    fact=[1]
    f=1;
    for i in range(1,11):
        f=f*i;
        fact.append(f);
    return fact

def main():
    x=int(input("Enter the exponent"));
    res=0
    fact=factorial()
    for i in range(1,10):
        res+=(math.pow(x,i))/fact[i]
    print(res)

if __name__=='__main__':
    main()
