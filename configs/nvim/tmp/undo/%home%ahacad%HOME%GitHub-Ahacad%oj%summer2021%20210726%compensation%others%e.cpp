Vim�UnDo� �Om^��q6��"9�6&O/>���vL�   Y                                  a�J    _�                              ����                                                                                                                                                                                                                                                                                                                                                             a�I    �   X            �   W   Y          }�   V   X          
	return 0;�   U   W          	} �   T   V          			solve();�   S   U          	while (T--) {�   R   T          	int T = 1; //std::cin >> T;�   Q   S          8	std::cin.sync_with_stdio(false), std::cin.tie(nullptr);�   P   R          int main() {�   O   Q           �   N   P           �   M   O          }�   L   N          	std::cout << ans << '\n';�   K   M          	}�   J   L          		cur++;�   I   K          		}�   H   J          .			ans += res[cur + 1].first - res[cur].first;�   G   I          0		if (have == n and cur + 1 < (int)res.size()) {�   F   H          		have += it.second;�   E   G          	for (auto &it :res) {�   D   F           	int cur = 0, have = 0, ans = 0;�   C   E          #	std::sort(res.begin(), res.end());�   B   D          	} �   A   C          %		res.emplace_back(it.second + 1, 1);�   @   B          !		res.emplace_back(it.first, -1);�   ?   A          	for (auto &it : v[0]) {�   >   @          	}�   =   ?          &		res.emplace_back(it.second + 1, -1);�   <   >           		res.emplace_back(it.first, 1);�   ;   =           	for (auto &it : v[1]) { // r[i]�   :   <          '	std::vector<std::pair<int, int> > res;�   9   ;          	}�   8   :          		dfs1(1, 29, a[i], r[i], 0);�   7   9          		}�   6   8          "			dfs1(0, 29, a[i], l[i] - 1, 0);�   5   7          		if (l[i] > 0) {�   4   6          	for (int i = 1; i <= n; i++) {�   3   5          	dfs(1, 0);�   2   4          	}�   1   3          		G[v].emplace_back(u, w);�   0   2          		G[u].emplace_back(v, w);�   /   1          '		int u, v, w; std::cin >> u >> v >> w;�   .   0          #	for (int i = 1; i <= n - 1; i++) {�   -   /          	}�   ,   .          		std::cin >> l[i] >> r[i];�   +   -          	for (int i = 1; i <= n; i++) {�   *   ,          	int n; std::cin >> n;�   )   +          void solve() {�   (   *          }�   '   )          	}�   &   (          		}�   %   '          )			dfs1(id, pos - 1, val, interval, now);�   $   &          
		} else {�   #   %          6			dfs1(id, pos - 1, val, interval, now + (1 << pos));�   "   $          
		if (x) {�   !   #          		} else {�       "          		}�      !          6			dfs1(id, pos - 1, val, interval, now + (1 << pos));�                 1			v[id].emplace_back(now, now + (1 << pos) - 1);�                
		} else {�                )			dfs1(id, pos - 1, val, interval, now);�                D			v[id].emplace_back(now + (1 << pos), now + (1 << (1 + pos)) - 1);�                
		if (x) {�                		if (y) {�                !	int y = ((interval >> pos) & 1);�                	int x = ((val >> pos) & 1);�                	}�                
		return ;�                		v[id].emplace_back(now, now);�                	if (pos == -1) {�                <void dfs1(int id, int pos, int val, int interval, int now) {�                'std::vector<std::pair<int, int> > v[2];�                }�                	}�                		dfs(nxt, u);�                		a[nxt] = (a[u] ^ val);�                		}�                			continue;�   
             		if (par == nxt) {�   	             $		int nxt = v.first, val = v.second;�      
          	for (auto &v : G[u]) {�      	          void dfs(int u, int par) {�                 �                'std::vector<std::pair<int, int> > G[N];�                int a[N], l[N], r[N];�                 �                const int N = 1e5 + 5;�                const int mod = 1000000007;�                 #include<bits/stdc++.h>�                   �               5��                    W                      �      �                                                �                                              �                         5                     �                           L                       �                         M                     �               '       '   c       '       '       �                           �                       �                         �                     �                         �                     �    	           $       *   �       $       *       �    
                     �                     �                                             �                      	                	       �                         '                    �                         F                    �                         [                    �                         a                    �               '       '   c      '       '       �               <       <   �      <       <       �                         �                    �                      %   �             %       �               
                
              �                                             �                                             �               !       $   9      !       $       �               	          ^      	              �               
          k      
              �               D       M   |      D       M       �               )       2   �      )       2       �               
          �      
              �               1       :         1       :       �               6       ?   I      6       ?       �                       	   �             	       �    !           	          �      	              �    "           
          �      
              �    #           6       ?   �      6       ?       �    $           
          �      
              �    %           )       2         )       2       �    &                  	   5             	       �    '                     ?                    �    (                     E                    �    )                     G                    �    *                  
   V             
       �    +                     a                    �    ,                  "   t             "       �    -                  !   �             !       �    .           #          �      #              �    /           '       &   �      '       &       �    0                     �                    �    1                      �                     �    2                                           �    3                      =                     �    4                     ^                    �    5                     d                    �    6           "       "   s      "       "       �    7                     �                    �    8                  +   �             +       �    9                  	   �             	       �    :           '       #   �      '       #       �    ;                                           �    <                   *                 *       �    =           &       $   9      &       $       �    >                  &   ^             &       �    ?                  ,   �             ,       �    @           !          �      !              �    A           %          �      %              �    B                  '   �             '       �    C           #       +   �      #       +       �    D                      (                     �    E                  &   .             &       �    F                  #   U             #       �    G           0          y      0              �    H           .          �      .              �    I                  6   �             6       �    J                  7   �             7       �    K                  	                	       �    L                     (                    �    M                     7                    �    N                      =                     �    O                      [                     �    P                      ]                     �    Q           8          ^      8              �    R                  ;   k             ;       �    S                  !   �             !       �    T                     �                    �    U                     �                    �    V           
          �      
              �    W                     �                    �    X                       	                     5��