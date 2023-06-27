#include <stdio.h>
#include <stdlib.h>

int calcularMDC(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calcularMDC(b, a % b);
}
int calcularMMC(int a, int b) {
    int mdc = calcularMDC(a, b);
    return (a * b) / mdc;
}
void converterDecimalParaFracao(int valorInt1, int valorInt2, int valorInt3, int valorInt4, char valorChar) {
        int mmc = calcularMMC(valorInt4, valorInt2);
        int valor1, valor2, numerador1, numerador2, numeradorTotal, denominador;
        int verificador; int mdc; 
        if(valorChar == '+'){
            numeradorTotal = (valorInt1*valorInt4 + valorInt3*valorInt2);
            mmc = valorInt2*valorInt4;
            mdc = calcularMDC(numeradorTotal, mmc);
            if(mdc == 1){
                mdc = 1;
            }else{
                numeradorTotal = numeradorTotal / mdc;
                mmc = mmc / mdc;
            }
            printf("%d/%d = %d/%d\n", (numeradorTotal*mdc), (mmc*mdc), numeradorTotal, mmc);
        }else if(valorChar == '-'){
            numeradorTotal = (valorInt1*valorInt4 - valorInt3*valorInt2); 
            mmc = valorInt2*valorInt4;
            if(mmc < 0){
                mmc *= (-1);
                numeradorTotal *= (-1);
            }  
            mdc = calcularMDC(numeradorTotal, mmc);
            if(mdc == 1 || mdc == -1){
                mdc = 1;
            }else{
                if(mdc < 0){
                    mdc *= (-1);
                }
                numeradorTotal = numeradorTotal / mdc;
                mmc = mmc / mdc;
            }
            printf("%d/%d = %d/%d\n", (numeradorTotal*mdc), (mmc*mdc), numeradorTotal, mmc);
        }else if(valorChar == '*'){
            numeradorTotal = valorInt1*valorInt3;
            denominador = valorInt2*valorInt4;
            mmc = denominador;
            mdc = calcularMDC(numeradorTotal, mmc);
            if(mdc == 1){
                mdc = 1;
            }else{
                numeradorTotal = numeradorTotal / mdc;
                mmc = mmc / mdc;
            }     
            printf("%d/%d = %d/%d\n", (numeradorTotal*mdc), (mmc*mdc), numeradorTotal, mmc);
        }else if(valorChar == '/'){
            numeradorTotal = valorInt1*valorInt4;
            denominador = valorInt2*valorInt3;
            mmc = denominador;
            mdc = calcularMDC(numeradorTotal, mmc);
            if(mdc == 1){
                mdc = 2;
            }else{
                numeradorTotal = numeradorTotal / mdc;
                mmc = mmc / mdc;
            }  
            printf("%d/%d = %d/%d\n", (numeradorTotal*mdc), (mmc*mdc), numeradorTotal, mmc);
        }
}

int main(void) {
    int casos; int valorInt1, valorInt2, valorInt3, valorInt4; char valorChar; double decimal;
    scanf("%d", &casos);
    for(int i = 0; i < casos; i++){
        scanf("%d / %d %c %d / %d", &valorInt1, &valorInt2, &valorChar, &valorInt3, &valorInt4);
        converterDecimalParaFracao(valorInt1, valorInt2, valorInt3, valorInt4, valorChar);
    }
    return 0;
}