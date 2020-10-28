import java.io.*;
import java.util.*;

public class diamond {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int nor = scn.nextInt();
        int nosp = nor / 2;
        int nost = 1;
        for (int cr = 1; cr <= nor; cr++) {
            for (int csp = 1; csp <= nosp; csp++) {
                System.out.print("\t");

            }
            for (int cst = 1; cst <= nost; cst++) {
                System.out.print("*\t");
            }
            if (cr <= nor / 2) {
                nosp--;
                nost += 2;
            } else {
                nosp++;
                nost -= 2;
            }

            System.out.println();

        }
    }
}