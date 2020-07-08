#include<stdio.h>
#include<math.h>
int dectobin(int);
int dectooct(int);
int bintodec(int);
//void bintooct(char []);
int octtodec(int);
//void octtobin(int);
int hextodec(int);


int main()
{
	int ch,bin;
        int num,oct,hex,dec,dec2,dec3;
       // char bin[20];
        printf("Enter the choice:\t1.Decimal conversions\t2.Binary Conversions\t3.Octal conversion\t4.Hexadecimal Conversions\n");
        scanf("%d",&ch);
        switch(ch)
	{
		case 1:printf("enter the decimal no.:");
		       scanf("%d",&dec);
		       printf("\n binary result : ");
		       dectobin(dec);
		       printf("\n octal result : ");
		       dectooct(dec);
		       printf("\n");
		       break;

		case 2:printf("enter the binary no.:");
		       scanf("%d",&bin);
		       dec2=bintodec(bin);
		       printf("\n decimal result :%d",dec2);
		       printf("\n octal result : ");
		       dectooct(dec2);
		       printf("\n");
		       break;

		case 3:printf("enter the octal no:");
		       scanf("%d",&oct);
		       dec3=octtodec(oct);
		       printf("\n decimal result :%d",dec3);
		       printf("\n binary result :");
		       dectobin(dec3);
		       printf("\n");
		       break;

		case 4:printf("enter the hexadecimal no[0-9,a-f]:");
                       scanf("%x",&hex);
		       int dec4=hex;
		       //hextodec(hex);
		       printf("\nDecimal Result:%d",dec4);
                       printf("\n binary result :");
		       dectobin(dec4);
                       printf("\nOctal result :%o",hex);
                       //dectobin(dec3);
                       printf("\n");
                       break;


		default:printf("Invalid choice");
			break;
	}

	return 0;
}

int dectobin(int num)
{
        static int i=0,b=0,sum;
        static int a[10]={0};
        if((num/2!=0)||(num%2)!=0)
        {
                b=num%2;
                a[i]=b;
                num=num/2;
        //      printf("a=%d num=%d b=%d i=%d \n",a[i],num,b,i);
                i++;
                dectobin(num);
                printf("%d",a[--i]);
        }


}

int dectooct(int num)
{
        static int i=0,b=0,sum;
        static int a[10]={0};
        if((num/8!=0)||(num%8)!=0)
        {
                b=num%8;
                a[i]=b;
                num=num/8;
        //      printf("a=%d num=%d b=%d i=%d \n",a[i],num,b,i);
                i++;
                dectooct(num);
                printf("%d",a[--i]);
        }


}

int bintodec (int bin)
{
        static 	int i=0,j=0,k=0,sum=0,b=0;
       // char a[10];
        //int count0=0,count1=0,check=0,size=0;
        if((bin%10==0) || (bin%10==1))
	{
		i=bin%10;
		sum=sum+(i*pow(2,j));
		j++;
		bin=bin/10;
		if(bin!=0)
		{
			bintodec(bin);
		//	return sum;
		}
	}
	else
	  printf("Invalid binary\n");
	
	return sum;
}
int octtodec(int octnum)
{
        static int num=0,num1=0,sum=0,i=0,j=0;
        num=octnum;
        if((octnum!=0) && octnum%10<8)
        {
                num=octnum%10;
                sum=sum+(num*pow(8,j));
                octnum=octnum/10;
                j++;
		octtodec(octnum);

        }
        else{
		printf("Invalid Octal");
		return 0;
	}
        //printf("Decimal result :%d\n",sum);
       // dectobin(sum);
        return sum;

}



int hextodec(int hexnum)
{
	printf("hexnum=%x",hexnum);
       /* static int num=0,num1=0,sum=0,i=0,j=0;
        num=hexnum;
        if((hexnum!=0) && hexnum%10<16)
        {
                num=hexnum%10;
                sum=sum+(num*pow(16,j));
                hexnum=hexnum/10;
                j++;
		hextodec(hexnum);

        }
        else{
		printf("Invalid Hex");
		return 0;
	}
        //printf("Decimal result :%d\n",sum);
       // dectobin(sum);
        return sum;*/
	return 0;

}


