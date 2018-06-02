def exponentation(base,exp):
    res=1
    for i in range(1,exp+1):
        res*=base
    print(res)

def main():
    print("Enter base and exponent ")
    base = int(input('Enter base '))
    exp = int(input('Enter exponent '))
    exponentation(base,exp)

if __name__=='__main__':
    main()
