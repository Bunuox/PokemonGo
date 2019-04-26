#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <conio.h>

const int arceuscan=420,mewtwocan=365,rauquazacan=340,pangorocan=410,giratinacan=360,pikachucan=270,charizardcan=340,squirtlecan=540,charmendercan=295,bulbasaurcan=560;
const char arceustip[]="Can't fly",mewtwotip[]="Can't fly",rauquazatip[]="Can't fly",pangorotip[]="Can't fly",giratinatip[]="Cant Fly",pikachutip[]="Can't fly",charizardtip[]="Can fly",squirtletip[]="Can't fly",charmendertip[]="Can fly",bulbasaurtip[]="Can't fly";
const int arceusdamage=30,mewtwodamage=40,rauquazadamage=45,pangorodamage=34,giratinadamage=44,pikachudamage=60,charizarddamage=49,squirtledamage=25,charmenderdamage=55,bulbasaurdamage=28;
const char arceusvibe[]="Angry",mewtwovibe[]="Angry",rauquazavibe[]="Happy",pangorovibe[]="Glad",giratinavibe[]="Strong",pikachuvibe[]="Happy",charizardvibe[]="Cool",squirtlevibe[]="Cute",charmendervibe[]="Angry",bulbasaurvibe[]="Scary";
int pokecount=0;
char pocket[150]={0};
char newpoke[20];



int  howto(){

printf("\nPokedex: You can see pokemon abilities. This option could be so helpful before tournament.\n");
printf("Lab: You can add pokemons to your's pocket. You can see your pokemons.\n");
printf("Tournament : This is the most excited and the place that happens so many ruthless fights! You can fight with your pokemon against computer. You gonna love it!\n");
printf("\n ## HowToPlay ##\n");
printf("You can check pokemon abilities from pokedex, after that you have to go lab. to catch pokemons.\nFor tournament you have to own more than 5 pokemons.\nThan, you got back to menu for tournament. Select a pokemon from your pocket for tournament.\nPlace it in 5x5 Matris. Try to catch computer in battlefield. When you catch pokemon, fight will start.\n");
printf(" ## GoodLuck ##\n");

return 1;
}

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds);
}


