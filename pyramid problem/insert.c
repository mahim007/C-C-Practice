 #include<stdio.h>
 
 int main()
 {
        int array[100],i,j,n,item,pos;
        
        printf("\nhow many number in your array?:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
              scanf("%d",&array[i]);
        
        printf("item=");
        scanf("%d",&item);
        
        
        for(i=0;i<n-1;i++)
              if(item>array[i] && item <array[i+1])
              pos=i+1;
        
        for(j=n;j>pos;j--) 
              array[j]=array[j-1];
        
        array[pos]=item;
        
        for(i=0;i<=n;i++)
              printf("%d\t",array[i]);
              
              
       return 0;
 }