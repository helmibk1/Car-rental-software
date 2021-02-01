#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED



#endif // FUNC_H_INCLUDED

int choix(int a)
{
    int p;
    SetColor(0);
    int ch;
    do
    {
        for(p = 2; p < 39; p++)
        {
            gotoxy(p,24);printf(" ");
        }
       gotoxy(2,24);printf("Donner votre choix svp : ");scanf("%d",&ch);
    }while(!(ch<=a&&ch>=1));
    return ch;
}
void menu_G()
{
 SetColor(28);
    Sleep(80);gotoxy(4,7);print_heading2("MENU GENERAL");
    Sleep(80);gotoxy(1,9);printf("1-Gestion de parc automobile");
    Sleep(80);gotoxy(1,10);printf("2-Gestion des clients");
    Sleep(80);gotoxy(1,11);printf("3-Gestion des locations");
    Sleep(80);gotoxy(1,12);printf("4-Enreg.et Recup.Fichier");
    Sleep(80);gotoxy(1,13);printf("5-HELP");
    Sleep(80);gotoxy(1,14);printf("6-Quitter");


}
void menu_GPA()
{
    SetColor(28);
    Sleep(80);gotoxy(4,7);print_heading2("MENU PARC AUTOMOBILE");
    Sleep(80);gotoxy(1,9);printf("1-Creation des voitures");
    Sleep(80);gotoxy(1,10);printf("2-Mise a jour de la liste des voitures");
    Sleep(80);gotoxy(1,11);printf("3-Recherche , affichage et tri");
    Sleep(80);gotoxy(1,12);printf("4-Retour menu genrale");
}

void menu_GL()
{
    SetColor(28);
    Sleep(80);gotoxy(4,7);print_heading2("MENU GESTION DES LOCATIONS");
    Sleep(80);gotoxy(1,9);printf("1-Mise a jour de la liste des location");
    Sleep(80);gotoxy(1,10);printf("2-Rechreche,affichage et Tri");
    Sleep(80);gotoxy(1,11);printf("3-Retour menu genrale");
}
void menu_GC()
{
    SetColor(28);
    Sleep(80);gotoxy(4,7);print_heading2("MENU GESTION DES CLIENTS");
    Sleep(80);gotoxy(1,9);printf("1-Creation des clients");
    Sleep(80);gotoxy(1,10);printf("2-Mise a jour de la liste des clients");
    Sleep(80);gotoxy(1,11);printf("3-Recherche , affichage et tri");
    Sleep(80);gotoxy(1,12);printf("4-Retour menu genrale");
}
void menu_MAJV()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU MISE AJOUR VOITURE");
                Sleep(80);gotoxy(1,9);printf("1-Ajouter une nouvel voiture");
                Sleep(80);gotoxy(1,10);printf("2-supprimer une voiture");
                Sleep(80);gotoxy(1,11);printf("3-Modifier les donnees dune voiture");
                Sleep(80);gotoxy(1,12);printf("4-Retour au menu MAJ voiture");
}
void menu_MAGC()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU MISE AJOUR CLIENT");
                Sleep(80);gotoxy(1,9);printf("1-Ajouter un nouvel client");
                Sleep(80);gotoxy(1,10);printf("2-supprimer un client");
                Sleep(80);gotoxy(1,11);printf("3-Modifier les donnees dun client");
                Sleep(80);gotoxy(1,12);printf("4-Retour au menu MAJ client");
}
void menu_MAJL()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU MISE AJOUR LOCATION");
                Sleep(80);gotoxy(1,9);printf("1-Ajouter une nouvelle location");
                Sleep(80);gotoxy(1,10);printf("2-supprimer une location");
                Sleep(80);gotoxy(1,11);printf("3-Modifier les donnees dune location");
                Sleep(80);gotoxy(1,12);printf("4-Retour au menu MAJ location");
}
void menu_AV()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU AJOUTER VOITURE");
                Sleep(80);gotoxy(1,9);printf("1-Ajout en tete");
                Sleep(80);gotoxy(1,10);printf("2-Ajout en queue");
                Sleep(80);gotoxy(1,11);printf("3-ajout dans une position");
                Sleep(80);gotoxy(1,12);printf("4-Retour au menu MAJ voiture");

}
void menu_AC()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU AJOUTER CLIENT");
                Sleep(80);gotoxy(1,9);printf("1-Ajout en tete");
                Sleep(80);gotoxy(1,10);printf("2-Ajout en queue");
                Sleep(80);gotoxy(1,11);printf("3-ajout dans une position");
                Sleep(80);gotoxy(1,12);printf("4-Retour au menu MAJ client");

}

