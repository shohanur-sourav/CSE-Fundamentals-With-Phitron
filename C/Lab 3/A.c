#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100]= {'0'};
    int i,j,len,tmp=0,check=0;
    int ck[26]= {0};

    while(scanf("%s",&str)==1)
    {
        tmp=0;
        len=strlen(str);
        check=0;

        for(i=0; i<len; i++)
        {
            tmp=str[i]-97;
            ck[tmp]++;
        }
        for(j=0; j<26; j++)
        {
            if(ck[j]>=1)
            {
                check++;

            }

        }

        if(check%2==0)
        {
            printf("CHAT WITH HER!\n");
        }
        else
        {
            printf("IGNORE HIM!\n");
        }
        memset(str,'0',sizeof str);
        memset(ck,0,sizeof ck);

    }


    return 0;
}
