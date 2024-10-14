import java.io.*;
import java.util.Scanner;

public class Vt3Main {
   
   private static final Scanner sc = new Scanner(System.in);
   
   public static void main(String [] args){
	   
	   String nimi;
	   String ;
	   String osoite;
	   double maara;
	   double hinta;
	   double hinta2;
	   double hinta3;
	   
	     
		 System.out.print("Anna lehden nimi > ");
         nimi = sc.nextLine();
		 System.out.print("Anna tilaajan nimi > ");
         tilaaja = sc.nextLine();
		 System.out.print("Anna osoite > ");
         osoite = sc.nextLine();
		 System.out.print("Anna kuukausien lukumaara > ");
         maara = sc.nextDouble();
		 System.out.print("Anna tilauksen kuukausihinta > ");
         hinta = sc.nextDouble();
		 sc.nextLine();
		 
		 hinta2=maara*hinta;
		 hinta3=hinta*12*0.8;
		 
		 RegularSubscription tilaus1 = new RegularSubscription(nimi,tilaaja,osoite,maara,hinta2);
		 tilaus1.printInvoice();
		 
		 StandingSubscription tilaus2 = new StandingSubscription(nimi,tilaaja,osoite,hinta3);
		 tilaus2.printInvoice();
		 
   }
}
		 
		 