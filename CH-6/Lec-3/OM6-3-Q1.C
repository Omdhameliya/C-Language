#include<stdio.h>
#include<conio.h>

main()

{
  int choice,bill=0;
  clrscr();
    more:
    printf("Press 1 For Sandwitch\n");
    printf("Press 2 For Pizza\n");
    printf("Press 3 For Burger\n");
    printf("Press 4 For Dosa\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);


    switch(choice)
    {
      case 1 :
	      printf("Press 1 For Chees Sandwitch\t100 Rs/-\n");
	      printf("Press 2 For Kachi Sandwitch\t70 Rs/-\n");
	      printf("Press 3 For Greel Sandwitch\t80 Rs/-\n");
	      printf("Press 4 For Normal Sandwitch\t50 Rs/-\n");
	      printf("Enter Your Choice : ");
	      scanf("%d",&choice);
	      clrscr();
	      switch(choice)
	      {
		 case 1:
			printf("You Orderd Chees Sandwitch..\n");
			bill += 100;

			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
			break;
		 case 2:
			printf("You Orderd Kachi Sandwitch..\n");
			bill += 70;


			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
			 break;
		 case 3:
			printf("You Orderd Greel Sandwitch..\n");
			bill += 80;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 4:
			printf("You Orderd Normal Sandwitch..\n");
			bill += 50;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		  default :
			 printf("Invalid Choice..\n");


	      }

      case 2 :
	      printf("Press 1 For Seven Cheesy Piza\t400 Rs/-\n");
	      printf("Press 2 For Margherita Pizza\t350 Rs/-\n");
	      printf("Press 3 For Sicilian Pizza\t400 Rs/-\n");
	      printf("Press 4 For Greek Pizza\t\t450 Rs/-\n");
	      printf("Enter Your Choice : ");
	      scanf("%d",&choice);
	      switch(choice)
	      {
		 case 1:
			printf("You Orderd Seven Cheesy Pizza..\n");
			bill += 400;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 2:
			printf("You Orderd Margherita Pizza..\n");
			bill += 350;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 3:
			printf("You Orderd Sicilian Pizza..\n");
			bill += 400;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 4:
			printf("You Orderd Greek Pizza..\n");
			bill += 450;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		  default :
			 printf("Invalid Choice..\n");

	      }

      case 3 :
	      printf("Press 1 For Chees Burger\t100 Rs/-\n");
	      printf("Press 2 For Normal Burger\t70 Rs/-\n");
	      printf("Press 3 For Tanduri Burger\t90 Rs/-\n");
	      printf("Press 4 For Mushroom Burger\t150 Rs/-\n");
	      printf("Enter Your Choice : ");
	      scanf("%d",&choice);
	      switch(choice)
	      {
		 case 1:
			printf("You Orderd Chees Burger..\n");
			bill += 100;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 2:
			printf("You Orderd Normal Burger..\n");
			bill += 70;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 3:
			printf("You Orderd Tanduri Burger..\n");
			bill += 90;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 4:
			printf("You Orderd Mushroom Burger..\n");
			bill += 150;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		  default :
			 printf("Invalid Choice..\n");

	      }

      case 4 :
	      printf("Press 1 For Chees Dosa\t150 Rs/-\n");
	      printf("Press 2 For Normal Dosa\t70 Rs/-\n");
	      printf("Press 3 For Masala Dosa\t100 Rs/-\n");
	      printf("Press 4 For Paneer Dosa\t130 Rs/-\n");
	      printf("Enter Your Choice : ");
	      scanf("%d",&choice);
	      switch(choice)
	      {
		 case 1:
			printf("You Orderd Chees Dosa..\n");
			bill += 150;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 2:
			printf("You Orderd Normal Dosa..\n");
			bill += 70;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 3:
			printf("You Orderd Masala Dosa..\n");
			bill += 100;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		   break;
		 case 4:
			printf("You Orderd Paneer Dosa..\n");
			bill += 130;
			printf("Press 1 For More Order\n");
			printf("Press 0 For Bill\n");
			printf("Enter Your Choice\n");
			scanf("%d",&choice);
			if(choice == 1)
			{
			  goto more;
			}
		       break;
		  default :
			 printf("Invalid Choice..\n");

	      }
	default :
	printf("Invalid Choice..\n");

    }

    printf("Your Bill Is = %d",bill);

  getch();
}