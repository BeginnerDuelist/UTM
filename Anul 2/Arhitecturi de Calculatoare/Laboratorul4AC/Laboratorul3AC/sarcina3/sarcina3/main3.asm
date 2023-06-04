INCLUDE Irvine32.inc
.data
mes1 byte "valoarea X: ",0
mes2 byte "valoarea Y: ",0
mes3 byte "Rezutatul este: ",0

randx dword ?
randy dword ?
inter1 dword 0
rez dd 0
.code
main PROC
call Randomize
mov edx,OFFSET mes1
call WriteString ; afisarea mes1
call Random32
mov randx,eax ; salvarea valorii in variabila vrx
call WriteDec ; afisarea rezultatului cu semn
call Crlf ; din rand nou
mov edx,OFFSET mes2
call WriteString ; afisarea mes2
call Random32 ; introducerea de la tastatura
mov randy,eax ; salvarea valorii in variabila vry
call WriteDec ; afisarea rezultatului cu semn
call Crlf ; din rand nou
;evaluarea expresiei
mov eax, randx ; mutam valoarea lui X in registru
shl eax, 5 ; inmultim X cu 32 (echivalent cu X*2^5)
add eax, randy ; adunam Y la rezultatul anterior
shl randy, 31 ; mutam valoarea lui Y in registru si shiftam la dreapta cu 1 bit (echivalent cu impartirea la 2)
add eax, randy ; adunam jumatatea din Y la rezultat
mov rez,eax ; salvam rezultatul in variabila rez
mov edx, OFFSET mes3
call WriteString ; afisarea mesajului mes3
call WriteDec ; afisarea rezultatului cu semn
call Crlf ; din rand nou
exit
main ENDP
END main
