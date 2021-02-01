#ifndef FUNC1_H_INCLUDED
#define FUNC1_H_INCLUDED



#endif // FUNC1_H_INCLUDED

date1 saisie_date1()
{
    int p;
    date1 d;
    do
    {
         for(p = 47; p < 59; p++)
        {
            gotoxy(p,21);printf(" ");
        }

    gotoxy(49,21);scanf ("%d",&d.j);
    }
    while((d.j<1)||(d.j>31));
    do
    {
         for(p = 61; p < 74; p++)
        {
            gotoxy(p,21);printf(" ");
        }

    gotoxy(63,21);scanf ("%d",&d.m);
    }
    while((d.m<1)||(d.m>12));
    do
    {
         for(p = 76; p < 89; p++)
        {
            gotoxy(p,21);printf(" ");
        }

    gotoxy(78,21);scanf ("%d",&d.a);
    }
    while((d.a<1900)||(d.a>2020));
    return (d);
}
voiture saisie_voiture(liste_voit l)
{
        draw_cadre(8);
     gotoxy(48,8);printf("Matricule");
        draw_cadre(11);
     gotoxy(48,11);printf("Marque");
         draw_cadre(14);
     gotoxy(48,14);printf("Couleur");
         draw_cadre(17);
     gotoxy(48,17);printf("Prix_1");
         draw_cadre1(20);
    gotoxy(48,20); printf("Jour");
     gotoxy(63,20);printf("Moi");
     gotoxy(78,20);printf("Annee");
    gotoxy(93,20); printf("Etat");

    SetColor(9);
    int i,p,j;
    voiture v;
        do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,9);printf(" ");
        }

    gotoxy(48,9);scanf ("%s",&v.mat);
    i=verif_mat(v.mat);
    j=verif_mat2(v.mat,l);
    }
    while((i==0)||(j==0));
         do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,12);printf(" ");
        }

    gotoxy(48,12);scanf ("%s",v.marque);
     i=verif_1(v.marque);
    }
    while(i==0);
              do
    {
            for(p = 45; p < 103; p++)
        {
            gotoxy(p,15);printf(" ");
        }

    gotoxy(48,15);scanf ("%s",v.couleur);
    i=verif_1(v.couleur);
    }
    while(i==0);
        do
    {
         for(p = 45; p < 103; p++)
        {
            gotoxy(p,18);printf(" ");
        }

    gotoxy(48,18);scanf ("%d",&v.prix_1);
    }
    while(v.prix_1<0);
    v.DA=saisie_date1();
    do
    {
         for(p = 93; p < 103; p++)
        {
            gotoxy(p,21);printf(" ");
        }

    gotoxy(95,21);scanf("%s",v.etat);
    i=verif_2(v.etat);
    }
    while(i==0);
    return(v);
}
liste_voit creation()
{
    int q,rep=0;
    liste_voit p,voi,l=NULL;
    voi=(struct cellule1*)malloc(sizeof(struct cellule1));
    voi->info1=saisie_voiture(l);
    voi->suiv1=NULL;
    l=voi;
    p=l;
    do{
                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,23);printf(" ");
        }
    gotoxy(45,23); printf("Voulez vous ajouter une autre voiture 0/1\t");
    scanf("%d",&rep);}while((rep!=0)&&(rep!=1));

    while(rep==1)
    {
        clearWindow();
        print_heading("creation voiture");
    voi=(struct cellule1*)malloc(sizeof(struct cellule1));
    voi->info1=saisie_voiture(l);
    voi->suiv1=NULL;
    p->suiv1=voi;
    p=voi;
   do{
                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,23);printf(" ");
        }
    gotoxy(45,23); printf("Voulez vous ajouter une autre voiture 0/1\t");
    scanf("%d",&rep);}while((rep!=0)&&(rep!=1));

    }
    SetColor(17);

}

