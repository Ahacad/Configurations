Vim�UnDo� ��i�DH�3~����|��@�W63�}�3�K'�� �   ~           sum = size[v];   a                          a,��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             a,��    �   |            �   {   }           �   z   |          }�   y   {              return 0;�   x   z              }�   w   y                  else printf("NAY\n");�   v   x          $        if(test[i]) printf("AYE\n");�   u   w              {�   t   v              for(int i=1;i<=m;++i)�   s   u           �   r   t          %    solve(rt);//对树进行点分治�   q   s              getrt(1,0); �   p   r          6    maxp[rt]=sum=n;//第一次先找整棵树的重心�   o   q           �   n   p          :    query[i]=read();//先记录每个询问以离线处理�   m   o              for(int i=1;i<=m;++i)�   l   n              }�   k   m          "        add(u,v,dis);add(v,u,dis);�   j   l          )        int u=read(),v=read(),dis=read();�   i   k              {�   h   j              for(int i=1;i<n;++i)�   g   i              n=read();m=read();�   f   h          {�   e   g          
int main()�   d   f           �   c   e          }�   b   d              }�   a   c          D        getrt(v,0); solve(rt);//在子树中找重心并递归处理�   `   b          K        sum=size[v]; maxp[rt=0]=inf;//注意sum是以v为根的子树大小�   _   a                  if(vis[v])continue;�   ^   `                  int v=E[i].v;�   ]   _              {�   \   ^          @    for(int i=head[u];i;i=E[i].nxt)//对每个子树进行分治�   [   ]          :    vis[u]=judge[0]=1; calc(u);//处理以u为根的子树�   Z   \          9    //judge[i]表示到根距离为i的路径是否存在�   Y   [          {   �   X   Z          void solve(int u)�   W   Y           �   V   X          }�   U   W           �   T   V          =    judge[q[i]]=0;//特别注意一定不要用memeset，会T�   S   U          >    for(int i=1;i<=p;++i)//处理完这个子树就清空judge�   R   T              }�   Q   S          &        q[++p]=rem[j],judge[rem[j]]=1;�   P   R          >        for(int j=rem[0];j;--j)//保存出现过的dis于judge�   O   Q           �   N   P          E        //如果query[k]-rem[j]d的路径存在就标记第k个询问�   M   O          (        test[k]|=judge[query[k]-rem[j]];�   L   N                  if(query[k]>=rem[j])�   K   M          1        for(int k=1;k<=m;++k)//遍历每个询问�   J   L          9        for(int j=rem[0];j;--j)//遍历当前子树的dis�   I   K           �   H   J          2        getdis(v,u);//处理u的每个子树的dis�   G   I          "        rem[0]=0; dis[v]=E[i].dis;�   F   H                  if(vis[v])continue;�   E   G                  int v=E[i].v;�   D   F              {�   C   E          #    for(int i=head[u];i;i=E[i].nxt)�   B   D              int p=0;�   A   C          {�   @   B          void calc(int u)�   ?   A           �   >   @          }�   =   ?              }�   <   >                  getdis(v,u);�   ;   =                  dis[v]=dis[u]+E[i].dis;�   :   <          "        if(v==fa||vis[v])continue;�   9   ;                  int v=E[i].v;�   8   :              {�   7   9          #    for(int i=head[u];i;i=E[i].nxt)�   6   8              rem[++rem[0]]=dis[u];�   5   7          {�   4   6          void getdis(int u,int fa)�   3   5           �   2   4          }�   1   3              if(maxp[u]<maxp[rt]) rt=u;�   0   2          %    maxp[u]=max(maxp[u],sum-size[u]);�   /   1              }�   .   0          %        maxp[u]=max(maxp[u],size[v]);�   -   /                  size[u]+=size[v];�   ,   .                  getrt(v,u);�   +   -          #        if(v==pa||vis[v]) continue;�   *   ,                  int v=E[i].v;�   )   +              {�   (   *          $    for(int i=head[u];i;i=E[i].nxt) �   '   )              size[u]=1; maxp[u]=0;�   &   (          {�   %   '          void getrt(int u,int pa)�   $   &           �   #   %          }�   "   $              head[u]=tot;�   !   #              E[tot].dis=dis;�       "              E[tot].v=v;�      !              E[++tot].nxt=head[u];�                 {�                void add(int u,int v,int dis)�                 �                int ans;�                int sum,rt;�                int query[1010];�                +int vis[maxn],test[inf],judge[inf],q[maxn];�                .int maxp[maxn],size[maxn],dis[maxn],rem[maxn];�                int tot,head[maxn];�                &struct node{int v,dis,nxt;}E[maxn<<1];�                int n,m;�                const int maxn=100010;�                const int inf=10000000;�                 �                }�                    return f*x;�                8    while(ss>='0'&&ss<='9'){x=x*10+ss-'0';ss=getchar();}�                8    while(ss<'0'||ss>'9'){if(ss=='-')f=-1;ss=getchar();}�                    char ss=getchar();�                    int f=1,x=0;�   
             {�   	             
int read()�      
           �      	          using namespace std;�                #include<cstdio>�                #include<cstring>�                #include<queue>�                #include<algorithm>�                #include<vector>�                #include<iostream>�                 //niiick�                   �               5��                    {                       �
      �                       	                  	       �                         
                     �                                              �                         1                     �                         D                     �                         X                     �                         i                     �                         {                     �                           �                       �    	           
          �       
              �    
                     �                     �                         �                     �                      "   �              "       �               8          �       8              �               8                8              �                         '                    �                      $   -             $       �                          R                     �                         q                    �                         �                    �                         �                    �               &          �      &              �                          �                     �               .          �      .              �               +          �      +              �                      	   �             	       �                         �                    �                         �                    �                                               �                                             �                      1   )             1       �                      .   [             .       �                          �                    �    !                     �                    �    "                     �                    �    #                      �                     �    $                   !   �              !       �    %                     �                    �    &                     �                    �    '                                         �    (           $                $              �    )                     +                    �    *                      -                     �    +           #          .      #              �    ,                     J                    �    -                     [                    �    .           %       ,   l      %       ,       �    /                     �                    �    0           %       (   �      %       (       �    1                     �                    �    2                     �                    �    3                   (                 (       �    4                     4                    �    5                  *   :             *       �    6                  #   e             #       �    7           #          �      #              �    8                      �                     �    9                     �                    �    :           "          �      "              �    ;                  ,   �             ,       �    <                     �                    �    =                  (   
             (       �    >                  #   3             #       �    ?                      W                     �    @                     m                    �    A                     s                    �    B                      u                     �    C           #          v      #              �    D                     �                    �    E                  ,   �             ,       �    F                     �                    �    G           "          �      "              �    H           2          �      2              �    I                                           �    J           9       5   *      9       5       �    K           1           `      1               �    L                  D   a             D       �    M           (       >   �      (       >       �    N           E       L   �      E       L       �    O                   E   2              E       �    P           >           x      >               �    Q           &       E   y      &       E       �    R                  /   �             /       �    S           >          �      >              �    T           =       G   �      =       G       �    U                   M   =              M       �    V                     �                    �    W                       �                      �    X                     �                    �    Y                  :   �             :       �    Z           9          �      9              �    [           :       G   �      :       G       �    \           @       I   @	      @       I       �    ]                     �	                    �    ^                     �	                    �    _                     �	                    �    `           K          �	      K              �    a           D       D   �	      D       D       �    b                     "
                    �    c                  :   7
             :       �    d                      r
                     �    e           
          x
      
              �    f                      z
                     �    g                     {
                    �    h                     �
                    �    i                     �
                    �    j           )       !   �
      )       !       �    k           "       1   �
      "       1       �    l                     �
                    �    m                                         �    n           :          ,      :              �    o                   [   2              [       �    p           6           �      6               �    q                  <   �             <       �    r           %          �      %              �    s                   '   �              '       �    t                                           �    u                  "                "       �    v           $          )      $              �    w                     >                    �    x                     [                    �    y                     h                    �    z                     �                    �    {                      �                     �    |                      �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            3          3          v       a,��    �   `   b   ~              sum = size[v];�   5   7   ~      *    maxp[u] = max(maxp[u], sum - size[u]);�   3   5   ~      (        maxp[u] = max(maxp[u], size[v]);�   2   4   ~              size[u] += size[v];�   ,   .   ~          size[u] = 1;�          ~      1int maxp[maxn], size[maxn], dis[maxn], rem[maxn];5��                         <                     �    ,                     P                     �    2                     �                     �    2                                          �    3   "                  )                     �    5   $                  Y                     �    `                     �	                     5��