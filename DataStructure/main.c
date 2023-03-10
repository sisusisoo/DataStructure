//
//  main.c
//  DataStructure
//
//  Created by 강현철 on 2023/03/10.
//

#include <stdio.h>
int prime(int maxNumber){
    int primeNumber=0;
    int count=0;
    int sum=0;
    
    for(int i=2;i<maxNumber;i++)
    {
        count=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        
        if(count==1)
        {
            primeNumber=i;
            sum+=primeNumber;
            
            //printf("%d, ",primeNumber);
        }
        
        
  
        
     
    }
   
    return sum;
    
}

int main() {
    int i=prime(100);
    printf("%d",i);
    return 0;
}
