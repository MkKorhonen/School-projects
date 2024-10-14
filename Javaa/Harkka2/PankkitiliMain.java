import java.io.*;
import java.util.Scanner;
import java.util.Locale;

public class PankkitiliMain{
	private static Scanner skannaa = new Scanner(System.in);
	public static void main (String[]args){
	
	String newTiliomistaja;
		double newTilinumero;
		double newsaldo;
		
		System.out.print("Anna tilinomistaja > ");
		newTiliomistaja = skannaa.nextLine();
		System.out.print("Anna tilinumero > ");
		newTilinumero = skannaa.nextDouble();
		System.out.print("Anna saldo > ");
		newsaldo = skannaa.nextDouble();
		Pankkitili tili = new Pankkitili(newTilinumero,newTiliomistaja,newsaldo);
	
	tili.printSaldo();
	
	
	
		
		
	}
}