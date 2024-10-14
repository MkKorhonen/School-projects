import java.io.*;
import java.util.Scanner;
import java.util.Locale;

public class H3T1_Main {
   
   private static Scanner lukija = new Scanner(System.in).useLocale( new Locale("us", "US") ); //windows saattaa muuten vaatia desimaalipisteen sijaan desimaalipilkkua

   public static void main( String [] args ){
      ProductInfo pi=new ProductInfo("pallo", 15.75, "Hevosen nahkaa");
	  pi.print();
      
      
   }
   public static void printproduct(Product prod){
     System.out.println ("nimi: " + prod.getName() + " \nprice: " + prod.getPrice() + "e");
		
	
   }

	





}