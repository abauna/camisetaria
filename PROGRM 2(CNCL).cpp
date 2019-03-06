#include <stdio.h>
#include<string.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
void menu_e();
int main(); 
void menu ();
void Venda(void);
void Listaa();
void Lista(void);
void Cadastro(void);
void Relatorio(void);
int cpf(int s);
	char a[100] = "f18";
	char ar[10]= "e18";
		FILE*pp;
	char c[100] ="fh";
	char cc[10] ="eh";
	
	char k[200]= "poderoso";
	char l[20]="chefao";
	char q[30];
	char r[30];
	char t[100];
	char u[30];
	char w[100];
	char z[80];
	char x[50];
	char compras[300];
	char dats[200];
	char a2[500],n[10];
	char a4[50];
	char a7;
FILE*txt;	
FILE*arq1;
long int s;
float aq,aw;
	int e=0, f=2, g=0, h=0, o=0, p=0, ae, v=0,y=0,a1=5,a3=0,a6=0,j=0, m=0,a5=0;
	void menu_e(){
		
		
		while (f==2)
		
	{ 
printf("\n***********************************************************************************************************************\n");
	printf("\n\n##\t\t\tESCOLHA UMAS DAS OPCOES:\n##\t\t\t-----------------------");
	printf("\n\n##\t\t\t|1--> Adiministrar cores \n##\t\t\t|\n##\t\t\t|2--> lista de cores atuais\n##\t\t\t|\n##\t\t\t|3--> sair\n\t\t\t\n\n##\t\t\t>");
	scanf ("%i", &h);
	switch(h)
	{
		case 1:
			Listaa();
		break;
		
		case 2:
		Lista ();
		 break;
		 case 3:
		 		a1=5;
			main();
	system("cls");
    printf("************************************************************************************************************************");
	printf("||||||||||||||||$||||||||||||||||||||||||||||||________________________||||||||||||||||||||||||$|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||>  |    CAMISETARIA HACKER  |    <||||||||||||||||||||||||||||||||||||||||||\n");
	printf("***********************************************------------------------************************************************\n");
	printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-  'o lugar onde voce manda na sua personalidade'  -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n$\n$\n");
	printf("$\t\t\t\t\t\t  SEJA BEM VINDO(A)!\n$\n");
	printf("$\t\t\t\t\t\t  OK, vamos comecar.\n$");
		default:
		 	system("cls");
		 	printf("\n________________________________________________________________________________________________________________________");
		 	printf("\n##\t\t\t(****************************Operacao invalida************************)\t\t\t            ##");
		 	printf("\n________________________________________________________________________________________________________________________");
		}	
	}
		}
		
		
	
	void menu (){
		int jk=2;
			while (jk==2)
	{
	printf("\n***********************************************************************************************************************\n");
	printf("\n\n##\t\t\tESCOLHA UMAS DAS OPCOES:\n##\t\t\t-----------------------");
	
	printf("\n\n##\t\t\t|1--> vender\n\t\t\t|\n##\t\t\t|2--> lista de camisetas \n\t\t\t|\n##\t\t\t|3--> cadastro de cliente \n\t\t\t|\n##\t\t\t|4--> relatorio \n\t\t\t|\n##\t\t\t|5--> sair\n\t\t\t\n\n##\t\t\t>");
	scanf ("%i", &h);
	switch(h)
	{
		case 1:
			Venda();
		break;
		
		case 2:
			Lista ();
		 break;
		 case 3:
			Cadastro();
		break;
		case 4: 
		Relatorio();
		break;
		case 5:
			a1=5;
			main();
				
		break;
		 	system("cls");
    printf("************************************************************************************************************************");
	printf("||||||||||||||||$||||||||||||||||||||||||||||||________________________||||||||||||||||||||||||$|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||>  |    CAMISETARIA HACKER  |    <||||||||||||||||||||||||||||||||||||||||||\n");
	printf("***********************************************------------------------************************************************\n");
	printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-  'o lugar onde voce manda na sua personalidade'  -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n$\n$\n");
	printf("$\t\t\t\t\t\t  SEJA BEM VINDO(A)!\n$\n");
	printf("$\t\t\t\t\t\t  OK, vamos comecar.\n$");
		
		 default:
		 	system("cls");
		 	printf("\n________________________________________________________________________________________________________________________");
		 	printf("\n##\t\t\t(****************************Operacao invalida************************)\t\t\t            ##");
		 	printf("\n________________________________________________________________________________________________________________________");
		
	}
	}
}
void Venda(void){
	system("cls"); 
			printf("________________________________________________________________________________________________________________________\n");
			printf(">>\t\t\t\t\t\t      VAMOS VENDER !\t\t\t\t\t\t     <<");
			printf("\n________________________________________________________________________________________________________________________\n");
			printf("##\n##\t\t\t> nome do cliente:\t>");
			scanf(" %[^\n]c",&z);
			printf("##\t\t\t> Quantidade de produtos:\t>");
			scanf("%d",&j);
		
			printf("##\t\t\t> personalizacao e tamanhos:\t> ");
			scanf("  %[^\n]c",&k);
			setbuf(stdin, NULL);
			
			printf("##\t\t\t> cor(es):\t> ");
			scanf(" %[^\n]c",&l);
			m=j*20;
		   system("cls");
		    printf("\n************************************************************************************************************************");
			printf("\n##>>\t\t\t\t\t     >$ O valor da sua compra eh $:%d R$   \t\t\t\t   <<##\n",m);
			printf("\n************************************************************************************************************************");
			printf("\n##>>\t\t\tFORMA DE PAGAMENTO:\n##>>\t\t\t-----------------\n##>>\t\t\t1> dinhero \n##>>\t\t\t2> cartao \n##>>\t\t\t3> cheque\n##>>\t\t\t>");
			scanf("%d",&a5);
			if(2==a5){
				printf ("\n##>>\t\t\t-------------\n##>>\t\t\t|1|: CREDITO | \n##>>\t\t\t-------------\n##>>\t\t\t|2|: DEBITO  |\n##>>\t\t\t-------------\n\t\t\t>");
				scanf("%d",&ae);
				if(ae==1){
				
				a5=4;
			
			}else {
				a5=5;
			
			}}
			
			system("cls");
			txt=fopen("registro de compras.txt","a");
			struct tm *ptr;
			time_t lt;
			lt = time(NULL);
			ptr= localtime(&lt);
			printf(asctime(ptr));
			fprintf(txt,asctime(ptr));
			
			fprintf(txt,"//1:dinheiro\n//3:cheque\n//4:credito\n//5:debito\n\n|NOME:%s\n|QUANTIDADE:%d\n|PERSeTAMNH:%s\n|COR:%s\n|VALOR:%d\n|PAGAMNT:%d\n\n",z,j,k,l,m,a5);
			fclose(txt);
			txt=fopen("lucro.txt","a");
			fprintf(txt,"%d ",j);
			fclose(txt);
			
			
			printf("************************************************************************************************************************");
			printf("_______________________________________________________________________________________________________________________");
			printf("\n##\t\t\t\t\t       (VENDA EFETUADA COM SUCESSO)!\n");
			printf("##\t\t\t\t (O produto comprado chegara no prazo de 30 dias ulteis.)\n");
			printf("_______________________________________________________________________________________________________________________");
			printf("\n\t\t\tvejamos mais opcoes: \n");
		
}


