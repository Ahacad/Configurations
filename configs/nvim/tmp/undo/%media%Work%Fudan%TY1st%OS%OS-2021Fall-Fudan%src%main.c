Vim�UnDo� ;ڳ~99��1�o��̉^
��B�R�   5                                   aro�    _�                     *        ����                                                                                                                                                    -                                                                                                                                                                                                        arh_     �   )   *          <<<<<<< HEAD5��    )                      B                     5�_�                    2        ����                                                                                                                                                    ,                                                                                                                                                                       *           *           V        arhb     �   1   2          =======5��    1                      �                     5�_�                    5        ����                                                                                                                                                    ,                                                                                                                                                                       *           *           V        arhc    �   4   6          }�   3   5              enter_scheduler();�   2   4              spawn_init_process();�   1   3               /*test_kernel_interrupt();*/�   0   2           �   /   1              }�   .   0                  enter_scheduler();�   -   /              } else {�   ,   .                  enter_scheduler();�   +   -                  spawn_init_process();�   *   ,              if (cpuid() == 0) {�   )   +              // test_kernel_interrupt();�   (   *          -	/* TODO: Lab3 uncomment to test interrupt */�   '   )           �   &   (              init_system_per_cpu();�   %   '           �   $   &              init_virtual_memory();�   #   %              init_memory_manager();�   "   $           �   !   #              init_console();�       "              init_char_device();�      !              init_interrupt();�                  �                "    memset(edata, 0, end - edata);�                    extern char edata[], end[];�                    // initialize BSS sections.�                NORETURN void main() {�                 �                }�                     init_cpu(&simple_scheduler);�                 �                    init_trap();�                    set_clock_handler(hello);�                    init_clock();�                void init_system_per_cpu() {�                 �                }�                    reset_clock(1000);�                (    printf("CPU %d: HELLO!\n", cpuid());�                void hello() {�                 �                struct cpu cpus[NCPU];�   
              �   	             #include <core/proc.h>�      
          #include <driver/interrupt.h>�      	          #include <driver/clock.h>�                #include <core/trap.h>�                #include <core/sched.h>�                 #include <core/virtual_memory.h>�                !#include <core/physical_memory.h>�                #include <core/console.h>�                #include <common/string.h>�                 #include <aarch64/intrinsic.h>�   4   5          >>>>>>> lab35��    4                      4                     �                                                �                                              �                         :                     �               !       !   T       !       !       �                          v                      �                         �                     �                         �                     �                          �                      �                         �                     �    	                     �                     �    
                                             �                                             �                           -                      �                         .                    �               (       (   =      (       (       �                         f                    �                         }                    �                                                 �                         �                    �                         �                    �                         �                    �                         �                    �                           �                      �                           �                      �                                              �                                                 �                                             �                                             �                         :                    �               "       "   Z      "       "       �                           }                      �                         ~                    �                          �                    �    !                     �                    �    "                       �                      �    #                     �                    �    $                     �                    �    %                       �                      �    &                     �                    �    '                                             �    (           -       0         -       0       �    )                     E                    �    *                     e                    �    +                     }                    �    ,                     �                    �    -                     �                    �    .                     �                    �    /                     �                    �    0                       �                      �    1                       �                      �    2                                         �    3                                          �    4                     7                    5�_�                     *        ����                                                                                                                                                    ,                                                                                                                                                                       *           *           V        aro�    �   )   +              // test_kernel_interrupt();5��    )                     E                    5��