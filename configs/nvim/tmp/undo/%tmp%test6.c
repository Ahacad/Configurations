Vim�UnDo� m	��V�+��M���BNy�� R_&F��                 
         1       1   1   1    `�=S    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `�<�     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                  #include <stdio.h5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �               �               5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                 #include <stdio.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �               �               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                 #include <stdlib.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=	     �               �               5�_�      	                 
    ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                 #include <signal.h>5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             `�=     �               5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �               5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                   �             �                 int main() {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                   signal()5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                   signal(SIGINT,)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                   signal(SIGINT, handler)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �      	             signal(SIGINT, handler);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �      	   	          if (setjmp())5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �      	   	          if (setjmp(buf))5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=     �      
   
    �      
   	          if (setjmp(buf)) {}5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                �             5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `�=     �   	             5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             `�=      �   	                        prnitf()5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             `�="     �   	                        printf()5�_�                    
   $    ����                                                                                                                                                                                                                                                                                                                                                             `�='     �   	            $            printf("back to main\n")5�_�                    
   %    ����                                                                                                                                                                                                                                                                                                                                                             `�='     �   	            %            printf("back to main\n"):5�_�                    
   $    ����                                                                                                                                                                                                                                                                                                                                                             `�=(     �   
                        �   
          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=+     �                   }5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=+     �                       �             �                   } else {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=-     �                       prnitf()5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�=.     �                       printf()5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�=1     �                        printf("first time out")5�_�      !                       ����                                                                                                                                                                                                                                                                                                                                                             `�=2     �               "        printf("first time out\n")5�_�       "           !           ����                                                                                                                                                                                                                                                                                                                                                             `�=3     �               #        printf("first time out\n;")5�_�   !   #           "      "    ����                                                                                                                                                                                                                                                                                                                                                             `�=3     �               "        printf("first time out\n")5�_�   "   $           #           ����                                                                                                                                                                                                                                                                                                                                                             `�=5     �                   �             5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                                             `�=7    �                }�                    goto loop;�                loop:�                    }�                #        printf("first time out\n");�                    } else {�   
                         return 0;�   	             %            printf("back to main\n");�      
              if (setjmp(buf)) {�      	              signal(SIGINT, handler);�                int main() {�                 �                jmp_buf  buf;�                #include <setjmp.h>�                #include <signal.h>�                #include <stdlib.h>�                 #include <stdio.h>�               loop:5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             `�==     �             5�_�   %   '           &           ����                                                                                                                                                                                                                                                                                                                                                             `�==     �             5�_�   &   (           '           ����                                                                                                                                                                                                                                                                                                                                                             `�=>     �                5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                             `�=@     �               void handler(int s)5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             `�=@     �      	             �      	       �      	         void handler(int s) {}5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                                             `�=E     �      	             if (s == SIGINT)5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                                             `�=F     �      
                 �      
       �      
             if (s == SIGINT) {}5�_�   +   -           ,   	       ����                                                                                                                                                                                                                                                                                                                                                             `�=G    �               �                    }�                #        printf("first time out\n");�                    } else {�                        return 0;�                !        printf("back to main\n");�                    if (setjmp(buf)) {�                    signal(SIGINT, handler);�                int main() {�                 �                }�                    }�   
                           )�   	                     " got a SIGINT\n"�      
                  printf(�      	              if (s == SIGINT) {�                void handler(int s) {�                 �                jmp_buf buf;�                #include <stdlib.h>�                #include <stdio.h>�                #include <signal.h>�                 #include <setjmp.h>�                loop:       goto loop;   }�   	                            �   	          �   	                             )�                       printf()5�_�   ,   .           -   	   !    ����                                                                                                                                                                                                                                                                                                                                                             `�=M     �      
         !        printf(" got a SIGINT\n")5�_�   -   /           .   	   !    ����                                                                                                                                                                                                                                                                                                                                                             `�=N     �   	                    �   	          5�_�   .   0           /   
       ����                                                                                                                                                                                                                                                                                                                                                             `�=Q     �   	                    longjmp()5�_�   /   1           0   
       ����                                                                                                                                                                                                                                                                                                                                                             `�=R     �   	                    longjmp(buf ,)5�_�   0               1   
       ����                                                                                                                                                                                                                                                                                                                                                             `�=R    �                }�                    goto loop;�                loop:�                    }�                #        printf("first time out\n");�                    } else {�                        return 0;�                !        printf("back to main\n");�                    if (setjmp(buf)) {�                    signal(SIGINT, handler);�                int main() {�                 �                }�   
                 }�   	                     longjmp(buf, 1);�      
          "        printf(" got a SIGINT\n");�      	              if (s == SIGINT) {�                void handler(int s) {�                 �                jmp_buf buf;�                #include <stdlib.h>�                #include <stdio.h>�                #include <signal.h>�                 #include <setjmp.h>�                }�                    goto loop;�                loop:�                    }�                #        printf("first time out\n");�                    } else {�                        return 0;�                !        printf("back to main\n");�                    if (setjmp(buf)) {�                    signal(SIGINT, handler);�                int main() {�                 �                }�   
                 }�   	                    longjmp(buf ,1)�      
          "        printf(" got a SIGINT\n");�      	              if (s == SIGINT) {�                void handler(int s) {�                 �                jmp_buf buf;�                #include <stdlib.h>�                #include <stdio.h>�                #include <signal.h>�                 #include <setjmp.h>5��