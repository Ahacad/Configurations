Vim�UnDo� ��>!F!gט���B��sY|tŒG9,ט�   :                                  a9��    _�                              ����                                                                                                                                                                                                                                                                                                                                                             a9��    �   6            �   5   7          }�   4   6              return 0;�   3   5              }�   2   4                  printf("%lld\n",ans);�   1   3                  LL ans = det(n,p);�   0   2          	        }�   /   1          N            for (int j=1; j<=n; j++) { scanf("%lld",&a[i][j]); a[i][j] %= p; }�   .   0          "        for (int i=1; i<=n; i++) {�   -   /          &    while (scanf("%d%lld",&n,&p)==2) {�   ,   .          int main(){�   +   -           �   *   ,          }�   )   +              return (ans+p)%p;�   (   *              }�   '   )                  ans %= p;�   &   (                  ans *= a[i][i];�   %   '          	        }�   $   &                      }�   #   %                          ans = -ans;�   "   $                          }�   !   #          *                    swap(a[i][k],a[j][k]);�       "          !                    a[i][k] %= p;�      !          )                    a[i][k] -= t*a[j][k];�                 *                for (int k=i; k<=n; k++) {�                '                LL t = a[i][i]/a[j][i];�                            while (a[j][i]) {�                $        for (int j=i+1; j<=n; j++) {�                 �                	        }�                             if (!flag) return 0;�                            }�                                break;�                                ans = -ans;�                ?                for (int k=i; k<=n; k++) swap(a[i][k],a[j][k]);�                                flag = 1;�                5            for (int j=i+1; j<=n; j++) if (a[j][i]) {�                            flag = 0;�                        if (!a[i][i]) {�                    for (int i=1; i<=n; i++) {�                 �                    bool flag;�                    LL ans = 1;�                LL det(int n, LL p){�   
              �   	             LL p;�      
          int n;�      	          LL a[maxn][maxn];�                const int maxn = 210;�                typedef long long LL;�                 �                using namespace std;�                #include <algorithm>�                #include <cstring>�                 #include <cstdio>�                   �               5��                    5                      �      �                                                �                                              �                         '                     �                         :                     �                           O                       �                         P                     �                         f                     �                         |                     �                         �                     �    	                     �                     �    
                       �                       �                         �                     �                         �                     �                         �                     �                           �                       �                      "   �              "       �                         �                     �                                             �               5       ,   #      5       ,       �                         P                    �               ?          o      ?              �                      H   �             H       �                         �                    �                         �                    �                                               �               	           #      	               �                       	   D              	       �               $           N      $               �                      *   O             *       �               '          z      '              �               *       )   �      *       )       �               )       .   �      )       .       �                !       +   �      !       +       �    !           *       !         *       !       �    "                  +   ?             +       �    #                     k                    �    $                     }                    �    %           	          �      	              �    &                  	   �             	       �    '                     �                    �    (                     �                    �    )                     �                    �    *                     �                    �    +                      �                     �    ,                      �                     �    -           &          �      &              �    .           "       *         "       *       �    /           N       &   6      N       &       �    0           	       *   ]      	       *       �    1                  (   �             (       �    2                     �                    �    3                     �                    �    4                  	   �             	       �    5                     �                    �    6                                    5       5��