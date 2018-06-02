def add(list):
    res=0
    for i in range(0,len(list)):
        res+=int(list[i])
    print (res)

def multiply(list):
    res=1
    for i in range(0,len(list)):
        res*=int(list[i])
    print (res)

def main():
    list = [1,2,3,4]
    add(list)
    multiply(list)

if __name__=='__main__':
    main()
