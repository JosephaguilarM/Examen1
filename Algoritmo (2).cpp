Algoritmo problema 1, salario 
   Definir x categoria  "como entero"
   Definir aument, sueldo "Como Real"
   para x=1 Hasta 3 Con paso 1 Hacer
        aumento= 0
		sueldo= 0 
     Escrbir "Ingrese el sueldo"
     Leer sueldo 
     Escribir "Ingresa la categoria:1,2,3"
     leer categoria
     si categoria> 0 y categoria > 3 Entonces
     si categoria==1 Entonces
	     aumento=salario *.15
	     siNo
	       si categoria ==2 Entonces
	        aumento = sueldo*.10
	        SiNo
	           si categoria == 3 Entonces 
	               aumento=salario* .05
	           SiNo
			      FinSi
				  Escribir "Tu aumento es $", aumento
				  Escriir  "Tu sueldo con aumento es: $", sueldo + aumento
			  SiNo 
			    Escribir "Ingresa una opcion correcta"
				x=x - 1
				FinSi
				FinPara
				FinAlgoritmo	    
				        
	               
    
	 

	
	   
	   
     
     
   

