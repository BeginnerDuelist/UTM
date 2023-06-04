INCLUDE Irvine32.inc
.data
mes1 byte "Valoarea X: ",0
mes2 byte "Valoarea Y: ",0
mes3 byte "Rezultatul este: ",0

randx dword ?
randy dword ?
rez dd 0
.code
main PROC
call Randomize
mov edx,OFFSET mes1
call WriteString ; afisarea mes1
mov eax,10000
call RandomRange
mov randx,eax ; salvarea valorii in variabila randx
call WriteDec ; afisarea rezultatului cu semn
call Crlf ; din rand nou

mov edx,OFFSET mes2
call WriteString ; afisarea mes2
mov eax,10000
call RandomRange
mov randy,eax ; salvarea valorii in variabila randy
call WriteDec ; afisarea rezultatului cu semn
call Crlf ; din rand nou

; controlam conditiile
mov eax, randx
cdq
mov ebx, 2
div ebx ; calcul X/2

mov ecx, randy
cdq
cmp ecx, eax ;comparam Y cu X/2
ja con1 ; daca Y > X/2, saltam la con1

; calculam Z = X/4 - 95 + Y
mov eax, randx
shr eax, 2 ; impartim X la 4
sub eax, 95 ; scazam 95 din X/4
add eax, randy ; adunam Y
mov rez, eax ; salvam rezultatul
jmp ex

con1:
; calculam Z = 2 * (Y - 120) - X
mov eax, randy
sub eax, 120 ; scadem 120 din Y
shl eax, 1 ; inmultim (Y - 120) cu 2
sub eax, randx ; scazam X din rezultat
mov rez, eax ; salvam rezultatul

ex:
mov edx, OFFSET mes3
call WriteString ; afisarea mesajului mes3
call WriteDec ; afisarea rezultatului cu semn
call Crlf ; din rand nou
exit
main ENDP
END main 
