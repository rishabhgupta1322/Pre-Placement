def is_member(list,x):
    for i in range(0,len(list)):
        if(list[i]==x):
            return True
    return False

def main():
    list = ['abc',12,"xyz",'asd',90]
    if(is_member(list,'abc')):
        print("Member")
    else:
        print("Not a member")

if __name__=='__main__':
    main()
