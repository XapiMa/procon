import string

# ch = input()
ch = "A+A++A"
chr = [ord(i) for i in ch[::-1]]
out = ""
for i in range(len(chr)):
    
