INCLUDE Irvine32.inc
                                       .DATA
          bcd1      DB        22h,41h,75h,32h; 32754122
          bcd2      DB        31h,27h,53h,62h; 62532731
          n         EQU       sizeof  bcd1
                    .CODE
                    main proc
                    lea  esi,bcd1
                    lea  edi,bcd2
                    mov  ecx,n
                    clc
                    mov  al,[esi]
          bucla:    adc  al,[edi]
                    daa
                    mov  [edi],al
                    inc  esi
                    inc  edi
                    loop bucla
                    exit

exit
main ENDP
END main
