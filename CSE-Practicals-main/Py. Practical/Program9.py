class food:
    c1='pizza'
    c2='eggcurry'
    def meth1(self):
        c3='dosa'
        print(c3)
        print(self.c2)
obj1=food()
obj1.meth1()
print(obj1.c1)