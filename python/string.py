print("hello motherfucker")
a=input("enter string")
for i in range(len(a)):
    temp=a[i]
    a[i]=a[len(a)-i-1]
    a[len(a)-i-1]=temp

    print(a)
    

