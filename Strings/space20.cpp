#include<iostream>
#include<cstring>
using namespace std;

void replace_space(char *str)
{
	int space =0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i]==' ')
		space +=1;
	}
	int index = strlen(str) + 2 * space;
	str[index]='\0';
	
	for(int i = strlen(str) - 1; i >= 0; i--)
	{
		if(str[i] == ' ')
		{
			str[index - 1] = '0';
			str[index - 2] = '2';
			str[index - 3] = '%';
			index -=3;
		}
		else
		{
			str[index - 1] = str[i];
			index -= 1;
			
		}
		
	}
	
}

int main()
{
	char input[1000];
	cin.getline(input,1000);
	replace_space(input);
	cout<<input<<endl; 
	return 0;
}
