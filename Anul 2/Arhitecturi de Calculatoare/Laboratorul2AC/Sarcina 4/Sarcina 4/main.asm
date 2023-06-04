INCLUDE Irvine32.inc
.data
a dw 5
b db 6
c db 1
c1 dw 1
d dw 5
f dw 6
interm dw ?
rez dw ?

.code
main proc
; Calculam 3 + c1*c1
mov ax, c1
imul ax
add ax, 3
mov bx, ax ; Salvam rezultatul in bx
; Calculam b*b
mov al, b
imul al
mov bl, al ; Salvam rezultatul in bl

; Calculam 6 - b*b
mov ax, 6
sub ax, bx

; Calculam (3 + c1*c1) / (6 - b*b)
cwd
idiv bl
mov interm, ax

; Calculam a*a - b*b
mov al, a
imul al
mov bx, al ; Salvam a*a in bx
mov al, b
imul al
sub bx, ax ; Calculam a*a - b*b si il salvam in bx

; Calculam a*a + c1*c1
mov ax, a
imul ax
mov dx, 0
mov ax, c1
imul ax
add ax, bx ; Salvam rezultatul in ax

; Calculam (a*a - b*b) / (a*a + c1*c1)
cwd
idiv ax
add interm, ax ; Adunam (a*a - b*b) / (a*a + c1*c1) la interm

; Calculam rezultatul final
mov ax, interm
cwd
idiv f
mov rez, ax

exit
main ENDP
END main
