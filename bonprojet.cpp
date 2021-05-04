#include<iostream>
#include<conio.h>
#include<string>
#include<cmath>
#include<vector>
#include<cstdlib>
#include<fstream>
using namespace std;

std::string entree_dec1,entree;//declaration de variables globales pour pouvoir faire appel a elles dans n'importe quelles fonctions
void saisie_decimale(float saisie)//saisie securisee pour les nombres flottants
{
     bool bad_enter=true;
while(bad_enter)
    {
        cin>>entree_dec1;
        for(int i=0; i<entree_dec1.size();i++)
        {
            if(entree_dec1[i]!=46&&(entree_dec1[i]<48 || entree_dec1[i]>57))
            {
                cout<<"Mauvaise entree: ";
                bad_enter=true;
                break;
            }
            else
                bad_enter=false;
        }
    }
 }
void saisie_binaire(float saisie)//saisie securisee pour les nombres binaires... elle n'accepte que des 1 et des 0
{
    bool bad_enter=true;
    while(bad_enter)//saisie securisee
    {
        cin>>entree;
        for(int i=0; i<entree.size();i++)
        {
            if(entree[i]!=46 &&entree[i]!=48 && entree[i]!=49)
            {
                cout<<"Mauvaise entree, ";
                bad_enter=true;
                break;
            }
            else
                bad_enter=false;
        }
    }
 }
void saisie_hexadecimale()//saisie securisee pour entrer les nombres hexadecimaux...Elle prend en compte le lettres de a à f (minuscule et majuscule)
{
    bool bad_enter=true;
    while(bad_enter)
    {
        cin>>entree_dec1;
        for(int i=0; i<entree_dec1.size();i++)
        {
            if(entree_dec1[i]<48||entree_dec1[i]>57&&entree_dec1[i]<65||entree_dec1[i]>70&& entree_dec1[i]<97||entree_dec1[i]>102)
            {
                cout<<"Mauvaise entree: ";
                bad_enter=true;
                break;

            }
            else
                bad_enter=false;
        }
    }
 }
void saisie_entiere(int saisie)//fonction saisie securisée pour les nombres entiers
{
bool bad_enter=true;
while(bad_enter)
    {
        cin>>entree;
        for(int i=0; i<entree.size();i++)
        {
            if(entree[i]>57 ||entree[i]<48  )
            {
                cout<<"Mauvaise entree: ";
                bad_enter=true;
                break;
            }
            else
                bad_enter=false;
        }
    }
 }
void accueil()//Pour afficher le grand menu.............done
{
    cout<<"                                         BIENVENUE SUR POLYVALENT PROGRAM"<<endl;
    cout<<"                                      ....................................."<<endl<<endl;
    cout<<"           Choisissez le numero coorrespondant a l'action que vous voulez executer dans le menu ci-dessous"<<endl;
    cout<<"........................................................................................................................"<<endl;
    cout<<"1- Operations de codage/ decodage/ transcodage"<<endl;
    cout<<"2- Operations mathematiques"<<endl;
    cout<<"3- Gestion d'informations sur un etudiant"<<endl;
    cout<<"4- Calendrier"<<endl<<endl;
}
void choix1(int n) //Pour avoir toutes les options..........Il manque une derniere option a ajouter
{

    switch(n)
    {
            case 1:
                cout<<".................................................................."<<endl;
                cout<<"Choisissez le numero correspondant au type de conversion souhaitee"<<endl;
                cout<<".................................................................."<<endl<<endl;
                cout<<"MENU"<<endl;
                cout<<"1- Conversion d'un nombre decimal"<<endl;
                cout<<"2- Conversion d'un nombre binaire"<<endl;
                cout<<"3- Conversion d'un nombre hexadecimal"<<endl<<endl;
            break;
            case 2:
                cout<<"........................................................................."<<endl;
                cout<<"Choisissez le numero correspondant a la tache que vous souhaitez executer"<<endl;
                cout<<"........................................................................."<<endl<<endl;
                cout<<"MENU"<<endl;
                cout<<"1- Carre magique d'odre pair"<<endl;
                cout<<"2- Multiplication de deux matrices"<<endl;
                cout<<"3- Resolution d'un systeme a deux inconnues"<<endl;
                cout<<"4- Le determinant et la transposee d'une matrice quelconque"<<endl<<endl;
            break;
            case 3:
                cout<<"......................................................................"<<endl;
                cout<<"Choisissez l'une des options suivantes pour la gestion des etudiants: "<<endl;
                cout<<"......................................................................"<<endl<<endl;
                cout<<"MENU"<<endl;
                cout<<"1- Saisir les informations sur un etudiant (code, nom, prenom, adresse) dans un fichier notepad"<<endl;
                cout<<"2- Afficher des informations du fichier avec la possibilite de les imprimer"<<endl;
                cout<<"3- Afficher les informations sur les etudiants par ordre alphabetique de noms"<<endl<<endl;
                break;
            case 4:
                cout<<".................................................................................."<<endl;
                cout<<"Choisissez parmi les options suivantes ce que vous voulez voir faire le calendrier"<<endl;
                cout<<".................................................................................."<<endl<<endl;
                cout<<"MENU"<<endl;
                cout<<"1- Savoir si une date est valide"<<endl;
                cout<<"2- Connaitre l'intervalle de temps entre deux dates"<<endl;
                break;
    }

}
void decimal()//afficher les options pour la conversion du nombre decimal ...........done
{
    cout<<"..........................................................."<<endl;
    cout<<"En quel systeme voulez vous convertir votre nombre decimal?"<<endl;
    cout<<"..........................................................."<<endl<<endl;
    cout<<"1- En binaire"<<endl;
    cout<<"2- En octal"<<endl;
    cout<<"3- En hexadecimal"<<endl<<endl;
}
void binaire()//afficher les options pour la conversion du nombre dbinaire ...........done
{
    cout<<"..........................................................."<<endl;
    cout<<"En quel systeme voulez vous convertir votre nombre binaire?"<<endl;
    cout<<"..........................................................."<<endl<<endl;
    cout<<"1- En decimal"<<endl;
    cout<<"2- En octal"<<endl;
    cout<<"3- En hexadecimal"<<endl<<endl;
}
void hexadecimal()//afficher les options pour la conversion du nombre hexadecimal ...........done
{
    cout<<"..............................................................."<<endl;
    cout<<"En quel systeme voulez vous convertir votre nombre hexadecimal?"<<endl;
    cout<<"..............................................................."<<endl<<endl;
    cout<<"1- En octal"<<endl;
    cout<<"2- En binaire"<<endl;
    cout<<"3- En decimal"<<endl<<endl;
}
void dec_to_bin(float y)//conversion de decimal en binaire........done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"................................"<<endl;
        cout<<"Conversion de decimal en binaire"<<endl;
        cout<<"................................"<<endl<<endl;
        cout<<"Entrez le nombre: ";
    saisie_decimale(y);
    y=std::stof(entree_dec1);
    int x=trunc(y);
    double d=y-x;
    vector <int> reste_b;
    int j=0;
    while(x>=2)
    {
        reste_b.push_back(j+1);
        reste_b[j]=x%2;
        x=x/2;
        j++;
    }
    int q[10];
    for(int i=0; i<=9;i++)
    {
        d=d*2;
        if(d>=1)
        {
            q[i]=1;
            d=d-1;
        }
        else
            q[i]=0;
        }
        cout<<y<<"(dec)= "<<x;
        for(int i=(reste_b.size()-1);i>=0;i--)
        {
        cout<<reste_b[i];
        }
        if(x!=y)//si le nombre est flottant
        {
        cout<<",";
        for(int i=0;i<=7;i++)
        {
            cout<<q[i];
        }
    }
    cout<<"(bin)"<<endl<<endl;
    char keep;
    cout<<"Presser 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
