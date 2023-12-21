import time;
t1= time.localtime()
print (t1)
t2= time.strftime("%a%b%H%M%S%z%y",t1)
print(t2)