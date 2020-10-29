#include <bits/stdc++.h> 
#include<string.h> 
using namespace std; 
  
int compare (const void * a, const void * b);  
  
void allLexicographicRecur (char *str, char* data,  
                            int last, int index) ;
{  
    int i, len = strlen(str);  
    
    for ( i = 0; i < len; i++ )  
    {  
       
        data[index] = str[i] ;  
   
        if (index == last)  
            cout << data << endl;  
        else  
            allLexicographicRecur (str, data, last, index+1);  
    }  
}  
  
void allLexicographic(char *str)  
{  
    int len = strlen (str) ;  
  
    
    char *data = (char *) malloc (sizeof(char) * (len + 1)) ;  
    data[len] = '\0';  
  
   
    qsort(str, len, sizeof(char), compare);  
  
     
    allLexicographicRecur (str, data, len-1, 0);  
  
   
    free(data);  
}  
  
 
int compare (const void * a, const void * b)  
{  
    return ( *(char *)a - *(char *)b );  
}  
  
 
int main()  
{  
    char str[] = "ABC";  
    cout << "All permutations with repetition of "<<  
                                str <<" are: "<<endl ;  
    allLexicographic(str);  
    return 0;  
}  
  
