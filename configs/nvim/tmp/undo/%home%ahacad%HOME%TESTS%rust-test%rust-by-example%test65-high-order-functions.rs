Vim�UnDo� ����:�?��?��+���f��7:�jjo      $    println!("functional style: {}")      #      *       *   *   *    `�!A    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                  fn is_odd(n: u32)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                   �             �                  fn is_odd(n: u32) -> bool {}5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `� �     �             �                 fn main(){  }5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               fn main(){ 5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                5�_�      
           	      F    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               F    println!("Find the sum of all the squared odd numbers under 1000")5�_�   	              
      G    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               G    println!("Find the sum of all the squared odd numbers under 1000");5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                   let upper = 1000;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `� �     �      	             let mut acc = 0;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `� �     �      
                 �      
   
    �      
   	          for n in 0.. {}5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             `� �     �      
                 let n_squared = n * n5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                       let n_squared = n * n;5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             `� �     �   	                    if n_squared >= upper5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             `� �     �   
                        �   
          �   	                     if n_squared >= upper {}5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               	        }5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               #        } else if is_odd(n_squared)5�_�                       %    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                           �             �               &        } else if is_odd(n_squared) {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                           acc += n_squared5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                   �             5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               $    println!("imperative style: {}")5�_�                       (    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               (    println!("imperative style: {}, acc)5�_�                       "    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �               )    println!("imperative style: {}, acc);5�_�                       "    ����                                                                                                                                                                                                                                                                                                                                                             `� �    �               +    println!("imperative style: {}"", acc);5�_�                       "    ����                                                                                                                                                                                                                                                                                                                                                             `� �     �                   �             5�_�                       *    ����                                                                                                                                                                                                                                                                                                                                                             `�!     �               *    let sum_of_squared_odd_numbers: u32 = 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�!     �                       (0..)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�!     �                       (0..).map(|n| n * n)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�!	     �                       (0..).map(|n| n * n)5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             `�!     �                            .take_while(||)5�_�       "           !      %    ����                                                                                                                                                                                                                                                                                                                                                             `�!     �               &             .take_while(|&n_squared|)5�_�   !   #           "      8    ����                                                                                                                                                                                                                                                                                                                                                             `�!     �               8             .take_while(|&n_squared| n_squared < upper)5�_�   "   $           #      !    ����                                                                                                                                                                                                                                                                                                                                                             `�!     �               "             .filter(|&n_squared|)5�_�   #   %           $      *    ����                                                                                                                                                                                                                                                                                                                                                             `�!!     �               +             .filter(|&n_squared| is_odd())5�_�   $   &           %      )    ����                                                                                                                                                                                                                                                                                                                                                             `�!%     �               +             .filter(|&n_squared| is_odd())5�_�   %   '           &      4    ����                                                                                                                                                                                                                                                                                                                                                             `�!&     �               4             .filter(|&n_squared| is_odd(n_squared))5�_�   &   (           '      7    ����                                                                                                                                                                                                                                                                                                                                                             `�!/     �               7             .fold(0, |acc, n_squared| acc + n_squared)5�_�   '   )           (      8    ����                                                                                                                                                                                                                                                                                                                                                             `�!/     �               8             .fold(0, |acc, n_squared| acc + n_squared);5�_�   (   *           )      #    ����                                                                                                                                                                                                                                                                                                                                                             `�!6     �               $    println!("functional style: {}")5�_�   )               *      @    ����                                                                                                                                                                                                                                                                                                                                                             `�!@    �               @    println!("functional style: {}", sum_of_squared_odd_numbers)5��