#include <stdio.h>

int main(void)
{
    int n=0, count_num=0, count_alpha=0;
    int num_max=0, alpha_max=0;
    char ch='\0';
    
    int i;
    
    scanf("%d", &n);

    getchar ();
    
    for (i=1; i<=n; i++)
    {
        scanf("%c", &ch);
        if(ch>='a' && ch<='z'){
            count_alpha++;
            count_num=0;
            
            if(alpha_max<=count_alpha) alpha_max=count_alpha;
        }
        else if(ch>='0' && ch<='9'){
            count_num++;
            count_alpha=0;
            
            if(num_max<=count_num) num_max=count_num;
        }
        else{
        }
    }
    
    printf("%d\n%d", alpha_max, num_max);
    
    
    return 0;
}
