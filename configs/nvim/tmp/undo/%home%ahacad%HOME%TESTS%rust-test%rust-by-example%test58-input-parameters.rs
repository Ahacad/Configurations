Vim�UnDo� ���jC.��x�p�{�i��k�'A�m�3b�      	    f(3);      	      .       .   .   .    `�`    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  fn apply<F>(f: F)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  fn apply<F>(f: F) where5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   �             �                    F: FnOnce() {�                     F: FnOnce() {}5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                 fn apply_to_3<F>(f: F)5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             `��     �                 fn apply_to_3<F>(f: F)5�_�      
           	      #    ����                                                                                                                                                                                                                                                                                                                                                             `��     �                 #fn apply_to_3<F>(f: F) -> i32 where5�_�   	              
      
    ����                                                                                                                                                                                                                                                                                                                                                             `��     �                 
F: Fn(i32)5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             `��     �                 F: Fn(i32) -> i325�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   �             �                 F: Fn(i32) -> i32 {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   f(3)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             `��     �   	                �   	      
    �                 fn main() {}5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
                �   
          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�     �   
                let greeting = "helloA"5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�     �   
                let greeting = "hello"5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�     �   
                let greeting = "hello";5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�     �                    let mut farewell = "goodbye"5�_�                       )    ����                                                                                                                                                                                                                                                                                                                                                             `�     �               )    let mut farewell = "goodbye".to_owned5�_�                       +    ����                                                                                                                                                                                                                                                                                                                                                             `�     �               +    let mut farewell = "goodbye".to_owned()5�_�                       ,    ����                                                                                                                                                                                                                                                                                                                                                             `�     �               ,    let mut farewell = "goodbye".to_owned();5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�     �                       �             �                   let diary = || {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�     �                       println!("I said {}")5�_�                       '    ����                                                                                                                                                                                                                                                                                                                                                             `�     �               '        println!("I said {}", greeting)5�_�                       (    ����                                                                                                                                                                                                                                                                                                                                                             `�     �               (        println!("I said {}", greeting);5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�!     �                        farewell.push_str("!!!")5�_�                       !    ����                                                                                                                                                                                                                                                                                                                                                             `�!     �               !        farewell.push_str("!!!");5�_�                        &    ����                                                                                                                                                                                                                                                                                                                                                             `�)     �               '        println!("Then I screamed {}.")5�_�      !                  1    ����                                                                                                                                                                                                                                                                                                                                                             `�,     �               1        println!("Then I screamed {}.", farewell)5�_�       "           !      2    ����                                                                                                                                                                                                                                                                                                                                                             `�,     �               2        println!("Then I screamed {}.", farewell);5�_�   !   #           "      %    ����                                                                                                                                                                                                                                                                                                                                                             `�2     �               %        println!("Now I sleep, zzzz")5�_�   "   $           #      %    ����                                                                                                                                                                                                                                                                                                                                                             `�3     �                       �             5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                                             `�7     �                       mem::drop(farewell)5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             `�9     �             5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                                                             `�:     �                   }5�_�   &   (           '           ����                                                                                                                                                                                                                                                                                                                                                             `�;     �                5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                             `�=     �                   apply(diary)5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             `�@     �                   �             5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                                             `�C     �                   let double = |x|5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                                             `�D     �                   let double = |x| 2 * x;5�_�   +   -           ,          ����                                                                                                                                                                                                                                                                                                                                                             `�L     �                   println!("3 doubled: {}")5�_�   ,   .           -      1    ����                                                                                                                                                                                                                                                                                                                                                             `�Q    �               1    println!("3 doubled: {}", apply_to_3(double))5�_�   -               .      	    ����                                                                                                                                                                                                                                                                                                                                                             `�_    �               	    f(3);5��