int tournament(){

    srand(time(NULL));
    int pokenumber=1+rand()%9;
    int aipokehealth,aipokedamage;
    char *aipokename;
    char *humanpokemon;
    int humanpokemondamage,humanpokemonhealth;

    if(pokecount<5){
        printf("\nYOU DO NOT HAVE ENOUGH POKEMONS,YOU NEED TO CATCH SOME IN LAB!\n");
        return -1;
    }
    int kontrol=0;
    char pokemonbattle[15];

    if(pokecount>=5){

        printf("Pokemons You Got : %s\n",pocket);
        printf("Select Pokemon For Battle :");
        scanf("%s",pokemonbattle);

         if(strstr(pokemonbattle,"Arceus") || strstr(pokemonbattle,"arceus")){
            humanpokemondamage=arceusdamage;
            humanpokemonhealth=arceuscan;
        }
        else if(strstr(pokemonbattle,"Mewtwo") || strstr(pokemonbattle,"mewtwo")){
            humanpokemondamage=mewtwodamage;
            humanpokemonhealth=mewtwocan;
        }
        else if(strstr(pokemonbattle,"Rauquaza") || strstr(pokemonbattle,"rauquaza")){
            humanpokemondamage=rauquazadamage;
            humanpokemonhealth=rauquazacan;
        }
        else if(strstr(pokemonbattle,"Giratina") || strstr(pokemonbattle,"giratina")){
            humanpokemondamage=giratinadamage;
            humanpokemonhealth=giratinacan;
        }
        else if(strstr(pokemonbattle,"Pikachu") || strstr(pokemonbattle,"pikachu")){
            humanpokemondamage=pikachudamage;
            humanpokemonhealth=pikachucan;
        }
        else if(strstr(pokemonbattle,"Charizard") || strstr(pokemonbattle,"charizard")){
            humanpokemondamage=charizarddamage;
            humanpokemonhealth=charizardcan;
        }
        else if(strstr(pokemonbattle,"Squirtle") || strstr(pokemonbattle,"squirtle")){
            humanpokemondamage=squirtledamage;
            humanpokemonhealth=squirtlecan;
        }
        else if(strstr(pokemonbattle,"Pangoro") || strstr(pokemonbattle,"pangoro")){
            humanpokemondamage=pangorodamage;
            humanpokemonhealth=pangorocan;
        }
        else if(strstr(pokemonbattle,"Charmender") || strstr(pokemonbattle,"charmender")){
            humanpokemondamage=charmenderdamage;
            humanpokemonhealth=charmendercan;
        }
        else if(strstr(pokemonbattle,"Bulbasaur") || strstr(pokemonbattle,"bulbasaur")){
            humanpokemondamage=bulbasaurdamage;
            humanpokemonhealth=bulbasaurcan;
        }
        else{
            printf("This Pokemon Does Not Exist!!\n");
            return -1;
        }


        if( strstr(pocket,pokemonbattle) ){

            kontrol=1;

            if(pokenumber==1){
                aipokename="Arceus";
                aipokedamage=arceusdamage;
                aipokehealth=arceuscan;
            }

            if(pokenumber==2){
                aipokename="Mewtwo";
                aipokedamage=mewtwodamage;
                aipokehealth=mewtwocan;
            }

            if(pokenumber==3){
                aipokename="Raquaza";
                aipokehealth=rauquazacan;
                aipokedamage=rauquazadamage;
            }

            if(pokenumber==4){
                aipokename="Pangoro";
                aipokehealth=pangorocan;
                aipokedamage=pangorodamage;
            }

            if(pokenumber==5){
                aipokename="Giratina";
                aipokehealth=giratinacan;
                aipokedamage=giratinadamage;
            }

            if(pokenumber==6){
                aipokename="Pikachu";
                aipokehealth=pikachucan;
                aipokedamage=pikachudamage;
            }

            if(pokenumber==7){
                aipokename="Charizard";
                aipokehealth=charizardcan;
                aipokedamage=charizarddamage;
            }

            if(pokenumber==8){
                aipokename="Squirtle";
                aipokehealth=squirtlecan;
                aipokedamage=squirtledamage;
            }

            if(pokenumber==9){
                aipokename="Charmender";
                aipokehealth=charmendercan;
                aipokedamage=charmenderdamage;
            }

            if(pokenumber==10){
                aipokename="Bulbasaur";
                aipokedamage=bulbasaurdamage;
                aipokehealth=bulbasaurcan;
            }

            printf("Pokemon You Have Selected : %s  Computer Has Selected : %s\n",pokemonbattle,aipokename,aipokedamage,aipokehealth);

        }

        else{
            printf("You Do Not Have This Pokemon Please Check Your Choice\n");
            kontrol=0;
            return -1;
        }
    }

    int i,j;
    char matrix[5][5];
    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
            matrix[j][i]='*';
    }


