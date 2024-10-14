import java.io.*;
import java.util.Scanner;
import java.util.Locale;

public class H5T2{
	
	public static void main( String [] args ){
		
	Payment taulukko[]=new Payment[2];
	CashPayment kateinen = new CashPayment(123);
    CreditcardPayment kortti = new CreditcardPayment (321,"luku");

    taulukko[0]=kateinen;
    taulukko[1]=kortti;
	printPayment(taulukko);
 }
 
 public static void printPayment(Payment[]taulukk){
	 
	 int i;
	 
	 for (i=0; i<taulukk.length; i++){
	 taulukk[i].printPaymentDetails();
	 }
 }
}