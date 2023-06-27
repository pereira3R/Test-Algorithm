import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        int valid = 0;
        Scanner scanner = new Scanner(System.in);
        String number = scanner.nextLine();
        for(int i = 0; i < (number.length() -1); i++){
            if(number.charAt(i) == '1'){
                if(number.charAt(i + 1) == '3'){
                    valid = 1; 
                    break;
                }
            }
        }
        if (valid == 1){
            System.out.println(number + " es de Mala Suerte");
        }else{
            System.out.println(number + " NO es de Mala Suerte");
        }
    }
}
