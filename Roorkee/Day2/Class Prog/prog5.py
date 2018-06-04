def reverse(str):
    res=''
    for i in str:
        res = i+res
    return res

def main():
    print(reverse('rishabh gupta'))

if __name__=='__main__':
    main()
