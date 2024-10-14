import java.io.*;
import java.util.Scanner;
import java.util.Locale;

public class H3T2_Main {
   
   private static Scanner lukija = new Scanner(System.in).useLocale( new Locale("us", "US") ); //windows saattaa muuten vaatia desimaalipisteen sijaan desimaalipilkkua

   public static void main( String [] args ){
      RandTable olio = new RandTable (10,10);
	  int luku = 0;
	  while((luku = olio.nextNumber())!=-1) {
		  System.out.print(luku + " ");
	  }
      
      
   }





}