void affiche1(liste_voit l)
{
    clearWindow();
    int t,k,n=0,n1=0,n2=0,n3=0,n0=1,nx=0;

    t=taille(l);
    nx=t/6;
    n3=t%6;
    if(n3==0){n2=nx;}
    else{n2=nx+1;}
    SetColor(9);
    int i=9;
    if (l==NULL)
       {gotoxy(45,11); printf("______vide______");}
    else
    {
            draw_m_clone(t,8);
print_heading1("La liste voiture");
print_heading5("Matricule ",44);
print_heading5(" Marque ",55);
print_heading5(" Couleur",65);
print_heading5(" Prix   ",75);
print_heading5("  Date D'achat",85);
print_heading5("Etat",101);
        while(l)

            {

    gotoxy(46,i);printf("%s",l->info1.mat);
    gotoxy(56,i);printf("%s",l->info1.marque);
    gotoxy(66,i);printf("%s",l->info1.couleur);
    gotoxy(76,i);printf("%d",l->info1.prix_1);
    gotoxy(88,i);printf("%d/%d/%d",l->info1.DA.j,l->info1.DA.m,l->info1.DA.a);
    gotoxy(102,i);printf("%s",l->info1.etat);
                l=l->suiv1;
                i=i+2;
                n++;
                if((n%6==0)&&(n>=6)&&(n0<n2))
                {
                    n0++;
                    if(n0!=n2){
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            draw_m_clone(t,8);
print_heading1("La liste voiture");
print_heading5("Matricule ",44);
print_heading5(" Marque ",55);
print_heading5(" Couleur",65);
print_heading5(" Prix   ",75);
print_heading5("  Date D'achat",85);
print_heading5("Etat",101);


                }
                else if(n1==0){goto en;}
                }
                else{
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            draw_m_clone(n3,8);
print_heading1("La liste voiture");
print_heading5("Matricule ",44);
print_heading5(" Marque ",55);
print_heading5(" Couleur",65);
print_heading5(" Prix   ",75);
print_heading5("  Date D'achat",85);
print_heading5("Etat",101);


                }else if(n1==0){goto en;}
                }}
            }
    }en:
    SetColor(17);
}

liste_voit insere_tete_voiture(liste_voit l)
{
    liste_voit p;
    p=(struct cellule1*)malloc(sizeof(struct cellule1));
    p->info1=saisie_voiture(l);
    p->suiv1=l;
    l=p;
    return l;
    SetColor(17);
}
liste_voit insere_queue_voiture(liste_voit l)
{
    liste_voit p,q;
    p=(struct cellule1*)malloc(sizeof(struct cellule1));
    p->info1=saisie_voiture(l);
    if(l==NULL)
    {
        p->suiv1=l;
        l=p;
    }
    else
    {
        q=l;
       while(q->suiv1!=NULL)
        {
            q=q->suiv1;
        }
        p->suiv1=q->suiv1;
        q->suiv1=p;
    }
    return(l);
}
void insere_pos_voiture(liste_voit l,int pos)
{
    int i=1;
    liste_voit p=l,q;
    while(i<pos-1)
    {
        i++;
        p=p->suiv1;
    }

    q=(struct cellule1*)malloc(sizeof(struct cellule1));
    q->info1=saisie_voiture(l);
    q->suiv1=p->suiv1;
    p->suiv1=q;

}
liste_voit remplir(liste_voit l)
{
    int pos,t,p;
    t=taille(l);
        do
        {
                        for(p = 45; p < 103; p++)
           {
            gotoxy(p,9);printf(" ");
           }
            gotoxy(45,9); printf("Donner la position entre 1 et %d :",t+1);
            scanf("%d",&pos);
        }while(!(pos>=1 && pos<=t+1));
        if(pos==1)
            l=insere_tete_voiture(l);
        else
            if(pos==t+1)
                l=insere_queue_voiture(l);
            else
                insere_pos_voiture(l,pos);
    return l;

}
int taille(liste_voit l)
{
    int cp=0;
    while(l)
    {
        cp++;
        l=l->suiv1;
    }
    return cp;
}

