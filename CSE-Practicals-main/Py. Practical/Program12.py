class power:
  def pn(self,base,expo):
    result=1
    while(expo!=0):
      result=result*base
      expo=expo-1
    print(result)
obj=power()
b=int(input("enter base"))
e=int(input("enter expo"))
obj.pn(b,e)