void Lista(void){
		system("cls"); 
			printf("________________________________________________________________________________________________________________________\n");
			printf(">>\t\t\t\t\t    LISTA DE CORES E TAMANHOS !\t\t\t\t\t\t     <<");
				printf("\n________________________________________________________________________________________________________________________\n");	
		 		txt=fopen("lista.txt","r");
		    	while( (fscanf(txt," %[^\n]c ", &a2))!=EOF )
					printf("%s\n",a2);
					fclose(txt);
				printf("\n______________________________________________________________________________________________________________________");
			 printf("\n\n##\t\t\tveja outras opcoes=");
	
}


void Cadastro(void){
	
		system("cls"); 
		pessoas:
		 	printf("\n________________________________________________________________________________________________________________________\n");
		 	printf(">>\t\t\t\t\t       CADASTRO DE CLIENTES !\t\t\t\t\t\t      <<");
		 	printf("\n________________________________________________________________________________________________________________________\n");	
		 	printf("##\t\t\tESCOLHA UM TIPO DE CADASTRO:");
		 	printf("\n##\n>>\t\t\t# 1 >se pessoa fisica \n>>\t\t\t# 2 >se pessoa juridica\n>>\t\t\t# 3 >para sair\n\n\t\t\t> ");
			scanf("%i",&o);
			if (o==1)
			{
				txt=fopen("fisicas.txt","a");
				printf("\n>>\t\t\t> primeiro nome:  > ");
				scanf ("%s",&q);
				printf(">>\t\t\t> segundo nome:  > ");
				scanf ("%s",&r);
				cpf:
					int qq ,cp;
			
			
				cp=cpf(s);
			
				if (5==cp){
					goto end;
					
				}else{ cCC:
					
				printf("\n>>\n\t\t\t> (1) Tentar de Novo\n>>\t\t\t> (2) Sair\n\t\t\t>");
				scanf ("%d",&qq);
					switch (qq)
					{
						case 1: 
							goto cpf;
						break;
						case 2:
						printf("sdf %d",cp);
							goto pessoas;
						break;
						default:
							printf("\n##\t\t\tOPERACAO INVALIDA");
								goto cCC;
					}
					
				}
				end:
				printf(">>\t\t\t> Endereco:  > ");
				scanf (" %[^\n]c ",&t);
				pp=fopen("lista1.txt","r");
				 fflush(stdin);
					fgets(w,88,pp);
				
		        system("cls");
					
		        printf("************************************************************************************************************************");
		        printf("___________________________________________________________________________________________________________________");
				printf("\n##\t\t\t\t\t(CADASTRO REALIZADO COM SUCESSO !)");
				printf("\n___________________________________________________________________________________________________________________");
				printf("\n\n##\t\t\tPODEMOS VER MAIS: ");
				fprintf(txt,"|NOME:%s\n|SOBRENOME:%s\n|CPF:%s\n|ENDERECO:%s\n\n ",q,r,w,t);
				fclose(txt);
			}
			else
			{
					if(o==2){
					
					txt=fopen("juridicas.txt","a");
					printf(">>\t\t\t> Nome da Empresa referente:  > ");
					scanf (" %[^\n]c ",&u);
					printf(">>\t\t\t> CNPJ:  > ");
					scanf ("%i",&v);
					printf(">>\t\t\t> Endreco:  > ");
					scanf (" %[^\n]c ",&w);
					printf(">>\t\t\t> Nome do Responsavel:  > ");
					scanf (" %[^\n]c ",&x);
					system("cls");
					printf("************************************************************************************************************************");
					printf("_______________________________________________________________________________________________________________________");
					printf("\n##\t\t\t\t\tparabens...(CADASTRO REALIZADO COM SUCESSO) !");
					printf("\n______________________________________________________________________________________________________________________");
					printf("\n\n##\t\t\tpodemos ver mais:");
					fprintf(txt,"|NOME:%s\n|CNPJ:%i\n|ENDERECO:%s\n|RESPONSAVEL:%s\n\n",u,v,w,x);
					fclose(txt);}
					else {
						system("cls");
							printf("**********************************************************************************************************************\n");
							printf("________________________________________________________________________________________________________________________");
	                        printf(">>$$\t\t\t\t\t      * SISTEMA CAMISETARIA HACKER *\t\t\t\t\t    $$<<\n");
                          	printf(">>$$\t\t\t\t\t      *    (seja bem vindo(a))     *\t\t\t\t\t    $$<<\n");
                         	printf("________________________________________________________________________________________________________________________");
				 }

			}
	
}