liste_voit supprimer_tete_voiture(liste_voit l)
{
    liste_voit p=l;
    if(l==NULL)
        {gotoxy(45,9);printf("LISTE VIDE\n");}
    else
    {
        l=p->suiv1;
        free(p);
        gotoxy(45,24);printf("list supprime!\n");
    }
    return l;
}
liste_voit supprimer_queue_voiture(liste_voit l)
{
    liste_voit p1,p2;
    if(l==NULL)
        {gotoxy(45,9);printf("LISTE VIDE\n");}
    else
        if (l->suiv1==NULL)
    {
        p2=l;
        free(p2);
        l=NULL;
       gotoxy(45,23); printf("list supprime!\n");
    }
    else
    {
        p1=l;
        while ((p1->suiv1)->suiv1)
            p1=p1->suiv1;
        p2=p1->suiv1;
        p1->suiv1=NULL;
        free(p2);
    }
    return l;
}
void supprimer_pos_voiture(liste_voit l,int pos)
{
    int i=1;
    liste_voit p1=l,p2;
    while(i<pos-1)
    {
        i++;
        p1=p1->suiv1;
    }
    p2=p1->suiv1;
    p1->suiv1=p2->suiv1;
    free(p2);
}
liste_voit suppression (liste_voit l)
{
    int pos,t,p;

        t=taille(l);
        if (l==NULL)
        {
            gotoxy(45,13);printf("LISTE VIDE\n");
            return(l);
        }
        do
        {
                                    for(p = 45; p < 103; p++)
        {
            gotoxy(p,9+taille_s2(l));printf(" ");
        }
            gotoxy(45,9+taille_s2(l));printf("Donner la position entre 1 et %d :",t);
            scanf("%d",&pos);
        }while(!(pos>=1 && pos<=t));
        if (pos==1)
            l=supprimer_tete_voiture(l);
        else
            if (pos==t)
                l=supprimer_queue_voiture(l);
        else
            supprimer_pos_voiture(l,pos);

    return l;
}

liste_voit supprimer_donne1_voiture(liste_voit l)
{
    int u,q,ok,j,t,i=2;
    char x[10];
    liste_voit p=l;
    t=taille(l);
       do
    {
                                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s2(l));printf(" ");
        }
     gotoxy(45,9+taille_s2(l));printf("\tmat_donner=");
    scanf ("%s",&x);
    j=verif_mat(x);
    u=verif_mat2(x,l);
    }while((j==0)||(u==1));
    if(l==NULL)
    { gotoxy(45,10+taille_s2(l));printf("\tliste est vide");return(l);}
    else
    if(strcmp(p->info1.mat,x) == 0)
                   { l=supprimer_tete_voiture(l);}
    else{
        ok=0;
    while (p->suiv1 && !ok)
    {
    if(strcmp(p->suiv1->info1.mat,x) == 0)
                ok=1;
            else
        {i++;
        p=p->suiv1;}
    }
    if(ok==0){ gotoxy(45,4);printf("\tnest pas trouver\n");}
    else if(i==t){l=supprimer_queue_voiture(l);}
    else supprimer_pos_voiture(l,i);}
return l;
}
liste_voit supprimer_donne2_voiture(liste_voit l)
{
    int q,ok,j,t,i=2;
    char x[20];
    liste_voit p=l;
    t=taille(l);
       do
    {
                                        for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s2(l));printf(" ");
        }
      gotoxy(45,9+taille_s2(l));printf("\tmarque_donner=");
    scanf ("%s",&x);
    j=verif_1(x);
    }while((j==0));
    if(l==NULL)
    { gotoxy(45,10+taille_s2(l));printf("\tliste est vide");return(l);}
    else
    if(strcmp(p->info1.marque,x) == 0)
                   { l=supprimer_tete_voiture(l);}
    else{
        ok=0;
    while (p->suiv1 && !ok)
    {
    if(strcmp(p->suiv1->info1.marque,x) == 0)
                ok=1;
            else
        {i++;
        p=p->suiv1;}
    }
    if(ok==0){ gotoxy(45,14);printf("\tnest pas trouver\n");}
    else if(i==t){l=supprimer_queue_voiture(l);}
    else supprimer_pos_voiture(l,i);}
