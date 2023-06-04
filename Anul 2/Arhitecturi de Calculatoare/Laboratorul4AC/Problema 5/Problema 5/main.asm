INCLUDE Irvine32.inc
.data
first WORD  0123h 
second WORD 0456h
third WORD  0789h
fourth WORD 0abch
demo WORD ?
.code
main PROC
mov eax, 0
mov ax, first
call WriteHex
call Crlf
mov eax, 0
mov ax, second
call WriteHex
call Crlf
mov eax, 0
mov ax, third
call WriteHex
call Crlf
mov eax, 0
mov ax, fourth
call WriteHex
call Crlf
shl first, 4; deplasam cu 1 la stinga
mov ax, second
shr ax, 8; deplasam cu 2 la dreapta
or first, ax; sau pe biti
shl second, 8; deplasam cu 2 la stinga
mov ax, third
shr ax, 4; deplasam cu unu la dreapta
or second, ax
shl third, 12; deplasam cu 3 la stinga
mov ax, fourth
or third, ax;
mov eax, 0
mov ax, first
call WriteHex
call Crlf
mov eax, 0
mov ax, second
call WriteHex
call Crlf
mov eax, 0
mov ax, third
call WriteHex
call ReadChar
main ENDP
END main


exit
main ENDP
END main
