import java.io.*;
import java.util.Scanner;
import java.util.Locale;

public class Maksu_main{
	
	public static void main( String [] args ){
		
		
	Payment p=new Payment (123.5);
	p.printPaymentDetails();
	
	CashPayment pe=new CashPayment(101);
	pe.printPaymentDetails();
	
	CreditcardPayment po=new CreditcardPayment( 99, "kortti" );
	po.printPaymentDetails();
	
	
	}
}