void dec_to_oct(float y)//Conversion de decimal en octal......done
 {
     bool continuer=true;
     while(continuer)
     {
          cout<<".............................."<<endl;
          cout<<"Conversion de decimal en octal"<<endl<<endl;
          cout<<".............................."<<endl<<endl;
          cout<<"Entrez le nombre: ";
    saisie_decimale(y);
    y=std::stof(entree_dec1);
    int x=(trunc(y));
    double d=y-x;//partie flottante du nombre
    vector <int> reste_o;
    int j(0);
    while(x>=8)//division du nombre par 8 autant de fois qu'il le faut
    {
        reste_o.push_back(j+1);
        reste_o[j]=x%8;
        x=x/8;
        j++;
    }
    int q[10];//pour convertir la patie flottante
    for(int i=0; i<=7;i++)
    {
        d=d*8;//multiplication de la partie flottante par 8
        if (d<1)
            q[i]=0;
        else if(d<2)
            {
            q[i]=1;
            d=d-1;
            }
        else if (d<3)
            {
            q[i]=2;
            d=d-2;
            }
        else if (d<4)
            {
            q[i]=3;
            d=d-3;
            }
         else if (d<5)
            {
            q[i]=4;
            d=d-4;
            }
         else if (d<6)
            {
            q[i]=5;
            d=d-5;
            }
         else if (d<7)
            {
            q[i]=6;
            d=d-6;
            }
         else if (d<8)
            {
            q[i]=7;
            d=d-7;
            }
    }
        cout<<y<<"(dec)= "<<x;//afficher le quotient
        for(int i=(reste_o.size()-1);i>=0;i--)//afficher les restes
        {
        cout<<reste_o[i];
        }
        if(x!=y)//si le nombre est flottant
        {
        cout<<",";
        for(int i=0;i<=7;i++)
        {
            cout<<q[i];//afficher la conversion de la partie flottante
        }
        cout<<"(oct)"<<endl<<endl;
        }
        cout<<endl<<"Pressez 0 pour recommencer: ";
        char keep;
        cin>>keep;
        system ("cls");
        if(keep=='0')
            continuer=true;
        else
            continuer=false;
     }
}
void dec_to_hex(float z)//conversion de decimal en hexadecimal.......done
{
    bool continuer=true;
    while(continuer)
    {
         cout<<"...................................."<<endl;
         cout<<"Conversion de decimal en hexadecimal"<<endl;
         cout<<"...................................."<<endl<<endl;
        cout<<"Entrez le nombre: ";
    saisie_decimale(z);
    z=std::stof(entree_dec1);
    vector <int> reste_h;
    float y;
    y=z;
    int x=(trunc(y));//partie entiere du nombre
    double d=y-x;//partie flottante du nombre
    int k(0);
    while(x>=16)//pour trouver les restes de la division entiere
        {
        reste_h.push_back(k+1);
        reste_h[k]=x%16;
        x=x/16;
        k++;
        }
         int q[10];//pour convertir la patie flottante
    for(int i=0; i<=7;i++)
    {
        d=d*16;//multiplication de la partie flottante par 8
        if (d<1)
            q[i]=0;
        else if(d<2)
            {
            q[i]=1;
            d=d-1;
            }
        else if (d<3)
            {
            q[i]=2;
            d=d-2;
            }
        else if (d<4)
            {
            q[i]=3;
            d=d-3;
            }
         else if (d<5)
            {
            q[i]=4;
            d=d-4;
            }
         else if (d<6)
            {
            q[i]=5;
            d=d-5;
            }
         else if (d<7)
            {
            q[i]=6;
            d=d-6;
            }
         else if (d<8)
            {
            q[i]=7;
            d=d-7;
            }
          else if (d<9)
            {
            q[i]=8;
            d=d-8;
            }
              else if (d<10)
            {
            q[i]=9;
            d=d-9;
            }  else if (d<11)
            {
            q[i]=10;
            d=d-10;
            }  else if (d<12)
            {
            q[i]=11;
            d=d-11;
            }  else if (d<13)
            {
            q[i]=12;
            d=d-12;
            }  else if (d<14)
            {
            q[i]=13;
            d=d-13;
            }  else if (d<15)
            {
            q[i]=14;
            d=d-14;
            }  else if (d<16)
            {
            q[i]=15;
            d=d-15;
            }
    }

    cout<<y<<"(dec)= ";
   switch(x)
        {
            case 10:
        cout<<'A';
    break;
    case 11:
       cout<<'B';
    break;
    case 12:
        cout<<'C';
    break;
    case 13:
        cout<<'D';
    break;
    case 14:
       cout<<'E';
    break;
    case 15:
        cout<<'F';
    break;
    default:
        cout<<x;
    break;
    }
    for(k=(reste_h.size()-1);k>=0;k--)
    {
         switch(reste_h[k])
        {
            case 10:
        cout<<'A';
    break;
    case 11:
       cout<<'B';
    break;
    case 12:
        cout<<'C';
    break;
    case 13:
        cout<<'D';
    break;
    case 14:
       cout<<'E';
    break;
    case 15:
        cout<<'F';
    break;
    default:
        cout<<reste_h[k];
    break;
    }

    }
    if(x!=y)//si le nombre est flottant
        {
        cout<<",";
        for(int i=0;i<=7;i++)
        {
            switch(q[i])
        {
            case 10:
        cout<<'A';
    break;
    case 11:
       cout<<'B';
    break;
    case 12:
        cout<<'C';
    break;
    case 13:
        cout<<'D';
    break;
    case 14:
       cout<<'E';
    break;
    case 15:
        cout<<'F';
    break;
    default:
        cout<<q[i];
    break;
    }
            //cout<<q[i];//afficher la conversion de la partie flottante
        }
        cout<<"(hex)"<<endl;
        }
        char keep;
        cout<<endl<<"Presser 0 pour continuer: ";
        cin>>keep;
        system("cls");
        if(keep=='0')
            continuer=true;
        else
            continuer=false;
    }
}
void bin_to_dec(float y)//conversion de binaire en decimal.......done
{
    bool continuer=true;
    while(continuer)
    {
         cout<<"................................"<<endl;
         cout<<"Conversion de binaire en decimal"<<endl;
         cout<<"................................"<<endl<<endl;
         cout<<"Entrez le nombre: ";
    saisie_binaire(y);
    y=std::stof(entree);
    float nb=y;
    short int eff_ent=trunc(log10(y)+1);//effectif de chiffres dans la partie entiere
    short int q;//represente le chiffre avec lequel on va travailler
    float s=0,j,v;
    while(y-trunc(y)!=0)//si x est decimal, retirer la virgule
    {
        y=y*10;
    }
    short int eff_tot=trunc(log10(y)+1);//effectif de chiffres dans le nombre
    int d_eff=eff_tot-eff_ent;//effectif de chiffres dans la  partie flottante
    //Boucle pour la partie entiere du nombre
    {
         for(int i=eff_ent-1; i>=0;i--)
        {
       q=y/pow(10,eff_tot-1);//represente le chiffre avec lequel on va travailler, on commence avec le poids le plus lourd
       v=pow(2,eff_ent-1);//represente par quelle valeur on va multiplier le chiffre
       j=q*v;//represente le produit
       y=y-q*pow(10,eff_tot-1);//retire le chiffre avec lequel on a traville pour voir ce qui reste du nombre
       s=s+j;//la somme des produits
       eff_tot--;
       eff_ent--;
        }
    //Boucle pour la partie flottante
        for(int i=-1; i>=-d_eff;i--)
        {

       q=y/pow(10,eff_tot-1);
       v=pow(2,i);
       j=q*v;
       y=y-q*pow(10,eff_tot-1);
       s=s+j;
       eff_tot--;
        }
        cout<<nb<<"(bin)= "<<s<<"(dec)"<<endl;
    }
    char keep;
    cout<<"pressez 0 pour continuer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
void bin_to_hex(float y)//conversion de binaire en hexa........done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"...................................."<<endl;
        cout<<"Conversion de binaire en hexadecimal"<<endl;
        cout<<"...................................."<<endl<<endl;
        cout<<"Entrez le nombre: ";
   saisie_binaire(y);
    y=std::stof(entree);
     float nb=y;
    short int eff_ent=trunc(log10(y)+1);//effectif de chiffres dans la partie entiere
    short int q;
    float s=0,j,v;
    while(y-trunc(y)!=0)//si x est decimal, retirer la virgule
    {
        y=y*10;
    }
     short int eff_tot=trunc(log10(y)+1);//effectif de chiffres dans le nombre
     short int d_eff=eff_tot-eff_ent;//effectif de chiffres dans la  partie flottante


    //Boucle pour la partie entiere du nombre
    {
         for(int i=eff_ent-1; i>=0;i--)
        {
       q=y/pow(10,eff_tot-1);//represente le chiffre avec lequel on va travailler, on commence avec le poids le plus lourd
       v=pow(2,eff_ent-1);//represente par quelle valeur on va multiplier le chiffre
       j=q*v;//represente le produit
       y=y-q*pow(10,eff_tot-1);//retire le chiffre avec lequel on a traville pour voir ce qui reste du nombre
       s=s+j;//la somme des produits
       eff_tot--;
       eff_ent--;
        }
    //Boucle pour la partie flottante
        for(int i=-1; i>=-d_eff;i--)
        {

       q=y/pow(10,eff_tot-1);
       v=pow(2,i);
       j=q*v;
       y=y-q*pow(10,eff_tot-1);
       s=s+j;
       eff_tot--;
        }
         vector <int> reste_h;
    y=s;
    int x=(trunc(y));//partie entiere du nombre
    double d=y-x;//partie flottante du nombre
    int k(0);
    while(x>=16)//pour trouver les restes de la division entiere
        {
        reste_h.push_back(k+1);
        reste_h[k]=x%16;
        x=x/16;
        k++;
        }
         int q[10];//pour convertir la patie flottante
    for(int i=0; i<=7;i++)
    {
        d=d*16;//multiplication de la partie flottante par 8
        if (d<1)
            q[i]=0;
        else if(d<2)
            {
            q[i]=1;
            d=d-1;
            }
        else if (d<3)
            {
            q[i]=2;
            d=d-2;
            }
        else if (d<4)
            {
            q[i]=3;
            d=d-3;
            }
         else if (d<5)
            {
            q[i]=4;
            d=d-4;
            }
         else if (d<6)
            {
            q[i]=5;
            d=d-5;
            }
         else if (d<7)
            {
            q[i]=6;
            d=d-6;
            }
         else if (d<8)
            {
            q[i]=7;
            d=d-7;
            }
          else if (d<9)
            {
            q[i]=8;
            d=d-8;
            }
              else if (d<10)
            {
            q[i]=9;
            d=d-9;
            }  else if (d<11)
            {
            q[i]=10;
            d=d-10;
            }  else if (d<12)
            {
            q[i]=11;
            d=d-11;
            }  else if (d<13)
            {
            q[i]=12;
            d=d-12;
            }  else if (d<14)
            {
            q[i]=13;
            d=d-13;
            }  else if (d<15)
            {
            q[i]=14;
            d=d-14;
            }  else if (d<16)
            {
            q[i]=15;
            d=d-15;
            }
    }

    cout<<nb<<"(bin)= ";
   switch(x)
        {
            case 10:
        cout<<'A';
    break;
    case 11:
       cout<<'B';
    break;
    case 12:
        cout<<'C';
    break;
    case 13:
        cout<<'D';
    break;
    case 14:
       cout<<'E';
    break;
    case 15:
        cout<<'F';
    break;
    default:
        cout<<x;
    break;
    }
    for(k=(reste_h.size()-1);k>=0;k--)
    {
         switch(reste_h[k])
        {
            case 10:
        cout<<'A';
    break;
    case 11:
       cout<<'B';
    break;
    case 12:
        cout<<'C';
    break;
    case 13:
        cout<<'D';
    break;
    case 14:
       cout<<'E';
    break;
    case 15:
        cout<<'F';
    break;
    default:
        cout<<reste_h[k];
    break;
    }

    }
    if(x!=y)//si le nombre est flottant
        {
        cout<<",";
        for(int i=0;i<=7;i++)
        {
            switch(q[i])
        {
            case 10:
        cout<<'A';
    break;
    case 11:
       cout<<'B';
    break;
    case 12:
        cout<<'C';
    break;
    case 13:
        cout<<'D';
    break;
    case 14:
       cout<<'E';
    break;
    case 15:
        cout<<'F';
    break;
    default:
        cout<<q[i];
    break;
    }
            //cout<<q[i];//afficher la conversion de la partie flottante
        }
        cout<<"(hex)"<<endl;
        }

}
char keep;
cout<<"Pressez 0 pour recommencer: ";
cin>>keep;
system("cls");
if(keep=='0')
    continuer=true;
else
    continuer=false;
   }
}
void bin_to_oct(float y)//conversion de binaire en octal......done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<".............................."<<endl;
        cout<<"Conversion de binaire en octal"<<endl;
        cout<<".............................."<<endl<<endl;
        cout<<"Entrez le nombre: ";
   saisie_binaire(y);
    y=std::stof(entree);
    float nb=y;
    short int eff_ent=trunc(log10(y)+1);//effectif de chiffres dans la partie entiere
    short int q;
    float s=0,j,v;
    while(y-trunc(y)!=0)//si x est decimal, retirer la virgule
    {
        y=y*10;
    }
    short int eff_tot=trunc(log10(y)+1);//effectif de chiffres dans le nombre
    short int d_eff=eff_tot-eff_ent;//effectif de chiffres dans la  partie flottante
    //Boucle pour la partie entiere du nombre
    {
         for(int i=eff_ent-1; i>=0;i--)
        {
       q=y/pow(10,eff_tot-1);//represente le chiffre avec lequel on va travailler, on commence avec le poids le plus lourd
       v=pow(2,eff_ent-1);//represente par quelle valeur on va multiplier le chiffre
       j=q*v;//represente le produit
       y=y-q*pow(10,eff_tot-1);//retire le chiffre avec lequel on a traville pour voir ce qui reste du nombre
       s=s+j;//la somme des produits
       eff_tot--;
       eff_ent--;
        }
    //Boucle pour la partie flottante
        for(int i=-1; i>=-d_eff;i--)
        {

       q=y/pow(10,eff_tot-1);
       v=pow(2,i);
       j=q*v;
       y=y-q*pow(10,eff_tot-1);
       s=s+j;
       eff_tot--;
        }
        y=s;
        int x=(trunc(y));
    double d=y-x;//partie flottante du nombre
    vector <int> reste_o;
    int j(0);
    while(x>=8)//division du nombre par 8 autant de fois qu'il le faut
    {
        reste_o.push_back(j+1);
        reste_o[j]=x%8;
        x=x/8;
        j++;
    }
    int q[10];//pour convertir la patie flottante
    for(int i=0; i<=7;i++)
    {
        d=d*8;//multiplication de la partie flottante par 8
        if (d<1)
            q[i]=0;
        else if(d<2)
            {
            q[i]=1;
            d=d-1;
            }
        else if (d<3)
            {
            q[i]=2;
            d=d-2;
            }
        else if (d<4)
            {
            q[i]=3;
            d=d-3;
            }
         else if (d<5)
            {
            q[i]=4;
            d=d-4;
            }
         else if (d<6)
            {
            q[i]=5;
            d=d-5;
            }
         else if (d<7)
            {
            q[i]=6;
            d=d-6;
            }
         else if (d<8)
            {
            q[i]=7;
            d=d-7;
            }
    }
        cout<<nb<<"(bin)= "<<x;//afficher le quotient
        for(int i=(reste_o.size()-1);i>=0;i--)//afficher les restes
        {
        cout<<reste_o[i];
        }
        if(x!=y)//si le nombre est flottant
        {
        cout<<",";
        for(int i=0;i<=7;i++)
        {
            cout<<q[i];//afficher la conversion de la partie flottante
        }
        cout<<"(oct)"<<endl;
        }
}
    char keep;
    cout<<"Presser 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
