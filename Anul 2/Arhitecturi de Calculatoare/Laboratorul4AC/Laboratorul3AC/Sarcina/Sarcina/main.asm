INCLUDE Irvine32.inc
.data
mes1 byte "Introduceti valoarea X:",0
mes2 byte "Introduceti valoarea Y:",0
mes3 byte "Rezultatul este:",0
vrx dword 0
vry dword 0
rez dd 0

.code
main PROC
mov edx,OFFSET mes1
call WriteString ; afisarea mes1
call ReadDec ; introducerea de la tastatura
mov vrx,eax ; salvarea valorii in variabila vrx
mov edx,OFFSET mes2
call WriteString ; afisarea mes2
call ReadDec ; introducerea de la tastatura
mov vry,eax ; salvarea valorii in variabila vry

; calculam valoarea lui z in functie de y si x
mov eax, vry
mov ebx, 2
mul ebx ; y * 2
cmp eax, vrx ; y * 2 < x
jle calc_z2

; z = 2*(y-120)-x
mov eax, vry
sub eax, 120
mov ebx, 2
mul ebx ; (y - 120) * 2
sub eax, vrx ; 2*(y-120)-x
mov rez, eax
jmp print_result
calc_z2:
; z = x/4 - 95 + y
mov eax, vrx
shr eax, 2 ; x/4
sub eax, 95
add eax, vry ; x/4 - 95 + y
mov rez, eax

print_result:
; afisam rezultatul
mov edx, OFFSET mes3
call WriteString ; afisarea mesajului mes3
call WriteInt ; afisarea rezultatului cu semn
call Crlf ; din rand nou
exit
main endp
END main

