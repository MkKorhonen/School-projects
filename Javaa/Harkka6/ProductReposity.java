import java.util.Vector;
import java.util.Iterator;

public class ProductReposity {

	private Vector <Product> sailio;
	
	
	public ProductReposity(){
		sailio = new Vector<Product>();
	}		
		
		
		public void addProduct(Product prod){
			
			 sailio.addElement( prod );
		}
	
		public Product removeLast(){
		
		 if(!sailio.isEmpty()){
                  Product dHinta;
                  dHinta = sailio.lastElement();
                  int indeksi= sailio.lastIndexOf( dHinta );
                  sailio.removeElementAt( indeksi );
                  
                  return dHinta;
               }else{
                  return null;
               }
		}
		public void tulosta(){
			 Iterator<Product> iter = sailio.iterator();
      
      while( iter.hasNext()){
         System.out.println(iter.next());
	  }
		}
		
}