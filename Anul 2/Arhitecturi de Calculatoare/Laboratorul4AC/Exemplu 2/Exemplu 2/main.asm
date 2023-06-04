INCLUDE Irvine32.inc
                    .DATA
          mp1       word        1111h, 2222h, 3333h, 9999h; Primul numar
          mp2       word        7777h, 8888h, 0eeeeh, 1111h; Al doilea numar
          n         EQU       sizeof  mp1
                    .CODE
			Main proc
                    clc
                    lea       esi,mp1
                    lea       edi,mp2
                    mov       ecx,n
          bucla:    adc       [edi],ax
                    add       esi,2
                    add       edi,2
                    loop      bucla
                   exit
main ENDP
		END main


                   
