import sys

if len(sys.argv) != 2:
    print("Usage: python key")
    exit(1)
    
p = input("plaintext: ")
k = int(sys.argv[1])
print("ciphertext: ",end="")
for i in range(len(p)):
    if p[i].isalpha():
        if p[i].islower():
            print(chr(((ord(p[i])-97+k)%26)+97),end="")
        else:
            print(chr(((ord(p[i])-65+k)%26)+65),end="")
    else:        
        print(p[i],end="")
print("")
exit(0)