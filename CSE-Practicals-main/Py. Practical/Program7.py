n1=input("Enter n1:")
n2=input("Enter n2:")
n3=input("Enter n3:")
if(n1>=n2)and(n1>=n3):
    largest=n1
elif(n2>=n1)and(n2>=n3):
    largest=n2
else:
    largest=n3
print("largest:",largest)