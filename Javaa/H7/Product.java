public class Product implements java.io.Serializable{

    private String name;
    private double price;
	private final int tuoteTunniste;
    
    public Product(final String name_par, final double price_par){
        this.name = name_par;
        this.price = price_par;
		tuoteTunniste = hashCode();
        System.out.println("Luotiin uusi olio: " + name + " hinta:" + price);
		
    }
    
    public void setName( final String name_par){
        this.name = name_par;
    }
    
    public String getName(){
        return this.name;
    }
    
    public void setPrice(final double price_par){
        this.price = price_par;
    }
    
    public double getPrice(){
        return this.price;
    }
	
	public int gettuote(){
		return tuoteTunniste;
	}
   
   public String toString(){
      return "Tuote: " + this.name + " hinta: " + this.price + "\n" +tuoteTunniste;
   }
}