if(kontrol==1){

    int satir,sutun;
    int aimove;
    int a,aix=rand()%4;
    int b,aiy=rand()%4;
    printf("Locate Your Pokemon in 4x4 matris (x,y):");
    scanf("%d %d",&satir,&sutun);
    srand(time(NULL));
    a=satir;
    b=sutun;
    matrix[satir][sutun]='H';
    matrix[aix][aiy]='C';


    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
            printf(" %c ",matrix[j][i]);
        printf("\n");
    }

  //  int sayi;
    char move='\0';
    printf("game use w a s d\n");
    while(move!='m' || move!='M'){
       printf("\n");
       // scanf("%d",&sayi);
       move=getch();
        aimove=1+rand()%4;

        if(aimove==1){
            if(aix>=0 && aix<4){
                aix++;
                matrix[aix][aiy]='C';
                if(a==aix && b==aiy)
                    matrix[aix-1][aiy]='H';
                else
                    matrix[aix-1][aiy]='*';
            }

        }
        if(aimove==2){
            if(aix>0 && aix<5){
                aix--;
                matrix[aix][aiy]='C';
                if(a==aix && b==aiy)
                    matrix[aix+1][aiy]='H';
                else
                    matrix[aix+1][aiy]='*';
            }
        }
        if(aimove==3){
            if(aiy>=0 && aiy<4){
                aiy++;
                matrix[aix][aiy]='C';
                if(a==aix && b==aiy)
                    matrix[aix][aiy-1]='H';
                else
                    matrix[aix][aiy-1]='*';
            }
        }
        if(aimove==4){
            if(aiy>0 && aiy<5){
                aiy--;
                matrix[aix][aiy]='C';
                if(a==aix && b==aiy)
                    matrix[aix][aiy+1]='H';
                else
                    matrix[aix][aiy+1]='*';
            }
        }


        if(move=='d' || move == 'D'){
            if(a>=0 && a<4){
                a++;
                matrix[a][b]='H';
                matrix[a-1][b]='*';
            }
        }

        if(move=='a' || move == 'A'){
            if(a>0 && a<5){
                a--;
                matrix[a][b]='H';
                matrix[a+1][b]='*';
            }
        }
        if(move=='s' || move == 'S'){
            if(b>=0 && b<4){
                b++;
                matrix[a][b]='H';
                matrix[a][b-1]='*';
            }
        }
        if(move=='w' || move == 'W'){
            if(b>0 && b<5){
                b--;
                matrix[a][b]='H';
                matrix[a][b+1]='*';
            }
        }


        for(i=0 ; i<5 ; i++){
            for(j=0 ; j<5 ; j++)
                printf(" %c ",matrix[j][i]);
            printf("\n");
        }

        if(aix==a && aiy==b){
            matrix[a][b]='#';
            printf("\n");
        for(i=0 ; i<5 ; i++){
            for(j=0 ; j<5 ; j++)
                printf(" %c ",matrix[j][i]);
            printf("\n");
        }

        printf("    ####### War Has Begun #######\n");

        printf("Your Pokemon Health : %d        Computer Pokemon Health : %d\nYour Pokemon Damage : %d      Computer Pokemon Damage : %d\n",humanpokemonhealth,aipokehealth,humanpokemondamage,aipokedamage);
        int crit;
        int round=1,humanrate,airate,humandamage,aidamage,humanhealth=humanpokemonhealth,aihealth=aipokehealth,bothheatlh=1;
        srand(time(NULL));
        while(bothheatlh!=0){
             if(humanhealth<=0 || aihealth<=0){
                if(humanhealth>aihealth){
                        printf("YOU WIN");
                        bothheatlh=0;
                        return -1;
                }
                else{
                    printf("COMPUTER WIN");
                    bothheatlh=0;
                    return -1;
                }
                bothheatlh=0;

            }
            else{
            humanrate=30+rand()%90;
            airate=30+rand()%90;
            humandamage=humanpokemondamage*humanrate/100;
            aidamage=aipokedamage*airate/100;
            humanhealth-=aidamage;
            aihealth-=humandamage;

            printf("\n      %d.Round\n",round);
            printf("        Your Damage : %d  --- Computer Damage : %d\n",humandamage,aidamage);
            printf("        Your Health : %d  --- Computer Health : %d\n",humanhealth,aihealth);

            delay(2);

            round++;

            }
       }
    }
  }
}
}

int getpoke(){

    printf("0-Arceus\n1-Mewtwo\n2-Rauquaza\n3-Pangoro\n4-Giratina\n5-Pikachu\n6-Charizard\n7-Squirtle\n8-Charmender\n9-Bulbasaur\n");
    for(int i=0 ; newpoke[0] != '*' ; i++){
            printf("Write Your CHOICE (Back To Menu '*'): ");
            scanf("%s",newpoke);
            strcpy(newpoke+strlen(newpoke)," - ");
            if(newpoke[0]!='*'){
                strcpy(pocket+strlen(pocket),newpoke);
                pokecount++;
            }
        }
}

int pokelab(){
    int secim,kontrol=0;
    back:
    printf("\nLAB. Preferences\n");
    printf("\n1-Catch Pokemons!\n2-Open Your Pocket\n3-Go Back To MainMenu");
    scanf("%d",&secim);
    switch(secim){
    case 1:
        getpoke();
        break;

    case 2:
        printf("\nHere Your Pokemons : %s \n",pocket);
        printf("You Have Got %d Pokemons Do Not Forget For Tournament You Need Min. 5 Pokemons\n",pokecount);
        goto back;
        break;
    case 3:
        return 1;
        break;
    }
}

