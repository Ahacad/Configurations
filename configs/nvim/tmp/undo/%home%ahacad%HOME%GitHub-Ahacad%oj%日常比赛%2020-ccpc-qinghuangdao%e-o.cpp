Vim�UnDo� y���� bя�, �65X,�����_G�t����   -                                   aUyo    _�                             ����                                                                                                                                                                                                                                                                                                                                                             aUy]    �                   �               5��                    ,                             5�_�                    -        ����                                                                                                                                                                                                                                                                                                                                                             aUym     �   -            5��    -                                           5�_�                     .        ����                                                                                                                                                                                                                                                                                                                                                             aUyn    �   ,   .           �   +   -          }�   *   ,              return 0;�   )   +              }�   (   *          +        printf("Case #%d: %lld\n",T++,res);�   '   )          	        }�   &   (          Q            if(C[i]>=mi)res=max(res,s);//记录大于B的最大值的覆盖区间�   %   '                      s+=sub[i];�   $   &          "        for(int i=0;i<4*n+1;i++) {�   #   %                  long long res=0;�   "   $                  long long s=0;�   !   #          	        }�       "          5            //如果区间没有重合，处理一下�      !          +            if(al>br)sub[br+1]--,sub[al]++;�                 Z            sub[bl]++,sub[ar+1]--;//差成绩的左边界和好成绩的右边界先处理�                5            int br=lower_bound(C,C+4*n,B[i]*100/p)-C;�                /            int bl=lower_bound(C,C+4*n,B[i])-C;�                5            int ar=lower_bound(C,C+4*n,A[i]*100/p)-C;�                /            int al=lower_bound(C,C+4*n,A[i])-C;�                        for(int i=0;i<n;i++){�                        sort(C,C+n*4);�                	        }�                !            //记录B的最大值�                            mi=max(mi,B[i]);�                            //存储边界�                .            C[i*4+2]=B[i],C[i*4+3]=B[i]*100/p;�                ,            C[i*4]=A[i],C[i*4+1]=A[i]*100/p;�                "            scanf("%d%d",A+i,B+i);�                        for(int i=0;i<n;i++){�                        long long mi=0;�                (        for(int i=0;i<=4*n;i++)sub[i]=0;�                        scanf("%d%d",&n,&p);�                    while(t--){�                    scanf("%d",&t);�   
                 int t,T=1;�   	             int main(){�      
           �      	          int n,p;�                !//C记录边界，sub记录差分�                "long long C[MAXN<<2],sub[MAXN<<2];�                long long A[MAXN],B[MAXN];�                const int MAXN=2e5+10;�                 �                using namespace std;�                 #include <bits/stdc++.h>�   -   .           5��    -                                           �                                                �                                              �                           .                       �                         /                     �                         J                     �               "       '   f       "       '       �               !       "   �       !       "       �                      	   �              	       �                           �                       �    	                     �                     �    
                     �                     �                         �                     �                         �                     �                                             �               (       4   !      (       4       �                         V                    �                      %   p             %       �               "       (   �      "       (       �               ,       ;   �      ,       ;       �               .       ?   �      .       ?       �                         ;                    �                         V                    �               !       !   v      !       !       �               	       	   �      	       	       �                         �                    �                      %   �             %       �               /       9   �      /       9       �               5       C         5       C       �               /       9   b      /       9       �               5       C   �      5       C       �               Z       _   �      Z       _       �               +       2   @      +       2       �                5       5   s      5       5       �    !           	       	   �      	       	       �    "                     �                    �    #                     �                    �    $           "       -   �      "       -       �    %                                         �    &           Q       Z   .      Q       Z       �    '           	       	   �      	       	       �    (           +       -   �      +       -       �    )                     �                    �    *                     �                    �    +                     �                    �    ,                       �                      5��