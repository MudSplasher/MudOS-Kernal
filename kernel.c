#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/stdlib.h"

kmain()
{
	char exited = '0';

    clearScreen();
    print("Welcome to the MudOS kernal\nPlease enter a command\n");
    while (1)
    {
		if(exited != 1)
		{
			print("\nMudOS Kernal> ");                
			string ch = readStr();
            if(strEql(ch,"startkernal"))
            {
				print("\nYou are already in the kernal.\n");
            }
            else if (strEql(ch, "mudanimate")) 
             {
      	         
              }
             else if (strEql(ch, "mud")) 
            {
            	print("mudsplasher");
            }
            else if(strEql(ch,"clear"))
            {
				clearScreen();
            }
			else if(strEql(ch, "help"))
			{
				print("\n+------------------+\n");
				print("\n|MudOS Kernal  Commands|\n");
				print("\n+------------------+\n\n");
				print("mud\t\t Prints a message --->  mud\n  startkernal\t\tStarts the kernal cmd prompt.\nclear\t\tClears the screen.\nhelp\t\tPrints this help message.\nexit\t\tExits the MudOS Kernal.");
			}
			
			else if(strEql(ch, "exit"))
			{
				clearScreen();
				exited = 1;
				print("You exited the kernal. Please turn off your computer!\n"); 
			}
			else
			{
				print("\nCommand is not found in kernal.c or its the error in the code send issues in the github repo\n");
			}
                
            print("\n");
		} 
	}    
}
