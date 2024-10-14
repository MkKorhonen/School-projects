import java.io.*;
import java.util.Scanner;
import java.util.Locale;

public class Tontti_main{
	
	public static void main( String [] args ){
		
		Tontti p=new Tontti ("Linnanmaa", "Torilla", 400);
	p.printTonttiDetails();
	
	Rakennus t=new Rakennus (150, 10, "Jorma");
	t.printRakennusDetails();
	
	Asukkaattiedot a=new Asukkaattiedot ("Jorma p", "1.4.1979");
	a.printAsukkaatDetails();
	
	}
}