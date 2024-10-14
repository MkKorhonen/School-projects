import java.util.Vector;
import java.util.Iterator;
import java.util.Vector;
import java.util.InputMismatchException;
import java.util.Scanner;

public class H6_main {
   
   public static void main(String [] args){
      Scanner sc = new Scanner(System.in);

      ProductRepository sailio = ProductRepository.getInstance();
      int valinta = 0;
      double hinta  = 0;
      String syote;
	  String tuote;
	  String tuote2;
      
      do{
         tulostaValikko ();
         valinta = lueInt();
         
         
         switch ( valinta ){
            case 1:
               System.out.print("Anna tuotteen nimi -> ");
               syote = sc.nextLine();
               
               System.out.print("Anna hinta euroina->");
               hinta = lueDouble();
               
               sailio.addProduct( new Product(syote, hinta) );
               break;
               
            case 2:
               Product p = null;
               if((p=sailio.removeLast())!= null){
                  
                  
                  System.out.print( p +"  on poistettu sailiosta");
               }else{
                  System.out.println("Sailio on tyhja!");
               }
               break;
               
            case 3:
               ProductRepository repo = ProductRepository.getInstance();
               repo.tulosta();
               break;
			   
            case 4:
			System.out.print("Anna tiedoston nimi -> ");
               tuote = sc.nextLine();
			   sailio.tallennaTiedostoon(tuote);
			   break;
			   
			case 5:
			System.out.print("mista luetaan -> ");
               tuote2 = sc.nextLine();
			    sailio.lueTiedostosta(tuote2);
				break;
                  			
            case 0:
               System.out.print("Ohjelman suoritus paattyy.");
               break;
               
            default:
               System.out.print("Vaara valinta. Yrita uudelleen.");
         }
         
      }while ( valinta != 0);
   }
   
   /*public static void tulostaSailio(final Vector<Double> sailio ){
      
      Iterator<Double> iter = sailio.iterator();
      
      while( iter.hasNext()){
         System.out.println(iter.next());
      }
      
      
   }*/
   public static void tulostaValikko() {
      System.out.println("\n\n 1) Lisaa tuote sailion loppuun");
      System.out.println(" 2) Poista tuote sailion lopusta");
      System.out.println(" 3) Tulosta sailion sisalto");
	  System.out.println(" 4) Tallenna tiedostoon sisalto");
	  System.out.println(" 5) Lue tiedoston sisalto");
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
