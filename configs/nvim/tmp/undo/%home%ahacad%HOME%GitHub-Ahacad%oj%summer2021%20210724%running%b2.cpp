Vim�UnDo� �U���A%������CB))��~���W+)@9   =                                   `���    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `���     �                   �               5��                   =                      �      5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             `���    �   <   >           �   ;   =          }�   :   <              solve();�   9   ;              //}�   8   :              // printf("\n");�   7   9          3    // rep(j, 0, m) { printf("%d ", value[i][j]); }�   6   8              // rep(i, 0, n) {�   5   7              init();�   4   6          >    scanf("%d %d %d %d %d %d %d", &n, &m, &a, &b, &c, &d, &p);�   3   5          #    // freopen("b.in", "r", stdin);�   2   4          int main() {�   1   3           �   0   2          }�   /   1              printf("%d\n", dpv[n][m]);�   .   0              }�   -   /          0        dpv[i][j] = dpv[i - 1][j - 1] + m1 + m2;�   ,   .          	        }�   +   -                      }�   *   ,          !                m2 = value[i][k];�   )   +          *            } else if (value[i][k] < m2) {�   (   *          *                m2 = m1, m1 = value[i][k];�   '   )          #            if (value[i][k] < m1) {�   &   (                  rep(k, 1, j - 1) {�   %   '          	        }�   $   &                      }�   #   %          !                m2 = value[k][j];�   "   $          *            } else if (value[k][j] < m2) {�   !   #          *                m2 = m1, m1 = value[k][j];�       "          #            if (value[k][j] < m1) {�      !                  rep(k, 1, i) {�                         int m1 = inf, m2 = inf;�                    rep(i, 2, n) rep(j, 2, m) {�                =    rep(i, 2, n) { dpv[i][1] = dpv[i - 1][1] + value[i][1]; }�                =    rep(j, 2, m) { dpv[1][j] = dpv[1][j - 1] + value[1][j]; }�                    dpv[1][1] = value[1][1];�                void solve() {�                }�                    }�                $        value[z / m + 1][z % m] = A;�                	        }�                            continue;�                             value[z / m][m] = A;�                        if (z % m == 0) {�                (        A = (A * A * b + A * c + d) % p;�                    rep(z, 1, m * n) {�                    ll A = a;�                void init() {�                int n, m, a, b, c, d, p;�                 �                int dpv[5003][5003];�   
             int value[5003][5003];�   	              �      
          const int maxn = 3e7 + 5;�      	           �                const int inf = 2e8;�                 �                typedef long long ll;�                2#define rep(i, x, y) for (auto i = x; i <= y; i++)�                using namespace std;�                 �                 #include <bits/stdc++.h>�                  5��                                                  �                                                �                                                  �                                              �               2       2   /       2       2       �                         b                     �                           x                       �                         y                     �                           �                       �                         �                     �    	                       �                       �    
                     �                     �                         �                     �                           �                       �                         �                     �                         �                     �                         �                     �                                             �               (       (   #      (       (       �                         L                    �                           f                      �                         �                    �               	       	   �      	       	       �               $       $   �      $       $       �                         �                    �                         �                    �                         �                    �                         �                    �               =       =          =       =       �               =       =   >      =       =       �                         |                    �                         �                    �                         �                    �                #       #   �      #       #       �    !           *       *   �      *       *       �    "           *       *   "      *       *       �    #           !       !   M      !       !       �    $                     o                    �    %           	       	   }      	       	       �    &                     �                    �    '           #       #   �      #       #       �    (           *       *   �      *       *       �    )           *       *   �      *       *       �    *           !       !         !       !       �    +                     >                    �    ,           	       	   L      	       	       �    -           0       0   V      0       0       �    .                     �                    �    /                     �                    �    0                     �                    �    1                       �                      �    2                     �                    �    3           #       #   �      #       #       �    4           >       >   �      >       >       �    5                                         �    6                     +                    �    7           3       3   A      3       3       �    8                     u                    �    9                     �                    �    :                     �                    �    ;                     �                    �    <                       �                      5��