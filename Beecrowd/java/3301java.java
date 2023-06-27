import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int[] indiv = new int[3];
        for(int i = 0; i < 3; i++){
            indiv[i] = scanner.nextInt();
        }
        int[] auxIndiv = new int[indiv.length];
        System.arraycopy(indiv, 0, auxIndiv, 0, indiv.length);
        
        for(int i = 0; i < 2 ; i++){
            int menor = auxIndiv[i];
            int pos = i;
            for(int j = i+1; j < 3; j++){ 
                if(auxIndiv[j] < menor){
                    menor = auxIndiv[j];
                    pos = j;
                }
            }
            int bkp = auxIndiv[i];
            auxIndiv[i] = auxIndiv[pos];
            auxIndiv[pos] = bkp;
        }

        int posicao = 0;
        for(int i = 0; i < 3; i++){
            if(indiv[i] == auxIndiv[1]){
                posicao = i;
            }
            if(i == (3 - 1)){
                if(posicao == 0){ 
                    System.out.println("huguinho");
                }else if(posicao == 1){
                    System.out.println("zezinho");
                }else if(posicao == 2){
                    System.out.println("luisinho");
                }
            }
        }

    }
}