int pokedex(){

    int devam;
    char pokemonisim[15];
    printf("\nPokemons:\n");
    printf("0-Arceus\n1-Mewtwo\n2-Rauquaza\n3-Pangoro\n4-Giratina\n5-Pikachu\n6-Charizard\n7-Squirtle\n8-Charmender\n9-Bulbasaur\n");
    printf("\n");
    printf("Please Write Pokemon Name To See Abilities (Back To Menu 'q'):");
    scanf("%s",pokemonisim);

    while(pokemonisim[0]!='q' && pokemonisim[0]!='Q'){
    if(strstr(pokemonisim,"Arceus") || strstr(pokemonisim,"arceus") || pokemonisim[0]=='0'){
        printf("\nArceus Type:%s\nArceus Health:%d\nArceus Damage:%d\nArceus Vibe:%s\n",arceustip,arceuscan,arceusdamage,arceusvibe);
    }
    if(strstr(pokemonisim,"Mewtwo") || strstr(pokemonisim,"mewtwo") || pokemonisim[0]=='1'){
            printf("\nMewtwo Type:%s\nMewtwo Health:%d\nMewtwo Damage:%d\nMewtwo Vibe:%s\n",mewtwotip,mewtwocan,mewtwodamage,mewtwovibe);
    }
    if(strstr(pokemonisim,"Rauquaza") || strstr(pokemonisim,"rauquaza") || pokemonisim[0]=='2'){
        printf("\nRauquaza Type:%s\nRauquaza Health:%d\nRauquaza Damage:%d\nRauquaza Vibe:%s\n",rauquazatip,rauquazacan,rauquazadamage,rauquazavibe);
    }
    if(strstr(pokemonisim,"Pangoro") || strstr(pokemonisim,"pangoro") || pokemonisim[0]=='3'){
        printf("\nPangoro Type:%s\nPangoro Health:%d\nPangoro Damage:%d\nPangoro Vibe:%s\n",pangorotip,pangorocan,pangorodamage,pangorovibe);
    }
    if(strstr(pokemonisim,"Giratina") || strstr(pokemonisim,"giratina") || pokemonisim[0]=='4'){
        printf("\nGiratina Type:%s\nGiratina Health:%d\nGiratina Damage:%d\nGiratina Vibe:%s\n",giratinatip,giratinacan,giratinadamage,giratinavibe);
    }
    if(strstr(pokemonisim,"Pikachu") || strstr(pokemonisim,"pikachu") || pokemonisim[0]=='5'){
        printf("\nPikachu Type:%s\nPikachu Health:%d\nPikachu Damage:%d\nPikachu Vibe:%s\n",pikachutip,pikachucan,pikachudamage,pikachuvibe);
    }
    if(strstr(pokemonisim,"Charizard") || strstr(pokemonisim,"charizard") || pokemonisim[0]=='6'){
        printf("\nCharizard Type:%s\nCharizard Health:%d\nCharizard Damage:%d\nCharizard Vibe:%s\n",charizardtip,charizardcan,charizarddamage,charizardvibe);
    }
    if(strstr(pokemonisim,"Squirtle") || strstr(pokemonisim,"squirtle") || pokemonisim[0]=='7'){
        printf("\nSquirtle Type:%s\nSquirtle Health:%d\nSquirtle Damage:%d\nSquirtle Vibe:%s\n",squirtletip,squirtlecan,squirtledamage,squirtlevibe);
    }
    if(strstr(pokemonisim,"Charmender") || strstr(pokemonisim,"charmender") || pokemonisim[0]=='8'){
        printf("\nCharmender Type:%s\nCharmender Health:%d\nCharmender Damage:%d\nCharmender Vibe:%s\n",charmendertip,charmendercan,charmenderdamage,charmendervibe);
    }
    if(strstr(pokemonisim,"Bulbasaur") || strstr(pokemonisim,"bulbasaur") || pokemonisim[0]=='9'){
        printf("\nBulbasaur Type:%s\nBulbasaur Health:%d\nBulbasaur Damage:%d\nBulbasaur Vibe:%s\n",bulbasaurtip,bulbasaurcan,bulbasaurdamage,bulbasaurvibe);

    }

    printf("\nPlease Write Pokemon Name To See Abilities (Back To Menu  'q'):");
    scanf("%s",pokemonisim);

    }


    if(pokemonisim[0]=='q' || pokemonisim[0]=='Q');
        return 1;
}


int main()
{
    printf("#####  Welcome To The PokemonGo Game  #####\n");
    int secim;
    don:
    printf("\nPlease Pick One:\n");
    printf("1-How To Play ? \n2-Open PokeDex.\n3-Open LAB.\n4-Tournament\n5-Exit Game");
    int sonuc;

    scanf("%d",&secim);
    if(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5){
        printf("\n---Check Your Choice---\n");
        goto don;
    }
    switch(secim){

    case 1:
        sonuc=howto();
        if(sonuc==1)
            goto don;

        break;

    case 2:
        sonuc=pokedex();
        if(sonuc==1)
            goto don;
        break;
    case 3:
        pokelab();
        sonuc=pokelab();
        if(sonuc==1)
            goto don;
        break;
    case 4:
        sonuc=tournament();
        if(sonuc==-1)
            goto don;
        break;
    case 5:
        exit(0);
        break;
    return 0;

    }
}
