print("1:fahrenhit to celcius")
print("2:clecius to fahrenhit")
choice=int(input("enter your choice:"))
if(choice==1):
    f=int(input("enter your temperature in fahrenhit"))
    c=(f-32)/1.8
    print("temperature in celcius:",c)
elif(choice==2):
    c=int(input("enter your temperature in clecius:"))
    f=(c*1.8)+32
    print("temperature in farhrenhit:",f)
else:
    print("invalid")