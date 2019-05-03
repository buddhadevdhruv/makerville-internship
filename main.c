#include <stdio.h>
#include"a.h"
int main()
{
    char ip[10];
    unsigned long store[30];
    unsigned long int a,b,c;
    unsigned long int up , down;
    int s=0,ctr=0;
    long temp=0;
    fxn();
    printf("Enter Number in format num + space : ");
    fgets(ip,30,stdin);
    
for(int j = 0; j<30; j++)
 {          if((int)ip[j] != 32)
            {
                int num = ((int)ip[j])-48;
                temp = (10*temp) + num;
                ctr++;
            }
            if((int)ip[j] == 32)
            {
                store[s] = temp;
                s++;
                temp = 0;
                ctr = 0;
            }
                
}


                for(int k = 0; k<s; k++)
                {
                    printf("\n\nNumbers are: %d",store[k]);
                    a = 0 ,b = 1;
                     while(1)
                        {
                        c = a + b;
                        a = b;
                        b = c;
                        if(c >= store[k])
                            {break;}
                        }
                    up = b;
                    down = a;
                    printf("\nUp: %lu",up);
                    printf("\nDown is: %lu",down);
                    if( (store[k] - down)<(up - store[k]) )
                        {printf("\nNearest Number is: %lu",down);}
                    else if ( (up-store[k])<(store[k]-down) )
                        {printf("\nNearest Number is: %lu",up);}
                }    
   
    return 0;
}
