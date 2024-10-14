import java.util.Scanner;
public class Harkka2{
	private static Scanner skannaa = new Scanner(System.in);
	public static void main (String[]args){
		
		int koko;
		System.out.print("Anna Taulun koko > ");
		koko = skannaa.nextInt();
		skannaa.nextLine();
		Product tuotteet[] = new Product [koko];
		
		
	    /*Product tuote = new Product();
		System.out,println("Anna tuotteen nimi > ");
		String temp = input.nextLine();
		tuote.setName(temp);
		*/
	
	    readProducts(tuotteet);
		printProducts(tuotteet);
		
	}
	public static void printproduct(Product prod){
     System.out.println ("nimi: " + prod.getName() + " \nprice: " + prod.getPrice() + "e");
		
	}
	public static Product readProduct( ){
		String newname;
		double newPrice;
		System.out.print("Anna tuotteen nimi > ");
		newname = skannaa.nextLine();
		System.out.print("Anna tuotteen hinta > ");
		newPrice = skannaa.nextDouble();
		skannaa.nextLine();
		Product tuote = new Product(newname,newPrice);
		return tuote;
	}
	public static void readProducts(Product[]products){
		System.out.println("Tuotteet: ");
		
		for (int i = 0; i<products.length; i++){
			products[i] = readProduct();
			
			}
	}  
	public static void printProducts( Product[] tuotteet){
		for (int i = 0; i<tuotteet.length; i++){
			printproduct(tuotteet[i]);
			
			}
	}
}