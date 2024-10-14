import java.util.*;
import java.io.*;
import java.io.Seralizable;
import java.io.IOException;!
import java.io.ObjectOutputStream;!
import java.io.FileOutputStream;!

class ProductRepository {
    
    private Vector <Product> sailio;
    
    public ProductRepository(){
        sailio = new Vector<>(3,1);
    }
    
    public void addProduct( Product prod ){
        sailio.addElement( prod );
    }
    
    public Product removeLast(){
        
        if(!sailio.isEmpty()){
            Product dProduct;
            dProduct = sailio.lastElement();
            int indeksi= sailio.lastIndexOf( dProduct );
            sailio.removeElementAt( indeksi );
            return dProduct;
        }
        return null;
        
    }
    
    public void tulosta(){
        
        Iterator<Product> iter = sailio.iterator();
        
        while( iter.hasNext()){
            System.out.println(iter.next());
        }
        
    }
	public boolean tallennaTiedostoon( String tiedostonNimi ){
		try (ObjectOutputStream oOut = new ObjectOutputStream(new FileOutStream("tiedostonNimi.dat"))){
			Product eka = new Product ("maito",3);
			oOut.writeObject(toka);
		
	}
	
	public boolean lueTiedostosta( String tiedostonNimi ){
		
	}
}