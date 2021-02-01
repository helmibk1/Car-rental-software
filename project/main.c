#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "menu.h"
#include "main.h"
#include "func1.h"
#include "func2.h"
#include "func3.h"
#include "verif.h"
#include "draw.h"
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void shwocursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = 1;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void SetColor(int ForgC)
{
     WORD wColor;
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}
void print_heading(const char st[]){
    SetColorAndBackground(31,7);
    gotoxy(65,7);printf(" %s ",st);
    SetColorAndBackground(17,15);
}
void print_heading1(const char st[]){
    SetColorAndBackground(31,7);
    gotoxy(65,7);printf(" %s ",st);
    SetColorAndBackground(17,15);
}
void print_heading5(const char st[],int j){
    SetColorAndBackground(31,35);
    gotoxy(j,8);printf(" %s ",st);
    SetColorAndBackground(17,15);
}
void print_heading2(const char st[]){
    SetColorAndBackground(31,7);
    printf(" %s ",st);
    SetColorAndBackground(28,15);
}
COORD coord = {0,0};
void gotoxy(int x, int y){
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void clearWindow(){
    hidecursor();
    int i,j;
    for(i = 44; i < 110; i++){
            Sleep(1);
        for(j = 7; j < 25; j++){
            gotoxy(i,j);printf(" ");
        }
    }
    shwocursor();
    return;
}
void clearWindow_s(){
    hidecursor();
    int i,j;
    for(i = 44; i < 110; i++){
            Sleep(1);
        for(j = 8; j < 25; j++){
            gotoxy(i,j);printf(" ");
        }
    }
    shwocursor();
    return;
}
void clearWindow1(){
    hidecursor();
    int i,j;
    for(i = 1; i < 39; i++){
            Sleep(5);
        for(j = 7; j < 18; j++){
             gotoxy(i,j);printf(" ");
        }
    }
    shwocursor();
    return;
}
void window(){
    drawRectangle();fflush(stdin);
    gotoxy(40,2);
    SetColor(35);
    printf("       MINI PROJET 2      ");
    gotoxy(40,3);
    printf("CREE PAR Helmi Ben Khalifa");
    gotoxy(40,4);
    printf("       2015/2016          ");
    SetColor(17);

}
void show(){
int i=0,j=0,k;

    gotoxy(i,j);
    SetColor(35);
    k=1;
for(i=1;i<112;i++){SetColor(14);
    for(j=1;j<6;j++){gotoxy(i,j);printf("%c",177)  ;      }
}


}





void main_window(){
    SetColor(28);
    int ch,chm1,chsou,chsou1,pos;
    char x[20];
    liste_voit l=NULL;
    liste_clt lc=NULL;
    liste_loc ll=NULL;
    gotoxy(2,8);deb:gotoxy(2,8);menu_G();drawRectangle();fflush(stdin);//meni general
    ch=choix(6);
switch(ch)
    {
        case 1:GPA:clearWindow1();GPAA:gotoxy(2,8);menu_GPA();drawRectangle();fflush(stdin);//Gestion de parc automobile

                chm1=choix(4);
                switch(chm1)
                {
                    case 1:print_heading("creation voiture");l=creation();affiche1(l);if(retour()==1){goto GPAA;}break;//creation des voiture
                    case 2:MAJV:clearWindow1();gotoxy(2,8);menu_MAJV();drawRectangle();fflush(stdin);//mise a jour
                        chsou=choix(4);
                        switch(chsou)
                        {
                            case 1:clearWindow1();AV:gotoxy(2,8);menu_AV();drawRectangle();fflush(stdin);
                                chsou1=choix(4);
                                            switch(chsou1)
                                             {
                                                 case 1:print_heading("ajout-tete");l=insere_tete_voiture(l);affiche1(l);if(retour()==1){goto AV;};break;
                                                 case 2:print_heading("ajout-queue");l=insere_queue_voiture(l);affiche1(l);if(retour()==1){goto AV;};break;
                                                 case 3:print_heading("ajout-position");l=remplir(l);affiche1(l);if(retour()==1){goto AV;}break;
                                                 case 4:goto MAJV;break;
                                             }break;
                            case 2:clearWindow1();SV:gotoxy(2,8);menu_SV();drawRectangle();fflush(stdin);
                                chsou1=choix(6);
                                            switch(chsou1)
                                             {
                                                 case 1:if(l==NULL){goto VIDE1;}affiche1(l);l=supprimer_tete_voiture(l);if(retour1(l)==1){gotoxy(45,7);VIDE1:affiche1(l);if(retour()==1){goto SV;}};break;
                                                 case 2:if(l==NULL){goto VIDE2;}affiche1(l);l=supprimer_queue_voiture(l);if(retour1(l)==1){gotoxy(45,7);VIDE2:affiche1(l);if(retour()==1){goto SV;}};break;
                                                 case 3:if(l==NULL){goto VIDE3;}affiche1(l);l=suppression(l);if(retour1(l)==1){gotoxy(45,7);VIDE3:affiche1(l);if(retour()==1){goto SV;}};break;
                                                 case 4:if(l==NULL){goto VIDE4;}affiche1(l);l=supprimer_donne1_voiture(l);if(retour1(l)==1){gotoxy(45,7);VIDE4:affiche1(l);if(retour()==1){goto SV;}}break;
                                                 case 5:if(l==NULL){goto VIDE5;}affiche1(l);l=supprimer_donne2_voiture(l);if(retour1(l)==1){gotoxy(45,7);VIDE5:affiche1(l);if(retour()==1){goto SV;}}break;
                                                 case 6:goto MAJV;break;
                                             }break;
                            case 3:clearWindow1();MV:gotoxy(2,8);menu_MV();drawRectangle();fflush(stdin);
                                chsou1=choix(3);
                                            switch(chsou1)
                                             {
                                                 case 1:if(l==NULL){goto VIDE6;}affiche1(l);l=modif_couleur(l);gotoxy(45,7);VIDE6:affiche1(l);if(retour()==1){goto MV;};break;
                                                 case 2:if(l==NULL){goto VIDE7;}affiche1(l);l=modif_prix(l);gotoxy(45,7);VIDE7:affiche1(l);if(retour()==1){goto MV;};break;
                                                 case 3:goto MAJV;break;
                                             }break;
                            case 4:clearWindow1();goto GPA;break;

                        }break;
                    case 3:clearWindow1();RV:gotoxy(2,8);menu_RV();drawRectangle();fflush(stdin);//rechrech
                        chsou=choix(9);
                            switch(chsou)
                        {
                                    case 1:affiche1(l);if(retour()==1){goto RV;};break;
                                    case 2:print_heading("Rechreche par matricule");l=rechreche_voiture(l);if(retour()==1){goto RV;};break;
                                    case 3:print_heading("Rechreche par marque");l=rechreche_marque(l);if(retour()==1){goto RV;};break;
                                    case 4:print_heading("Rechreche par couleur");l=rechreche_couleur(l);if(retour()==1){goto RV;};break;
                                    case 5:print_heading("Rechreche par etat:D");l=rechreche_d_l(l,1);if(retour()==1){goto RV;};break;
                                    case 6:print_heading("Rechreche par etat:L");l=rechreche_d_l(l,2);if(retour()==1){goto RV;};break;
                                    case 7:affiche1(l);if(retour()==1){goto RV;};break;
                                    case 8:affiche1(l);if(retour()==1){goto RV;};break;
                                    case 9:goto GPA;break;
                        }
                    case 4:clearWindow1();goto deb;break;
                    break;
                }
        break;

         case 2:GC:clearWindow1();GCC:gotoxy(2,8);menu_GC();drawRectangle();fflush(stdin);//Gestion de parc client

                chm1=choix(4);
                switch(chm1)
                {
                    case 1:print_heading("creation client");lc=creation1();affiche2(lc);if(retour()==1){goto GCC;}break;//creation des clients
                    case 2:MAGC:clearWindow1();gotoxy(2,8);menu_MAGC();drawRectangle();fflush(stdin);//mise a jour
                        chsou=choix(4);
                        switch(chsou)
                        {
                            case 1:clearWindow1();AC:gotoxy(2,8);menu_AC();drawRectangle();fflush(stdin);
                                chsou1=choix(4);
                                            switch(chsou1)
                                             {
                                                 case 1:print_heading("ajout_tete");lc=insere_tete_client(lc);affiche2(lc);if(retour()==1){goto AC;};break;
                                                 case 2:print_heading("ajout_queue");lc=insere_queue_client(lc);affiche2(lc);if(retour()==1){goto AC;};break;
                                                 case 3:print_heading("ajout_position");lc=remplir1(lc);affiche2(lc);if(retour()==1){goto AC;}break;
                                                 case 4:goto MAGC;break;
                                             }break;
                            case 2:clearWindow1();SC:gotoxy(2,8);menu_SC();drawRectangle();fflush(stdin);
                                chsou1=choix(5);
                                            switch(chsou1)
                                             {
                                                 case 1:if(lc==NULL){goto vide1;}gotoxy(45,7);affiche2(lc);lc=supprimer_tete_client(lc);if(retour3(lc)==1){gotoxy(45,17);vide1:affiche2(lc);if(retour()==1){goto SC;}};break;
                                                 case 2:if(lc==NULL){goto vide2;}gotoxy(45,7);affiche2(lc);lc=supprimer_queue_client(lc);if(retour3(lc)==1){gotoxy(45,17);vide2:affiche2(lc);if(retour()==1){goto SC;}};break;
                                                 case 3:if(lc==NULL){goto vide3;}gotoxy(45,7);affiche2(lc);lc=suppression1(lc);if(retour3(lc)==1){gotoxy(45,17);vide3:affiche2(lc);if(retour()==1){goto SC;}};break;
                                                 case 4:if(lc==NULL){goto vide4;}gotoxy(45,7);affiche2(lc);lc=supprimer_donne_client(lc);if(retour3(lc)==1){gotoxy(45,17);vide4:affiche2(lc);if(retour()==1){goto SC;}}break;
                                                 case 5:goto MAGC;break;
                                             }break;
                            case 3:clearWindow1();MC:gotoxy(2,8);menu_MC();drawRectangle();fflush(stdin);
                                chsou1=choix(3);
                                            switch(chsou1)
                                             {
                                                 case 1:if(lc==NULL){goto vide5;}affiche2(lc);l=modif_adresse(lc);vide5:affiche2(lc);if(retour()==1){goto MC;};break;
                                                 case 2:if(lc==NULL){goto vide6;}affiche2(lc);l=modif_tele(lc);vide6:affiche2(lc);if(retour()==1){goto MC;};break;
                                                 case 3:goto MAGC;break;
                                             }break;
                            case 4:clearWindow1();goto GC;break;

                        }break;
                    case 3:clearWindow1();RC:gotoxy(2,8);menu_RC();drawRectangle();fflush(stdin);//rechrech
                        chsou=choix(4);
                            switch(chsou)
                        {
                                    case 1:affiche2(lc);if(retour()==1){goto RC;};break;
                                    case 2:print_heading("rechreche client");lc=rechreche_client(lc);if(retour()==1){goto RC;};break;
                                    case 3:affiche2(lc);if(retour()==1){goto RC;};break;
                                    case 4:goto GC;break;
                        }
                    case 4:clearWindow1();goto deb;break;
                    break;
                }
        break;

        case 3 :GL:clearWindow1();GLL:gotoxy(2,8);menu_GL();drawRectangle();fflush(stdin);

                chm1=choix(3);
                switch(chm1)
                {
                    case 1:MAJL:clearWindow1();gotoxy(2,8);menu_MAJL();drawRectangle();fflush(stdin);
                    chsou=choix(4);
                     switch(chsou)
                        {
                            case 1:clearWindow1();AL:gotoxy(2,8);menu_AL();drawRectangle();fflush(stdin);
                                chsou1=choix(4);
                                  switch(chsou1)
                                             {
                                                 case 1:print_heading("ajout-tete");ll=insere_tete_location(ll,lc,l);affiche4(ll);if(retour()==1){goto AL;};break;
                                                 case 2:print_heading("ajout-queue");ll=insere_queue_location(ll,lc,l);affiche4(ll);if(retour()==1){goto AL;};break;
                                                 case 3:print_heading("ajout-pos");ll=remplir2(ll,lc,l);affiche4(ll);if(retour()==1){goto AL;}break;
                                                 case 4:goto MAJL;break;
                                             }break;
                            case 2:clearWindow1();SL:gotoxy(2,8);menu_SL();drawRectangle();fflush(stdin);
                                chsou1=choix(5);
                                            switch(chsou1)
                                             {
                                                 case 1:if(ll==NULL){goto VIDE11;}gotoxy(45,10);affiche4(ll);ll=supprimer_tete_location(ll);if(retour3(ll)==1){gotoxy(45,17);VIDE11:affiche4(ll);if(retour()==1){goto SL;}};break;
                                                 case 2:if(ll==NULL){goto VIDE12;}gotoxy(45,10);affiche4(ll);ll=supprimer_queue_location(ll);if(retour3(ll)==1){gotoxy(45,17);VIDE12:affiche4(ll);if(retour()==1){goto SL;}};break;
                                                 case 3:if(ll==NULL){goto VIDE13;}gotoxy(45,10);affiche4(ll);ll=suppression2(ll);if(retour3(ll)==1){gotoxy(45,17);VIDE13:affiche4(ll);if(retour()==1){goto SL;}};break;
                                                 case 4:if(ll==NULL){goto VIDE14;}gotoxy(45,10);affiche4(ll);ll=supprimer_donne_location(ll);if(retour3(ll)==1){gotoxy(45,17);VIDE14:affiche4(ll);if(retour()==1){goto SL;}}break;
                                                 case 5:goto MAJL;break;
                                             }break;
                            case 3:clearWindow1();ML:gotoxy(2,8);menu_ML();drawRectangle();fflush(stdin);
                                chsou1=choix(3);
                                switch(chsou1)
                                             {
                                                 case 1:if(ll==NULL){goto VIDE15;}affiche4(ll);ll=modif_date_loc(ll);VIDE15:affiche4(ll);if(retour()==1){goto ML;};break;
                                                 case 2:if(ll==NULL){goto VIDE16;}affiche4(ll);ll=modif_duree(ll);VIDE16:affiche4(ll);if(retour()==1){goto ML;};break;
                                                 case 3:goto MAJL;break;
                                             }break;
                            case 4:clearWindow1();goto GL;break;
                        }
                    case 2:RL:clearWindow1();RLL:gotoxy(2,8);menu_RL();drawRectangle();fflush(stdin);
                                            chsou=choix(8);
                            switch(chsou)
                        {
                                    case 1:affiche4(ll);if(retour()==1){goto RLL;};break;
                                    case 2:print_heading("rechreche");ll=rechreche_location_cin(ll);if(retour()==1){goto RLL;};break;
                                    case 3:print_heading("rechreche");ll=rechreche_location_mat(ll);if(retour()==1){goto RLL;};break;
                                    case 4:print_heading("rechreche");if(retour()==1){goto RLL;};break;
                                    case 5:print_heading("rechreche");if(retour()==1){goto RLL;};break;
                                    case 6:print_heading("rechreche");if(retour()==1){goto RLL;};break;
                                    case 7:print_heading("rechreche");if(retour()==1){goto RLL;};break;
                                    case 8:goto GL;break;
                        }
                    case 3:clearWindow1();goto deb;break;
                }
                break;

        case 4 :clearWindow1();E:gotoxy(2,8);menu_E();drawRectangle();fflush(stdin);
        chm1=choix(7);
         switch(chm1){
                        case 1:enregistrement_voiture(l);if(retour()==1){goto E;};break;
                        case 2:l=recupere_voiture(l);affiche1(l);gotoxy(45,9+12);printf("recuperation Termine!");if(retour()==1){goto E;};break;
                        case 3:enregistrement_client(lc);if(retour()==1){goto E;};break;
                        case 4:lc=recupere_client(lc);affiche2(lc);gotoxy(45,9+12);printf("recuperation Termine!");if(retour()==1){goto E;};break;
                        case 5:enregistrement_location(ll);if(retour()==1){goto E;};break;
                        case 6:ll=recupere_location(ll);affiche4(ll);gotoxy(45,9+12);printf("recuperation Termine!");if(retour()==1){goto E;};break;
                        case 7:clearWindow1();goto deb;break;
                break;}
        case 5 :clearWindow1();

                break;
        case 6 :system("cls");printf("quitter");
    }


}

int main()
{

    show();
    SetConsoleTitle("MINI PRIJET 2 ");
    window();
    main_window();
    return 0;
}

