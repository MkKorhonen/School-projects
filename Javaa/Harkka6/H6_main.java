import java.util.Vector;
import java.util.Iterator;
import java.util.Vector;
import java.util.InputMismatchException;
import java.util.Scanner;

public class H6_main {
	
   
   public static void main(String [] args){
	   
	   Scanner sc = new Scanner(System.in);
      
      ProductReposity pro = new ProductReposity();
      int valinta = 0;
      double hinta  = 0;
      String syote;
	  String nimi;
      
      do{
         tulostaValikko ();
         valinta = lueInt();
         
         
         switch ( valinta ){
            case 1:
			  System.out.print("Anna tuotteen nimi->");
               syote = sc.nextLine();
			  System.out.print("Anna hinta euroina->");
               hinta = lueDouble();
			   
			   Product prod = new Product(syote,hinta);
			   pro.addProduct(prod);
               break;
               
            case 2:
              pro.removeLast();
               break;
               
            case 3:
               pro.tulosta ();
               break;
               
            case 0:
               System.out.print("Ohjelman suoritus paattyy.");
               break;
               
            default:
               System.out.print("Vaara valinta. Yrita uudelleen.");
         }
         
      }while ( valinta != 0);
   }
   
  
      
      
   
   public static void tulostaValikko() {
      System.out.println("\n\n 1) Lisaa tuote sailion loppuun");
      System.out.println(" 2) Poista tuote sailion lopusta");
      System.out.println(" 3) Tulosta sailion sisalto");
      System.out.println(" 0) Lopeta");
      System.out.print("\nValintasi > ");
   }
   
   public static int lueInt(){
      Scanner sc = new Scanner(System.in);
      boolean ok = false;
      int luku = 0;
      
      do {
         
         try {
            luku = sc.nextInt();
            sc.nextLine();
            ok = true;
         }catch( InputMismatchException ime ){
            sc.nextLine();
            System.out.print("Virhe, yrita uudelleen > ");
         }
         
      }while(!ok);
      
      return luku;
      
   }
   
   public static double lueDouble(){
      Scanner sc = new Scanner(System.in);
      boolean ok = false;
      double luku = 0.0;
      
      do {
         
         try {
            luku = sc.nextDouble();
            sc.nextLine();
            ok = true;
         }catch( InputMismatchException ime ){
            sc.nextLine();
            System.out.print("Virhe, yrita uudelleen > ");
         }
         
      }while(!ok);
      
      return luku;
      
   }
}
