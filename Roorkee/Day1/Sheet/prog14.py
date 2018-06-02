def is_member(list1,list2):
    for i in range(0,len(list1)):
        for j in range(0,len(list2)):
            if(list1[i] == list2[j]):
                return True
    return False

def main():
    list1 = [1,2,3,4,5,6]
    list2 = [9, 8, 7, 9]
    if(is_member(list1,list2)):
        print('Common member')
    else:
        print('Not a common member')

if __name__=='__main__':
    main()
