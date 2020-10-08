#include <evm_operations.h>


int boothid(int id)//EVM ACTIVATION
{
int boothid=100500;
if(id==boothid)
	{
	    printf("#####EVM ACTIVATED######\n");
	    printf("CHIEF ELECTORAL OFFICER- Mr.Shyam Prasad Sharma\n");
	    printf("CONSTITUTION- TRIVANDRUM");
	    //getch();
	    //system("cls");
	     //menu();
	    return 1;

	}
	else
	{
		printf("\n        SORRY !!!!  INCORRECT BOOTH ID\n          EVM ACTIVATION FAILED");
               //getch();//holds the screen
		//main();
		return 0;

	}
}


//ADMIN LOGIN
int adLogin(char uname[10],char pword[10])
{
 if(strcmp(uname,"admin")==0 && strcmp(pword,"passkey")==0)
 {
     return 1;
 }
 else
    return 0;
}
