#include <stdio.h>

int faz_conta_direito(int parcelas, char op){

    int sum, n;
    
    for (int i = 0; i < parcelas; i++)
    {
        scanf("%d", &n);

        if (i == 0)
        {
            sum = n;
        }
        else
        {
            switch (op)
            {
            case '+':
                sum += n;
                break;
            
            case '-':
                sum -= n;
                break;
            }
        }
    }
    return sum;
}

