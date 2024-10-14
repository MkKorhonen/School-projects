
public class ProductInfo {



   //attribuutit
private Product tuote;
private String seloste;

   //konstruktorit eli muodostimet
public ProductInfo (String name, double price, String info){
	seloste=info;
	tuote=new Product(name,price);
}
public ProductInfo (Product olio, String info){
	selosta=info;
	tuote=olio;
	
	
}

   //metodit
public void print(){
	System.out.println(tuote.getName() + ": " + tuote.getPrice());
	System.out.println(seloste);

	
}


}

