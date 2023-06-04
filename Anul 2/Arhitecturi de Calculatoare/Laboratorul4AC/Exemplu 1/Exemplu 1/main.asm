INCLUDE Irvine32.inc
       .data
               sir      DB      'Acesta este un sir!'
               l        EQU     sizeof sir
                       
		 .code
                              main proc

                        mov     ecx,l
                        mov    esi, 1
                        mov     al,' '
               urm:     inc     esi
                        cmp     al,sir[esi]
                        loopne  urm
                        jne     nu_gasit
                        mov     eax,l
                        sub     eax,ecx
                        jmp     iesire
               nu_gasit: mov     eax,0
               iesire:  nop
                        		 exit
main ENDP
		END main