void Relatorio(void)
{
		system("cls"); 
			printf("________________________________________________________________________________________________________________________");
			printf(">>\t\t\t\t\t            RELATORIO GERAL \t\t\t\t\t\t     <<");
			printf("\n________________________________________________________________________________________________________________________");
			printf("\n##\t\t\t|< 1 >- lista de p.fisicas \n##\t\t\t|< 2 >- lista de p.Juridicas \n##\t\t\t|< 3 >- relatorio de vendas \n##\t\t\t|< 4 >- sair\n##\n##\t\t\t>");
			scanf("%i",&p);
				switch(p)
				{
		
			case 1:
				FILE*EE;
				system("cls");
			    printf("________________________________________________________________________________________________________________________"); 
			    printf(">>\t\t\t\t\t           *# PESSOAS #* \t\t\t\t\t\t     <<");
			    printf("\n________________________________________________________________________________________________________________________\n"); 
				EE=fopen("fisicas.txt","r");
		    	fscanf(EE," %[^\t]c ", &a2);
					printf("%s",a2);
				printf("_____________________________________________________________________________________________________________________");	
						
					fclose(EE);
				
			break;
			case 2:
			system("cls");
			printf("________________________________________________________________________________________________________________________");
			printf(">>\t\t\t\t\t           *# EMPRESAS #* \t\t\t\t\t\t     <<");
			printf("\n________________________________________________________________________________________________________________________\n");  
			txt=fopen("juridicas.txt","r");
				 	while( (fscanf(txt," %[^\t]c ", &a2))!=EOF ){	
					printf("%s",a2);
					printf("_____________________________________________________________________________________________________________________");
					 }
					fclose(txt);
				 
			break;
			case 3:	
				system("cls");
			printf("________________________________________________________________________________________________________________________");
			printf(">>\t\t\t\t\t         *# COMPRAS REGISTRADAS #* \t\t\t\t\t     <<");
			printf("\n________________________________________________________________________________________________________________________\n"); 
			txt=fopen("registro de compras.txt","r");
		 	while( (fscanf(txt,"%s", &a4))!=EOF )
			
			puts(a4);
			
			fclose(txt);
				
			break;
		case 4:
					system("cls");
	printf("________________________________________________________________________________________________________________________");
	printf(">>$$\t\t\t\t\t      * SISTEMA CAMISETARIA HACKER *\t\t\t\t\t    $$<<\n");
	printf(">>$$\t\t\t\t\t      *    (seja bem vindo(a))     *\t\t\t\t\t    $$<<\n");
	printf("________________________________________________________________________________________________________________________");
			
			break;
					default:
			system("cls");
			 printf("________________________________________________________________________________________________________________________");
		 	printf("\n##\t\t\t(****************************Operacao invalida************************)");
			 printf("\n________________________________________________________________________________________________________________________");		 break;
	}
	
}
void Listaa(){
	int qwe;
	char b[74];
	system("cls");
			printf("________________________________________________________________________________________________________________________");
			printf(">>\t\t\t\t\t        *# ADICIONAR ,OU RETIRAR CORES #* \t\t\t\t  <<");
			printf("\n________________________________________________________________________________________________________________________\n"); 	
printf("##\t\t\t1>> Adicionar cor\n##\t\t\t2>> Retirar cor\n##\t\t\t3>> sair\n\t\t\t>");
scanf("%d",&qwe);
if (qwe<=2)
{

switch (qwe)
{
case 1:
    printf("\n________________________________________________________________________________________________________________________");
	printf("\n##\t\t\tESCREVA A COR DESEJADA:\n##\t\t\t> ");
	scanf("%s",&b);
	txt=fopen("lista.txt","a");
	fprintf(txt,"\n%s",b);
	fclose(txt);
	system("cls");
	printf("_______________________________________________________________________________________________________________________");
	printf("\n##\t\t\t\t\tparabens... (COR ADICIONADA COM SUCESSO) !");
	printf("\n______________________________________________________________________________________________________________________");
	
	
break;
case 2:
	
	FILE*txt;
	char item[5],nn[555];
	char novo[5] =" ";
	int cont=0, a;
	char key[5];
	printf("\n##\t\t\tCor a ser apagada:> ");
	scanf("%s",& key);
	pp=fopen("lista1.txt","w");
	txt=fopen("lista.txt","r");
	 while ((fscanf(txt," %s\n",&item))!=EOF)
	{
			if ((a=strcmp(item,key))==0) 
		{
			
				fprintf(pp,"%s",novo);	
		} else {
		
			fprintf(pp,"\n%s\n",item);
		}
	
		
	}fclose(pp);
		fclose(txt);
	
		pp=fopen("lista1.txt","r");
	fscanf(pp," %[^/t]s",&nn);
	printf("\n##\t\t\t---------------------");
	printf("\n##\t\t\tEXCLUIDA COM SUCESSO");
	printf("\n##\t\t\t---------------------");	
	fclose(pp);
	txt=fopen("lista.txt","w");
	fprintf(txt,"%s",nn);
	fclose(txt);
	break;

}}
else{
	system("cls");
	void menu_c(void);
	
}
}