void hex_to_dec()//conversion de hexa en dec....entier seulement.....done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"...................................."<<endl;
        cout<<"Conversion de hexadecimal en decimal"<<endl;
        cout<<"...................................."<<endl<<endl;
        cout<<"Entrer le nombre: ";
   saisie_hexadecimale();
    int p=entree_dec1.size()-1;
    float s=0;
    for(int i=0;i<entree_dec1.size();i++)
    {
       switch(entree_dec1[i])
        {
            case 'A':
        entree_dec1[i]=10;
    break;
    case 'B':
       entree_dec1[i]=11;
    break;
    case 'C':
        entree_dec1[i]=12;
    break;
    case 'D':
        entree_dec1[i]=13;
    break;
    case 'E':
       entree_dec1[i]=14;
    break;
    case 'F':
       entree_dec1[i]=15;
    break;
    case 'a':
        entree_dec1[i]=10;
    break;
    case 'b':
       entree_dec1[i]=11;
    break;
    case 'c':
        entree_dec1[i]=12;
    break;
    case 'd':
        entree_dec1[i]=13;
    break;
    case 'e':
       entree_dec1[i]=14;
    break;
    case 'f':
       entree_dec1[i]=15;
    break;
     case 48:
        entree_dec1[i]=0;
    break;
    case 49:
        entree_dec1[i]=1;
    break;
    case 50:
       entree_dec1[i]=2;
    break;
    case 51:
       entree_dec1[i]=3;
    break;
     case 52:
        entree_dec1[i]=4;
    break;
    case 53:
        entree_dec1[i]=5;
    break;
    case 54:
       entree_dec1[i]=6;
    break;
    case 55:
       entree_dec1[i]=7;
    break;
    case 56:
        entree_dec1[i]=8;
    break;
    case 57:
        entree_dec1[i]=9;
    break;
    }
    s=s+entree_dec1[i]*pow(16,p);
     p--;
    }
   cout<<"Ce nombre hexadecimal est egal a: "<<s<<"(dec)"<<endl;
   char keep;
    cout<<"Pressez 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
