INCLUDE Irvine32.inc
.DATA     
     sir1      byte        'AAAABC'
     sir2      byte        'AAAACB'
          .CODE  
               mov       esi,OFFSET sir1
               mov       edi,OFFSET sir2
               mov       ecx,LENGTHOF sir1
     comp:     cmpsb      sir1,sir2
               jne       exit
               loop      comp
     exit:     nop

END 