return l;
}
liste_voit modif_couleur(liste_voit l)
{
    int j,ok,q,u;
    char ch1[10];
    char ch2[20];
    liste_voit p=l;
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s2(l));printf(" ");
        }
      gotoxy(45,9+taille_s2(l));printf("\tmat_donner=");
    scanf ("%s",&ch1);
    j=verif_mat(ch1);
    u=verif_mat2(ch1,l);
    }while((j==0)||(u==1));
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,10+taille_s2(l));printf(" ");
        }
     gotoxy(45,10+taille_s2(l)); printf( "\tcouleur_donner=");
    scanf ("%s",&ch2);
    j=verif_1(ch2);
    }while(j==0);
     if(p==NULL){return p;}
    else
    if(strcmp(p->info1.mat,ch1) == 0)
                   {strcpy(p->info1.couleur,ch2);gotoxy(45,12);printf("");}
    else{
        ok=0;
    while (p->suiv1 && !ok)
    {
    if(strcmp(p->suiv1->info1.mat,ch1) == 0)
                {ok=1;
                p=p->suiv1;}
            else
        {
        p=p->suiv1;}
    }
    if(ok==0){ return l;}
    else {strcpy(p->info1.couleur,ch2);
     gotoxy(45,9+taille_s2(l)+1);printf("");}}
return l;
}
liste_voit modif_prix(liste_voit l)
{
    int j,ok,q,u;
    char ch1[10];
    int ch2;
    liste_voit p=l;
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9+taille_s2(l));printf(" ");
        }
      gotoxy(45,9+taille_s2(l));printf("\tmat_donner=");
    scanf ("%s",&ch1);
    j=verif_mat(ch1);
    u=verif_mat2(ch1,l);
    }while((j==0)||(u==1));
     do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,10+taille_s2(l));printf(" ");
        }
      gotoxy(45,10+taille_s2(l));printf("\tprix_donner=");
    scanf ("%d",&ch2);}
    while(ch2<0);
     if(p==NULL){return p;}
    else
    if(strcmp(p->info1.mat,ch1) == 0)
                   {p->info1.prix_1=ch2;gotoxy(45,16);printf("");}
    else{
        ok=0;
    while (p->suiv1 && !ok)
    {
    if(strcmp(p->suiv1->info1.mat,ch1) == 0)
                {ok=1;
                p=p->suiv1;}
            else
        {
        p=p->suiv1;}
    }
    if(ok==0){ return l;}
    else{ p->info1.prix_1=ch2;
     gotoxy(45,11+taille_s2(l)+1);printf("");}}
return l;
}
liste_voit rechreche_voiture(liste_voit l)
{
    SetColor(9);
    int k,n=0,n1=0,n2=0,n3=0,n0=1,nx=0;
    int q,ok,j,t,i=11;
    char x[10];
    liste_voit p=l;
    t=taille(l);
        if(l==NULL)
    { gotoxy(45,14);printf("\tliste est vide");return(l);}
    else{
        do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9);printf(" ");
        }
      gotoxy(45,9);printf("\tmat_donner=");
    scanf ("%s",&x);
    j=verif_mat(x);
    }while((j==0));
    if(strcmp(p->info1.mat,x) == 0)
{   drawclone(10,1);
    gotoxy(46,i);printf("%s",l->info1.mat);
    gotoxy(56,i);printf("%s",l->info1.marque);
    gotoxy(66,i);printf("%s",l->info1.couleur);
    gotoxy(76,i);printf("%d",l->info1.prix_1);
    gotoxy(88,i);printf("%d/%d/%d",l->info1.DA.j,l->info1.DA.m,l->info1.DA.a);
    gotoxy(102,i);printf("%s",l->info1.etat);}
    else{p=p->suiv1;
        ok=0;
    while (p && !ok)
    {
    if(strcmp(p->info1.mat,x) == 0)
                ok=1;
            else
        {
        p=p->suiv1;}
    }
    if(ok==0){ gotoxy(45,14);printf("nest pas existe ");return l;}
    else  {
    drawclone((10),1);
    gotoxy(46,i);printf("%s",p->info1.mat);
    gotoxy(56,i);printf("%s",p->info1.marque);
    gotoxy(66,i);printf("%s",p->info1.couleur);
    gotoxy(76,i);printf("%d",p->info1.prix_1);
    gotoxy(88,i);printf("%d/%d/%d",p->info1.DA.j,l->info1.DA.m,l->info1.DA.a);
    gotoxy(102,i);printf("%s",p->info1.etat);
        n++;
                             if((n%4==0)&&(n>=4)&&(n0<n2))
                {
                    n0++;
                    if(n0!=n2){
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);


                }
                else if(n1==0){goto en;}
                }
                else{
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);
                }else if(n1==0){goto en;}
                }}
    }}en:
return l;}
}
liste_voit rechreche_marque(liste_voit l)
{
    SetColor(9);
    int k,n=0,n1=0,n2=0,n3=0,n0=1,nx=0;
    int q,ok,j,t,i=11,oui=0;
    char x[10];
    liste_voit w,p=l;
    t=taille(l);
        if(l==NULL)
    { gotoxy(45,14);printf("\tliste est vide");return(l);}
    else{
        do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9);printf(" ");
        }
      gotoxy(45,9);printf("\tmarque_donner=");
    scanf ("%s",&x);
    j=verif_1(x);
    }while((j==0));
    if(strcmp(p->info1.marque,x) == 0)
{  oui=1; drawclone(i-1,1);
    gotoxy(46,i);printf("%s",l->info1.mat);
    gotoxy(56,i);printf("%s",l->info1.marque);
    gotoxy(66,i);printf("%s",l->info1.couleur);
    gotoxy(76,i);printf("%d",l->info1.prix_1);
gotoxy(88,i);printf("%d/%d/%d",l->info1.DA.j,l->info1.DA.m,l->info1.DA.a);
    gotoxy(102,i);printf("%s",l->info1.etat);i=i+3;}
     p=p->suiv1;
    while(p){

        ok=0;
    while (p && !ok)
    {
    if(strcmp(p->info1.marque,x) == 0)
                {ok=1;w=p;p=p->suiv1;oui=1;}
            else
        {
        p=p->suiv1;}
    }
    if((ok==0)&&(oui==0)){ gotoxy(45,14);printf("nest pas existe ");return l;}
    else if(ok==1)  {
    drawclone(i-1,1);
    gotoxy(46,i);printf("%s",w->info1.mat);
    gotoxy(56,i);printf("%s",w->info1.marque);
    gotoxy(66,i);printf("%s",w->info1.couleur);
    gotoxy(76,i);printf("%d",w->info1.prix_1);
gotoxy(88,i);printf("%d/%d/%d",w->info1.DA.j,w->info1.DA.m,w->info1.DA.a);
    gotoxy(102,i);printf("%s",w->info1.etat);i=i+3;
        n++;
                             if((n%4==0)&&(n>=4)&&(n0<n2))
                {
                    n0++;
                    if(n0!=n2){
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);


                }
                else if(n1==0){goto en;}
                }
                else{
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);
                }else if(n1==0){goto en;}
                }}
    }}en:

return l;}
}
liste_voit rechreche_couleur(liste_voit l)
{
    SetColor(9);
    int k,n=0,n1=0,n2=0,n3=0,n0=1,nx=0;
    int q,ok,j,t,i=11,oui=0;
    char x[10];
    liste_voit w,p=l;
    t=taille(l);
        if(l==NULL)
    { gotoxy(45,14);printf("\tliste est vide");return(l);}
    else{
        do
    {
                                for(q = 45; q < 103; q++)
        {
            gotoxy(q,9);printf(" ");
        }
      gotoxy(45,9);printf("\tcouleur_donner=");
    scanf ("%s",&x);
    j=verif_1(x);
    }while((j==0));
    if(strcmp(p->info1.couleur,x) == 0)
{  oui=1; drawclone(i-1,1);
    gotoxy(46,i);printf("%s",l->info1.mat);
    gotoxy(56,i);printf("%s",l->info1.marque);
    gotoxy(66,i);printf("%s",l->info1.couleur);
    gotoxy(76,i);printf("%d",l->info1.prix_1);
gotoxy(88,i);printf("%d/%d/%d",l->info1.DA.j,l->info1.DA.m,l->info1.DA.a);
    gotoxy(102,i);printf("%s",l->info1.etat);i=i+3;}
     p=p->suiv1;
    while(p){

        ok=0;
    while (p && !ok)
    {
    if(strcmp(p->info1.couleur,x) == 0)
               {ok=1;w=p;p=p->suiv1;oui=1;}
            else
        {
        p=p->suiv1;}
    }
    if((ok==0)&&(oui==0)){gotoxy(45,14);printf("nest pas existe "); return l;}
    else if(ok==1)  {
    drawclone(i-1,1);
    gotoxy(46,i);printf("%s",w->info1.mat);
    gotoxy(56,i);printf("%s",w->info1.marque);
    gotoxy(66,i);printf("%s",w->info1.couleur);
    gotoxy(76,i);printf("%d",w->info1.prix_1);
gotoxy(88,i);printf("%d/%d/%d",w->info1.DA.j,w->info1.DA.m,w->info1.DA.a);
    gotoxy(102,i);printf("%s",w->info1.etat);i=i+3;
        n++;
                             if((n%4==0)&&(n>=4)&&(n0<n2))
                {
                    n0++;
                    if(n0!=n2){
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);


                }
                else if(n1==0){goto en;}
                }
                else{
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);
                }else if(n1==0){goto en;}
                }}
    }}en:

return l;}
}
liste_voit rechreche_d_l(liste_voit l,int h)
{

    int k,n=0,n1=0,n2=0,n3=0,n0=1,nx=0;
    SetColor(9);
    int q,ok,j,t,i=10,oui=0;
    char x[10];
    if(h==1){strcpy(x,"D");}
    if(h==2){strcpy(x,"L");}
    liste_voit w,p=l;
    t=taille(l);
        nx=t/4;
    n3=t%4;
    if(n3==0){n2=nx;}
    else{n2=nx+1;}
        if(l==NULL)
    { gotoxy(45,14);printf("\tliste est vide");return(l);}
    else{
    if(toupper(p->info1.etat[0])==x[0])
{  oui=1; drawclone(i-1,1);
    gotoxy(46,i);printf("%s",l->info1.mat);
    gotoxy(56,i);printf("%s",l->info1.marque);
    gotoxy(66,i);printf("%s",l->info1.couleur);
    gotoxy(76,i);printf("%d",l->info1.prix_1);
gotoxy(88,i);printf("%d/%d/%d",l->info1.DA.j,l->info1.DA.m,l->info1.DA.a);
    gotoxy(102,i);printf("%s",l->info1.etat);i=i+3;}
     p=p->suiv1;

    while(p){

        ok=0;
    while (p && !ok)
    {
    if(toupper(p->info1.etat[0])==x[0])
                {ok=1;w=p;p=p->suiv1;oui=1;}
            else
        {
        p=p->suiv1;}
    }
    if((ok==0)&&(oui==0)){gotoxy(45,14);printf("nest pas existe "); return l;}
    else if(ok==1)  {
    drawclone(i-1,1);
    gotoxy(46,i);printf("%s",w->info1.mat);
    gotoxy(56,i);printf("%s",w->info1.marque);
    gotoxy(66,i);printf("%s",w->info1.couleur);
    gotoxy(76,i);printf("%d",w->info1.prix_1);
gotoxy(88,i);printf("%d/%d/%d",w->info1.DA.j,w->info1.DA.m,w->info1.DA.a);
    gotoxy(102,i);printf("%s",w->info1.etat);i=i+3;
    n++;
                             if((n%4==0)&&(n>=4)&&(n0<n2))
                {
                    n0++;
                    if(n0!=n2){
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);


                }
                else if(n1==0){goto en;}
                }
                else{
                    n1=test();
                   if(n1==1) {
                        i=9;
                   clearWindow();
            drawclone(i-1,1);
                }else if(n1==0){goto en;}
                }}

    }



    }
en:
return l;}
}

