void hex_to_bin()//conversion de hexa en binaire......entier seulement.....done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"....................................."<<endl;
        cout<<"Conversion de hexadeccimal en binaire"<<endl;
        cout<<"....................................."<<endl<<endl;
         cout<<"Entrer le nombre: ";
    saisie_hexadecimale();
    int p=entree_dec1.size()-1;
    float s=0;
    for(int i=0;i<entree_dec1.size();i++)
    {
       switch(entree_dec1[i])
        {
            case 'A':
        entree_dec1[i]=10;
    break;
    case 'B':
       entree_dec1[i]=11;
    break;
    case 'C':
        entree_dec1[i]=12;
    break;
    case 'D':
        entree_dec1[i]=13;
    break;
    case 'E':
       entree_dec1[i]=14;
    break;
    case 'F':
       entree_dec1[i]=15;
    break;
    case 'a':
        entree_dec1[i]=10;
    break;
    case 'b':
       entree_dec1[i]=11;
    break;
    case 'c':
        entree_dec1[i]=12;
    break;
    case 'd':
        entree_dec1[i]=13;
    break;
    case 'e':
       entree_dec1[i]=14;
    break;
    case 'f':
       entree_dec1[i]=15;
    break;
     case 48:
        entree_dec1[i]=0;
    break;
    case 49:
        entree_dec1[i]=1;
    break;
    case 50:
       entree_dec1[i]=2;
    break;
    case 51:
       entree_dec1[i]=3;
    break;
     case 52:
        entree_dec1[i]=4;
    break;
    case 53:
        entree_dec1[i]=5;
    break;
    case 54:
       entree_dec1[i]=6;
    break;
    case 55:
       entree_dec1[i]=7;
    break;
    case 56:
        entree_dec1[i]=8;
    break;
    case 57:
        entree_dec1[i]=9;
    break;
    }
    s=s+((int)entree_dec1[i]*pow(16,p));
     p--;
    }
    float y=s;
    int x=trunc(y);
    double d=y-x;
    vector <int> reste_b;
    int j=0;
    while(x>=2)
    {
        reste_b.push_back(j+1);
        reste_b[j]=x%2;
        x=x/2;
        j++;
    }
    int q[10];
    for(int i=0; i<=9;i++)
    {
        d=d*2;
        if(d>=1)
        {
            q[i]=1;
            d=d-1;
        }
        else
            q[i]=0;
        }
        cout<<"Ce nombre en hexadecimal est egal a: "<<x;
        for(int i=(reste_b.size()-1);i>=0;i--)
        {
        cout<<reste_b[i];
        }

    cout<<"(bin)"<<endl;
     char keep;
    cout<<"Pressez 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
