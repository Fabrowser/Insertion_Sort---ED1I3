#include <iostream>
using namespace std;

void sort_bubble(int t, int *a)
{
	int aux;
	
	for(int i=0; i<t-1; ++i) // Loop que pega o primeiro elemento do Array e testa até o ultimo = t-1
	{
		
		cout << "a[" << i << "]: " << a[i] << ", ";
		cout  << "a[" << i+1 << "]: " << a[i+1] << endl;
		
			if (a[i] > a[i+1])
			{
				aux = a[i];
				a[i] = a[i+1];
				a[i+1] = aux;
				cout << " -- Trocou --" << endl;
				
				if (i!=0){
					
					for(int j=i; j>0; --j) // Loop que testa o elemento atual que acabou de ser trocado com os elementos anteriores - Sentido inverso 
 		   		   		{
									
						if (a[j] < a[j-1])
	   		   		   	{
   		   		          	int aux2 = 	a[j];
							a[j] = a[j-1];
							a[j-1] = aux2;		   		   		   		   	
							cout << " -- Trocou --" << endl;
		
  		   				}
				
   	  					} // FIM LOOP
											   
						}   
	
				cout << endl;
			
            }		
			
			cout << "-------" << endl;
    } // FIM LOOP
     
}


void print(int t, int *a)
{
	for(int i=0; i<t; ++i)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
	}
	cout << "-------" << endl;
}

int main(int argc, char** argv)
{
	int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
	print(8, v);
	sort_bubble(8, v);
	print(8, v);
	
	return 0;
}