void menu_c (){


	while(f==2)
{
	printf("##\t\t\tMENU\n\t\t\t-----------------------\n##\t\t\t1>> Entrar como atendente\n##\t\t\t2>> Acessar estoque\n##\t\t\t3>> Financas\n##\t\t\t4>> Sair\n##\t\t\t>");
	scanf("%d",&a1);
	switch (a1){
		
		case 1:
				menu ();
		break;
		case 2:
				menu_e();
		break;
		case 3:
			 		system("cls"); 
				h=0;
			txt=fopen("lucro.txt","r");
	while ((fscanf(txt,"%d ",&g)) != EOF){
	   
	h=g+h;
}	h=h*20;
aq=h/3;
aw=h-aq;

	    printf("________________________________________________________________________________________________________________________");
    printf(">>\t\t\t\t\t* TOTAIS, DESCONTOS ,E LUCROS DAS VENDAS * \t\t\t\t      <<");
    printf("\n________________________________________________________________________________________________________________________");
	printf (" %d ",g);
	printf (" <<| (quantidade de produtos vendidos)<<\t\t\t     \n \t  | O valor total arrecadado eh: %d R$\t\t\t     \n\t  | despesas com frabricacao e funcionarios eh: %f R$\n\t  | O lucro total eh: %f R$     ",h,aq,aw);
	printf("\n ______________________________________________________________________________________________________________________");
	printf("\n\t\t\tVEJAMOS MAIS:\n");
	fclose(txt);
		break;
		case 4:
			 	a1=5;
			main();
		break;
	
	}
	}	
}

