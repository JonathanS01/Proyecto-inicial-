package datospersonales;
import java.awt.*;
import java.util.Scanner;
import javax.swing.*;
import java.awt.Font;
class Datospersonales extends Frame
{  public Label Tdoc,NoId,nom1,nom2,ape1,ape2,dir,tel,cel,eMa,eMi,sexo,mun,dep,titulo,titulo1;
   public TextField TxtNoId, Txtnom1, Txtnom2, TxtApe1, TxtApe2, TxtDir,TxtTel, TxtCel, TxteMa, TxteMi, TxtMun, TxtDep;
   public CheckboxGroup Genero;
   private List ListGenV,set2List,listaActiva,resultList;
	public Checkbox chk1,chk2,chk3,chk4;
           TextArea t1,t2;
           Choice LtipDoc;
           Button BtnLimp = new Button();
           Button BtnMod =new Button();
           //List  ListGen,LtipDoc, Lbar;     
   public Datospersonales()
	{ /*//titulo1 = new Label("GESTION Y SEGUIMIENTO DE APRENDICES",Label.CENTER);
            titulo1 = new Label("GESTION Y SEGUIMIENTO APRE" ,Label.CENTER);      titulo1.setFont(new java.awt.Font("Tahoma",3,27));
            titulo1.setForeground(Color.white);
            titulo1.setBounds(5,60,620,20);
            this.add(titulo1);        
             //crear objetos con el operador new:*/
            Button BtnPri =new Button();Button BtnAnt =new Button();Button BtnSte =new Button();
            Button BtnUlt =new Button();Button BtnNue =new Button();Button BtnMod =new Button();
            Button BtnEli =new Button();Button BtnRen =new Button();Button BtnBus =new Button();
            Button BtnExp =new Button();Button BtnImp =new Button();Button BtnCan =new Button();
            //Button BtnSal =new Button();
            //Button BtnLimp =new Button();

          /*NoId=new Label ("Numero Id");  this.add(NoId);NoId.setBounds(50,130,70,20); 	NoId.setForeground(Color.orange);
           TxtNoId=new TextField (""); this.add(TxtNoId);	TxtNoId.setBounds(150,130,300,20);TxtNoId.setForeground(Color.orange);
           nom1=new Label ("Primer Nombre");	this.add(nom1); nom1.setBounds(50,160,90,20);
           Txtnom1=new TextField ("julio");		 this.add(Txtnom1);	Txtnom1.setBounds(150,160,300,20);
           nom2=new Label ("Segundo Nombre"); this.add(nom2);nom2.setBounds(50,190,100,20);
           Txtnom2=new TextField ("");		 this.add(Txtnom2);	Txtnom2.setBounds(150,190,300,20);
           ape1=new Label ("Primer Apellido");	this.add(ape1);     ape1.setBounds(50,220,100,20);
           TxtApe1=new TextField ("");		 this.add(TxtApe1);  TxtApe1.setBounds(150,220,300,20);
           ape2=new Label ("Segundo Apellido");this.add(ape2);   ape2.setBounds(50,250,100,20);
           TxtApe2=new TextField ("");		 this.add(TxtApe2);	 TxtApe2.setBounds(150,250,300,20);
           dir=new Label ("Direccion");	          this.add(dir);            dir.setBounds(50,280,100,20);
           TxtDir=new TextField ("");		   this.add(TxtDir);	       TxtDir.setBounds(150,280,300,20);
           mun=new Label ("Municipio");	          this.add(mun);    mun.setBounds(50,310,100,20);
           TxtMun=new TextField ("");		   this.add(TxtMun);    TxtMun.setBounds(150,310,300,20);
           dep=new Label ("Departamento");	          this.add(dep);    dep.setBounds(50,340,100,20);
           TxtDep=new TextField ("");		   this.add(TxtDep);	  TxtDep.setBounds(150,340,300,20);
           tel=new Label ("Telefono");		           this.add(tel);	     	  tel.setBounds(50,370,100,20);
           TxtTel=new TextField ("");		   this.add(TxtTel);	       TxtTel.setBounds(150,370,300,20);
           cel=new Label ("Celular");		           this.add(cel);	    	 cel.setBounds(50,400,100,20); 
           TxtCel=new TextField ("");		  this.add(TxtCel);		     TxtCel.setBounds(150,400,300,20);
           eMa=new Label ("Email");		        this.add(eMa);		   eMa.setBounds(50,430,100,20);
           TxteMa=new TextField ("");		 this.add(TxteMa);	     TxteMa.setBounds(150,430,300,20);
           sexo=new Label ("Sexo"); this.add(sexo); sexo.setBounds(50,460,80,20);

           Genero=new CheckboxGroup();
           chk1=new Checkbox ("Hombre",Genero,false);  this.add(chk1); chk1.setBounds(150,460,90,20);
           chk2=new Checkbox ("Mujer",Genero,true);  this.add(chk2);       chk2.setBounds(240,460,100,20);
        
        LtipDoc= new Choice();
        LtipDoc.addItem("Cedula de Ciudadania"); 
        LtipDoc.addItem("Cedula de Extranjeria"); 
        LtipDoc.addItem("Targeta de Identidad");   
        LtipDoc.addItem("Libreta Militar"); 
        LtipDoc.addItem("Registro civil"); 
        LtipDoc.addItem("Pasaporte"); 
        LtipDoc.addItem("niup");
        this.add(LtipDoc);LtipDoc.setBounds(150,100,300,20);       
		
        Tdoc=new Label ("Tipo Documento");this.add(Tdoc);Tdoc.setBounds(50,100,100,20);       
        
        ListGenV= new List(3,true);
        ListGenV.addItem("Analisis de Software");  
        ListGenV.addItem("Desarrollo de Software");
        ListGenV.addItem("Ofimatica");                 
        ListGenV.addItem("Informatica");      
        ListGenV.addItem("Mantenimiento de Computadores"); 
        ListGenV.addItem("Multimediales");
        ListGenV.addItem("java");
        ListGenV.setBounds(460,240,150,100);
        this.add(ListGenV);*/

	  BtnPri.setBounds(new Rectangle(0,0,206,206));	  
	  BtnPri.setForeground(Color.blue);     
	  BtnPri.setLabel("SUMA");      
	  BtnPri.setBackground(Color.white);
	  BtnPri.setFont(new java.awt.Font("Arial",1,12));
	  this.add(BtnPri,null);
          
	 // BtnAnt.setBounds(new Rectangle(140,490,80,25));BtnAnt.setForeground(Color.black);	  BtnAnt.setLabel("ANTERIOR");	  this.add(BtnAnt,null);BtnAnt.setBackground(Color.orange);BtnAnt.setFont(new java.awt.Font("Arial",1,12));
	//  BtnSte.setBounds(new Rectangle(230,490,80,25));BtnSte.setForeground(Color.black);      BtnSte.setLabel("SIGUIENTE");      this.add(BtnSte,null);BtnSte.setBackground(Color.orange);BtnSte.setFont(new java.awt.Font("Arial",1,12));
         BtnUlt.setBounds(new Rectangle(411,381,206,206));BtnUlt.setForeground(Color.blue);      BtnUlt.setLabel("DIVISION");      this.add(BtnUlt,null);BtnUlt.setBackground(Color.white);BtnUlt.setFont(new java.awt.Font("Arial",1,12));
        // BtnNue.setBounds(new Rectangle(410,490,80,25));BtnNue.setForeground(Color.black);      BtnNue.setLabel("NUEVO");      this.add(BtnNue,null);BtnNue.setBackground(Color.orange);BtnNue.setFont(new java.awt.Font("Arial",1,12));
        // BtnMod.setBounds(new Rectangle(500,490,80,25));BtnMod.setForeground(Color.black);      BtnMod.setLabel("MODIFICAR");      this.add(BtnMod,null);BtnMod.setBackground(Color.orange);BtnMod.setFont(new java.awt.Font("Arial",1,12));
         BtnEli.setBounds(new Rectangle(411,0,206,206));	BtnEli.setForeground(Color.blue);      BtnEli.setLabel("RESTA");      this.add(BtnEli,null);BtnEli.setBackground(Color.white);BtnEli.setFont(new java.awt.Font("Arial",1,12));
        // BtnRen.setBounds(new Rectangle(140,520,80,25));BtnRen.setForeground(Color.white);      BtnRen.setLabel("RENOMBRAR");      this.add(BtnRen,null);BtnRen.setBackground(Color.darkGray);BtnRen.setFont(new java.awt.Font("Arial",1,12));
        // BtnBus.setBounds(new Rectangle(230,520,80,25));BtnBus.setForeground(Color.white);      BtnBus.setLabel("BUSCAR");      this.add(BtnBus,null);BtnBus.setBackground(Color.darkGray);BtnBus.setFont(new java.awt.Font("Arial",1,12));
         BtnExp.setBounds(new Rectangle(0,381,206,206));BtnExp.setForeground(Color.blue);      BtnExp.setLabel("MULTIPLICACION");      this.add(BtnExp,null);BtnExp.setBackground(Color.white);BtnExp.setFont(new java.awt.Font("Arial",1,12));
        // BtnImp.setBounds(new Rectangle(410,520,80,25));BtnImp.setForeground(Color.green);      BtnImp.setLabel("IMPRIMIR");      this.add(BtnImp,null);BtnImp.setBackground(Color.darkGray);BtnImp.setFont(new java.awt.Font("Arial",1,12));
         //BtnCan.setBounds(new Rectangle(500,520,80,25));BtnCan.setForeground(Color.black);      BtnCan.setLabel("CANCELAR");      this.add(BtnCan,null);BtnCan.setBackground(Color.orange);BtnCan.setFont(new java.awt.Font("Arial",1,12));
        // BtnSal.setBounds(new Rectangle(230,550,80,25));BtnSal.setForeground(Color.white);      BtnSal.setLabel("SALIR");      this.add(BtnSal,null);BtnSal.setBackground(Color.black);BtnSal.setFont(new java.awt.Font("Arial",1,12));
        // BtnLimp.setBounds(new Rectangle(320,550,80,25));BtnLimp.setForeground(Color.white);	  BtnLimp.setLabel("LIMPIAR");	  this.add(BtnLimp,null);  	   BtnLimp.setBackground(Color.black);BtnLimp.setFont(new java.awt.Font("Arial",1,12));
	//BtnLimp.setFont(new java.awt.Font("Dialog",1,16));  
    } 
	//principal
           public static void main(String args[])
            {   
             
              int H = 620;int V = 590;
             Datospersonales d=new Datospersonales();
             d.setLayout(null);
             //d.setSize(620,590);
             d.setTitle("OPERACIONES BASICAS");
             d.setBackground(Color.red);				  
             //d.pack();
             //d.setLocationRelativeTo(null);
             d.setResizable(false);
             d.resize(H,V);
             //d.setColor(Color.blue);
             d.show();	
            } 
	             //cerrar la ventana con la x del formulario
           public boolean handleEvent(Event e)
               { 
               if (e.id == Event.WINDOW_DESTROY)
                  System.exit(0);
                  return super.handleEvent(e);        
               }  
                 //Cada vez que el usuario pulsa un botón, se produce un evento. 
            	   //Los eventos de pulsación de un botón se pueden capturar sobrecargando el método action():         
          public boolean action(Event evt, Object arg)
               { 
                   if (evt.target instanceof TextField)
                       { 
                         //TextField tTxtnom1 = (TextField) evt; 
                         Txtnom1.setText(" "); 
                       } 		   				   		
                    if (evt.target instanceof Button)
                       {
                          String opcion=(String)arg;   		
                       if(evt.target == BtnLimp)//targert significa llegada
                           { //llama a la correspondiente funcion
                               this.limpiartbx();
                              // this.limpiartbx1();
                           }   
                       if(opcion=="MODIFICAR")
                           { 	//llama a la correspondiente funcion
                                  this.tablas();
                           }
                       if(opcion=="MULTIPLICACION")
                           { 	//llama a la correspondiente funcion
                                  this.mult();
                           }                           
                       if(opcion=="SALIR")
                           {  //llama a la correspondiente funcion
                              //removeAll();
                              //setVisible(false);
                              //System.exit(0);
                              //JOptionPane.showConfirmDialog(null, "Realmente desea salir de Hola Swing?", "Confirmar salida", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
                           int confirmar = JOptionPane.showConfirmDialog(null, "¿Desea salir del programa?");
                           switch (confirmar) 
                              {
                              case JOptionPane.CANCEL_OPTION:
                                 JOptionPane.showMessageDialog(null,"no sales");
                                 break;
                              case JOptionPane.NO_OPTION:
                                 JOptionPane.showMessageDialog(null,"te has quedado");
                                 break;
                              default:
                                 System.exit(0);
                              }    
                           }
                        if(opcion=="LIMPIAR")
                           { 	
                                  TxtNoId.setText(" ");Txtnom1.setText(" ");//llama a la correspondiente funcion
                           } 
                        if(opcion=="NUEVO")
                           { 	
                                  this.potencia();
                           } 
                        if(opcion=="SUMA")
                           { 	
                                  this.imprimir();
                           } 
                        if(opcion=="RESTA")
                           { 	
                                  this.resta();
                           } 
                        if(opcion=="DIVISION")
                           { 	
                                  this.div();
                           } 
                        if("ANTERIOR".equals(opcion))
                           { 	
                                  this.chingo();
                           } 
                        if(opcion=="CANCELAR")
                           { 	//llama a la correspondiente funcion
                                  JOptionPane.showMessageDialog(null,"Oprimiste Cancelar");
                            //DatosPersonales1 Prueba=new DatosPersonales1();	  
                                  Datospersonales d=new Datospersonales();
                             //this.DatosPersonales1();          	  
                           }    
                        if("BUSCAR".equals(opcion))
                           { //llama a la correspondiente funcion
                              int numero1,numero2,suma;
                              String N=JOptionPane.showInputDialog("ingrese el primer numero");
                              numero1=Integer.parseInt(N);
                              String N1=JOptionPane.showInputDialog("ingrese el segundo numero");
                              numero2=Integer.parseInt(N1);
                              suma=numero1+numero2;
                              System.out.println(suma);
                              JOptionPane.showMessageDialog(null,numero1+"  mas  "+numero2+" = "+suma+"\n");			
                           }           	  
                       }
                if (evt.target instanceof Checkbox)
                  { 	
                     if(chk1.getState())
                       { //llama a la correspondiente funcion
                         JOptionPane.showMessageDialog(null,"jiji elegiste Hombre");
                       }
                     if(chk2.getState())
                       { //llama a la correspondiente funcion
                         JOptionPane.showMessageDialog(null,"jeje elegiste Mujer");
                       }      	
                  }            
                  return true; 
               }//fin action
	public void limpiartbx() 
			{	TxtNoId.setText(" ");Txtnom1.setText(" ");Txtnom2.setText(" ");TxtApe1.setText(" ");TxtApe2.setText(" ");TxtDir.setText(" ");
				TxtTel.setText(" ");	TxtCel.setText(" ");	TxteMa.setText(" ");	TxteMi.setText(" ");	TxtMun.setText(" ");	TxtDep.setText(" ");
	        }
       private static void potencia()
         {
            double  x,y,z;  
            String N=JOptionPane.showInputDialog("ingrese el numero");
            x=Double.parseDouble(N);
            String N1=JOptionPane.showInputDialog("ingrese la potencia");
            y=Double.parseDouble(N1); 
            z = Math.pow(x, y); 
            JOptionPane.showMessageDialog(null,x+"  Elevado a la  "+y+" = "+z+"\n");
            System.out.println(z); 
         }        
	private static void tablas()
		    {	int numero1,numero2,resultado;
			String N=JOptionPane.showInputDialog("¿Cual tablita de multiplicar quieres ver?");
			numero2=Integer.parseInt(N);
                      for(numero1=1;numero1<=10;numero1++)
                         { 
                         resultado=numero1*numero2;
                         System.out.println(resultado);
                         JOptionPane.showMessageDialog(null,numero1+"  x  "+numero2+" = "+resultado+"\n");
                         }
                    }
       public void chingo() 
       {
         String texto=JOptionPane.showInputDialog("Introduce un codigo de la tabla ASCII");
        //Pasamos el String a int
        int codigo=Integer.parseInt(texto);
        //Pasamos el codigo a caracter
        char caracter=(char)codigo;
        JOptionPane.showMessageDialog(null,caracter);
        //System.out.println(caracter);
       }
//Se desea guardar los sueldos de 5 operarios en un vector. 
//Realizar la creación y carga del vector en el constructor.
    public void imprimir() 
      {       
         int  x,y,z;  
            String N=JOptionPane.showInputDialog("ingrese el numero");
            x=Integer.parseInt(N);
            String N1=JOptionPane.showInputDialog("ingrese la potencia");
            y=Integer.parseInt(N1); 
            z =x+y; 
            JOptionPane.showMessageDialog(null,x+" + "+y+" = "+z+"\n");
            System.out.println(z); 
      }
    public void resta() 
      {       
         int  x,y,z;  
            String N=JOptionPane.showInputDialog("ingrese el numero");
            x=Integer.parseInt(N);
            String N1=JOptionPane.showInputDialog("ingrese la potencia");
            y=Integer.parseInt(N1); 
            z =x-y; 
            JOptionPane.showMessageDialog(null,x+" - "+y+" = "+z+"\n");
            System.out.println(z); 
      }
    
    public void mult() 
      {	
         int  x,y,z;  
            String N=JOptionPane.showInputDialog("ingrese el numero");
            x=Integer.parseInt(N);
            String N1=JOptionPane.showInputDialog("ingrese la potencia");
            y=Integer.parseInt(N1); 
            z =x*y; 
            JOptionPane.showMessageDialog(null,x+" * "+y+" = "+z+"\n");
            System.out.println(z);               
      }
    public void div() 
      {	
         double  x,y,z;  
            String N=JOptionPane.showInputDialog("ingrese el numero");
            x=Double.parseDouble(N);
            String N1=JOptionPane.showInputDialog("ingrese la potencia");
            y=Double.parseDouble(N1); 
            z = x/y; 
            JOptionPane.showMessageDialog(null,x+" / "+y+" = "+z+"\n");
            System.out.println(z);                
      }


    
    
    
}