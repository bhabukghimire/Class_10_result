#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main(){
        FILE *fp;
	float total,gpa,percentage,mrks;
	int f=0;
	int roll,grade;
	float  a;
	char g1,g2,g3,g4,g5,g6,g7,g8;
	
                 float egpa,bgpa,engpa,pgpa,emgpa,esgpa,eagpa,epgpa;
			
	float e,b,en,p,em,es,ea,ep;
	char name[20];
	fp=fopen("C:\\Users\\BHABUK\\Desktop\\10classResult\\Bhabukfinal.txt","w");
	printf("Name:");
	gets(name);
	printf("Roll No:");
	scanf("%d",&roll);
	printf("Class:");
	scanf("%d",&grade);

	printf("\n\nEnter your score in following subjects \n");
	printf("English: ");
	scanf("%f",&e);	
	printf("Social Studies: ");
	scanf("%f",&b);
	printf("Nepali: ");
	scanf("%f",&en);
	printf("Optional Maths: ");
	scanf("%f",&p);
	printf("Compulsory Maths: ");
	scanf("%f",&em);
	printf("Science: ");
	scanf("%f",&es);
	printf("Account: ");
	scanf("%f",&ea);
	printf("EPH: ");
	scanf("%f",&ep);

	if(e>100 || b>100 || en>100 || p>100 || em>100 || es>100 || ea>100 || ep>100  )
	{
		fprintf(fp," \n \n Invalid Input !!!");
		fprintf(fp,"\n Input Marks Correctly !!! ");
	}
	else{
	                                             //english
	if(e>=90){
		egpa=4.0;	
		g1='A+';
	}
	else if(e<90 && e>=80){
		egpa=3.6;
		g1='A';
	}
	else if(e<80 && e>=70){
		egpa=3.2;
		g1='B+';
		
	}
	else if(e<70 && e>=60){
		egpa=2.8;
		g1='B';
		
	}
	else if(e<60 && e>=50){
		egpa=2.4;
		g1='C+';
	}
	else if(e<50 && e>=40){
		egpa=2.0;
		g1='C';
		
	}
	else
	{
	f=f+1;
	}
	
	        //account
	if(ea>=90){
		eagpa=4.0;
		g2='A+';	
	}
	else if(ea<90 && ea>=80){
		eagpa=3.6;
		g2='A';
	}
	else if(ea<80 && ea>=70){
		eagpa=3.2;
		g2='B+';
	}
	else if(ea<70 && ea>=60){
		eagpa=2.8;
		g2='B';
		
	}
	else if(ea<60 && ea>=50){
		eagpa=2.4;
		g2='C+';
		
	}
	else if(ea<50 && ea>=40){
		eagpa=2.0;
	          g2='C';
		
	}
	else
	{
	f=f+1;
	}
	
	                        //optional maths
	if(p>=90){
		pgpa=4.0;
		g3='A+';	
	}
	else if(p<90 && p>=80){
		pgpa=3.6;
		g3='A';
	}
	else if(p<80 && p>=70){
		pgpa=3.2;
		g3='B+';
		
	}
	else if(p<70 && p>=60){
		pgpa=2.8;
		g3='B';
		
	}
	else if(p<60 && p>=50){
		pgpa=2.4;
		g3='C+';
	}
	else if(p<50 && p>=40){
		pgpa=2.0;
		g3='C';
	}
	else
	{
		f=f+1;
		
	}
	               
	               //social stds
	if(b>=90){
		bgpa=4.0;	
		g4='A+';
	}
	else if(b<90 && b>=80){
		bgpa=3.6;
		g4='A';
	}
	else if(b<80 && b>=70){
		bgpa=3.2;
		g4='B+';
		
	}
	else if(b<70 && b>=60){
		bgpa=2.8;
		g4='B';
		
	}
	else if(b<60 && b>=50){
		bgpa=2.4;
		g4='C+';
		
	}
	else if(b<50 && b>=40){
		bgpa=2.0;
		g4='C';
		
	}
	else
	{
		f=f+1;
	}
	
	                        // EPH
	if(ep>=90){
		epgpa=4.0;
		g5='A+';	
	}
	else if(ep<90 && ep>=80)
	{
		epgpa=3.6;
		g5='A';
	}
	else if(ep<80 && ep>=70)
	{
		epgpa=3.2;
		g5='B+';
		
	}
	else if(ep<70 && ep>=60)
	{
		epgpa=2.8;
		g5='B';
		
	}
	else if(ep<60 && ep>=50)
	{
		epgpa=2.4;
		g5='C+';
		
	}
	else if(ep<50 && ep>=40){
		epgpa=2.0;
		g5='C';
		
	}
	else
	{
	f=f+1;
	}
	   
	                      //science
	if(es>=90){
		esgpa=4.0;
		g6='A+';	
	}
	else if(es<90 && es>=80)
	{
		esgpa=3.6;
		g6='A';
	}
	else if(es<80 && es>=70)
	 {
		esgpa=3.2;
		g6='B+';
		
	}
	else if(es<70 && es>=60)
	{
		esgpa=2.8;
		g6='B';
		
	}
	else if(es<60 && es>=50)
	{
		esgpa=2.4;
		g6='C+';
		
	}
	else if(es<50 && es>=40)
	{
		esgpa=2.0;
		g6='C';
		
	}
	else
	{
	f=f+1;
	}  
	
	                            //nepali
	if(en>=90){
		engpa=4.0;
		g7='A+';	
	}
	else if(en<90 && en>=80)
	{
		engpa=3.6;
		g7='A';
	}
	else if(en<80 && en>=70)
	{
		engpa=3.2;
		g7='B+';
		
	}
	else if(en<70 && en>=60)
	{
		engpa=2.8;
		g7='B';
		
	}
	else if(en<60 && en>=50)
	{
		engpa=2.4;
		g7='C+';
		
	}
	else if(en<50 && en>=40){
		engpa=2.0;
		g7='C';
		
	}
	else
	{
	f=f+1;
	}  
	                                        //maths                
			      		  		                    
	 if(em>=90){
		emgpa=4.0;
		g8='A+';	
	}
	else if(em<90 && em>=80)
	{
		emgpa=3.6;
		g8='A';
	}
	else if(em<80 && em>=70)
	{
		emgpa=3.2;
		g8='B+';
		
	}
	else if(em<70 && em>=60)
	{
		emgpa=2.8;
		g8='B';
		
	}
	else if(em<60 && em>=50)
	{
		emgpa=2.4;
		g8='C+';
		
	}
	else if(em<50 && em>=40){
		emgpa=2.0;
		g8='C';
		
	}
	else
	{
	f=f+1;
	}     
	                 

	if (f>0)
	{ if (f==8){
		fprintf(fp,"\n \n Sorry !! You have failed in all Subjects");
		
	}
	else{
	
		fprintf(fp,"\n\n Sorry !! You have failed in %d Subjects",f);
		fprintf(fp,"\n\n Try Hard Next Time !!");
		fprintf(fp,"\n Best of Luck !!!");
	}
}
	else{
	//	fprintf(fp,"                         RESULT:\n\n \n");
	
		fprintf(fp,"  \n \t\tEVEREST HIGHER SECONDARY BOARDING SCHOOL    \n       \t \t\t   GALKOPAKHA THAMEL \n \n");
		fprintf(fp," \t\t\tName: %s \n \t\t\tRoll No:%d\n\t\t\tGrade:%d \n\n",name,roll,grade);
		
		
 total=egpa+bgpa+engpa+pgpa+emgpa+esgpa+eagpa+epgpa;
gpa=total/8;
mrks=e+b+en+p+em+es+ea+ep;	
		

  	fprintf(fp,"\n\t\t\tSubjects  marks Grades   GPA\n");
	fprintf(fp,"\t\t\tEnglish    %.1f    %c       %.2f \n",e,g1,egpa);
	fprintf(fp,"\t\t\tSocial     %.1f    %c       %.2f \n",b,g4,bgpa);
	fprintf(fp,"\t\t\tNepali     %.1f    %c       %.2f \n",en,g7,engpa);	
	fprintf(fp,"\t\t\tScience    %.1f    %c       %.2f \n",es,g6,esgpa);
	fprintf(fp,"\t\t\tAccount    %.1f    %c       %.2f \n",ea,g2,eagpa);
	fprintf(fp,"\t\t\tEPH        %.1f    %c       %.2f \n",ep,g5,epgpa);
	fprintf(fp,"\t\t\tOpt Maths  %.1f    %c       %.2f \n",p,g3,pgpa);	
	fprintf(fp,"\t\t\tCom Maths  %.1f    %c       %.2f \n",em,g8,emgpa);
	fprintf(fp,"\n\t\t\t   Total=%.1f GPA=%.2f \n",mrks,gpa);
	
	                  //test
	printf("\n\t\t\tSubjects  marks Grades   GPA\n");
	printf("\t\t\tEnglish    %.1f    %c       %.2f \n",e,g1,egpa);
	printf("\t\t\tSocial     %.1f    %c       %.2f \n",b,g4,bgpa);
	printf("\t\t\tNepali     %.1f    %c       %.2f \n",en,g7,engpa);	
	printf("\t\t\tScience    %.1f    %c       %.2f \n",es,g6,esgpa);
	printf("\t\t\tAccount    %.1f    %c       %.2f \n",ea,g2,eagpa);
	printf("\t\t\tEPH        %.1f    %c       %.2f \n",ep,g5,epgpa);
	printf("\t\t\tOpt Maths  %.1f    %c       %.2f \n",p,g3,pgpa);	
	printf("\t\t\tCom Maths  %.1f    %c       %.2f \n",em,g8,emgpa);
	printf(fp,"\n\t\t\t   Total=%.1f GPA=%.2f \n",mrks,gpa);
	
 	
	


fprintf(fp,"\n\t\t\t You have scored %.2f GPA",gpa);

percentage=mrks/8;
fprintf(fp,"\n\t\t\t Total Percentage is %.2f %% ",percentage);


	

                     
	}
	}
	
	
	
}


	
		        		   	 
	




 	
 	
 
