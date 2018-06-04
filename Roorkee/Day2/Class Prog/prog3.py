def count(str):
    vow='aeiouAEIOU'
    c=0
    for ch in str:
        if ch in vow:
            c+=1
    print c

def main():
    str=raw_input()
    count(str)

if __name__=='__main__':
    main()
