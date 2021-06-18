/* Enter your solutions in this file */
#include <stdio.h>
 #include <conio.h>
 
 int max(int [], int)
 {
 	int max,i;
 	max=a[0];
    for(i=1; i<n; i++)
    {
            
		   if(max<a[i])
		    max=a[i];       
    }
    
    
    printf("maximum of array is : %d",max);
 }
int main()
{
    int a[1000],i,n,max;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    max(a,n);
 
 
    
}



int min(int [], int)
 {
 	int min,i;
 	min=a[0];
    for(i=1; i<n; i++)
    {
            
		  if(min>a[i])
		  min=a[i];     
    }
    
    
    printf("minimum of array is : %d",max);
 }
int main()
{
    int a[1000],i,n,min;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min(a,n);
 }




float average(int [], int){
 int n, i;
    float num[100], sum = 0.0, avg;

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}

int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
}






int  mode(int [], int){
 int i,n,j,z, tmp, maxCount, mode;   
     for(i=0;i<n;i++)
         {
               for(j=0;j<n-i;j++)
               {
                     if(invalue[j]>invalue[j+1])
                     {
                           tmp=invalue[j];
                           invalue[j]=invalue[j+1];
                           invalue[j+1]=tmp;
                     }
               }
         }
    for (i = 0; i < n; i++) 
    {
        for(z=i+1;z<n;z++)
        {
            
            if(invalue[i]==invalue[z])
            {
                tally[i]++;
            }
        }
    }
    
    
    maxCount = 0;
    mode = 0;
    for (i = 1; i <= n; i++) 
    {
        if (tally[i] > maxCount) 
        {
            maxCount = tally[i];
            mode = invalue[i];
        }
    }
    printf("\nMode is : %d", mode);
return 0;
}
int main()
{
int a[1000],i,n,mode;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 }





# include <math.h> 
    
int factors(int, int []) 
{ 
   int n,i; 
    while (n%2 == 0) 
    { 
        printf("%d ", 2); 
        n = n/2; 
    } 
    
    
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
         
        while (n%i == 0) 
        { 
            printf("%d ", i); 
            n = n/i; 
        } 
    } 
    
    
    if (n > 2) 
        printf ("%d ", n); 
} 
    

int main() 
{ 
   int a[1000],i,n,factors;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    factors(n); 
  
}






