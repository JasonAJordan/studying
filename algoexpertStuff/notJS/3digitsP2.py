displayId = True
s = "0" 
while displayId:
    
    while(len(s) > 3 or len(s) <=2):
        s = input("Enter your 3 digit id number ")
        v = int(s)
        #print(str(s))
        if len(s) > 3 or len(s) <= 2:
            print("\n Invalid ID")
        elif v < 200:
            print("Low Level Acess Code")
        elif 200<= v < 400:
            print ("Medium Level Acess Code")
        else:
            print("High Level Acess Code")
