Vim�UnDo� )���Of������2;�v��0��� �I�   �                                   a9j�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             a9j�    �                   �               5��                    �                       z      5�_�                    �        ����                                                                                                                                                                                                                                                                                                                                                             a9j�     �   �            5��    �                      {                     5�_�                     �        ����                                                                                                                                                                                                                                                                                                                                                             a9j�    �   �            �   �   �                  �   �   �          	        }�   �   �                      }�   �   �          J                maxab = max(maxab, (p[i].w + p[j].w) / (cost-maxd[i][j]));�   �   �          -            for (int j = i + 1; j < N; j++) {�   �   �          %        for (int i = 0; i < N; i++) {�      �                  double maxab = 0;�   ~   �                  �   }             	        }�   |   ~                      bfs(i);�   {   }          %        for (int i = 0; i < N; i++) {�   z   |          &        memset(maxd, 0, sizeof(maxd));�   y   {                  �   x   z          	        }�   w   y                      }�   v   x          1                addTreeE(e[i].v, e[i].u, e[i].w);�   u   w          1                addTreeE(e[i].u, e[i].v, e[i].w);�   t   v                          cost += e[i].w;�   s   u                          leftP--;�   r   t          '            if (unin(e[i].u, e[i].v)) {�   q   s          8        for (int i = 0; i < edgeCnt && leftP > 0; i++) {�   p   r                  �   o   q          +        memset(firstE, -1, sizeof(firstE));�   n   p                  treeEcnt = 0;�   m   o                  �   l   n                  double cost = 0;�   k   m                  int leftP = N - 1;�   j   l                  �   i   k                  sort(e, e+edgeCnt);�   h   j                  �   g   i          	        }�   f   h                      }�   e   g          +                e[edgeCnt++].w = dis(i, j);�   d   f          !                e[edgeCnt].v = j;�   c   e          !                e[edgeCnt].u = i;�   b   d          )            for (int j = 0; j < N; j++) {�   a   c          %        for (int i = 0; i < N; i++) {�   `   b                  int edgeCnt = 0;�   _   a                  �   ^   `          	        }�   ]   _          7            scanf("%d%d%d", &p[i].x, &p[i].y, &p[i].w);�   \   ^                      fa[i] = -1;�   [   ]          %        for (int i = 0; i < N; i++) {�   Z   \                  scanf("%d", &N);�   Y   [                  �   X   Z              while (T--) {�   W   Y              scanf("%d", &T);�   V   X              int N, T;�   U   W          int main() {�   T   V           �   S   U          }�   R   T              }�   Q   S          	        }�   P   R                      vis[v] = true;�   O   Q                      q.push(v);�   N   P          $            maxd[v][s] = maxd[s][v];�   M   O          8            maxd[s][v] = max(maxd[s][u], treeE[i].cost);�   L   N                          continue;�   K   M                      if (vis[v])�   J   L                       int v = treeE[i].to;�   I   K          <        for (int i = firstE[u]; i != -1; i = treeE[i].nxt) {�   H   J                  �   G   I                  q.pop();�   F   H                  int u = q.front();�   E   G              while (!q.empty()) {�   D   F              q.push(s);�   C   E              vis[s] = true;�   B   D          $    memset(vis, false, sizeof(vis));�   A   C              queue<int> q;�   @   B          void bfs(int s) {�   ?   A           �   >   @          bool vis[MAXN];�   =   ?          double maxd[MAXN][MAXN];�   <   >           �   ;   =           �   :   <          }�   9   ;              return true;�   8   :              uninfa(fau, fav);�   7   9                  return false;�   6   8              if (fau == fav)�   5   7          )    int fau = findfa(u), fav = findfa(v);�   4   6          bool unin(int u, int v) {�   3   5           �   2   4          }�   1   3              fa[v] = u;�   0   2              fa[u] = fa[u] + fa[v];�   /   1          void uninfa(int u, int v) {�   .   0           �   -   /          }�   ,   .                  return findfa(fa[u]);�   +   -              else�   *   ,                  return u;�   )   +              if (fa[u] < 0)�   (   *          int findfa (int u) {�   '   )           �   &   (          int fa[MAXN];�   %   '           �   $   &          }�   #   %              firstE[u] = treeEcnt++;�   "   $              treeE[treeEcnt].cost = w;�   !   #          $    treeE[treeEcnt].nxt = firstE[u];�       "              treeE[treeEcnt].to = v;�      !          'void addTreeE(int u, int v, double w) {�                  �                } treeE[MAXN << 1];�                    double cost;�                    int to, nxt;�                struct treeEdge {�                int treeEcnt, firstE[MAXN];�                 �                } e[MAXN * MAXN];�                    }�                        return w < rhs.w;�                -    bool operator < (const edge &rhs) const {�                    double w;�                    int u, v;�                struct edge {�                 �                }�                _    return sqrt((p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y));�                double dis(int i, int j) {�                 �                
} p[MAXN];�   
                 int x, y, w;�   	             struct point {�      
           �      	          const int MAXN = 1005;�                 �                using namespace std;�                #include <algorithm>�                #include <queue>�                #include <cstring>�                #include <cmath>�                 #include <cstdio>�   �   �                  printf("%.2fn", maxab);                  }              return 0;   }    �   �   �           5��    �                      {                     �    �                      6      E               �                                                �                                              �                         &                     �                         8                     �                         K                     �                         \                     �                           q                       �                         r                     �                           �                       �    	                     �                     �    
                     �                     �               
       
   �       
       
       �                           �                       �                         �                     �               _       7   �       _       7       �                      7   	             7       �                          A                     �                          C                     �                         D                    �                         R                    �               -          `      -              �                      ?   n             ?       �                         �                    �                          �                     �                          �                     �                         �                    �                         �                    �                                              �                                             �                          %                     �                       '   &              '       �               '          N      '              �                       $   j             $       �    !           $          �      $              �    "                     �                    �    #                     �                    �    $                      �                     �    %                      �                     �    &                      �                     �    '                      �                     �    (                     �                    �    )                                         �    *                                         �    +                                         �    ,                     ;                    �    -                      =                     �    .                      >                     �    /                     Z                    �    0                     u                    �    1                     �                    �    2                      �                     �    3                      �                     �    4                  )   �             )       �    5           )       !   �      )       !       �    6                     �                    �    7                                         �    8                                         �    9                                           �    :                                         �    ;                      0                     �    <                       @                      �    =                     A                    �    >                     S                    �    ?                   $   e              $       �    @                     �                    �    A                     �                    �    B           $          �      $              �    C                     �                    �    D                     �                    �    E                      �                     �    F                  <   �             <       �    G                      /                     �    H                  !   P             !       �    I           <       8   r      <       8       �    J                   $   �              $       �    K                     �                    �    L                     �                    �    M           8       	         8       	       �    N           $                $              �    O                                         �    P                                           �    Q           	                	              �    R                     "                    �    S                     0                    �    T                      E                     �    U                     W                    �    V                  %   p             %       �    W                     �                    �    X                  7   �             7       �    Y                  	   �             	       �    Z                      �                     �    [           %          �      %              �    \                  %   
             %       �    ]           7       )   0      7       )       �    ^           	       !   Z      	       !       �    _                  !   |             !       �    `                  +   �             +       �    a           %          �      %              �    b           )       	   �      )       	       �    c           !           �      !               �    d           !          �      !              �    e           +                 +               �    f                                         �    g           	                	              �    h                      6                     �    i                     7                    �    j                  +   M             +       �    k                      y                     �    l                  8   z             8       �    m                  '   �             '       �    n                     �                    �    o           +          �      +              �    p                  1   	             1       �    q           8       1   F	      8       1       �    r           '          x	      '              �    s                  	   �	             	       �    t                      �	                     �    u           1       &   �	      1       &       �    v           1       %   �	      1       %       �    w                     �	                    �    x           	       	   �	      	       	       �    y                      �	                     �    z           &          �	      &              �    {           %       %   
      %       %       �    |                  -   =
             -       �    }           	       L   k
      	       L       �    ~                     �
                    �                      	   �
             	       �    �           %           �
      %               �    �           -          �
      -              �    �           J          �
      J              �    �                      �
                     �    �           	          �
      	              �    �                                         �    �                                           5��