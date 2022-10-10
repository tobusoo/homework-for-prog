#include <stdio.h>
#include <math.h>
#define MAX_N 9


void first_and_second_question(void)
{
    double l, o, g, i, c;
    int logic;
    for (l = 0; l <= MAX_N; l++){
        for (o = 0; o <= MAX_N; o++){
            for (g = 0; g <= MAX_N; g++){
                for (i = 0; i <= MAX_N; i++){
                    for (c = 0; c <= MAX_N; c++){
                        logic = l * 10000 + o * 1000 + g * 100 + i * 10 + c;
                        if (logic > 0){
                            if (pow((l+o+g+i+c), 3) == logic){
                                //(L + O + G + I + C)^3 = LOGIC
                                printf("1. (%.f+%.f+%.f+%.f+%.f)^3 = %d\n", l, o, g, i, c, logic);
                            }
                        }
                        if (logic > 1){
                            if (pow(c, l) == logic){
                                // C^L = LOGIC
                                printf("2. (%.f)^%.f = %d\n", c, l, logic);
                            }
                        } 
                    }
                }
            }
        }
    }
}


void third_question(void)
{
    double d, e;
    int deed;
    double dd;
    for(d = 0; d <= MAX_N; d++){
        for(e = 0; e <= MAX_N; e++){
            deed = d * 1000 + e * 100 + e * 10 + d;
            dd = d * 10 + d;
            if (pow(dd, e) == deed){
                // (DD)^E = DEED
                printf("3. (%.f%.f)^%.f = %d\n", d, d, e, deed);
            }
        }   
    }
}


int main()
{
    first_and_second_question();
    third_question();
    return 0;
}