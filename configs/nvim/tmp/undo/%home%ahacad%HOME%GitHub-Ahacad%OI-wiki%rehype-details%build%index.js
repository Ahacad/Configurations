Vim�UnDo� W�F�� ��n��������(�ߥо��Wq                                      `�Uw    _�                              ����                                                                                                                                                                                                                                                                                                                                                             `�Uv    �   
                  return transform;           function transform(tree) {   #        (0, _unistUtilVisit.visit)(   N            tree, ['detailsContainer', 'detailsContainerSummary'], ondetails);       }           function ondetails(node) {   1        var data = node.data || (node.data = {});   B        var hast = (0, _hastscript.h)(node.name, node.attributes);   "        data.hName = hast.tagName;   +        data.hProperties = hast.properties;       }   }�               �                }�                  }�                '    data.hProperties = hast.properties;�                    data.hName = hast.tagName;�                >    var hast = (0, _hastscript.h)(node.name, node.attributes);�                -    var data = node.data || (node.data = {});�                  function ondetails(node) {�                 �                  }�                a    (0, _unistUtilVisit.visit)(tree, ['detailsContainer', 'detailsContainerSummary'], ondetails);�                  function transform(tree) {�                 �   
               return transform;�   	             !function rehypeDetails(options) {�      
           �      	          2var _unistUtilVisit = require("unist-util-visit");�                 �                (var _hastscript = require("hastscript");�                 �                 exports.default = rehypeDetails;�                exports.__esModule = true;�                 �                 "use strict";5��                                                �                                                  �                                              �                           *                       �                           K                       �               (       (   L       (       (       �                           u                       �               2       2   v       2       2       �                           �                       �    	           !       !   �       !       !       �    
                     �                     �                           �                       �                         �                     �               a       #         a       #       �                      N   &             N       �                          u                     �                          {                     �               -          |      -              �               >       1   �      >       1       �                      B   �             B       �               '       "         '       "       �                      +   3             +       �                         _                    �                          e                     �    
                     �       �      �      5��