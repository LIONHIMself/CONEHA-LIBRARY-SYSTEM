#include <stdio.h>
#include <stdlib.h>





int main()
{
    int pin=1999,action,choice;
    char yes,no;
    //navigaion menu
    do{
        printf("WELCOME TO COUNTY LIBRARY\n");
        printf("login AS\n");
        printf("1.Admin \n");
        printf("2.User \n");
        printf("3.Staff\n");

        printf("Input your choice: ");
        scanf("%d", &choice);
        if (choice==1)
        {
            printf("PLEASE ENTER SET UP PASSWORD\n");
            printf("Enter password: ");
            printf("Your password is 1999 \n");
            printf("enter pin: ");
            scanf("%d", &pin);
            do{
                if(pin<1998 || pin>2000)
            {
                printf("INVALID LOGIN. TRY AGAIN\n");
            }
            }while(pin< 1999 || pin>2000);

           do{
            printf("******WELCOME TO COUNTY LIBRARY******\n");
            printf("1.ADD STAFF\n");
            printf("2.DELETE STAFF \n");
            printf("3.EDIT STAFF\n");
            printf("ENTER YOUR CHOICE: ");
            scanf("%d", &choice);
           }while(choice<1 || choice>3);
            if (choice==1)
            {
                printf("******* MEMBERS******\n");
                printf("1.AMOS KINUTHIA \n");
                printf("0712345678\n");

                printf("2.EVANS KARUGA \n");
                printf("070987654\n");

                printf("3.FREDRICK OCHIENG \n");
                printf("079876543\n");

                printf("4.GRACE KANGARA\n");
                printf("07876543\n");

                printf("5.JOSHUA SELMAN\n");
                printf("077645423\n");

                do{
                printf("**********************");
                printf("ENTER MENBERS TO BE ADDED TO STAFF\n");
                printf("1.AMOS KINUTHIA\n");
                printf("2.EVANS KARUGA\n");
                printf("3.FREDRICK OCHIENG\n");
                printf("4.GRACE KANGARA\n");
                printf("5.JOSHUA SELMAN\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d", &choice);
                }while(choice<1 || choice>5);
                if (choice==1)
                {
                    printf("AMOS KINUTHIA added successfully \n");
                }
                if (choice==2)
                {
                    printf("EVANS KARUGA ADDED \n");
                }
                else if(choice==3)
                {
                    printf("FREDRICK OCHIENG ADDED SUCCESSFULLY \n");
                }
                else if(choice==4)
                {
                    printf("GRACE KANGARA ADDED SUCCESSFULLY\n");
                }
                else if(choice==5)
                {
                    printf("JOSHUA SELMAN ADDED SUCCESSFULLY \n");
                }


            }
            if (choice==2)
            {
                printf("1. AMOS KINUTHIA \n");
                printf("2. EVANS KARUGA \n");
                printf("3. FREDRICK OCHIENG \n");
                printf("4. GRACE KANGARA \n");
                printf("5. JOSHUA SELMAN\n");
                printf("enter member to be deleted: ");
                scanf("%d", &choice);
                if (choice==1)
                {
                    printf("Amos kinuthia deleted \n");

                }
                if (choice==2)
                {
                    printf("Evans karuga deleted \n");
                }
                if (choice==3)
                {
                    printf("Grace kangara deleted\n");
                }
                if (choice==4)
                {
                    printf("Joshua Selman deleted\n");
                }
            }
            if (choice==3)
            {
                printf("INPUT MEMBERS TO BE EDITED\n");
                printf("1. AMOS KINUTHIA \n");
                printf("2. EVANS KARUGA\n");
                printf("3. GRACE KANGARA \n");
                printf("4. JOSHUA SELMAN\n");
                printf("5. FREDRICK OCHIENG\n");
                printf("ENPUT CHOICE: ");
                scanf("%d", &choice);
                if (choice==1)
                {
                    printf("SWAP AMOS WITH\n");
                    printf("1.TEDDY OBARE \n");
                    printf("0787873434\n");
                    printf("ENTER YOUR CHOICE: ");
                    scanf("%d", &choice);
                    if (choice==1)
                    {
                        printf("ACTION PERFORMED SUCCESSFULLY\n");
                    }
                }
                if (choice==2)
                {
                    printf("SWAP EVANS KARUGA WITH\n");
                    printf("1. FAITH OBIKI \n");
                    printf("2.CAROLINE KAMAU\n");
                    printf("ENTER CHOICE: ");
                    scanf("%d", &choice);
                    if (choice==1)
                    {
                        printf("ACTION PERFORMED SUCCESSFUL \n");
                        printf("EVANS KARUGA swapped with faith obiki\n");
                    }
                    if (choice==2)
                    {
                        printf("ACTION PERFORMED SUCCESSFULLY \n");
                        printf("EVANS KARUGA swapped with Caroline kamau\n");
                    }
                }
                if (choice==3)
                {
                    printf("SWAP GRACE WITH: \n");
                    printf("1. CAPTAIN JOSEPH\n");
                    printf("2 KURIA MOSES\n");
                    printf("ENTER CHOICE: ");
                    scanf("%d", &choice);
                    if (choice==1)
                    {
                        printf("ACTION PERFORMED SUCCESSFULLY\n");
                        printf("GRACE KANGARA swapped with Captain joseph\n");

                    }
                    if (choice==2)
                    {
                        printf("ACTION PERFORMED SUCCESSFULLY\n");
                        printf("GRACE KANGARA swapped with Kuria moses\n");
                    }
                }
                if (choice==4)
                {
                    printf("SWAP JOSHUA SELMAN WITH:\n");
                    printf("none\n");
                    printf("SUCCESSFUL\n");
                }
                else if(choice==5)
                {
                    printf("NULL\n");
                }
            }

        }
        else("INVALID PASSWORD \n");

        return 0;


        if (choice==2)
        {
            printf("1.SEARCH FOR AVAILABLE BOOKS\n");
            printf("2.Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            if (choice==1)
            {
                printf("*******Available books************\n");
                printf("1. BIOLOGY BOOK 1\n");
                printf("2. CHEMISTRY BOOK 2\n");
                printf("3. PHYSICS BOOK 3\n");
                printf("4.KISWAHILI BOOK 4\n");
                printf("********************\n");
                printf("Enter the book to borrow: ");
                scanf("%d", &choice);
                if (choice==1)
                {
                    printf("THE BOOK HAS ALREADY BEEN BORROWED\n");
                }
                if (choice==2)
                {
                    printf("The book crudetails are missing \n");
                    printf("please contact the admin\n");
                    printf("1.CONTACT ADMIN\n");
                    printf("ENTER CHOICE: ");
                    scanf("%d", &choice);
                    if (choice==1)
                    {
                        printf("WE ARE UNDER MAINTENANCE PLEASE REACH US AFTER 24 HOURS\n");
                    }

                }
                if (choice==3)
                {
                    printf("Borrowed successfully\n");
                    printf("please return by 24th \n");
                    printf("******THANKS FOR USING OUR LIBRARY \n");
                    printf("we care about your health\n");
                    printf("KEEP SAFE COMESHA CORONA \n");
                    printf("WASH AND SANITIZE\n");

                }
                if (choice==4)
                {
                    printf("*****VITABU VYA KISWAHILI***** \n");
                    printf("1.TUMBO LISILO SHIBA \n");
                    printf("2. MSTAHIKIMEA \n");
                    printf("****************\n");
                    printf("ENTER YOUR CHOICE: ");
                    scanf("%d, &choice");
                    if (choice==1)
                    {
                        printf("KITABU KIMEOMBWA\n");

                    }
                    if (choice==2)
                    {
                        printf("Which date do you want to return the book\n");
                        printf("1.date 23\n");
                        printf("2.date 25\n");
                        printf("enter your choice: ");
                        scanf("%d", &choice);
                        if (choice==1)
                        {
                            printf("OKAY\n");

                        }
                        if (choice==2)
                        {
                            printf("ALRIGHT\n");
                        }
                    }
                }

            }
            else if(choice==2)
            {
                printf("********THANKS FOR USING OUR LIBRARY SERVICES!!!!!!\n");
            }
        }
        do{
        if (choice==3)
        {
            printf("1.ADD \n");
            printf("2.EDIT \n");
            printf("3.DELETE \n");
            printf("enter choice: ");
            scanf("%d", &choice);

            if(choice==1)
            {
                printf("which book do you want to add?\n");
                printf("1. BIOLOGY BOOK 3\n");
                printf("2.CHEMISTRY BOOK 4\n");
                printf("3.PHYSICS BOOOK 4\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d", &choice);
                if (choice==1)
                {
                    printf("*****BOOK ADDED SUCCESSFULLY \n");

                }
                if (choice==2)
                {
                    printf("Book added successfully \n");
                }
                if (choice==3)
                {
                    printf("Book added successfully \n");
                }

            }
            if (choice==2)
            {
                printf("ENTER BOOK TO BE EDITTED\n");
                printf("1.BIOLOGY BOOK 3 \n");
                printf("2.CHEMISTRY BOOK 4\n");
                printf("3.PHYSICS BOOK 4\n");
                printf("ENTER YOUR CHOICE: ");
                scanf("%d", &choice);
                if (choice==1)
                {
                    printf("Do you want to EDIT your choice?\n");
                    printf("1.YES\n");
                    printf("2.NO\n");
                    printf("ENTER CHOICE: ");
                    scanf("%d", &choice);
                    if(choice==1)
                    {
                        printf("!!!!BOOK EDITTED SUCCESS!!!!\n");
                    }
                    else if(choice==2)
                    {
                        printf("!!!!!BOOK EDITTED SUCCESS \n");
                    }

                }
                if (choice==2)
                {
                    printf("do you want to edit the book? \n");
                    printf("1.YES \n");
                    printf("2.NO \n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice);
                    if (choice==1)
                    {
                        printf("!!!!!BOOK EDITTED SUCCESSFUL\n");
                    }
                    else if(choice==2)
                    {
                        printf("!!!!!BOOK EDITTED SUCCESS \n");
                    }
                    printf("!!!!!!!BOOOK EDITED SUCCESSFUL!!!!!!!\n");
                }
                if (choice==3)
                {
                    printf("!!!!!!BOOK EDITTED SUCCE!!!!!!\n");
                }
            }
        }
        }while (action<1 || action>3);


        if(choice <1 || choice >8)
        {
            printf("INVALID CHOICE.TRY AGAIN \n");
        }
        else("try again \n");
        printf("Enter pin: ");
        scanf("%d", &pin);
        printf("*****WELCOME LION\n");

        if(pin!=1999)
        {
            printf("Invalid login.please try again\n");
        }
        else("try again\n");

        printf("1. Add user\n");
        printf("2.Add book\n");
        printf("3.Exit\n");
        printf("Action(1-3): ");
        scanf("%d", &action);

        if(action<1 || action>3)
        {
            printf("invalid choice. Try again\n");

        }
    }while (action<1 || action >3);
    return action;
















}
