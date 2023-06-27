def enigma1(x,y,z):
  if x == len(y):
    return (z)
  elif x < len(y):
    return (y[0:x])
  else:
    s = count1(z)
    return(s+y)
  
def count1(st):
  r = ""
  for i in range(len(st)-1, -1, -1):
    r = r+st[i]
  return(r)

print(enigma1(7,"caramel","dulce de leche"))
print(enigma1(3,"cupcake","vanilla"))
print(enigma1(10,"pie","nomel"))
