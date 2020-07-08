#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void dectobin(int);
void dectooct(int);
int bintodec(char[]);
void bintooct(char[]);
void octtodec(int);
void octtobin(int);
int main()
{
	int ch;
	int num,oct;
	char bin[20];
	printf("Enter the choice 1.Decimal conversions	2.Binary Conversions 3.Octal conversion\n");
        scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter decimal number to convert: ");
			scanf("%d",&num);
			dectobin(num);
			dectooct(num);
			break;

		case 2: printf("Enter Binary number to convert: ");
			scanf("%s",bin);
                      //  bintodec(bin);
                        bintooct(bin);
		        break;    
		case 3: printf("Enter Octal number to convert: ");
			scanf("%d",&oct);
                        octtodec(oct);
                        //octtobin(oct);
			break;
	        default: printf("Invalid choice..\n");
	}
        return 0;

}

void dectobin(int n)
{
	int arr[20],i=0;
        while((n/2)!=0 || (n%2)!=0)
        {
                arr[i]=n%2;
                n=n/2;
               // printf("Arr:%d,N=%d,i=%d\n",arr[i],n,i);
                i++;
        }
        printf("\nBinary result:");
        while(i>0)
                printf("%d",arr[--i]);
}

void dectooct(int n)
{
	int arr[20],i=0;
	while((n/8)!=0 || (n%8)!=0)
        {
                arr[i]=n%8;
                n=n/8;
               // printf("Arr:%d,N=%d,i=%d\n",arr[i],n,i);
                i++;
        }
	printf("\nOctal result:");
        while(i>0)
                printf("%d",arr[--i]);
}

int bintodec(char binstr[]){
	int i=0,j=0,k=0,sum=0,b=0;
        char a[10];
        int n=0,count0=0,count1=0,check=0;

	while(binstr[i]!='\0')
        {
                if(binstr[i]=='0')
                        count0++;
                else if(binstr[i]=='1')
                        count1++;
                else
                {
                        printf("Invalid binary\n");
			check=1;
                        break;
                }
                i++;
        }
	if(check!=1){
 	while(binstr[j]!='\0')
        {
                a[k]=binstr[j];
                b=atoi(a);
                sum=sum+(b*pow(2,i-1));
              //  printf("sum=%d,b=%d,i=%d,j=%d\n",sum,b,i-1,j);
                j++;
                i--;
        }
	printf("Decimal result is:%d\n",sum);
	}
	return sum;
}

void bintooct(char binstr[])
{
	int dec=0;
	dec=bintodec(binstr);
        dectooct(dec);
}

void octtodec(int octnum)
{
	int num=0,num1,sum=0,i=0,j=0;
	num1=octnum;
	num=octnum;
	while(num1>0)
	{
		num1=num1/10;
		i++;
		//printf("num1=%d\n",num1);
	}
	while(j<i)
	{
		num=octnum%10;
		sum=sum+(num*pow(8,j));
		octnum=octnum/10;
		j++;

	}

                printf("Decimal result :%d\n",sum);
	dectobin(sum);
}


















