n=int(input("Enter your lines : "))
for i in range (1,n+1):
    for j in range (1,(n+2)-i):
        print(j,end="")
    for k in range(1,i) :
        print("**",end="")  
    for l in range ((n+1)-i,0,-1):
        print(l,end="")
    print("\n")   
        

    