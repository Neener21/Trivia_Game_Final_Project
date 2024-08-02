///Final Project: Who Wants to Be a Millionaire with Editor 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


typedef struct Node
{
	int x; //x = 50/50
	int phone;
	int audi; //Audience
	char correct;
	char qu[80]; //Question
	struct Node* prev;
	struct Node* next;
	char ans[4][60]; //Answer 
}quest; //Question 

int main()
{
	//Question 1 
	quest* head = (quest*)malloc(sizeof(quest));
	head->prev = NULL;
	head->next = NULL;
	strcpy_s(head->qu, "In what year were the first Air Jordan sneakers released?");
	strcpy_s(head->ans[0], "1984"); //Correct 
	strcpy_s(head->ans[1], "1977");
	strcpy_s(head->ans[2], "1996");
	strcpy_s(head->ans[3], "2001");
	quest* current = head;
	

	//Question 2
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "What is the rarest M&M color?");
	strcpy_s(current->ans[2], "Blue");
	strcpy_s(current->ans[0], "Brown"); //Correct 
	strcpy_s(current->ans[1], "Green");
	strcpy_s(current->ans[3], "Yellow");
	

	//Question 3
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "Which African country was formerly known as Abyssinia?");
	strcpy_s(current->ans[3], "Nigeria");
	strcpy_s(current->ans[1], "Wakanda");
	strcpy_s(current->ans[2], "Egypt");
	strcpy_s(current->ans[0], "Ethiopia"); //Correct
	

	//Question 4
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "Fissures, vents, and plugs are all associated with which geological feature?");
	strcpy_s(current->ans[0], "Volcanoes"); //Correct
	strcpy_s(current->ans[1], "Tsunamis");
	strcpy_s(current->ans[3], "Glaciers");
	strcpy_s(current->ans[2], "Earthquakes");
	

	//Question 5
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "How many bones does an adult human have?");
	strcpy_s(current->ans[1], "196 Bones");
	strcpy_s(current->ans[0], "206 Bones"); //Correct
	strcpy_s(current->ans[3], "230 Bones");
	strcpy_s(current->ans[2], "171 bones");
	

	//Question 6
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "Which author wrote the ""Winnie-the-Pooh books""?");
	strcpy_s(current->ans[2], "Seth MaFarlane");
	strcpy_s(current->ans[0], "A. A. Milne"); //Correct
	strcpy_s(current->ans[1], "George Orwell");
	strcpy_s(current->ans[3], "C.S Lewis");
	

	//Question 7
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "What is the loudest animal on Earth?");
	strcpy_s(current->ans[3], "Lion");
	strcpy_s(current->ans[1], "Elephant");
	strcpy_s(current->ans[2], "Tiger Pistol Shrimp");
	strcpy_s(current->ans[0], "Sperm Whale"); //Correct
	

	//Queston 8
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "What year did the Berlin wall fall?");
	strcpy_s(current->ans[1], "1979");
	strcpy_s(current->ans[0], "1989");//correct
	strcpy_s(current->ans[3], "1999");
	strcpy_s(current->ans[2], "1969");
	

	//Question 9
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "What was the first toy to be advertised on television?");
	strcpy_s(current->ans[2], "Silly Putty");
	strcpy_s(current->ans[0], "Mr. Potato Head"); //Correct
	strcpy_s(current->ans[3], "GI JOE");
	strcpy_s(current->ans[1], "Beanie Babies");
	

	//Queston 10
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "What is the tiny piece at the end of a shoelace called?");
	strcpy_s(current->ans[3], "Eyelet");
	strcpy_s(current->ans[2], "Eyestay");
	strcpy_s(current->ans[0], "Aglet"); //Correct 
	strcpy_s(current->ans[1], "Upper");
	

	//Queston 11
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "Which country consumes the most chocolate per capita?");
	strcpy_s(current->ans[1], "United states of america");
	strcpy_s(current->ans[0], "Switzerland"); //Correct 
	strcpy_s(current->ans[2], "Canada");
	strcpy_s(current->ans[3], "Britain");
	

	//Queston 12
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "What is the tallest breed of dog in the world?");
	strcpy_s(current->ans[1], "Great Pyrenees");
	strcpy_s(current->ans[2], "Mastiff");
	strcpy_s(current->ans[0], "Great Dane"); //Correct 
	strcpy_s(current->ans[3], "Saint Bernard");
	

	//Question 13
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "How many new babies are born in one minute?");
	strcpy_s(current->ans[0], "267/m");//correct 
	strcpy_s(current->ans[1], "506/m");
	strcpy_s(current->ans[2], "358/m");
	strcpy_s(current->ans[3], "912/m");
	

	//Question 14
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "What country won the very first FIFA World Cup in 1930?");
	strcpy_s(current->ans[1], "Brazil");
	strcpy_s(current->ans[3], "Spain");
	strcpy_s(current->ans[2], "England");
	strcpy_s(current->ans[0], "Uruguay"); //Correct 
	

	//Question 15
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	current->next = NULL;
	strcpy_s(current->qu, "How many eyes does a bee have?");
	strcpy_s(current->ans[1], "Three");
	strcpy_s(current->ans[0], "Five"); //Correct 
	strcpy_s(current->ans[2], "Two");
	strcpy_s(current->ans[3], "Seven");
	

	//Delete backup question
	current->next = (quest*)malloc(sizeof(quest));
	current->next->prev = current;
	current = current->next;
	quest* tail = current;
	tail->next = NULL;
	strcpy_s(current->qu, "What year was the C programming language created?");
	strcpy_s(current->ans[1], "2000");
	strcpy_s(current->ans[3], "1988");
	strcpy_s(current->ans[2], "1945");
	strcpy_s(current->ans[0], "1978");
	

	quest* temp2 = head; //Life-lines being initialized 
	temp2->x = 1;
	temp2->phone = 1;
	temp2->audi = 1;

	int sel; //Selection 

	printf("Loading."); //Mandatory loading screen for maximum efficiency
	Sleep(1000);
	system("cls");
	printf("Loading..");
	Sleep(400);
	system("cls");
	printf("Loading...");
	Sleep(400);
	system("cls");
	printf("Loading..");
	Sleep(400);
	system("cls");
	printf("Loading.");
	Sleep(400);
	system("cls");
	printf("Loading..");
	Sleep(400);
	system("cls");
	printf("Loading...");
	Sleep(400);
	system("cls");
	printf("Loading..");
	Sleep(400);
	system("cls");
	printf("Loading.");
	Sleep(400);
	system("cls");
	printf("Loading..");
	Sleep(400);
	system("cls");
	printf("Loading...");
	Sleep(400);

	char selQuest[100];
	char answer0[100];
	char answer1[100];
	char answer2[100];
	char answer3[100];
	char cor;
	int lifdec; //Life decision
	int lifcho; //Life choice 
	Sleep(700);
	system("cls");
	printf("Welcome to Who Wants to Be a Millionaire!\n");
	printf("Let's play the game! \n\n");
	printf("Select (1) for Play\n");
	printf("Select (2) for Question Editor\n");

	char plch; //Player Choice
	int m$ = 0; //Money 
	int i2;
	int sel2 = 0;
	int sel3 = 0;

	current = head;
	quest* temp = NULL;
	scanf_s("%i", &sel); //Initialize editor 
	while (sel == 2)
	{
		system("cls");
		printf("Would you like to (1) Add (2) Edit or (3) Delete a question: \n");
		scanf_s("%i", &sel2);

		if (sel2 == 1)
		{
			i2 = 1;
			current = head;
			while (current != NULL)
			{
				printf("Question %i: %s\n", i2, current->qu);
				printf("-----------------------------------------------------------------\n");
				current = current->next;
				i2++;
			}
			current = head;

			printf("Which number would you like to add your question to? \n"); //Initialize option to add question 
			scanf_s("%i", &sel3);

			if (sel3 == 1)
			{
				head->prev = (quest*)malloc(sizeof(quest));
				head->prev->next = head;
				head = head->prev;
				head->prev = NULL;
				printf("Please type a question: \n");
				gets_s(selQuest);
				gets_s(selQuest);
				strcpy_s(head->qu, selQuest);

				printf("Please type the right answer: \n");
				gets_s(answer0);
				strcpy_s(head->ans[0], answer0);

				printf("Please type your 2nd answer: \n");
				gets_s(answer1);
				strcpy_s(head->ans[1], answer1);

				printf("Please type your 3rd anweser: \n");
				gets_s(answer2);
				strcpy_s(head->ans[2], answer2);

				printf("Please type your 4thanswer: \n");
				gets_s(answer3);
				strcpy_s(head->ans[3], answer3);

				printf("Here's the updated list: \n\n");

				current = head;
				i2 = 1;
				while (current != NULL)
				{
					printf("Question %i: %s\n", i2, current->qu);
					printf("-----------------------------------------------------------------\n");
					current = current->next;
					i2++;
				}
			}
			else
			{
				temp = (quest*)malloc(sizeof(quest));
				printf("Please type a question: \n");
				gets_s(selQuest);
				gets_s(selQuest);
				strcpy_s(temp->qu, selQuest);

				printf("Please type the correct answer: \n");
				gets_s(answer0);
				strcpy_s(temp->ans[0], answer0);

				printf("Please type your 2nd answer: \n");
				gets_s(answer1);;
				strcpy_s(temp->ans[1], answer1);

				printf("Please type your 3rd answer: \n");
				gets_s(answer2);
				strcpy_s(temp->ans[2], answer2);

				printf("Please type your 4th answer: \n");
				gets_s(answer3);
				strcpy_s(temp->ans[3], answer3);

				current = head;
				for (int i = 0; i < sel3 - 2; i++)
				{
					current = current->next;
				}
				temp->next = current->next;
				temp->next->prev = temp;
				current->next = temp;
				current->next->prev = current;
				current = head;

				i2 = 1;
				while (current != NULL)
				{
					printf("Question %i: %s\n", i2, current->qu);
					printf("-----------------------------------------------------------------\n");
					current = current->next;
					i2++;
				}
				current = head;
			}
		}
		else if (sel2 == 2)
		{
			current = head;
			i2 = 1;
			while (current->next != NULL)
			{
				printf("Question %i: %s\n", i2, current->qu);
				printf("-----------------------------------------------------------------\n");
				current = current->next;
				i2++;
			}
			current = head;
			printf("Which question would you like to edit? \n"); //Initialize option to edit question 
			scanf_s(" %i", &sel3);
			sel3 = sel3 - 1;
			while (sel3 != 0)
			{
				current = current->next;
				sel3--;
			}
			printf("Please type a question: \n");
			gets_s(selQuest);
			gets_s(selQuest);
			strcpy_s(current->qu, selQuest);

			printf("Please type your correct answer : \n");
			gets_s(answer0);
			strcpy_s(current->ans[0], answer0);

			printf("Please type your 2nd answer: \n");
			gets_s(answer1);
			strcpy_s(current->ans[1], answer1);

			printf("Please type your 3rd answer: \n");
			gets_s(answer2);
			strcpy_s(current->ans[2], answer2);

			printf("Please type your 4th answer: \n");
			gets_s(answer3);
			strcpy_s(current->ans[3], answer3);

			printf("Here's the updated list: \n ");
			current = head;
			i2 = 1;
			while (current->next != NULL)
			{
				printf("Question %i: %s\n", i2, current->qu);
				printf("-----------------------------------------------------------------\n");
				current = current->next;
				i2++;
			}
		}
		else if (sel2 == 3)
		{
			current = head;
			i2 = 1;
			while (current->next != NULL)
			{
				printf("Question %i: %s\n", i2, current->qu);
				printf("-----------------------------------------------------------------\n");
				current = current->next;
				i2++;
			}
			current = head;
			printf("Which question would you like to delete? \n"); //Initialize option to delete question 
			scanf_s("%i", &sel3);
			if (sel3 == 1)
			{
				head = head->next;
				free(current);
				head->prev = NULL;
				current = head;
			}
			else
			{
				current = head;
				sel3 = sel3 - 1;
				while (sel3 != 0)
				{
					current = current->next;
					sel3--;
				}
				if (current == tail)
				{
					tail = tail->prev;
					free(current);
					tail->next = NULL;
					current = head;
				}
				else
				{
					temp = current;
					temp->prev->next = temp->next;
					temp->next->prev = temp->prev;
					temp = temp->next;
					free(current);
					current = head;
				}
				system("cls");
				current = head;
				printf("Here's the updated list: \n");
				i2 = 1;
				while (current != NULL)
				{
					Sleep(100);
					printf("Question %i: %s\n", i2, current->qu);
					printf("-----------------------------------------------------------------\n");
					current = current->next;
					i2++;
				}
				current = head;
			}
		}
		printf("Would you like to (1) Play game or (2) Edit again? \n");
		scanf_s("%i", &sel);
		system("cls");
	}
	current = head;
	system("cls");

	//Question 1 
	system("cls");
	printf("\nWelcome to the game!\nPlease type in the capital letter of your answer: \n\n");
	printf("\nYour first question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it...\n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[2], current->ans[3]);
	current->correct = 'A';

	lifcho = 0;

	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}

	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");
		printf("(1) 50/50\n(2) Call a friend\n(3) Ask the audience: \n");
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[2], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			temp2->audi--;
			current->correct = 'B';
		}
	}
	else if (lifcho == 2)
	{
		system("cls");
		printf("\nYour first question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it...\n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[2], current->ans[3]);
		scanf_s(" %c", &plch);
	}
	if (plch == head->correct)
	{
		system("cls");
		printf("Correct! \n");
		m$ = m$ + 100;
		printf("You now have $%i\n", m$);
		Sleep(2000);
		system("cls");
	}
	else
	{
		system("cls");
		printf("*Wah-Wah-Waaah*, you lose!\n");
		printf("You go home with nothing.\n\n\n");
		return(0);
	}
	current = current->next;

	int goho; //Go home 

	//Question 2
	printf("Your second question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it...\n A.%s\n B.%s\n C.%s\n D.%s\n\n", current->ans[2], current->ans[1], current->ans[0], current->ans[3]);
	current->correct = 'C';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Awe... You're leaving me? :( \n");
		printf("You left with $%i. Queue the worlds smallest violin.", m$);
		return(0);
	}
	system("cls");
	printf("Your second question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it...\n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[1], current->ans[0], current->ans[3]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}

	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");
		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[1], current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your second question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it...\n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[1], current->ans[0], current->ans[3]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("*Slow-clap* Wow, so good. \n");
		m$ = m$ + 100;
		printf("You now have $%i\n", m$);
		Sleep(2000);
		system("cls");
	}
	else
	{
		system("cls");
		printf("You gonna cry? Well, too bad cryin' ain't gonna win you money. Get outta here!\n");
		printf("You go home with nothing.\n\n\n");
		return(0);
	}
	current = current->next;

	//Question 3
	printf("Your third question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
	current->correct = 'B';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your third question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
	lifcho = 0;

	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");
		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your third question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Mama would be proud. \n");
		m$ = m$ + 100;
		printf("You now have $%i\n", m$);
		Sleep(2000);
		system("cls");
	}
	else
	{
		system("cls");
		printf("I've seen toddlers give a better answer than that!\n");
		printf("You go home with nothing.\n\n\n");
		return(0);
	}
	current = current->next;

	//Question 4
	printf("Your fourth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[3], current->ans[2]);
	current->correct = 'A';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your fourth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[3], current->ans[2]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[3], current->ans[2]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your fourth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[3], current->ans[2]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Wow, almost at the first checkpoint... \n");
		m$ = m$ + 200;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		printf("You know you're supposed to say the right answer, right?\n");
		printf("You go home with nothing.\n\n\n");
		return(0);
	}
	current = current->next;

	//Question 5
	printf("Your fifth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
	current->correct = 'B';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your fifth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your fifth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Impressive! You reached the first checkpoint... \n");
		m$ = m$ + 500;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		printf("Really... right before the checkpoint. That mega sucks!\n");
		printf("You go home with nothing.\n\n\n");
		return(0);
	}
	current = current->next;

	//Question 6
	printf("Your sixth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[1], current->ans[3]);
	current->correct = 'B';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your sixth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[1], current->ans[3]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[1], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your sixth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[1], current->ans[3]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Good job, 'lil fella. \n");
		m$ = m$ + 1000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 1000;
		printf("Well... atleast you get something...\n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}

	current = current->next;

	//Question 7
	printf("Your seventh question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[1], current->ans[2], current->ans[0]);
    current->correct = 'D';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your seventh question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[1], current->ans[2], current->ans[0]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[1], current->ans[2], current->ans[0]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your seventh question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[1], current->ans[2], current->ans[0]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("This doesn't change that your dad is still disappointed. \n");
		m$ = m$ + 2000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 1000;
		printf("Wow, good job! Sike...\n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;

	//Question 8
	printf("Your eighth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
    current->correct = 'B';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your eighth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[3], current->ans[0], current->ans[2], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your eighth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[3], current->ans[2]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Heeeeey, that's pretty good! \n");
		m$ = m$ + 4000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 1000;
		printf("You have brought great dishonour to your family.\n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;

	//Question 9
	printf("Your ninth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
    current->correct = 'B';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your ninth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your ninth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("You're levelling up. \n");
		m$ = m$ + 8000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 1000;
		printf("Mission failed, you'll get 'em next round. \n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;

	//Question 10
	printf("Your tenth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[2], current->ans[0], current->ans[1]);
    current->correct = 'C';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your tenth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[2], current->ans[0], current->ans[1]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[2], current->ans[0], current->ans[1]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your tenth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[3], current->ans[2], current->ans[0], current->ans[1]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Whoah, watch out for gold diggers!\n You've reached your next checkpoint! \n");
		m$ = m$ + 16000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 1000;
		printf("This really is the mission imposible for you, huh. \n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;

	//Question 11
	printf("Your eleventh question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
    current->correct = 'B';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your eleventh question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your eleventh question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Care to share some with the rest of us? \n");
		m$ = m$ + 32000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 32000;
		printf("You had sparks flying out of your head on that one! \n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;

	//Question 12
	printf("Your twelfth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[0], current->ans[3]);
    current->correct = 'C';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your twelfth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[0], current->ans[3]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[0], current->ans[3]);
			scanf_s("%c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your twelfth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[0], current->ans[3]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("What in tarnation? You did it! \n");
		m$ = m$ + 61000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 32000;
		printf("You realize we got our questions from kids in kindergarten, right? \n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;

	//Question 13
	printf("Your thirteenth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[2], current->ans[3]);
    current->correct = 'A';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving so soon? :( \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your thiteenth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[2], current->ans[3]);
	lifcho = 0;

	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)

			printf("(2) Call a friend\n");
	}
	if (temp2->audi == 1)
	{
		printf("(3) Ask the audience\n");
	}
	scanf_s("%i", &lifdec);

	if (lifdec == 1 && temp2->x == 1)
	{
		system("cls");
		printf("You selected: 50/50 \n");
		current->correct = 'A';
		printf("Your question is now: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
		scanf_s(" %c", &plch);
		temp2->x--;
	}
	else if (lifdec == 2 && temp2->phone == 1)
	{
		system("cls");
		printf("You selected: Call a friend \n");
		printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
		Sleep(3500);
		system("cls");
		printf("Your question is still: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[2], current->ans[3]);
		scanf_s(" %c", &plch);
		temp2->phone--;
	}
	else if (lifdec == 3 && temp2->audi == 1)
	{
		system("cls");
		printf("You selected: Ask the audience \n");
		printf("Waiting for audience");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(600);
		system("cls");
		printf("The results are in!\n\n");
		printf("Your question is still: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
		scanf_s(" %c", &plch);
		current->correct = 'B';
		temp2->audi--;
	}
	else
	{
		system("cls");
		printf("Your thirteenth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[0], current->ans[1], current->ans[2], current->ans[3]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("Alright, dinner is on you tonight! \n");
		m$ = m$ + 125000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 32000;
		printf("Disappointed but not surprised...\n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;

	//Question 14
	printf("Your fourteenth question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[3], current->ans[0]);
    current->correct = 'D';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	goho = 0;
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving now! you kidding me, you could be a millionare stupid! \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your thiteenth question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[3], current->ans[0]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[3], current->ans[0]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[2], current->ans[0], current->ans[3], current->ans[1]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your fourteenth question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[2], current->ans[3], current->ans[0]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("You'd better buy an E-car with your funds you gas lovin' swine. \n One more question away...\n");
		m$ = m$ + 250000;
		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
	}
	else
	{
		system("cls");
		m$ = 32000;
		printf("Meh, you didn't deserve it anyways.\n");
		printf("You go home with $%i \n\n\n", m$);
		return(0);
	}
	current = current->next;


	//Question 15
	printf("Your last question is: \n\n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
    current->correct = 'B';
	printf("Would you like to go home and keep your earnings? (1) YES. (2) NO. \n");
	scanf_s("%i", &goho);

	if (goho == 1)
	{
		printf("Leaving now! you kidding me, you could be a millionare stupid! \n");
		printf("Guess I'll just play my game alone... $%i", m$);
		return(0);
	}
	system("cls");

	printf("Your last question is: \n");
	printf("%s", current->qu);
	printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
	lifcho = 0;
	if (temp2->x == 1 || temp2->phone == 1 || temp2->audi == 1)
	{
		printf("Would you like to use a lifeline? (1) YES (2) NO \n"); //Assigning lifeline 
		scanf_s("%i", &lifcho);
	}
	if (lifcho == 1)
	{
		system("cls");
		printf("Which life line would you like to use?\n");

		if (temp2->x == 1)
		{
			printf("(1) 50/50\n");
		}
		if (temp2->phone == 1)
		{
			printf("(2) Call a friend\n");
		}
		if (temp2->audi == 1)
		{
			printf("(3) Ask the audience\n");
		}
		scanf_s("%i", &lifdec);

		if (lifdec == 1 && temp2->x == 1)
		{
			system("cls");
			printf("You selected: 50/50 \n");
			current->correct = 'A';
			printf("Your question is now: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n ", current->ans[0], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->x--;
		}
		else if (lifdec == 2 && temp2->phone == 1)
		{
			system("cls");
			printf("You selected: Call a friend \n");
			printf("*RING* *RING* *RING*.... Sup boi, no doubt the answer be %s", current->ans[0]);
			Sleep(3500);
			system("cls");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
			scanf_s(" %c", &plch);
			temp2->phone--;
		}
		else if (lifdec == 3 && temp2->audi == 1)
		{
			system("cls");
			printf("You selected: Ask the audience \n");
			printf("Waiting for audience");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(600);
			system("cls");
			printf("The results are in!\n\n");
			printf("Your question is still: \n");
			printf("%s", current->qu);
			printf("\n\nIs it... \n A.%s (30%%)\n B.%s (35%%)\n C.%s (15%%)\n D.%s (20%%)\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
			scanf_s(" %c", &plch);
			current->correct = 'B';
			temp2->audi--;
		}
	}
	else
	{
		system("cls");
		printf("Your last question is: \n");
		printf("%s", current->qu);
		printf("\n\nIs it... \n A.%s\n B.%s\n C.%s\n D.%s\n", current->ans[1], current->ans[0], current->ans[2], current->ans[3]);
		scanf_s(" %c", &plch);
	}
	if (plch == current->correct)
	{
		system("cls");
		printf("WINNER WINNER CHICKEN DINNER!!!\n");
		m$ = m$ + 500000;

		printf("You now have $%i\n", m$);
		Sleep(2500);
		system("cls");
		Sleep(2000);
		printf("You got: \n");

		for (int i = 100; i > 0; i--)
		{
			Sleep(10);
			printf("1 MILLION!");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION! ");
			Sleep(10);
			printf("1 MILLION!\n ");
		}
	}
	else
	{
		system("cls");
		m$ = 32000;
		printf("You were the Chosen One, Anakin! \n");
		printf("You go home with $%i \n\n\n", m$);
		for (int i = 100; i > 0; i--)
		{
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( ");
			Sleep(10);
			printf(";( \n");
		}
		return(0);

	}

}