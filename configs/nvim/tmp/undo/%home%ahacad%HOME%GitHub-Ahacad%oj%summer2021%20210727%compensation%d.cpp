Vim�UnDo� �S��u�U͂�^��8K���v�L�� 7K��   1       size[x] = 1;                             a�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             a�     �                   �               5��                   3                      �      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a�     �                  5��                                                  5�_�                           ����                                                                                                                                                                                                                                                                                                                            -          -   	       v       a�     �   -   /   3              to[y].push_back(x);�   ,   .   3              to[x].push_back(y);�         3          for (auto y : to[x]) {�      	   3      vector<int> to[N];5��                         �                      �                         �                     �    ,   	                  ,                     �    -   	                  G                     5�_�                           ����                                                                                                                                                                                                                                                                                                                            -          -   	       v       a�     �   -   /   3              t[y].push_back(x);�   ,   .   3              t[x].push_back(y);�         3          for (auto y : t[x]) {�      	   3      vector<int> t[N];5��                         �                      �                         �                     �    ,                     )                     �    -                     C                     5�_�                    -       ����                                                                                                                                                                                                                                                                                                                            -          -   	       v       a�     �      	          vector<int> [N];�   -   /                  [y].push_back(x);�   ,   .   3              [x].push_back(y);�                    for (auto y : [x]) {�   -   .   3    5��    ,                     )                     �                         �                    �    ,                     "                    �    -                     =                    �                         �                     �                         �                    �    ,                     #                    �    -                     >                    �                         �                     5�_�                   	       ����                                                                                                                                                                                                                                                                                                                            	          	          v       a~     �   0   2   3      6    printf("%lld", dp[1][k][1] * ksm(n, k - 1) % mod);�      
   3      ll ksm(ll a, ll b) {5��                         �                      �    0   #                  �                     5�_�      	              	       ����                                                                                                                                                                                                                                                                                                                            	          	          v       a~     �   0   2   3      5    printf("%lld", dp[1][k][1] * ks(n, k - 1) % mod);�      
   3      ll ks(ll a, ll b) {5��                         �                      �    0   "                  �                     5�_�      
           	   	       ����                                                                                                                                                                                                                                                                                                                            	          	          v       a~     �   0   2   3      4    printf("%lld", dp[1][k][1] * k(n, k - 1) % mod);�      
   3      ll k(ll a, ll b) {5��                         �                      �    0   !                  �                     5�_�   	              
   	       ����                                                                                                                                                                                                                                                                                                                            	          	          v       a~     �      
   3      ll (ll a, ll b) {�   0   2          3    printf("%lld", dp[1][k][1] * (n, k - 1) % mod);�   	   
   3    �   	   
   3    �   	   
   3    �   	   
   3    �   	   
   3    5��                         �                      �    0           3       4   k      3       4       �                         �                     �    0           4       5   l      4       5       �                         �                     �    0           5       6   m      5       6       �                         �                     �    0           6       7   n      6       7       �                         �                     �    0           7       8   o      7       8       �                         �                     �                        �                     �                        �                     �                     	   �              	       �              	       	   �       	       	       �    0           8       <   s      8       <       �                         �                     5�_�   
                        ����                                                                                                                                                                                                                                                                                                                            $          $          v       a�     �   #   %   3              sz[x] += sz[y];�         3      ;            for (int j = 0; j < sz[y] && i + j <= k; ++j) {�         3      3        for (int i = 0; i < sz[x] && i <= k; ++i) {�         3          sz[x] = 1;�         3      int n, k, sz[N];5��                         �                      �                         a                     �                         !                     �       !                  X                     �    #   	                  �                     �    #                     �                     5�_�                       
    ����                                                                                                                                                                                                                                                                                                                            $          $          v       a�     �   #   %   3              s[x] += s[y];�         3      :            for (int j = 0; j < s[y] && i + j <= k; ++j) {�         3      2        for (int i = 0; i < s[x] && i <= k; ++i) {�         3          s[x] = 1;�         3      int n, k, s[N];5��       
                  �                      �                         _                     �                                              �                          T                     �    #                     �                     �    #                     �                     5�_�                    $       ����                                                                                                                                                                                                                                                                                                                            $          $          v       a�     �                int n, k, [N];�   #   %   3              [x] += [y];�                9            for (int j = 0; j < [y] && i + j <= k; ++j) {�                1        for (int i = 0; i < [x] && i <= k; ++i) {�                    [x] = 1;�   $   %   3    �   $   %   3    �   $   %   3    �   $   %   3    5��    #                     �                     �                         [                    �               1       2         1       2       �               9       :   6      9       :       �    #                     �                    �                         �                     �    #                     �                     �                         \                    �               2       3         2       3       �               :       ;   9      :       ;       �    #                     �                    �                         �                     �    #                     �                     �                         ]                    �               3       4         3       4       �               ;       <   <      ;       <       �    #                     �                    �                         �                     �    #                     �                     �                         ^                    �               4       5   	      4       5       �               <       =   ?      <       =       �    #                     �                    �                         �                     �                         _                    �               5       5   
      5       5       �               =       =   @      =       =       �    #                     �                    �                         �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                    v       a�     �                !                //不删当前边5��                          ~      "               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                    v       a�    �   0   2          }�   /   1              return 0;�   .   0          <    printf("%lld", dp[1][k][1] * fastpower(n, k - 1) % mod);�   -   /              DP(1, 0);�   ,   .              }�   +   -                  g[y].push_back(x);�   *   ,                  g[x].push_back(y);�   )   +                  cin >> x >> y;�   (   *                  int x, y;�   '   )          !    for (int i = 1; i < n; ++i) {�   &   (              cin >> n >> k;�   %   '          int main() {�   $   &           �   #   %          }�   "   $              }�   !   #                  size[x] += size[y];�       "          (        memcpy(dp[x], tmp, sizeof(tmp));�      !          	        }�                             }�                N                (tmp[i + j + 1][1] += dp[x][i][1] * dp[y][j][1] % mod) %= mod;�                N                (tmp[i + j + 1][0] += dp[x][i][0] * dp[y][j][1] % mod) %= mod;�                )                if (i + j == k) continue;�                J                                  dp[x][i][0] * dp[y][j][1] % mod) %= mod;�                C                (tmp[i + j][1] += dp[x][i][1] * dp[y][j][0] % mod +�                J                (tmp[i + j][0] += dp[x][i][0] * dp[y][j][0] % mod) %= mod;�                =            for (int j = 0; j < size[y] && i + j <= k; ++j) {�                5        for (int i = 0; i < size[x] && i <= k; ++i) {�                $        memset(tmp, 0, sizeof(tmp));�                        DP(y, x);�                        if (y == fa) continue;�                    for (auto y : g[x]) {�                    dp[x][0][1] = 1;�                    dp[x][0][0] = 1;�                    size[x] = 1;�                void DP(int x, int fa) {�                }�                    return ans;�                %        if (b & 1) (ans *= a) %= mod;�   
             '    for (; b; b >>= 1, (a *= a) %= mod)�   	                 ll ans = 1;�      
          ll fastpower(ll a, ll b) {�      	          vector<int> g[N];�                int n, k, size[N];�                ll dp[N][101][2], tmp[101][2];�                typedef long long ll;�                const int mod = 998244353;�                const int N = 5e4 + 10;�                using namespace std;�                 #include <bits/stdc++.h>�                !                //删除当前边5��                          �      "               �                                                �                                              �                         .                     �                         F                     �                         a                     �                         w                     �                         �                     �                         �                     �                         �                     �    	                     �                     �    
           '       '   �       '       '       �               %       %         %       %       �                         4                    �                         D                    �                         F                    �                         _                    �                         p                    �                         �                    �                         �                    �                         �                    �                         �                    �               $       $   �      $       $       �               5       5   
      5       5       �               =       =   @      =       =       �               J       J   ~      J       J       �               C       C   �      C       C       �               J       J         J       J       �               )       )   X      )       )       �               N       N   �      N       N       �               N       N   �      N       N       �                                              �               	       	   .      	       	       �                (       (   8      (       (       �    !                     a                    �    "                     }                    �    #                     �                    �    $                       �                      �    %                     �                    �    &                     �                    �    '           !       !   �      !       !       �    (                     �                    �    )                     �                    �    *                     �                    �    +                                         �    ,                     '                    �    -                     -                    �    .           <       <   ;      <       <       �    /                     x                    �    0                     �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                               
                 v   
    a�     �   !   #   1              size[x] += size[y];�         1      =            for (int j = 0; j < size[y] && i + j <= k; ++j) {�         1      5        for (int i = 0; i < size[x] && i <= k; ++i) {�         1      int n, k, size[N];5��                         �                      �                         (                     �       #                  a                     �    !                     i                     �    !                     s                     5�_�                           ����                                                                                                                                                                                                                                                                                                                               
                 v   
    a�     �   !   #   1              siz[x] += siz[y];�         1      <            for (int j = 0; j < siz[y] && i + j <= k; ++j) {�         1      4        for (int i = 0; i < siz[x] && i <= k; ++i) {�         1      int n, k, siz[N];5��                         �                      �                         &                     �       "                  ^                     �    !   
                  e                     �    !                     n                     5�_�                           ����                                                                                                                                                                                                                                                                                                                               
                 v   
    a�     �   !   #   1              si[x] += si[y];�         1      ;            for (int j = 0; j < si[y] && i + j <= k; ++j) {�         1      3        for (int i = 0; i < si[x] && i <= k; ++i) {�         1      int n, k, si[N];5��                         �                      �                         $                     �       !                  [                     �    !   	                  a                     �    !                     i                     5�_�                           ����                                                                                                                                                                                                                                                                                                                               
                 v   
    a�     �         1      int n, k, s[N];�   !   #                  s[x] += s[y];�                :            for (int j = 0; j < s[y] && i + j <= k; ++j) {�                2        for (int i = 0; i < s[x] && i <= k; ++i) {�         1    �         1    5��                         �                      �               2       3         2       3       �               :       ;   <      :       ;       �    !                     [                    �                         �                     �               3       4   	      3       4       �               ;       <   >      ;       <       �    !                     ^                    �                         �                     �               4       4   	      4       4       �               <       <   >      <       <       �    !                     ^                    �                         �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                    v   
    a�    �   0   2          }�   /   1              return 0;�   .   0          <    printf("%lld", dp[1][k][1] * fastpower(n, k - 1) % mod);�   -   /              DP(1, 0);�   ,   .              }�   +   -                  g[y].push_back(x);�   *   ,                  g[x].push_back(y);�   )   +                  cin >> x >> y;�   (   *                  int x, y;�   '   )          !    for (int i = 1; i < n; ++i) {�   &   (              cin >> n >> k;�   %   '          int main() {�   $   &           �   #   %          }�   "   $              }�   !   #                  siz[x] += siz[y];�       "          (        memcpy(dp[x], tmp, sizeof(tmp));�      !          	        }�                             }�                N                (tmp[i + j + 1][1] += dp[x][i][1] * dp[y][j][1] % mod) %= mod;�                N                (tmp[i + j + 1][0] += dp[x][i][0] * dp[y][j][1] % mod) %= mod;�                )                if (i + j == k) continue;�                J                                  dp[x][i][0] * dp[y][j][1] % mod) %= mod;�                C                (tmp[i + j][1] += dp[x][i][1] * dp[y][j][0] % mod +�                J                (tmp[i + j][0] += dp[x][i][0] * dp[y][j][0] % mod) %= mod;�                <            for (int j = 0; j < siz[y] && i + j <= k; ++j) {�                4        for (int i = 0; i < siz[x] && i <= k; ++i) {�                $        memset(tmp, 0, sizeof(tmp));�                        DP(y, x);�                        if (y == fa) continue;�                    for (auto y : g[x]) {�                    dp[x][0][1] = 1;�                    dp[x][0][0] = 1;�                    siz[x] = 1;�                void DP(int x, int fa) {�                }�                    return ans;�                %        if (b & 1) (ans *= a) %= mod;�   
             '    for (; b; b >>= 1, (a *= a) %= mod)�   	                 ll ans = 1;�      
          ll fastpower(ll a, ll b) {�      	          vector<int> g[N];�                int n, k, siz[N];�                ll dp[N][101][2], tmp[101][2];�                typedef long long ll;�                const int mod = 998244353;�                const int N = 5e4 + 10;�                using namespace std;�                 #include <bits/stdc++.h>�         1          size[x] = 1;5��                         e                     �                                                �                                              �                         .                     �                         F                     �                         a                     �                         w                     �                         �                     �                         �                     �                         �                     �    	                     �                     �    
           '       '   �       '       '       �               %       %         %       %       �                         3                    �                         C                    �                         E                    �                         ^                    �                         n                    �                         �                    �                         �                    �                         �                    �                         �                    �               $       $   �      $       $       �               4       4         4       4       �               <       <   =      <       <       �               J       J   z      J       J       �               C       C   �      C       C       �               J       J   	      J       J       �               )       )   T      )       )       �               N       N   ~      N       N       �               N       N   �      N       N       �                                             �               	       	   *      	       	       �                (       (   4      (       (       �    !                     ]                    �    "                     w                    �    #                     }                    �    $                                             �    %                     �                    �    &                     �                    �    '           !       !   �      !       !       �    (                     �                    �    )                     �                    �    *                     �                    �    +                                         �    ,                     !                    �    -                     '                    �    .           <       <   5      <       <       �    /                     r                    �    0                     �                    5�_�                    1   "    ����                                                                                                                                                                                                                                                                                                                                                    v       a|     �   0   2   3      4    printf("%lld", dp[1][k][1] * k(n, k - 1) % mod);5��    0   "                  �                     5��