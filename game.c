//readline.h
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int name_lenght;
char jmeno_true;
char lang;
bool lang_correct;
char accept;

int erb(void){
  printf("# ..'..'..'..'..'..'..'..'..'..'..\n");
  printf("# .'..'..'..'..'..'..'..'..'..'..'\n");
  printf("# ..'..'.'XOXOt.'..'`[*&|X..'..'..\n");
  printf("# .'.'..'..^~p&O...]kQ0!...'..'..'\n");
  printf("# ...~(..'.'./&8J.'U88:..'..'..'..\n");
  printf("# .'.[W&o?^'.,88C^/CL*,'..''`[_`'.\n");
  printf("# .'.'lua&W#Y8888888888I]8&bq*?..'\n");
  printf("# ..'...'..CMa888888888fXfnC?.'.'.\n");
  printf("# .'..'..'.)&JO888888d&&...'.'....\n");
  printf("# ..'..'...'mmQh8oo8bW#_.'..'..'.'\n");
  printf("# .'..'..'..08#ZWW88hWx.'.'..'..'.\n");
  printf("# ..'..'..'.`8Md*akCZW,....'..'...\n");
  printf("# .'.'..'....]Mm888&&[''.'..'..'.'\n");
  printf("# .'..'..'.'.'lit8v|<''..'.'..'...\n");
  printf("# ..'..'..'.'.'[8888-..'....'..'.'\n");
  printf("#  '..'..'...'.'18&{.'..'.'..'..'\n");
  printf("#  '.'..'..'....~pCl..'..'.'..'.'\n");
  printf("#    ``'..'.'.'.'...'..'....'``\n");
  printf("#       ;``'...'...'..'.'^`;\n");
  printf("#           $..``'.``..$\n");
  return 0;
}

int main(void){

  
  //////////////////////////////////////////////////
  //Vybírání jazyku
  //////////////////////////////////////////////////
  do{
    printf("\nlang CS/EN (c/e): ");
    scanf("%c", &lang);
    getchar();
    if(lang == 'c' || lang == 'e')
      lang_correct = true;
    else{
      lang_correct = false;
    }
  }while(lang_correct == false);

  
  //////////////////////////////////////////////////
  //Potvrzení jazyku
  //////////////////////////////////////////////////
  switch(lang){
  case 'c':
    printf("Zvoleny jazyk: Cestina\n");
    break;
  case 'e':
    printf("Chosen language: English\n");
    break;
  default:
    break;
  }

  
  //////////////////////////////////////////////////
  //Obsah hry - dělený pomocí switche na En a Cz
  //////////////////////////////////////////////////
  switch(lang){
  case 'c':
    printf("Vitej do tohoto jednoducheho TRPG!\n");
    printf("\n");
    printf("**********************************\n");
    erb();
    printf("**********************************\n");
    printf("\n");
    printf("Kdo jsi (jmeno hrace)?\n");
    while(jmeno_true != 'y'){
      jmeno_true = 'n';
      printf("\nJak dlouhe je tve jmeno?: ");
      scanf("%d", &name_lenght);
      getchar();
      char jmeno_hrace[name_lenght];
      printf("Zadej tedy sve jmeno: ");
      for(int i = 0; i <= name_lenght-1; i++){
	scanf("%c", &jmeno_hrace[i]);
	//printf("*");
      }
      getchar();
      printf("Takze tve jmeno je: ");
      for(int i = 0; i <= name_lenght-1; i++){
	printf("%c", jmeno_hrace[i]);
	//printf("*");
      }
      printf(" (y/n): ");
      scanf("%c", &jmeno_true);
      getchar();
      /*printf("Hrac zadal: %c \n", jmeno_true);
	getchar();*/
    }
    for(int i = 0; i <= 100; i++){
      printf("\n");
    }
    //system("clear");

    //getchar() funguje misto scanf("%c", &accept)

    printf("V tomto TRPG je par zakladnich prikazu pro interakci s okolim.\n");
    //scanf("%c", &accept);
    getchar();
    printf("L - 'l' - rozhlednout se\n");
    //scanf("%c", &accept);
    getchar();
    printf("I - 'i' - inventar / copak mam po kapsach\n");
    //scanf("%c", &accept);
    getchar();
    printf("E - 'e' - interagovat s ...\n");
    scanf("%c", &accept);
    ////////////////////////////////////////////////
    //Konečný segment
    ////////////////////////////////////////////////
    printf("\nprozatim konec\n");
    break;
    ////////////////////////////////////////////////
  case 'e':
    printf("Welcome to this simple TRPG!\n");
    printf("\n");
    printf("**********************************\n");
    erb();
    printf("**********************************\n");
    printf("\n");
    printf("Who are you (player name)?\n");
    while(jmeno_true != 'y'){
      jmeno_true = 'n';
      printf("\nHow long is your name?: ");
      scanf("%d", &name_lenght);
      getchar();
      char jmeno_hrace[name_lenght];
      printf("Enter your name: ");
      for(int i = 0; i <= name_lenght-1; i++){
	scanf("%c", &jmeno_hrace[i]);
	//printf("*");
      }
      getchar();
      printf("So, your name is ");
      for(int i = 0; i <= name_lenght-1; i++){
	printf("%c", jmeno_hrace[i]);
	//printf("*");
      }
      printf(" (y/n): ");
      scanf("%c", &jmeno_true);
      getchar();
      /*printf("Hrac zadal: %c \n", jmeno_true);
	getchar();*/
    }
    for(int i = 0; i <= 100; i++){
      printf("\n");
    }
    //system("clear");

    
    ////////////////////////////////////////////////
    //End Segment
    ////////////////////////////////////////////////
    printf("\nThe end (so far)\n");
    break;
  default:
    break;
  }    
}