int cpf(int s){
	
{  
char cpf[12];  
int icpf[12];  
int i,somador=0,digito1,result1,result2,digito2,valor,cp;  
  pp=fopen("lista1.txt","w");
printf(">>\t\t\t> CPF: ");  
scanf(" %s",cpf);  
  
  	fprintf(pp,"%s",cpf);
	  	fclose(pp);	
for(i=0;i<11;i++)  
{  
icpf[i]=cpf[i]-48;  
}  
  
 
  
for(i=0;i<9;i++)  
{  
somador+=icpf[i]*(10-i);  
}  
  
result1=somador%11;  
  
if( (result1==0) || (result1==1) )  
{  
digito1=0;  
}  
  
else  
{  
digito1 = 11-result1;  
}  
  
  
  
somador=0;  
  
for(i=0;i<10;i++)  
{  
somador+=icpf[i]*(11-i);  
}  
  
valor=(somador/11)*11;  
result2=somador-valor;  
  
if( (result2==0) || (result2==1) )  
{  
digito2=0;  
}  
  
else  
{  
digito2=11-result2;  
}  
  
  
  
if((digito1==icpf[9]) && (digito2==icpf[10]))  
{  
return 5;
}  
else  
{  
system("cls");
printf("\n>>\t\t\t*DIGITOS DO CPF INCORRETOS*\n");
 printf("**********************************************************************************************************************");
return 10;  
}  
  
} 
	
	
	
}

