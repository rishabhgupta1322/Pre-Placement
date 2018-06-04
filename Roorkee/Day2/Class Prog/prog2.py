def digits(str):
    c=0
    for i in str:
        if(i>='0' and i<='9'):
            c+=1
    print c

def main():
    digits('abc12bf3')

if __name__=='__main__':
    main()