void hex_to_oct()//conversion de hex en octal......entier seulement.....done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<".................................."<<endl;
        cout<<"Conversion de hexadecimal en octal"<<endl;
        cout<<".................................."<<endl<<endl;
        cout<<"Entrer le nombre: ";
   saisie_hexadecimale();
    int p=entree_dec1.size()-1;
    float s=0;
    for(int i=0;i<entree_dec1.size();i++)
    {
       switch(entree_dec1[i])
        {
            case 'A':
        entree_dec1[i]=10;
    break;
    case 'B':
       entree_dec1[i]=11;
    break;
    case 'C':
        entree_dec1[i]=12;
    break;
    case 'D':
        entree_dec1[i]=13;
    break;
    case 'E':
       entree_dec1[i]=14;
    break;
    case 'F':
       entree_dec1[i]=15;
    break;
    case 'a':
        entree_dec1[i]=10;
    break;
    case 'b':
       entree_dec1[i]=11;
    break;
    case 'c':
        entree_dec1[i]=12;
    break;
    case 'd':
        entree_dec1[i]=13;
    break;
    case 'e':
       entree_dec1[i]=14;
    break;
    case 'f':
       entree_dec1[i]=15;
    break;
     case 48:
        entree_dec1[i]=0;
    break;
    case 49:
        entree_dec1[i]=1;
    break;
    case 50:
       entree_dec1[i]=2;
    break;
    case 51:
       entree_dec1[i]=3;
    break;
     case 52:
        entree_dec1[i]=4;
    break;
    case 53:
        entree_dec1[i]=5;
    break;
    case 54:
       entree_dec1[i]=6;
    break;
    case 55:
       entree_dec1[i]=7;
    break;
    case 56:
        entree_dec1[i]=8;
    break;
    case 57:
        entree_dec1[i]=9;
    break;
    }
    s=s+((int)entree_dec1[i]*pow(16,p));
     p--;
    }
    float y=s;
    int x=(trunc(y));
    double d=y-x;//partie flottante du nombre
    vector <int> reste_o;
    int j(0);
    while(x>=8)//division du nombre par 8 autant de fois qu'il le faut
    {
        reste_o.push_back(j+1);
        reste_o[j]=x%8;
        x=x/8;
        j++;
    }
    int q[10];//pour convertir la patie flottante
    for(int i=0; i<=7;i++)
    {
        d=d*8;//multiplication de la partie flottante par 8
        if (d<1)
            q[i]=0;
        else if(d<2)
            {
            q[i]=1;
            d=d-1;
            }
        else if (d<3)
            {
            q[i]=2;
            d=d-2;
            }
        else if (d<4)
            {
            q[i]=3;
            d=d-3;
            }
         else if (d<5)
            {
            q[i]=4;
            d=d-4;
            }
         else if (d<6)
            {
            q[i]=5;
            d=d-5;
            }
         else if (d<7)
            {
            q[i]=6;
            d=d-6;
            }
         else if (d<8)
            {
            q[i]=7;
            d=d-7;
            }
    }
        cout<<"Ce nombre hexadecimal est egal a: "<<x;//afficher le quotient
        for(int i=(reste_o.size()-1);i>=0;i--)//afficher les restes
        {
        cout<<reste_o[i];
        }

        cout<<"(oct)"<<endl;
         char keep;
    cout<<"Pressez 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
