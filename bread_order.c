//Date created: 8/11/2021
//Author (s): Ibnu Ameerul Bin Halim, Pretty Malthasia Anak Lingeh
//Last modified: 27/11/2021

//Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	//List of variables used
	int ordertype,brdtypquantt,i;
	int numunit1=0,numunit2=0,numunit3=0,numunit4=0;
	int numfillchoc3=0,numfillcoco3=0,numfillpand3=0,numfillchic3=0,numfillbutt3=0;
	int numfillchoc4=0,numfillcoco4=0,numfillpand4=0,numfillchic4=0,numfillbutt4=0;
	int cont,choice3,choice4,addfill3,addfill4,breadtype[4];
	float subtotal1=0,subtotal2=0,subtotal3=0,subtotal4=0,total;
	
	//Time function
	  time_t t; //not a primitive data type
	 time(&t);
    printf(" %s\n\n", ctime(&t));
	
	
	
	// The display of the Gebu Bakery Shop menu table.
	
	printf("\t\t\t\t                                                 WELCOME !!!!                                            \n\n");
	printf("\t\t\t\t                                             GEBU BAKERY SHOP                                              \n");
	printf("\t\t\t\t                                       Bread Types and Pricing Detail                                      \n");
	
	
	printf("\t\t\t\t  ________________________________________________________________________________________________________ \n");
	printf("\t\t\t\t  |                       |                            |                          |                       |\n");
	printf("\t\t\t\t  |  Bread Type           |  Unit Price(self-collect)  |  Unit Price(Food Panda)  |  Filling Price/unit   |\n");
	printf("\t\t\t\t  |-----------------------|----------------------------|--------------------------|-----------------------|\n");
	printf("\t\t\t\t  |1) White loaf          |         RM5.00             |          RM5.50          |-   RM1.20 (Chocolate) |\n");
	printf("\t\t\t\t  |-----------------------|----------------------------|--------------------------|-   RM1.50 (Coconut)   |\n");
	printf("\t\t\t\t  |2) Wheat loaf          |         RM5.50             |          RM6.00          |-   RM1.00 (Pandan)    |\n");
	printf("\t\t\t\t  |-----------------------|----------------------------|--------------------------|-   RM1.75 (Chicken)   |\n");
	printf("\t\t\t\t  |3) Bun + filling       |     RM2.00 (no filling)    |          RM2.50          |-   RM1.00 (Butter)    |\n");
	printf("\t\t\t\t  |-----------------------|----------------------------|--------------------------|                       |\n");
	printf("\t\t\t\t  |4) Croissant + filling |     RM3.00 (no filling)    |          RM3.50          |                       |\n");  
	printf("\t\t\t\t  |_______________________|____________________________|__________________________|_______________________|\n");
	
	printf("\n");
	
	Order:
		

	printf("Enter type of order (1-Self-Collect, 2-Food Panda): ");  
	scanf("%d", &ordertype);
	
	//For Self-Collect
	if(ordertype==1){
		
	Breadtypequantity:
				
	printf("Enter how many bread type to order: ");
	scanf("%d", &brdtypquantt);
	
	
	if(brdtypquantt!=1 && brdtypquantt!=2 && brdtypquantt!=3 && brdtypquantt!=4){
		
		printf("Your choice is invalid! There are only four types of bread which are 1-White Loaf, 2-Wheat Loaf, 3-Bun, 4-Croissant.\n");
		system("pause");
		//invalid inputs for bread type quantity will prompt the user back
		goto Breadtypequantity;
	}
	
	
	for(i=1; i<=brdtypquantt; i++){
		
		printf("\nbreadtype #%d\n", i);
		printf("\nEnter the bread type (1-White Loaf, 2-Wheat Loaf, 3-Bun, 4-Croissant): ");
     scanf("%d", &breadtype[i]);
     
     if(breadtype[i]==1){
     	
     	printf("Enter number of unit: ");
     	scanf("%d",&numunit1);
     	subtotal1= 5.00 * (float)numunit1;
     	printf("Sub-Total #%d: RM %.2f \n",i,subtotal1);
	 }
	 
	 else if(breadtype[i]==2){
	 	
	 	printf("Enter number of unit: ");
     	scanf("%d",&numunit2);
     	subtotal2= 5.50 * (float)numunit2;
     	printf("Sub-Total #%d: RM %.2f \n",i,subtotal2);    
	 }
	 
	 else if(breadtype[i]==3){
	 	
	 	
	 printf("enter bread quantity: ");
	scanf("%d", &numunit3);
	

	printf("Do you want to add filling? 1-yes,2-no: ");
	scanf("%d", &addfill3);
	
	
	if(addfill3==2){
		goto partB;
	
	}
	
	do{
		printf("Choose filling flavourr(1-Chocolate, 2-Coconut, 3-Pandan, 4-Chicken, 5-Butter): ");
	    scanf("%d", &choice3);
	    
	    switch(choice3){
		
		case 1 :
			printf("Enter number of unit for Chocolate filling: ");
			scanf("%d", &numfillchoc3);
			break;
			
		case 2 :
			printf("Enter number of unit for Coconut filling: ");
			scanf("%d", &numfillcoco3);
			break;
			
		case 3 :
		    printf("Enter number of unit for Pandan filling: ");
		    scanf("%d", &numfillpand3);
		    break;
		    
		case 4 :
			printf("Enter number of unit for Chicken filling: ");
			scanf("%d", &numfillchic3);
			break;
			
		case 5 :
			printf("Enter number of unit for Butter filling: ");
			scanf("%d", &numfillbutt3);
			break;
			
		default : 
		printf("Invalid input!!\n");	
		
             }
	    
		
	
	
		
		if((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3)<numunit3){
			
		printf("Do you want to add more fillings? 1-yes,2-no: ");
		scanf(" %d", &cont);
		
		// if user dont want to add fillings, no. of unit of fillings will be calculated
		if(cont==2|| ((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3))>=numunit3){
			goto partA;
		}
	
		}
		
	// Program will stop when user enter unit of fillings which exceeds the quantity of bread entered earlier
		else if(((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3))>numunit3){
			printf("your unit of fillings exceed the quantity of bread!\n");
			return 0;
		}
		
	
		
		}
		
		while((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3)<numunit3);
		
		
		partA:
			if((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3)<=numunit3){
				printf("Total unit of fillings is %d\n", numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3);
			}
			
		partB:
			subtotal3 = (2.0*numunit3) + (1.2*numfillchoc3) + (1.5*numfillcoco3) + (1.0*numfillpand3) + (1.75*numfillchic3) + (1.0*numfillbutt3);
			printf("Sub-Total #%d: RM %2.2f\n",i,subtotal3);
			
     		
		
	 	
	 }
	 
	 
	 else if(breadtype[i]==4){
	 	
	 printf("enter bread quantity: ");
	scanf("%d", &numunit4);
	
	printf("Do you want to add filling? 1-yes,2-no: ");
	scanf("%d", &addfill4);
	if(addfill4==2){
		goto partD;
	
	}
	
	do{
		printf("Choose filling flavourr(1-Chocolate, 2-Coconut, 3-Pandan, 4-Chicken, 5-Butter): ");
	    scanf("%d", &choice4);
	    
	    switch(choice4){
		
		case 1 :
			printf("Enter number of unit for Chocolate filling: ");
			scanf("%d", &numfillchoc4);
			break;
			
		case 2 :
			printf("Enter number of unit for Coconut filling: ");
			scanf("%d", &numfillcoco4);
			break;
			
		case 3 :
		    printf("Enter number of unit for Pandan filling: ");
		    scanf("%d", &numfillpand4);
		    break;
		    
		case 4 :
			printf("Enter number of unit for Chicken filling: ");
			scanf("%d", &numfillchic4);
			break;
			
		case 5 :
			printf("Enter number of unit for Butter filling: ");
			scanf("%d", &numfillbutt4);
			break;
			
		default : 
		printf("Invalid input!!\n");	
		
             }
	    
		
	
	
		
		if((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4)<numunit4){
			
		printf("Do you want to add more fillings? 1-yes,2-no: ");
		scanf(" %d", &cont);
		
			// if user dont want to add fillings, no. of unit of fillings will be calculated
		if(cont==2|| ((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4))>=numunit4){
			goto partC;
		}
	
		}
		
			// Program will stop when user enter unit of fillings which exceeds the quantity of bread entered earlier
		else if(((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4))>numunit4){
			printf("your unit of fillings exceed the quantity of bread!\n");
			return 0;
		}
		
	
		
		}
		
		while((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4)<numunit4);
		
		
		partC:
			if((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4)<=numunit4){
				printf("Total unit of fillings is %d\n", numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4);
			}
		
			
		partD:
			subtotal4 = (3.0*numunit4) + (1.2*numfillchoc4) + (1.5*numfillcoco4) + (1.0*numfillpand4) + (1.75*numfillchic4) + (1.0*numfillbutt4);
			printf("Sub-Total #%d: RM %2.2f\n",i,subtotal4);
			
     		
		
	 	
	 }
     	
		 else{
		 	
		 	
		 	printf("Your choice is not in the option!\n");
		 	return 0;
		 }			
				 
     		total = subtotal1+subtotal2+subtotal3+subtotal4;		
			
     		
	}
	
	if(brdtypquantt==1 || brdtypquantt==2 || brdtypquantt==3 || brdtypquantt==4){
		
			printf("\n\nOrder Summary Details:\n");
	printf("Total bread type ordered: %d\n", brdtypquantt);
	
	

         
         for(i=1;i<=brdtypquantt;i++){
         	
         		printf("\nbreadtype #%d\n", i);
         		
         		 if(breadtype[i]==1 ){
         		 	
         		 	printf("Type : White Loaf\n");
         		 	printf("Number of unit: %d \n", numunit1);
         		 	printf("Subtotal #%d : RM %2.2f\n", i, subtotal1);
         		 	
         		 	
				  }
				   if(breadtype[i]==2 ){
         		 	
         		 	printf("Type : Wheat Loaf\n");
         		 	printf("Number of unit: %d \n", numunit2);
         		 	printf("Subtotal #%d : RM %2.2f\n", i, subtotal2);
         		 	
         		 	
				  }
				  if(breadtype[i]==3 ){
         		 	
         		 	
         		 	printf("Type : Bun\n");
         		 	printf("Number of unit: %d \n", numunit3);
         		 	
         		 	if(addfill3!=2){
         		 	printf("Filling flavour: ");
         		       
         		        
			if(numfillchoc3 != 0)
			{
				printf("Chocolate(%d) ", numfillchoc3);
			}
			if((numfillchoc3 > 0) && (numfillcoco3 > 0))
			{
				printf("+");
			}
			if((numfillchoc3 > 0) && (numfillpand3 > 0))
			{
				printf("+");
			}
			if((numfillchoc3 > 0) && (numfillchic3 > 0))
			{
				printf("+");
			}
			if((numfillchoc3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillcoco3 != 0)
			{
				printf(" Coconut(%d) ", numfillcoco3);
			}
			if((numfillcoco3 > 0) && (numfillpand3 > 0))
			{
				printf("+");
			}
			if((numfillcoco3 > 0) && (numfillchic3 > 0))
			{
				printf("+");
			}
				if((numfillcoco3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillpand3 != 0)
			{
				printf(" Pandan(%d) ", numfillpand3);
			}
			if((numfillpand3 > 0) && (numfillchic3 > 0))
			{
				printf("+");
			}
			if((numfillpand3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillchic3 != 0)
			{
				printf(" Chicken(%d) ", numfillchic3);
			}
			if((numfillchic3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillbutt3 != 0)
			{
				printf(" Butter(%d) ", numfillbutt3);
			}
			
			printf("\n");
         		        
         		 	
			}
         		 	
         		printf("Subtotal #%d : RM %2.2f\n", i, subtotal3);
         		 	
			}
				  
				  if(breadtype[i]==4 ){
         		 	
         		 	printf("Type : Croissant\n");
         		 	printf("Number of unit: %d \n", numunit4);
         		 	
         		 	if(addfill4!=2){
         		 		printf("Filling flavour: ");
         		       
            if(numfillchoc4 != 0)
			{
				printf("Chocolate(%d) ", numfillchoc4);
			}
			if((numfillchoc4 > 0) && (numfillcoco4 > 0))
			{
				printf("+");
			}
			if((numfillchoc4 > 0) && (numfillpand4 > 0))
			{
				printf("+");
			}
			if((numfillchoc4 > 0) && (numfillchic4 > 0))
			{
				printf("+");
			}
			if((numfillchoc4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillcoco4 != 0)
			{
				printf(" Coconut(%d) ", numfillcoco4);
			}
			if((numfillcoco4 > 0) && (numfillpand4 > 0))
			{
				printf("+");
			}
			if((numfillcoco4 > 0) && (numfillchic4 > 0))
			{
				printf("+");
			}
			if((numfillcoco4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillpand4 != 0)
			{
				printf(" Pandan(%d) ", numfillpand4);
			}
			if((numfillpand4 > 0) && (numfillchic4 > 0))
			{
				printf("+");
			}
				if((numfillpand4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillchic4 != 0)
			{
				printf(" Chicken(%d) ", numfillchic4);
			}
			if((numfillchic4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillbutt4 != 0)
			{
				printf(" Butter(%d) ", numfillbutt4);
			}
			
			printf("\n");
         		        
         		 	
			}
         		 	
         		printf("Subtotal #%d : RM %2.2f\n", i, subtotal4);
         		 	
			}
				  
				   
			}//end of for loop for order summary detail
				  
				
  
         
		 printf("\n\nTotal  sale is RM %.2f\n", total);
		 
		 if(total>=50.00)
		 printf("The customer is entitled for an ice cream.");
		 
		 	printf("\n\nThank you for using our service <3\n");
		
		
	}

		
	}
	
	
	//For Food Panda
	else if(ordertype==2){
		
	fBreadtypequantity:
		
	printf("Enter how many bread type to order: ");
	scanf("%d", &brdtypquantt);
	
	
	if(brdtypquantt>=5){
		
		printf("Your choice is invalid! There are only four types of bread.\n");
		system("pause");
		//invalid inputs for bread type quantity will prompt the user back
		goto fBreadtypequantity; 
	}
	
	
	
	for(i=1;i<=brdtypquantt;i++){
		
		printf("\nbreadtype #%d\n", i);
		
		
		printf("\nEnter the bread type (1-White Loaf, 2-Wheat Loaf, 3-Bun, 4-Croissant): ");
     scanf("%d", &breadtype[i]);
     
     
     if(breadtype[i]==1){
     	
     	printf("Enter number of unit: ");
     	scanf("%d",&numunit1);
     	subtotal1= 5.50 * (float)numunit1;
     	printf("Sub-Total #%d: RM %.2f \n",i,subtotal1);
	 }
	 
	 else if(breadtype[i]==2){
	 	
	 	printf("Enter number of unit: ");
     	scanf("%d",&numunit2);
     	subtotal2= 6.00 * (float)numunit2;
     	printf("Sub-Total #%d: RM %.2f \n",i,subtotal2);    
	 }
	 
	 else if(breadtype[i]==3){
	 	
	 printf("enter bread quantity: ");
	scanf("%d", &numunit3);
	
	printf("Do you want to add filling? 1-yes,2-no: ");
	scanf("%d", &addfill3);
	
	
	if(addfill3==2){
		goto partb;
	
	}
	
	do{
		printf("Choose filling flavourr(1-Chocolate, 2-Coconut, 3-Pandan, 4-Chicken, 5-Butter): ");
	    scanf("%d", &choice3);
	    
	    switch(choice3){
		
		case 1 :
			printf("Enter number of unit for Chocolate filling: ");
			scanf("%d", &numfillchoc3);
			break;
			
		case 2 :
			printf("Enter number of unit for Coconut filling: ");
			scanf("%d", &numfillcoco3);
			break;
			
		case 3 :
		    printf("Enter number of unit for Pandan filling: ");
		    scanf("%d", &numfillpand3);
		    break;
		    
		case 4 :
			printf("Enter number of unit for Chicken filling: ");
			scanf("%d", &numfillchic3);
			break;
			
		case 5 :
			printf("Enter number of unit for Butter filling: ");
			scanf("%d", &numfillbutt3);
			break;
			
		default : 
		printf("Invalid input!!\n");	
		
             }
	    
		
	
	
		
		if((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3)<numunit3){
			
		printf("Do you want to add more fillings? 1-yes,2-no: ");
		scanf(" %d", &cont);
		
		// if user dont want to add fillings, no. of unit of fillings will be calculated
		if(cont==2|| ((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3))>=numunit3){
			goto parta;
		}
	
		}
		
		
		
		// Program will stop when user enter unit of fillings which exceeds the quantity of bread entered earlier
		else if(((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3))>numunit3){
			printf("your unit of fillings exceed the quantity of bread!\n");
			return 0;
		}
		
	
		
		}
		
		while((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3)<numunit3);
		
		
		parta:
			if((numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3)<=numunit3){
				printf("Total unit of fillings is %d\n", numfillchoc3+numfillcoco3+numfillpand3+numfillchic3+numfillbutt3);
			}
			
			
		partb:
			subtotal3 = (2.50*numunit3) + (1.2*numfillchoc3) + (1.5*numfillcoco3) + (1.0*numfillpand3) + (1.75*numfillchic3) + (1.0*numfillbutt3);
			printf("Sub-Total #%d: RM %2.2f\n",i,subtotal3);
			
     		
		
	 	
	 }
	 
	 
	 
	 else if(breadtype[i]==4){
	 	
	 printf("enter bread quantity: ");
	scanf("%d", &numunit4);
	
	printf("Do you want to add filling? 1-yes,2-no: ");
	scanf("%d", &addfill4);
	
	
	if(addfill4==2){
		goto partd;
	
	}
	
	do{
		printf("Choose filling flavourr(1-Chocolate, 2-Coconut, 3-Pandan, 4-Chicken, 5-Butter): ");
	    scanf("%d", &choice4);
	    
	    switch(choice4){
		
		case 1 :
			printf("Enter number of unit for Chocolate filling: ");
			scanf("%d", &numfillchoc4);
			break;
			
		case 2 :
			printf("Enter number of unit for Coconut filling: ");
			scanf("%d", &numfillcoco4);
			break;
			
		case 3 :
		    printf("Enter number of unit for Pandan filling: ");
		    scanf("%d", &numfillpand4);
		    break;
		    
		case 4 :
			printf("Enter number of unit for Chicken filling: ");
			scanf("%d", &numfillchic4);
			break;
			
		case 5 :
			printf("Enter number of unit for Butter filling: ");
			scanf("%d", &numfillbutt4);
			break;
			
		default : 
		printf("Invalid input!!\n");	
		
		
             }
	    
		
	
	
		
		if((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4)<numunit4){
			
		printf("Do you want to add more fillings? 1-yes,2-no: ");
		scanf(" %d", &cont);
		
		// if user dont want to add fillings, no. of unit of fillings will be calculated
		if(cont==2|| ((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4))>=numunit4){
			goto partc;
		}
	
		}
	
	
		// Program will stop when user enter unit of fillings which exceeds the quantity of bread entered earlier
		else if(((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4))>numunit4){
			printf("your unit of fillings exceed the quantity of bread!\n");
			return 0;
		}
		
	
		
		}
		
		while((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4)<numunit4);
		
		
		partc:
			if((numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4)<=numunit4){
				printf("Total unit of fillings is %d\n", numfillchoc4+numfillcoco4+numfillpand4+numfillchic4+numfillbutt4);
			}
			
			
		partd:
			subtotal4 = (3.50*numunit4) + (1.2*numfillchoc4) + (1.5*numfillcoco4) + (1.0*numfillpand4) + (1.75*numfillchic4) + (1.0*numfillbutt4);
			printf("Sub-Total #%d: RM %2.2f\n",i,subtotal4);
			
     		
		
	 	
	 }
     	
		 else{
		 	
		 	printf("Your choice is not in the option!\n");
		 	return 0;
		 }			
				 
     		total = subtotal1+subtotal2+subtotal3+subtotal4;		
			
     		
	}
	
	if(brdtypquantt==1 || brdtypquantt==2 || brdtypquantt==3 || brdtypquantt==4){
		
			printf("\n\nOrder Summary Details:\n");
	printf("Total bread type ordered: %d\n", brdtypquantt);
	
	

         
         for(i=1;i<=brdtypquantt;i++){
         	
         		printf("\nbreadtype #%d\n", i);
         		
         		 if(breadtype[i]==1 ){
         		 	
         		 	printf("Type : White Loaf\n");
         		 	printf("Number of unit: %d \n", numunit1);
         		 	printf("Subtotal #%d : RM %2.2f\n", i, subtotal1);
         		 	
         		 	
				  }
				   if(breadtype[i]==2 ){
         		 	
         		 	printf("Type : Wheat Loaf\n");
         		 	printf("Number of unit: %d \n", numunit2);
         		 	printf("Subtotal #%d : RM %2.2f\n", i, subtotal2);
         		 	
         		 	
				  }
				  if(breadtype[i]==3 ){
         		 	
         		 	
         		 	printf("Type : Bun\n");
         		 	printf("Number of unit: %d \n", numunit3);
         		 	if(addfill3!=2){
         		 		printf("Filling flavour: ");
         		       
         		        if(numfillchoc3 != 0)
			{
				printf("Chocolate(%d) ", numfillchoc3);
			}
			if((numfillchoc3 > 0) && (numfillcoco3 > 0))
			{
				printf("+");
			}
			if((numfillchoc3 > 0) && (numfillpand3 > 0))
			{
				printf("+");
			}
			if((numfillchoc3 > 0) && (numfillchic3 > 0))
			{
				printf("+");
			}
			if((numfillchoc3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillcoco3 != 0)
			{
				printf(" Coconut(%d) ", numfillcoco3);
			}
			if((numfillcoco3 > 0) && (numfillpand3 > 0))
			{
				printf("+");
			}
			if((numfillcoco3 > 0) && (numfillchic3 > 0))
			{
				printf("+");
			}
				if((numfillcoco3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillpand3 != 0)
			{
				printf(" Pandan(%d) ", numfillpand3);
			}
			if((numfillpand3 > 0) && (numfillchic3 > 0))
			{
				printf("+");
			}
			if((numfillpand3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillchic3 != 0)
			{
				printf(" Chicken(%d) ", numfillchic3);
			}
			if((numfillchic3 > 0) && (numfillbutt3 > 0))
			{
				printf("+");
			}
			if(numfillbutt3 != 0)
			{
				printf(" Butter(%d) ", numfillbutt3);
			}
			
			printf("\n");
         		        
					  }
         		 	
         		 		printf("Subtotal #%d : RM %2.2f\n", i, subtotal3);
         		 	
				  }
				  
				  if(breadtype[i]==4 ){
         		 	
         		 	printf("Type : Croissant\n");
         		 	printf("Number of unit: %d \n", numunit4);
         		 	if(addfill4!=2){
         		 		printf("Filling flavour: ");
         		       
         		        if(numfillchoc4 != 0)
			{
				printf("Chocolate(%d) ", numfillchoc4);
			}
			if((numfillchoc4 > 0) && (numfillcoco4 > 0))
			{
				printf("+");
			}
			if((numfillchoc4 > 0) && (numfillpand4 > 0))
			{
				printf("+");
			}
			if((numfillchoc4 > 0) && (numfillchic4 > 0))
			{
				printf("+");
			}
			if((numfillchoc4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillcoco4 != 0)
			{
				printf(" Coconut(%d) ", numfillcoco4);
			}
			if((numfillcoco4 > 0) && (numfillpand4 > 0))
			{
				printf("+");
			}
			if((numfillcoco4 > 0) && (numfillchic4 > 0))
			{
				printf("+");
			}
			if((numfillcoco4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillpand4 != 0)
			{
				printf(" Pandan(%d) ", numfillpand4);
			}
			if((numfillpand4 > 0) && (numfillchic4 > 0))
			{
				printf("+");
			}
				if((numfillpand4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillchic4 != 0)
			{
				printf(" Chicken(%d) ", numfillchic4);
			}
			if((numfillchic4 > 0) && (numfillbutt4 > 0))
			{
				printf("+");
			}
			if(numfillbutt4 != 0)
			{
				printf(" Butter(%d) ", numfillbutt4);
			}
			
			printf("\n");
         		        
         		 	
					  }
         		 	
         		 		printf("Subtotal #%d : RM %2.2f\n", i, subtotal4);
         		 	
				  }
				  
				   
			}//end of for loop for order summary
				  
				
         		
         	
    
         
         
		 printf("\n\nTotal sale is RM %.2f\n", total);  
     	
		printf("\n\nThank you for using our service <3\n");
		
		
		
	}
	

		
		
		
	}
	
	
	else{
		printf("Invalid input! Please choose either 1-Self-Collect or 2-Food Panda only.\n\n");
		system("pause");
		goto Order;
	}
	
	
	return 0;
}
