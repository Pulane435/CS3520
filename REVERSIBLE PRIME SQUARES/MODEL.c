
#include<stdio.h>
int findreverse(int n)//the function that finds the reverse of a number n
{
	int sum=0;//assigning sum to 0
	while(n!=0)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	return sum;
}

int square(int n)//function that finds the square of a number(n)
{
	return(n*n);
}


int checkPrime(int n)//function that check if an number is a prime number
{
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j)
	{
        if (n % j == 0)
		{
            flag = 0;
            break;
        }
    }
    return flag;
}


int palindrome(int n)//function to check if the number is a palindrome
{
	int tempo,rem,rev=0;
	tempo=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	
	if(rev==tempo)	//it is not palindrome if the two given rev and tempo are equal and palindrome otherwise
		return 0;
	else
		return 1;	
	
}

 




int main()
{
	int num; int obj1,obj2,obj3; int upperlimit=100;int lowerlimit=1; int m;int obj5;
	int i;int primenumbers;int j;int k;int squaredprimes; int p;int obj4;int arr[100];
	
	 for (i = lowerlimit + 1; i < upperlimit; ++i)//prints the prime numbers from the lower limiit
	 {											//to the upperlimit
        obj1 = checkPrime(i);					//calling check prime
        if (obj1 ==  1)
		{
            printf("%d\t", i);
            
            arr[i]=primenumbers;
            i++;
        }
        
}

obj5=sizeof(arr)/sizeof(arr[0]);
printf("%d\t",obj5);
	
	for(m=0;m<=obj5;m++)
	{
		
		printf("%d",arr[m]);
		
	}

	
	

	
	//finding the square root of prime numbers
	for(j=1;j<arr[m];j++)
	{
		obj4=square(j);
		printf("%d\t",obj4);
		squaredprimes=obj4;
	}
	
	
	
	//reversing the squared prime numbers
	for(k=1;k<squaredprimes;k++)
	{
		obj3=findreverse(k);
		printf("%d\t",obj3);
	}
	
	obj3=findreverse(squaredprimes);
	printf("%d\t",obj3);
	
	
	
	
	
	
	
	
	
	
	
	
	
	


}



