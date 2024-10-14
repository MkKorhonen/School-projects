import java.io.*;
import java.util.Scanner;


public class Tontti_main{
	
	private static final Scanner sc = new Scanner(System.in);
	
	public static void main( String [] args ){
		
	   String nimi;
	   String Tontinnimi;
	   String osoite;
	   String asukkaat;
	   String tyyppi;
	   double pintaala;
	   double asunnp;
	   double Hmaara;
	   
	   System.out.print("Anna tontin nimi > ");
         Tontinnimi = sc.nextLine();
		 System.out.print("Anna tontin osoite > ");
         osoite = sc.nextLine();
		 System.out.print("Anna tontin pinta-ala > ");
         pintaala = sc.nextDouble();
		 System.out.print("Anna Rakennuksen tyyppi > ");
         tyyppi = sc.nextLine();
		 sc.nextLine();
		 System.out.print("Anna Asuntojen pinta-ala > ");
         asunnp = sc.nextDouble();
		 System.out.print("Anna Rakennuksen asuntojen maara > ");
         Hmaara = sc.nextDouble();
		 System.out.print("Anna asukkaat > ");
         asukkaat = sc.nextLine();
		 System.out.print("Anna asukkaan nimi > ");
         nimi = sc.nextLine();
		 sc.nextLine();
		 
		 //Rakennus tiedot1 = new Rakennus (Tontinnimi, osoite, pintaala, tyyppi, asunnp, Hmaara, asukkaat);
         //tiedot1.printRakennusDetails();

         Asukkaattiedot tiedot2 = new Asukkaattiedot (Tontinnimi, osoite, pintaala, tyyppi, asunnp, Hmaara, asukkaat, nimi);
         tiedot2.printAsukkaatDetails();		 
		
		
	
	
	}
}