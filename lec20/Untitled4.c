#include<stdio.h>
char M[101][101];

int main()
{
    freopen("2030.in","r",stdin);
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,x,y;
    for(i=0; i<n; i++)
        scanf("%s",M[i]);

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            if(M[i][j]=='#')continue;
            if(M[i][j]=='.')
            {
                int tot=0;
                for(x=i-1; x<=i+1; x++)
                    for(y=j-1; y<=j+1; y++)
                    {
                        if(x>=0&&x<n&&y>=0&&y<m&&M[x][y]=='#')
                            ++tot;
                    }
                M[i][j]=tot+'0';
            }
        }
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(M[i][j]=='#')M[i][j]='0';
    for(i=0; i<n; i++)
        puts(M[i]);
}