void menu_AL()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU AJOUTER LOCATION");
                Sleep(80);gotoxy(1,9);printf("1-Ajout en tete");
                Sleep(80);gotoxy(1,10);printf("2-Ajout en queue");
                Sleep(80);gotoxy(1,11);printf("3-ajout dans une position");
                Sleep(80);gotoxy(1,12);printf("4-Retour au menu MAJ location");

}
void menu_SV()
{

    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU SUPPRESSION VOITURE");
                Sleep(80);gotoxy(1,9);printf("1-Suppression en tete");
                Sleep(80);gotoxy(1,10);printf("2-Suppression en queue");
                Sleep(80);gotoxy(1,11);printf("3-Suppression a partir dune position");
                Sleep(80);gotoxy(1,12);printf("4-Suppression dune voiture donnee");
                Sleep(80);gotoxy(1,13);printf("5-Suppression  dune marque donnee");
                Sleep(80);gotoxy(1,14);printf("6-Retour menu MAJ voiture");
}
void menu_SC()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU SUPPRESSION CLIENT");
                Sleep(80);gotoxy(1,9);printf("1-Suppression en tete");
                Sleep(80);gotoxy(1,10);printf("2-Suppression en queue");
                Sleep(80);gotoxy(1,11);printf("3-Suppression a partir dune position");
                Sleep(80);gotoxy(1,12);printf("4-Suppression dun client donnee");
                Sleep(80);gotoxy(1,13);printf("5-Retour menu MAJ client");
}
void menu_SL()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU SUPPRESSION LOCATION");
                Sleep(80);gotoxy(1,9);printf("1-Suppression en tete");
                Sleep(80);gotoxy(1,10);printf("2-Suppression en queue");
                Sleep(80);gotoxy(1,11);printf("3-Suppression a partir dune position");
                Sleep(80);gotoxy(1,12);printf("4-Suppression dune location donnee");
                Sleep(80);gotoxy(1,13);printf("5-Retour menu MAJ location");
}
void menu_MV()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU MODIFICATION VOITURE");
                Sleep(80);gotoxy(1,9);printf("1-Couleur");
                Sleep(80);gotoxy(1,10);printf("2-Prix");
                Sleep(80);gotoxy(1,11);printf("3-retour au menu MAJ voiture");
}
void menu_MC()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU MODIFICATION CLIENT");
                Sleep(80);gotoxy(1,9);printf("1-adresse");
                Sleep(80);gotoxy(1,10);printf("2-telephone");
                Sleep(80);gotoxy(1,11);printf("3-retour au menu MAJ client");
}
void menu_ML()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU MODIFICATION lOCATION");
                Sleep(80);gotoxy(1,9);printf("1-date de location");
                Sleep(80);gotoxy(1,10);printf("2-Duree");
                Sleep(80);gotoxy(1,11);printf("3-retour au menu MAJ location");
}
void menu_RV()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("  MENU RECHERCHE AFFICHAGE ET TRI");
                Sleep(80);gotoxy(1,9);printf("1-Contenu de la liste des voitures");
                Sleep(80);gotoxy(1,10);printf("2-Rechreche par matricule ");
                Sleep(80);gotoxy(1,11);printf("3-Rechreche par marque ");
                Sleep(80);gotoxy(1,12);printf("4-Rechreche par couleur ");
                Sleep(80);gotoxy(1,13);printf("5-Rechreche des voitures disponibles ");
                Sleep(80);gotoxy(1,14);printf("6-Rechreche des voitures louees ");
                Sleep(80);gotoxy(1,15);printf("7-Tri 1");
                Sleep(80);gotoxy(1,16);printf("8-Tri 2");
                Sleep(80);gotoxy(1,17);printf("9-retour au menu MAJ voiture");
}
void menu_RC()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("  MENU RECHERCHE AFFICHAGE ET TRI");
                Sleep(80);gotoxy(1,9);printf("1-Contenu de la liste des clients");
                Sleep(80);gotoxy(1,10);printf("2-Rechreche par CIN ");
                Sleep(80);gotoxy(1,11);printf("3-Tri");
                Sleep(80);gotoxy(1,12);printf("4-retour au menu client");
}
void menu_RL()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("  MENU RECHERCHE AFFICHAGE ET TRI");
                Sleep(80);gotoxy(1,9);printf("1-Contenu de la liste des Location");
                Sleep(80);gotoxy(1,10);printf("2-Rechreche par CIN ");
                Sleep(80);gotoxy(1,11);printf("3-Rechreche par mat ");
                Sleep(80);gotoxy(1,12);printf("4-Rechreche par date donnee ");
                Sleep(80);gotoxy(1,13);printf("5-Rechreche duree de location ");
                Sleep(80);gotoxy(1,14);printf("6-Rech des loca entr 2 dates donnees ");
                Sleep(80);gotoxy(1,15);printf("7-Tri ");
                Sleep(80);gotoxy(1,16);printf("8-retour au menu location");
}
void menu_E()
{
    SetColor(28);
                Sleep(80);gotoxy(4,7);print_heading2("MENU ENREG ET RECU Des fichier ");
                Sleep(80);gotoxy(1,9);printf("1-enregistrement fichier voiture");
                Sleep(80);gotoxy(1,10);printf("2-recuperation fichier voiture");
                Sleep(80);gotoxy(1,11);printf("3-enregistrement fichier client");
                Sleep(80);gotoxy(1,12);printf("4-recuperation fichier client");
                Sleep(80);gotoxy(1,13);printf("5-enregistrement fichier location");
                Sleep(80);gotoxy(1,14);printf("6-recuperation fichier location");
                Sleep(80);gotoxy(1,15);printf("7-retour au menu general");
}