void carre_double_pair(  int N)//pour les carres magiques dont le nombre de cotes est divisible par 4....done
{
    int k,i,j;
    int tab[N][N];
    k=1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            tab[i][j]=k;
            k++;
        }
    }
    cout<<endl<<"Le carre magique correspondant est: "<<endl;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            bool r1=(i+1)%4==0 || i%4==0;
            bool r2=(j+1)%4==0 || j%4==0;

            if((r1 && !r2) || (!r1 && r2))
            {
                tab[i][j]=((N*N)+1)-tab[i][j];
            }
            cout<<tab[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void remplir_tab(int* p,int* tab,int l,int c)
{
    int k=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            p[k]=tab[k];
            k++;
        }
    }
    k=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<tab[k]<<"\t";
            k++;
        }
        cout<<endl;
    }
}
void ajout_valeur(int& val1,int& val2,int& val3,int& val4,int i,int j,int k,int L,int x,int n)
{
    if( (i==(L*2)-2 && j==n/2) || (i==(L*2)&& j!=n/2) )//cas de U
    {
        val1=k+3;
        val2=k+2;
        val3=k+1;
        val4=k;
    }
    else if(x-1!=0 && i>=(L*2)+2)//cas de X
    {
        val1=k+3;
        val2=k+1;
        val3=k+2;
        val4=k;
    }
    else//cas de L
    {
        val1=k;
        val2=k+2;
        val3=k+1;
        val4=k+3;
    }
}
void simple_magic_square(int *p,int n)
{
    int tab[n][n],i,j,k;
    int x=((n/2)-1)/2, L=x+1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            tab[i][j]=0;
        }
    }
    i=0;
    j=n/2;
    ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,1,L,x,n);
    for(k=5;k<=n*n;k+=4)
    {
        i-=2;
        j+=2;
        if(i>=0 && j<n && tab[i][j]==0)//case ok
        {
             ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i>=0 && j<n && tab[i][j]!=0)//case occupe
        {
            i+=4;
            j-=2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i<0 && j<n)//debordement en haut
        {
            i=n-2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i>=0 && j>=n)//debordement a droite
        {
            j=1;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else
        {
            i+=4;
            j-=2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
    }
    remplir_tab(p,(int*)tab,n,n);
}
void carre_magique()
{
     cout<<".........................................."<<endl;
     cout<<"Construction de carre magique d'ordre pair"<<endl;
     cout<<".........................................."<<endl<<endl;
   bool continuer=true;
   while(continuer)
   {
       cout<<"Quel est l'ordre de votre carre? ";
    int n;
   saisie_entiere(n);
   n=stoi(entree);
    while(n%2!=0)
    {
        cout<<"erreur ";
        cin>>n;
    }
    if(n%4==0)
        carre_double_pair(n);
    else
    {
        int k[n*n];
       simple_magic_square(k,n);
}
    char keep;
    cout<<"Pressez 0 pour continuer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
   }
}
void prod_mat()//done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"........................"<<endl;
        cout<<"Produit de deux matrices"<<endl;
        cout<<"........................"<<endl<<endl;
         int n,m,p,valeur;
    cout<<"Quel est l'ordre commun des deux matrices? "<<endl;
       saisie_entiere(m);
    m=std::stoi(entree);
    cout<<"Combien de lignes contient la premiere matrice? "<<endl;
        saisie_entiere(n);
 n=std::stoi(entree);
    cout<<"Combien de colonnes contient la deuxieme matrice? "<<endl;
       saisie_entiere(p);
 p=std::stof(entree);
   float m1[n][m],m2[m][p],m3[n][p];
   if(n==0||m==0||p==0)
   {
       cout<<"Impossible car les matrices ne doivent pas etre vides"<<endl;
   }
   else
   {
      cout<<"entrer la premiere matrice ligne par ligne"<<endl;
    for (int i=0; i<n;i++)
    {
        for (int j=0; j<m;j++)
        {
            saisie_entiere(valeur);
            m1[i][j]=std::stoi(entree);
        }
}

    cout<<"entrer la deuxieme matrice ligne par ligne"<<endl;
    for (int i=0; i<m;i++)
    {
        for (int j=0; j<p;j++)
        {
           saisie_entiere(valeur);
           m2[i][j]=std::stoi(entree);
        }

    }

    cout<<"Le produit de "<<endl;
     for (int i=0; i<m;i++)
    {
        for (int j=0; j<n;j++)
        {
            cout<<m1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"par"<<endl<<endl;
     for (int i=0; i<n;i++)
    {
        for (int j=0; j<p;j++)
        {
            cout<<m2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"donne"<<endl<<endl;
    double s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<p;j++)
        {
            for(int k=0;k<m;k++)
            {
                s=s+m1[i][k]*m2[k][j];
            }
             m3[i][j]=s;
        }
    }
    for (int i=0; i<n;i++)
    {
        for (int j=0; j<p;j++)
        {
           cout<<m3[i][j]<<"\t";
        }
        cout<<endl;
    }
   }
    char keep;
    cout<<"Pressez 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
    }
void syst_equ()//done
{
    bool continuer=true;
    while (continuer)
    {
        cout<<"..................................................."<<endl;
        cout<<"Resolution d'un systeme d'equation a deux inconnues"<<endl;
        cout<<"..................................................."<<endl<<endl;
        float a1,a2,b1,b2,c1,c2,x,y;
    cout<<"Entrez respectivement les coefficients a et b et la constante c pour la premiere equation"<<endl;
    cout<<"Entrez a: ";
    saisie_decimale(a1);
    a1=std::stoi(entree_dec1);
    cout<<"Entrez b: ";
    saisie_decimale(b1);
    b1=std::stoi(entree_dec1);
    cout<<"Entrez c: ";
   saisie_decimale(c1);
    c1=std::stoi(entree_dec1);
    cout<<endl;
    cout<<"Entrez respectivement les coefficients a et b et la constante c pour la deuxieme equation"<<endl;
    cout<<"Entrez a: ";
  saisie_decimale(a2);
    a2=std::stoi(entree_dec1);
    cout<<"Entrez b: ";
   saisie_decimale(b2);
    b2=std::stoi(entree_dec1);
    cout<<"Entrez c: ";
   saisie_decimale(c2);
    c2=std::stoi(entree_dec1);
    cout<<endl;
x=(-c1-b1*y)/a1;
y=(-c2-a2*x)/b2;
x=(-c1-b1*y)/a1;
cout<<"S={("<<x<<","<<y<<")}"<<endl;
 char keep;
    cout<<"Pressez 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
int det_mat(int matrix[10][10], int n)
{
   int det=0;
   int submatrix[10][10];
   if(n==2)
        det= (matrix[0][0]*matrix[1][1]-(matrix[1][0]*matrix[1][1]));
   else
   {
        for(int x=0;x<n;x++)
        {
            int subi=0;
            for(int i=1;i<n;i++)
            {
                int subj=0;
                for(int j=0;j<n;j++)
                {
                    if(j==x)
                        continue;
                        submatrix[subi][subj]=matrix[i][j];
                        subj++;
                }
                subi++;
            }
             det=det+ (pow(-1,x)*matrix[0][x]+det_mat(submatrix,n-1));
        }
   }
   cout<<det<<endl;
   return det;
}
void trans_det_matrice()
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"......................................."<<endl;
        cout<<"Transposee et determinant d'une matrice"<<endl;
        cout<<"......................................."<<endl<<endl;
        cout<<"Quel est l'ordre de votre matrice? ";
        int n;
        saisie_entiere(n);
        n=stoi(entree);
        if(n==0)
            cout<<endl<<"C'est une matrice vide"<<endl;
        else
        {
            int A[10][10];
            cout<<endl<<"Remplissez votre matrice ligne par ligne"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    saisie_entiere(A[i][j]);
                    A[i][j]=stoi(entree);
                }
            }
            cout<<endl<<"Ainsi se presente votre matrice"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                     cout<<A[i][j]<<"\t";
                }
                     cout<<endl;
            }
            cout<<endl<<"Ainsi se presente sa transposee"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                     cout<<A[j][i]<<"\t";
                }
                     cout<<endl;
            }
            cout<<endl<<"Son determinant est: ";
           det_mat(A,n);

        }
        cout<<"Pressez 0 pour recommencer: ";
        char keep;
        cin>>keep;
        system("cls");
        if(keep=='0')
            continuer=true;
        else
            continuer=false;

    }

}
bool is_unique(string b)//permet de verifier lors de l'entrée si le code est unique, avant d'nregistrer l'etudiant
{
    ifstream verify;
    verify.open("verify.txt", ios::app);
    string line;
    while(getline(verify,line))
    {
        if(line == b)
        {
            return false;
        }
        else
        {
            true;
        }
    }
}
void add_student()//permet de rentrer les informations sur un etudiant
{
    string nom;
    string prenom;
    string adresse;
    string code;
     cout<<"......................................"<<endl;
     cout<<"Gestion d'informations sur un etudiant"<<endl;
     cout<<"......................................"<<endl<<endl;
    //string nom,prenom,adresse;
    cout<<"Entrer les informations d'un etudiant";
    ofstream fichier;
    ofstream verify;//un autre flux creer pour stocker les codes etudiants dans un fichier a part
    fichier.open("backup.txt",ios::app);
    verify.open("verify.txt", ios::app);
    char k = '0';
    while (int (k) == 48)
    {

            fflush(stdin);
            cout<<endl<<"Entrer le nom de l'etudiant: ";
            getline(cin,nom);

            cout<<endl<<"Entrer le prenom de l'etudiant: ";
            getline(cin,prenom);


            cout<<endl<<"Entrer l'adresse de l'etudiant: ";
            getline(cin,adresse);

            cout<<endl<<"Entrer le code de l'etudiant: ";
            getline(cin,code);

            if(fichier && verify)
            {
                /*fichier<<nom<<"\t"<<prenom<<"\t"<<adresse<<"\t"<<code;
                fichier<<endl;*/

                if (is_unique(code))
                {
                    fichier<<nom<<"\t"<<prenom<<"\t"<<adresse<<"\t"<<code;
                    fichier<<endl;
                    verify<<code;
                    verify<<endl;
                }
                else
                {
                    cout<<"echec d'eregistrement le code doit etre unique"<<endl;
                }
            }
            else
            {
                cout<<"le fichier n'est pas creer";
            }

        cout<<"appuyer sur 0 pour continuer: "<<endl;
        cin>>k;

    }

}
void display_data()//pour afficher et imprimer les informations des etudiants
{
    int data = 0;
    string line;
    char print;
    ifstream fichier;
    fichier.open("backup.txt",ios::in);
    while(getline(fichier,line))
    {
        data++;
    }
    fichier.close();
    fichier.open("backup.txt",ios::in);
    if(data>0)
    {
        while(getline(fichier,line))
        {
            cout<<line<<endl;
        }
        cout<<"Taper p pour imprimer le fichier"<<endl;
        cin>>print;
        if( int (print)==112 || int(print)==80)
        {
            string f=("notepad.exe/ p backup.txt");
            system(f.c_str());;//commande system utilisé pour imprimer un fichier
        }
    }
    else
    {
        cout<<"Le fichier texte est vide, relancez le progrmme et inscrivez des etudiants d'abord."<<endl;
    }
}
void class_data()//foction classement des etudiant par ordre alphabetique
{
    string line;
    int nb_line = 0;
    char print;
    ifstream fichier;
    int i = 0;
    fichier.open("backup.txt",ios::in);
    while(getline(fichier,line))//determinon la quantite de ligne qu'il y a dans le fichier
    {
        nb_line++;
    }
    fichier.close();
    if(nb_line>0)
    {
        fichier.open("backup.txt",ios::in);
        string backup[nb_line];
        while(getline(fichier,line))//stockons les valeur extrait du fichier dans un tableau
        {
            backup[i] = line;
            //si la premiere caractere du nom est minuscule changer lla en majuscule
            if(int (backup[i][0]) >97 && int (backup[i][0])<122)
            {
               backup[i][0]=char (int (backup[i][0])-32);
            }
            i++;
        }
        fichier.close();
        //trie du tableau par ordre alphabetique
        string temp;
        for (int p = 0; p<nb_line;p++)
        {
            for(int i = 0; i<nb_line-p;i++)
            {
                if(backup[i] > backup[i+1])
                {
                    temp=backup[i];
                    backup[i]=backup[i+1];
                    backup[i+1]=temp;
                }
            }
                //cout<<"m deyo";
        }


        for (int i = 0; i<= nb_line; i++)//stockons les valeur extrait du fichier dans un tableau
        {
            cout<<backup[i]<<endl;
        }


        cout<<"taper p pour imprimer le fichier"<<endl;
        cin>>print;
        if( int (print)==49)
        {
            fichier.open("backup.txt",ios::in);
            system("print backup.txt");//commande system utilisé pour imprimer un fichier
            fichier.close();
        }
    }
    else
    {
        cout<<"la base de donnee est vide, relancer le progrmme et inscrivez des etudiants d'abord"<<endl;
    }
}
void verif_date()//verifier qu'une date est valide.....done
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"......................................"<<endl;
        cout<<"Verification de la validite d'une date"<<endl;
        cout<<"......................................"<<endl<<endl;
         int jour, mois, annee;
    cout<<"Entrer le numero du jour: ";
   saisie_entiere(jour);
    jour=stoi(entree);
    cout<<"Entrer le numero du mois: ";
    saisie_entiere(mois);
    mois=stoi(entree);
    cout<<"Entrer le numero de l'annee: ";
    saisie_entiere(annee);
    annee=stoi(entree);
    if((((annee%4==0 && annee%100!=0)||(annee%400==0)) && mois==2 && jour<=29 &&jour>0 && mois<=12)||(mois<8 && mois%2!=0 && mois<=12&&mois>0 && jour<=31&&jour>0)||(mois>=8 && mois%2==0 && jour<=31 &&jour>0 && mois<=12) ||(mois<8&&mois>0 && mois%2==0 && mois!=2 && jour<=30&&jour>0) ||(mois==2 && jour<=28&&jour>0 && annee%2!=0) ||(mois>=8 && mois%2!=0 && jour<=30&&jour>0&& mois<12))
    {
       cout<<"Le "<<jour<<"/"<<mois<<"/"<<annee<<" est une date valide ";
    }
    else
    {
        cout<<"Le "<<jour<<"/"<<mois<<"/"<<annee<<" n'est pas une date valide"<<endl;
    }
     char keep;
    cout<<endl<<"Pressez 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
