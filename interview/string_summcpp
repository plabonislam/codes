
#include <bits/stdc++.h>

using namespace std;


int main() {
    int i,j,k,l=0,n,x=0,sum1,hl=0,ll;
    char m_num[100][500],sum[55],num[500];

    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%s",m_num[i]);
        ll=strlen(m_num[i]);

        for(j=0,k=ll-1;j<ll;j++,k--)
            num[k]=m_num[i][j];
        num[ll]='\0';
        strcpy(m_num[i],num);

///        strrev(m_num[i]);

        if(hl<ll)
            hl=ll;
    }
    for(i=0;i<hl;i++){

        sum1=x;

        for(j=0;j<n;j++)
            if(m_num[j][i]>='0'&&m_num[j][i]<='9')
                sum1+=(m_num[j][i]-48);

        x=sum1/10;
        sum[l++]=sum1%10+48;
    }

    while(x!=0){
        sum[l++]=x%10+48;
        x/=10;
    }

    for(i=l-1;i>=0;i--)
        printf("%c",sum[i]);
    printf("\n");

    return 0;
}



