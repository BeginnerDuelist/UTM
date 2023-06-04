INCLUDE Irvine32.inc
.data
msg  BYTE   "Hello world", 0
msg1	 BYTE  ?
str1 DWORD ? 

.code
main PROC
	mov	 edx, OFFSET msg
	call WriteString
	call Crlf
	mov ecx, LENGTHOF msg
	mov esi, OFFSET msg
	mov edi, OFFSET msg
	dec edi
	String:
	inc edi
	mov al, [edi]
	cmp al, 0
	jnz String
	dec edi
	shr ecx, 1
	L1:
	mov bl, [esi]
		mov al, [edi]
		mov[esi], al
		mov[edi], bl
		inc esi
		dec edi
		loop L1
		mov	 edx, OFFSET msg
		call WriteString
		call Crlf
		mov ecx, LENGTHOF msg
		mov esi, OFFSET msg
		mov edi, OFFSET msg
		dec edi
		mov str1, ecx
		mov ecx, 0
		dec edi
	call ReadChar
	call ReadKey
	exit
	main ENDP
	END main
