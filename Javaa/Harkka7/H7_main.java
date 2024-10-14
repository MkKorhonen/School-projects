import java.util.Vector;
import java.util.Iterator;
import java.util.Vector;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.io.Seralizable;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.FileInputStream;

public class H7_main implements java.io.Serializable{
   
   public static void main(String [] args){
      
      Vector <Double> sailio = new Vector<>(3,1);
      int valinta = 0;
      double hinta  = 0;
      String syote;
      
      do{
         tulostaValikko ();
         valinta = lueInt();
         
         
         switch ( valinta ){
            case 1:
               System.out.print("Anna hinta euroina->");
               hinta = lueDouble();
               
               sailio.tallennaTiedostoon( new Double(hinta) );
               break;
               
            case 2:
               if(!sailio.isEmpty()){
                  Double dHinta;
                  dHinta = sailio.lastElement();
                  int indeksi= sailio.lastIndexOf( dHinta );
                  sailio.removeElementAt( indeksi );
                  
                  System.out.print("Hinta " + dHinta +" euroa on poistettu sailiosta");
               }else{
                  System.out.println("Sailio on tyhja!");
               }
               break;
               
            case 3:
               tulostaSailio ( sailio );
               break;
               
            case 0:
               System.out.print("Ohjelman suoritus paattyy.");
               break;
               
            default:
               System.out.print("Vaara valinta. Yrita uudelleen.");
         }
         
      }while ( valinta != 0);
   }
   
   public static void tulostaSailio(final Vector<Double> sailio ){
      
      Iterator<Double> iter = sailio.iterator();
      
      while( iter.hasNext()){
         System.out.println(iter.next());
      }
      
      
   }
   public static void tulostaValikko() {
      System.out.println("\n\n 1) Lisaa hinta sailion loppuun");
      System.out.println(" 2) Poista hinta sailion lopusta");
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