int main()
{
void menu_e(); 
void menu (void);
void menu_c();
void Venda(void);
void Listaa();
void Lista(void);
int main();
void Cadastro(void);
int cpf(int s);
void Relatorio(void);
int jrs=5;
  system("cls");
  
 printf("************************************************************************************************************************");
	printf("||||||||||||||||$||||||||||||||||||||||||||||||________________________||||||||||||||||||||||||$|||||||||||||||||||||||\n");
	printf("|||||||||||||||||||||||||||||||||||||||||||>  |    CAMISETARIA HACKER  |    <||||||||||||||||||||||||||||||||||||||||||\n");
	printf("***********************************************------------------------************************************************\n");
	printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-  'o lugar onde voce manda na sua personalidade'  -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n$\n$\n");
	printf("$\t\t\t\t\t\t  SEJA BEM VINDO(A)!\n$\n");
	printf("$\t\t\t\t\t\t  OK, vamos comecar.\n$");
		while (jrs==5)
		{ 
		login:
		
		char b[20]="qw";
		char d[20]="re";
		loginn:
		printf("##\n\t\t\t> login: ");
		scanf("%s",b);
		fflush(stdin);
		e=strncmp(a,b,20);
		s=strncmp(ar,b,20);
		printf("##\t\t\t> senha: "); 
		scanf("%s",d);
			g=strncmp(c,d,20);
			p=strncmp(cc,d,20);
				a1=strncmp(k,b,20);
			a3=strncmp(l,d,20);
	printf("________________________________________________________________________________________________________________________");
	printf(">>$$\t\t\t\t\t      * SISTEMA CAMISETARIA HACKER *\t\t\t\t\t    $$<<\n");
	printf(">>$$\t\t\t\t\t      *    (seja bem vindo(a))     *\t\t\t\t\t    $$<<\n");
	printf("________________________________________________________________________________________________________________________");
	if(g==0|| p==0|| e==0||s==0||a1==0||a3==0)
	{
		if (e==0 && g==0)
			menu();
		if(p==0 && s==0)
			menu_e(); 
		if(a1==0 && a3==0)
			menu_c(); 
	}
			
		if(p==1 && s==0||p==0 && s==1||e==1 && g==0||e==0 && g==1||p==1 && s==0||p==0 && s==1||e==1 && g==0||e==0 && g==1||a3==1 && a1==0||a3==0 && a1==1||a1==1 && a3==0||a1==0 && a3==1||a3==0 && a1==1)
		{	
		
				printf("\n# senha e login incorretos #\n");
					system("pause");				goto loginn;
				}
			if(p==1 && s==1||p==1 && s==1||e==1 && g==1||e==1 && g==1||p==1 && s==1||p==1 && s==1||e==1 && g==1||e==1 && g==1||a3==1 && a1==1||a3==1 && a1==1||a1==1 && a3==1||a1==1 && a3==1||a3==1 && a1==1)
		{	
		           system("cls");
        printf("***************************************************************************************************************");
				printf("\n# senha e login incorretos #\n");
		printf("***************************************************************************************************************\n");
		    	goto loginn;
				}
				
                    printf("***************************************************************************************************************");
					printf("\n# senha e login incorretos #\n");
					printf("***************************************************************************************************************");

				}
			
				
		
 	
	}

