Vim�UnDo� ��~��93�"�D>�ܚy�������U�$��z   %                                  aO�Z    _�                             ����                                                                                                                                                                                                                                                                                                                                                             aO��    �                4import testCase, { fromPath } from './test-case.js';5��                          �       5               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             aO��     �         #      ,import remarkDetails from '../lib/index.js';5��                                              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             aO��     �         #      +import remarkDetails from './lib/index.js';5��                                              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             aO��    �         #      *import remarkDetails from '/lib/index.js';5��                                              5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             aO�    �         #      )import remarkDetails from 'lib/index.js';5��                                              5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             aO�     �      !   #      process(`??? note arsto5��                       	   �              	       �                        �                    �                        �                    �                        �                    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�     �      !   #      $console.log()process(`??? note arsto5��                         �                     5�_�      	              #       ����                                                                                                                                                                                                                                                                                                                                                             aO�     �   "              `)5��    "                     &                     5�_�      
           	   !   	    ����                                                                                                                                                                                                                                                                                                                                                             aO�/     �       !          
    asrent5��                                                5�_�   	              
   !   
    ����                                                                                                                                                                                                                                                                                                                                                             aO�/     �       !              aenrote5��                                                5�_�   
                 !        ����                                                                                                                                                                                                                                                                                                                                                             aO�0     �                 #console.log(process(`??? note arsto   `))�                  `))5��       #                                       �                          	                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�2     �                 #console.log(process(`??? note ar`))5��                                              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�3     �                 %console.log(process(`??? note a``r`))5��              
           �      
               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�4     �                 console.log(process(```r`))5��                         �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�4     �                 console.log(process(``r`))5��                         �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�4     �                 console.log(process(`r`))5��                         �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�5     �                 console.log(process(``))5��                         �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�5     �                 console.log(process(`))5��                         �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�6     �                 console.log(process())5��                         �                     �                        �                    �                                             �                                             �                                             �                                             �                                             �                                             �                                             �                     	                 	       �              	       	          	       	       �              	                 	              5�_�                        $    ����                                                                                                                                                                                                                                                                                                                                                             aO�:    �               $   import {h} from 'hastscript';   /import rehypeStringify from 'rehype-stringify';   'import remarkParse from 'remark-parse';   *import remark2rehype from 'remark-rehype';    import {unified} from 'unified';   'import {visit} from 'unist-util-visit';       +import remarkDetails from './lib/index.js';        const htmlDetails = function() {       return (tree) => {   P        visit(tree, ['detailsContainer', 'detailsContainerSummary'], (node) => {   5            var data = node.data || (node.data = {});   5            var hast = h(node.name, node.attributes);   &            data.hName = hast.tagName;   /            data.hProperties = hast.properties;           });       };   };       const process =       input => {           return unified()               .use(remarkParse)   :            // the main plugin written, based on micromark               .use(remarkDetails)   D            // the function above, transform details related tags to               // html-compilable               .use(htmlDetails)               .use(remark2rehype)   !            .use(rehypeStringify)               .processSync(input)               .value;       }       >             console.log(process(fs.readFileSync('input.md')))�                �      !          1console.log(process(fs.readFileSync('input.md')))�                  �                }�                "        .processSync(input).value;�                        .use(rehypeStringify)�                        .use(remark2rehype)�                        .use(htmlDetails)�                P        // the function above, transform details related tags to html-compilable�                        .use(remarkDetails)�                6        // the main plugin written, based on micromark�                        .use(remarkParse)�                    return unified()�                const process = input => {�                 �                };�                    };�                        });�                /            data.hProperties = hast.properties;�                &            data.hName = hast.tagName;�                5            var hast = h(node.name, node.attributes);�                5            var data = node.data || (node.data = {});�   
             P        visit(tree, ['detailsContainer', 'detailsContainerSummary'], (node) => {�   	                 return (tree) => {�      
          !const htmlDetails = function () {�      	           �                +import remarkDetails from './lib/index.js';�                import { h } from 'hastscript';�                )import { visit } from 'unist-util-visit';�                *import remark2rehype from 'remark-rehype';�                'import remarkParse from 'remark-parse';�                /import rehypeStringify from 'rehype-stringify';�                 "import { unified } from 'unified';�                 'console.log(process(fs.readFileSync()))5��       $                                       �       '                                     �                "                  "              �               /       /          /       /       �               '       '   N       '       '       �               *       *   v       *       *       �               )           �       )               �                      '   �              '       �               +           �       +               �                       +   �               +       �               !                 !               �    	                                           �    
           P          9      P              �               5       P   P      5       P       �               5       5   �      5       5       �               &       5   �      &       5       �               /       &         /       &       �                      /   4             /       �                         d                    �                         p                    �                          w                     �                          z                     �                         {                    �                         �                    �               6          �      6              �                         �                    �               P       :   �      P       :       �                                             �                      D   ,             D       �                         q                    �               "          �      "              �                         �                    �                       !   �              !       �               1          �      1              �                                         Z       �            $       $               j      �      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             aO�Y    �         %       �         $    5��                                                 �                                                 �                        0                     �                        0                     5��