import java.util.Scanner;
public class MCD {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int n1,n2,mcd;
        System.out.print("Inserisci il primo numero: ");
        n1 = scanner.nextInt();

        System.out.print("Inserisci il secondo numero: ");
        n2 = scanner.nextInt();

        int mcd = calcolo_mcd(numero1, numero2);

        System.out.println("l'MCD di " + n1 + " e " + n2 + " è: " + mcd);

        scanner.close();
    }
    private static int calcolo_mcd(int x, int y) 
    {
        int t,r;
        if ( x < y )
        {
            t = y;
            x = y;
            y t ;
        }

        do 
        {
            r = x % y;

            if (r == 0) 
            {
                return y;
            }

            x = y;
            y = r;
        }while( r != 0);

    return 0;
    }
}