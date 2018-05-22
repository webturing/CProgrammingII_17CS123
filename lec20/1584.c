#include<stdio.h>
char M[51][51];

int main()
{
    freopen("1584.in","r",stdin);
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,r,c;
    for(i=0; i<n; i++)
        scanf("%s",M[i]);
    int max=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        if(M[i][j]=='.'){
            int curMax=0;

            for(r=i-1;r>=0;r--)
            {
                if(M[r][j]=='#')
                    break;
                if(M[r][j]=='G')
                    ++curMax;
            }
             for(r=i+1;r<n;r++)
            {
                if(M[r][j]=='#')
                    break;
                if(M[r][j]=='G')
                    ++curMax;
            }
            for(c=j-1;c>=0;c--)
                {
                if(M[i][c]=='#')
                    break;
                if(M[i][c]=='G')
                    ++curMax;
            }
            for(c=j+1;c<m;c++)
                {
                if(M[i][c]=='#')
                    break;
                if(M[i][c]=='G')
                    ++curMax;
            }
            if(curMax>max)max=curMax;

        }

    }
    printf("%d\n",max);
   return 0;
}
