d1={'Name':'Shrawani','college':'sipna','Roll no':'64'}
print(d1)
print(d1['Name'])
print(d1['college'])
print(d1['Roll no'])
print(d1.get('Name'))
print(d1.get('college'))
print(d1['Roll no'])
for x in d1:
    print(x)
for x,y in d1.items():
    print(x,y)