#include <stdio.h> 
 
int main() { 
    int nLine, numBranch;
    int numColumn = 11, Height = 0; 
    char tree[1000][numColumn];  
    
    scanf("%i", &nLine); 
     
    for (int i = 0; i < nLine; i++)
    {   
        scanf("%i", &numBranch);  
        for (int j = 0; j < numColumn; j++)
        {      
            if (j > 3 && j<7)
            { 
                tree[i][j] = '|'; 
            } 
            else
            { 
                tree[i][j] = ' '; 
            } 
        } 
    } 
    int branch; 
    char branchSide;
    for (int i = 0; i < numBranch; i++)
    {    
        scanf(" %c %i", &branchSide, &branch); 

        if (branchSide == 'D')
        {    
            tree[branch - 1][9] = '-'; 
            tree[branch - 1][8] = '-'; 
            tree[branch - 1][7] = '-';    
        } 
        else 
        { 
            tree[branch - 1][1] = '-'; 
            tree[branch - 1][2] = '-'; 
            tree[branch - 1][3] = '-';  
        } 
    }  
    char lumberjackSide;
    scanf(" %c", &lumberjackSide); 
    if (lumberjackSide == 'D'){ 
        tree[Height][8] = 'L'; 
        tree[Height + 1][8] = 'L'; 
    } 
    else
    { 
        tree[Height][2] = 'L'; 
        tree[Height + 1][2] = 'L';  
    }

    printf("~~~~~~~~~~~\n"); 
    for (int i = Height + 4; i >= 0; i--)
    { 
        for (int j = 0; j < numColumn; j++)
        { 
            printf("%c", tree[i][j]); 
        } 
        printf("\n"); 
    } 

    char cmdLumberjack;
    printf("~~~~~~~~~~~\n"); 
    while (scanf(" %c", &cmdLumberjack) > 0)
    { 
        if (cmdLumberjack == 'B' && lumberjackSide == 'D')
        { 
            if (tree[Height][6] == '<')
            { 
                Height = Height + 1; 
                if (tree[Height + 1][7] == '-')
                { 
                    printf("**morreu**\n"); 
                    return 0; 
                } 
                else
                { 
                    tree[Height + 1][8] = 'L'; 
                } 
            } 
            else
            { 
                tree[Height][6] = '<'; 
            } 
        } 
        else if(cmdLumberjack == 'B' && lumberjackSide == 'E')
        { 
            if (tree[Height][4] == '>')
            { 
                Height = Height + 1; 
                if (tree[Height + 1][3] == '-')
                {     
                    printf("**morreu**\n"); 
                    return 0; 
                } 
                else
                { 
                    tree[Height + 1][2] = 'L'; 
                } 
            } 
            else
            { 
                tree[Height][4] = '>'; 
            } 
        } 
        else if (cmdLumberjack == 'T' && lumberjackSide == 'D')
        { 
            if (tree[Height][2] == '-' || tree[Height + 1][2] == '-')
            { 
                printf("**beep**\n"); 
                continue; 
            } 
            else
            { 
                tree[Height][2] = 'L'; 
                tree[Height + 1][2] = 'L'; 
                tree[Height][8] = ' ';
                tree[Height + 1][8] = ' '; 
                lumberjackSide = 'E'; 
            }
        }  
        else if(cmdLumberjack == 'T' && lumberjackSide == 'E')
        {            
            if (tree[Height][8] == '-' || tree[Height + 1][8] == '-')
            { 
                printf("**beep**\n"); 
                continue; 
            } 
            else
            { 
                tree[Height][2] = ' '; 
                tree[Height + 1][2] = ' '; 
                tree[Height][8] = 'L'; 
                tree[Height + 1][8] = 'L'; 
                lumberjackSide = 'D'; 
            }
        } 
        printf("~~~~~~~~~~~\n"); 
        for (int i = Height + 4; i >= Height; i--)
        { 
            for (int j = 0; j < numColumn; j++)
            { 
                if (tree[i][j]) 
                { 
                    printf("%c", tree[i][j]); 
                } 
                else 
                { 
                    printf(" "); 
                } 
            } 
            printf("\n"); 
        } 
        printf("~~~~~~~~~~~\n"); 
    } 

    return 0;
}