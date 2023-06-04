INCLUDE Irvine32.inc
.data
aron db "@"
buffer db 25 DUP(0)
result db 25 DUP(0)
length1 dw 0

.code
main PROC
	call ReadChar
	call WriteChar
	cmp al, aron
	je cond
	push ax
	call main
	pop ax
	call WriteChar
	cond :
	cmp al, aron
	jne skip
	call Crlf
	skip :
	ret
	main ENDP
	main1 PROC
	call main
	call Crlf
	exit
	main1 ENDP
	END main


exit
main ENDP
END main
