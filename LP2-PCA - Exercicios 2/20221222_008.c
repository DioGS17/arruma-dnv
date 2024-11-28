#include <stdio.h>

int main(){
    int num, h, co, ca;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    for (h = 1; h <= num; h++){
        for (co = 1; co < num; co++){
            for(ca = co+1; ca < num; ca++){
                if(co*co + ca*ca == h*h){   
                    printf("\nHipotenusa = %d, Cateto Oposto = %d, Cateto Adjacente = %d\n", h, co, ca);
                }
                
            }
            
        }
        
    }
    
}