void duree() //done....
{
    bool continuer=true;
    while(continuer)
    {
        cout<<"...................................."<<endl;
        cout<<"Intervalle de temps entre deux dates"<<endl;
        cout<<"...................................."<<endl<<endl;
         int d1,d2,d3,a1,a2,a3,m1,m2,m3;
    cout<<"Entrez la premiere date"<<endl;
    cout<<"Entrez le numero de l'annee: ";
       saisie_entiere(a1);
       a1=stoi(entree);
    cout<<"Entrez le numero du mois: ";
        saisie_entiere(m1);
        m1=stoi(entree);
    cout<<"Entrez le jour: ";
       saisie_entiere(d1);
       d1=stoi(entree);
    cout<<endl;
    while(m1<=0 ||m1>12)
    {
        cout<<"Notre calendrier ne possede que 12 mois. veuillez ne pas entrer un nombre superieur a 12: ";
        saisie_entiere(m1);
        m1=stoi(entree);
    }
    while((m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)&&d1>31)//conditions pour les mois portant 31 jours.
    {
        cout<<"Ce mois ne peut en aucun cas contenir plus de 31 jours, ressayez: ";
        saisie_entiere(d1);
        d1=stoi(entree);
    }
    while((m1==4||m1==6||m1==9||m1==11)&&d1>30)//conditions pour les mois portant 30 jours.
    {
        cout<<"Ce mois ne peut en aucun cas contenir plus de 30 jours, ressayez: ";
       saisie_entiere(d1);
       d1=stoi(entree);
    }
    while((m1==2&&((a1%4==0&&a1%100!=0)||a1%400==0))&&d1>29)//conditions pour les annes bissextiles avec le mois de fevrier.
    {
       cout<<"Ce mois ne peut en aucun cas contenir plus de 29 jours, ressayez: ";
       saisie_entiere(d1);
        d1=stoi(entree);
    }
    while(m1==2&&((a1%4!=0||a1%400!=0))&&d1>28)//conditions pour les annees non bissextiles avec le mois de fevrier.
    {
       cout<<"Ce mois ne peut en aucun cas contenir plus de 28 jours, ressayez: ";
       saisie_entiere(d1);
        d1=stoi(entree);
    }
     cout<<"Entrez la deuxieme date"<<endl;
    cout<<"Entrez le numero de l'annee: ";
       saisie_entiere(a2);
       a2=stoi(entree);
    cout<<"Entrez le numero du mois: ";
        saisie_entiere(m2);
        m2=stoi(entree);
    cout<<"Entrez le jour: ";
       saisie_entiere(d2);
       d2=stoi(entree);
    cout<<endl;
    while(m2<=0 ||m2>12)
    {
        cout<<"Notre calendrier ne possede que 12 mois. veuillez ne pas entrer un nombre superieur a 12: ";
        saisie_entiere(m2);
        m2=stoi(entree);
    }
    while((m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)&&d2>31)//conditions pour les mois portant 31 jours.
    {
        cout<<"Ce mois ne peut en aucun cas contenir plus de 31 jours, ressayez: ";
        saisie_entiere(d2);
        d2=stoi(entree);
    }
    while((m2==4||m2==6||m2==9||m2==11)&&d2>30)//conditions pour les mois portant 30 jours.
    {
        cout<<"Ce mois ne peut en aucun cas contenir plus de 30 jours, ressayez: ";
       saisie_entiere(d2);
       d2=stoi(entree);
    }
    while((m2==2&&((a2%4==0&&a2%100!=0)||a2%400==0))&&d2>29)//conditions pour les annes bissextiles avec le mois de fevrier.
    {
       cout<<"Ce mois ne peut en aucun cas contenir plus de 29 jours, ressayez: ";
       saisie_entiere(d2);
        d2=stoi(entree);
    }
    while(m2==2&&((a2%4!=0||a2%400!=0))&&d2>28)//conditions pour les annees non bissextiles avec le mois de fevrier.
    {
       cout<<"Ce mois ne peut en aucun cas contenir plus de 28 jours, ressayez: ";
       saisie_entiere(d2);
        d2=stoi(entree);
    }
      if(m2>=m1)
    {
        a3=a2-a1;
         if(d2>=d1)
         m3=m2-m1;
        if(d2<d1)
         m3=m2-m1-1;
    }

    else
    {
       a3=a2-a1-1;
       if(d2>=d1)
            m3=12-m1+m2;
        if(d2<d1)
            m3=12-m1+m2-1;
    }

    if(d2<d1)
    {
        if(m2-1==1 ||m2-1==3 ||m2-1==5 ||m2-1==7 ||m2-1==8 ||m2-1==10||m2-1==12)
            d3=31-d1+d2;
        if(m2-1==2 || m2-1==4 ||m2-1==6 || m2-1==9 ||m2-1==11)
            d3=30-d1+d2;
        if(d2==2)
        {
            if ((m1==2&&((a1%4==0&&a1%100!=0)||a1%400==0))&&d1>29)
                d3=30-d1+d2;
            if(m1==2&&((a1%4!=0||a1%400!=0))&&d1>28)
                d3=28-d1+d2;
        }
    }
    if (d2>=d1)
        d3=d2-d1;
    cout<<"Entre ces deux dates il y a ";
    if(a3==1)
        cout<<a3<<" annee ";
    else if(a3!=0)
        cout<<a3<<" annees ";
    if(m3!=0)
        cout<<m3<<" mois ";
     if(d3==1)
        cout<<d3<<" jour ";
    else if(d3!=0)
        cout<<d3<<" jours ";
    cout<<endl<<endl;
    char keep;
    cout<<"Pressez 0 pour recommencer: ";
    cin>>keep;
    system("cls");
    if(keep=='0')
        continuer=true;
    else
        continuer=false;
    }
}
int main()
{
    accueil();//Afficher le menu
    cout<<"Faites votre choix: ";
    int choice1;
    saisie_entiere(choice1);
    choice1=std::stoi(entree);
    while(choice1>4)
    {
        cout<<"Saisie incorrecte: ";
        saisie_entiere(choice1);
        choice1=std::stoi(entree);
    }
    system ("cls");
    choix1(choice1);

    int choice2;
    cout<<"Votre choix: ";
    saisie_entiere(choice2);
    choice2=stoi(entree);
    switch(choice1)
    {
        case 1:
            while(choice2>3)
            {
                cout<<"Saisie incorrecte: ";
                saisie_entiere(choice1);
                choice2=std::stoi(entree);
            }
        break;
        case 2:
            while(choice2>4)
            {
                cout<<"Saisie incorrecte: ";
                saisie_entiere(choice1);
                choice2=std::stoi(entree);
            }
        break;
        case 3:
            while(choice2>3)
            {
                cout<<"Saisie incorrecte: ";
                saisie_entiere(choice1);
                choice2=std::stoi(entree);
            }
        break;
        case 4:
            while(choice2>4)
            {
                cout<<"Saisie incorrecte: ";
                saisie_entiere(choice1);
                choice2=std::stoi(entree);
            }
        break;
    }
    system ("cls");
     if (choice1==1 && choice2==1)
        decimal();
     if (choice1==1 && choice2==2)
        binaire();
     if (choice1==1 && choice2==3)
        hexadecimal();
     if(choice1==2 )
     {
        if(choice2==1)
        carre_magique();
        if (choice2==2)
        prod_mat();
        if (choice2==3)
        syst_equ();
        if (choice2==4)
        trans_det_matrice();
     }
     if (choice1==3)
     {   if(choice2==1)
        add_student();
        if ( choice2==2)
        display_data();
        if ( choice2==3)
       class_data();
     }
    if (choice1==4)
     {
        if ( choice2==1)
        verif_date();
        if(choice2==2)
        duree();
     }
       int choice3;
    if (choice1==1)
    {
         cout<<"Votre choix: ";
    saisie_entiere(choice3);
    choice3=std::stoi(entree);
    while(choice3>3)
    {
        cout<<"Saisie incorrecte: ";
        saisie_entiere(choice3);
        choice3=std::stoi(entree);
    }
    }


    float nbr;
   if (choice1==1 && choice2==1)
            {
                system("cls");
            if (choice3==1)
                dec_to_bin(nbr);
            if (choice3==2)
                dec_to_oct(nbr);
            if (choice3==3)
                dec_to_hex(nbr);
            }

         if (choice1==1 && choice2==2)
            {
                system("cls");
            if (choice3==1)
                bin_to_dec(nbr);
            if (choice3==2)
                bin_to_oct(nbr);
            if (choice3==3)
                bin_to_hex(nbr);
            }
            string nb;
    if (choice1==1 && choice2==3)
            {
                system("cls");
            if (choice3==1)
                hex_to_oct();
            if (choice3==2)
                hex_to_bin();
            if (choice3==3)
                hex_to_dec();
            }
    main();
return 0;
}

