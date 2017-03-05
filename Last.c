#include <stdio.h>
#include <stdlib.h>

void insialisation(int *board[8][8]){
    int i,j;
   for(i=0;i<8;i++){
     for(j=0;j<8;j++){

    board[i][j]=0;
board[6][j]=1;
board[1][j]=-1;
   }
   }
   board[7][0]=4;
   board[7][1]=2;
   board[7][2]=3;
   board[7][3]=6;
   board[7][4]=5;
   board[7][5]=3;
   board[7][6]=2;
   board[7][7]=4;

 board[0][0]=-4;
   board[0][1]=-2;
   board[0][2]=-3;
   board[0][3]=-6;
   board[0][4]=-5;
   board[0][5]=-3;
   board[0][6]=-2;
   board[0][7]=-4;

}
void afficherboard(int board[8][8]){
    int i,j;
 printf("\n    0  1  2  3  4  5  6  7\n\n");
 for(i=0;i<8;i++){
        printf("%d   ",i);
     for(j=0;j<8;j++){
    switch(board[i][j]){//conversion des nombres par des carac
    case 0:
        printf(".  ");
        break;
    case 1:
        printf("Pn ");
        break;
    case 2:
        printf("Cn ");
        break;
    case 3:
        printf("Fn ");
        break;
    case 4:
        printf("Tn ");
        break;
        case 5:
            printf("rn ");
            break;
        case 6:
            printf("Rn ");
            break;
    case -1:
        printf("Pb ");
        break;
case -2:
    printf("Cb ");
        break;
case -3:
    printf("Fb ");
    break;
case -4:
    printf("Tb ");
    break;
case -5:
    printf("rb ");
    break;
case -6:
    printf("Rb ");
    break;
        }
   }
   printf("\n\n");
   }

}
void entrerlescoor(int *x1,int *y1,int *x2,int *y2){
      printf("\n entrer une commande: \n>");
  scanf("%d,%d-%d,%d",y1,x1,y2,x2);
 // printf("%d,%d,%d,%d",x1,y1,x2,y2);
}
int verifcoor(int x1,int y1,int x2,int y2){
if(x1>=0 && y1>=0 && x1<=7 && y1<=7 && x2>=0 && y2>=0 && x2<=7 && y2<=7 && (x1!=x2 || y1!=y2)){
    return 1;
}
else{
    return 0;
}
}
int verifdiagohd(int board[8][8],int x1,int y1,int x2,int y2){

      int k=1; int i=1;
      while(k==1 && !(x1-i==x2 && y1+i==y2)){

            if(board[x1-i][y1+i]==0){
                i++;

            }
            else{
                k=0;

            }
            }
            if (k==1){
    return 1;
    }
    else{
        return 0;
    }

}
int verifdiagohg(int board[8][8],int x1,int y1,int x2,int y2){

      int k=1; int i=1;
      while(k==1 && !(x1-i==x2 && y1-i==y2)){

            if(board[x1-i][y1-i]==0){
                i++;

            }
            else{
                k=0;

            }
            }
            if (k==1){
    return 1;
    }
    else{
        return 0;
    }

}
int verifdiagobd(int board[8][8],int x1,int y1,int x2,int y2){

      int k=1; int i=1;
      while(k==1 && !(x1+i==x2 && y1+i==y2)){

            if(board[x1+i][y1+i]==0){
                i++;

            }
            else{
                k=0;

            }
            }
            if (k==1){
    return 1;
    }
    else{
        return 0;
    }

}
int verifdiagobg(int board[8][8],int x1,int y1,int x2,int y2){

      int k=1; int i=1;
      while(k==1 && !(x1+i==x2 && y1-i==y2)){

            if(board[x1+i][y1-i]==0){
                i++;

            }
            else{
                k=0;

            }
            }
            if (k==1){
    return 1;
    }
    else{
        return 0;
    }

}
int VerifDiago(int board[8][8],int x1,int y1,int x2,int y2){
if(verifdiagohd(board,x1,y1,x2,y2)|| verifdiagohg(board,x1,y1,x2,y2) ||verifdiagobd(board,x1,y1,x2,y2)||verifdiagobg(board,x1,y1,x2,y2) ){
    return 1;
}
else{
    return 0;
}
}
int veriflineh(int board[8][8],int x1,int y1,int x2,int y2){
    int k=1;int i=1;
    while(k==1 && !(x1+i==x2)){
        if(board[x1+i][y1]==0 ){
            i++;
        }
        else{
            k=0;
        }
    }
    if(k==1){
       return 1;
       }
    else{
        return 0;
    }

}
int veriflineb(int board[8][8],int x1,int y1,int x2,int y2){
    int k=1;int i=1;
    while(k==1 && !(x1-i==x2)){
        if(board[x1-i][y1]==0 ){
            i++;
        }
        else{
            k=0;
        }
    }
    if(k==1){
       return 1;
       }
    else{
        return 0;
    }

}
int veriflineg(int board[8][8],int x1,int y1,int x2,int y2){
    int k=1;int i=1;
    while(k==1 && !(y1+i==y2)){
        if(board[x1][y1+i]==0 ){
            i++;
        }
        else{
            k=0;
        }
    }
    if(k==1){
       return 1;
       }
    else{
        return 0;
    }

}
int veriflined(int board[8][8],int x1,int y1,int x2,int y2){
    int k=1;int i=1;
    while(k==1 && !(y1-i==y2)){
        if(board[x1][y1-i]==0 ){
            i++;
        }
        else{
            k=0;
        }
    }
    if(k==1){
       return 1;
       }
    else{
        return 0;
    }

}
int VerifLine(int board[8][8],int x1,int y1,int x2,int y2){
if(veriflineh(board,x1,y1,x2,y2)||veriflineb(board,x1,y1,x2,y2)||veriflined(board,x1,y1,x2,y2)||veriflineg(board,x1,y1,x2,y2)) return 1;
else return 0;
}
int main()
{
   int board[8][8];
   int x1,y1,x2,y2,w=1,tour=0,k,i,pro,r,j;
   char nomparti[10];
insialisation(&board);
while(w==1){
   afficherboard(board);
   if(tour==0){//determiner le tour
    printf("\n*********  Joueur 1 (NOIRE) **********");
}
else{
    printf("\n********** Joueur 2 (BLANC)**********");
}

entrerlescoor(&x1,&y1,&x2,&y2);//entrer les coordonnee



if(verifcoor(x1,y1,x2,y2)){ //verification des coordonnees

if(tour==0 && board[x1][y1]>0){//************************NOIRE

//*************************** PION NOIRE
if(board[x1][y1]==1){ //pion Noire

if(y2==y1){//le meme colone

    if(board[x2][y2]==0 && (x2==x1-1 || (x2==x1-2 && x1==6))){
            board[x1][y1]=0;
            if(x2!=0){
    board[x2][y2]=1;
}
else{
    printf("Promotion du pion: (2:Cavalier-3:fou-4:tour-5:reine):");
    scanf("%d",&pro);
    board[x2][y2]=pro;
}
tour=1;
}
else if (board[x2][y2]!=0){
    printf("ce deplacement est impossible (une piece est devant le pion)");
}
else{
    printf("Ce deplacement est impossible");
}
}
else if((y2==y1-1 || y2==y1+1)&& board[x2][y2]<0){
            board[x1][y1]=0;
            if(x2!=0){
    board[x2][y2]=1;
}
else{
    printf("Promotion du pion: (2:Cavalier-3:fou-4:tour-5:reine):");
    scanf("%d",&pro);
    board[x2][y2]=pro;
}
tour=1;

}

else{
    printf("ce deplacement est impossible\n");
}


}//fin Pion

//*************************** Cavalier
else if(board[x1][y1]==2){//cavalier Noire
if(((x2==x1+1 && y2==y1-2)||(x2==x1+2 && y2==y1-1)||(x2==x1+2 && y2==y1+1)||(x2==x1+1 && y2==y1+2)||(x2==x1-1 && y2==y1-2)||(x2==x1-2 && y2==y1-1)||(x2==x1-2 && y2==y1+1)||(x2==x1-1&&y2==y1+2)) && board[x2][y2]<=0){
    board[x1][y1]=0;
    board[x2][y2]=2;
    tour=1;
}
else{
    printf("ce deplacement est impossible");
}
}

//******************* Le fou (Bichop)
else if (board[x1][y1]==3){//Le fou
if(x1-x2==y1-y2  || x2-x1==y1-y2||y2-y1==x1-x2  && board[x2][y2]<=0){//la destination est dans les diagonal du fou
if(VerifDiago(board,x1,y1,x2,y2)){//une piece est dans le chemain du fou
    board[x1][y1]=0;
    board[x2][y2]=3;
    tour=1;
}
    else{
        printf("erreur deplacement ");
    }

}
else{
    printf("ce deplacement est impossible");
}



}
//*****************TOUR
else if(board[x1][y1]==4){//tour
    if(y1==y2 || x1==x2 && board[x2][y2]<=0){
        if(VerifLine(board,x1,y1,x2,y2)){
            board[x1][y1]=0;
            board[x2][y2]=4;
            tour=1;
        }
        else{
            printf("ce deplacement est impossible ");
        }
    }
    else{
        printf("erreur deplcement ( nest pas dans la line)");
    }
}
//***************** La reine
else if(board[x1][y1]==5){//La REINE Noire
    if( x1-x2==y1-y2  || x2-x1==y1-y2 || y2-y1==x1-x2 &&  board[x2][y2]<=0){
        if( VerifDiago(board,x1,y1,x2,y2)){
           board[x1][y1]=0;
            board[x2][y2]=5;
            tour=1;
        }
        else{ printf("Ce de placement est impossible");}
    }
    else if(y1==y2 || x1==x2 && board[x2][y2]<=0 ){
            if(VerifLine(board,x1,y1,x2,y2)){
                board[x1][y1]=0;
                board[x2][y2]=5;
                tour=1;
            }
            }
    else {printf("Erreur deplacement ");}
}
//******************* Le Roi
else if(board[x1][y1]==6){//Le Roi Noire

   if(((y2==y1+1 || y2==y1-1)&&(x2==x1+1 ||x2==x1-1 ||x1==x2) || (x2==x1+1 ||x2==x1-1)&&(y2==y1)) && board[x2][y2]<=0){
        board[x1][y1]=0;
        board[x2][y2]=6;
tour=1;

    }
    else{printf("Ce deplacement est impossible");}
}





}//fin verification tour et case NOIRE

else if (tour==1 && board[x1][y1]<0){//******************** BLANC
//*************************** PION BLANC
if(board[x1][y1]==-1){ //pion Blanc

if(y2==y1){//le meme colone

    if(board[x2][y2]==0 && (x2==x1+1 || (x2==x1+2 && x1==1))){
            board[x1][y1]=0;
            if(x2!=7){
    board[x2][y2]=-1;
    }
else{
    printf("Promotion du pion: (2:Cavalier-3:fou-4:tour-5:reine):");
    scanf("%d",&pro);
    board[x2][y2]=-pro;
}
tour=0;
}
else if (board[x2][y2]!=0){
    printf("ce deplacement est impossible (une piece est devant le pion)");
}
else if(x2==x1+2 && x1!=1){
    printf("ce deplacement est impossible");
}
else{
    printf("Ce deplacement est impossible");
}

}
else if((y2==y1-1 || y2==y1+1)&& board[x2][y2]>0){
 if(x2!=7){
    board[x2][y2]=-1;
    }
else{
    printf("Promotion du pion: (2:Cavalier-3:fou-4:tour-5:reine):");
    scanf("%d",&pro);
    board[x2][y2]=-pro;
}
tour=0;
}
else{
    printf("ce deplacement est impossible\n");
}


}//fin Pion blanc
//***************Chevalier Blanc
else if(board[x1][y1]==-2){//chevalierblanc
if(((x2==x1+1 && y2==y1-2)||(x2==x1+2 && y2==y1-1)||(x2==x1+2 && y2==y1+1)||(x2==x1+1 && y2==y1+2)||(x2==x1-1 && y2==y1-2)||(x2==x1-2 && y2==y1-1)||(x2==x1-2 && y2==y1+1)||(x2==x1-1&&y2==y1+2)) && board[x2][y2]>=0){
    board[x1][y1]=0;
    board[x2][y2]=-2;
    tour=0;
}
else{
    printf("ce deplacement est impossible");
}
}
else if (board[x1][y1]==-3){//Le fou Blanc
if(x1-x2==y1-y2  || x2-x1==y1-y2||y2-y1==x1-x2  && board[x2][y2]>=0){//la destination est dans les diagonal du fou
if(VerifDiago(board,x1,y1,x2,y2)){//une piece est dans le chemain du fou
    board[x1][y1]=0;
    board[x2][y2]=-3;
    tour=0;
}
    else{
        printf("erreur deplacement ");
    }

}
else{
    printf("ce deplacement est impossible");
}
}
//*****************TOUR
else if(board[x1][y1]==-4){//tour
    if(y1==y2 || x1==x2 && board[x2][y2]>=0){
        if(VerifLine(board,x1,y1,x2,y2)){
            board[x1][y1]=0;
            board[x2][y2]=-4;
            tour=0;
        }
        else{
            printf("ce deplacement est impossible ");
        }
    }
    else{
        printf("erreur deplcement ( nest pas dans la line)");
    }
}
//***************** La reine
else if(board[x1][y1]==-5){//La REINE Blanc
    if( x1-x2==y1-y2  || x2-x1==y1-y2 || y2-y1==x1-x2 &&  board[x2][y2]>=0){
        if( VerifDiago(board,x1,y1,x2,y2)){
           board[x1][y1]=0;
            board[x2][y2]=-5;
            tour=0;
        }
        else{ printf("Ce de placement est impossible");}
    }
    else if(y1==y2 || x1==x2 && board[x2][y2]>=0 ){
            if(VerifLine(board,x1,y1,x2,y2)){
                board[x1][y1]=0;
                board[x2][y2]=-5;
                tour=0;
            }
            }
    else {printf("Erreur deplacement ");}
}
else if(board[x1][y1]==-6){//Le Roi Blanc

   if(((y2==y1+1 || y2==y1-1)&&(x2==x1+1 ||x2==x1-1 ||x1==x2) || (x2==x1+1 ||x2==x1-1)&&(y2==y1)) && board[x2][y2]>=0){
        board[x1][y1]=0;
        board[x2][y2]=-6;
tour=0;

    }
    else{printf("Ce deplacement est impossible");}
}


}//FIN BLANC


else if(tour==0 && board[x1][y1]<0){//erreur bon choisire la couleur pour le noire
    printf("vous avez choisie une pièce Blanc (votre couleur est Noire) ");
}
else if(tour==1 && board[x1][y1]>0){//erreur bon choisire la couleur pour le blanc
    printf("vous avez choisie une piece Noire (votre couleur est Blanc)");
}
else if (board[x1][y1]==0){//case vide
    printf("la case est vide(pas de piece dans la case que vous avez choisie)\n");
}


}//Fin verification des cood

else if(y1==8){//********MENUE
    printf("*********Menue***********\n");
    printf("1-Continuer la partie\n");
    printf("2-Nouvelle partie\n");
    printf("3-sauvegarder partie\n");
    printf("4-ouvrir partie\n");
    printf("5-sortir\n>");
    scanf("%d",&r);
  switch(r){//menue core
  case 1:
      break;
  case 2:
      insialisation(&board);
      break;
  case 3://sauvgard
      printf("entrer le nom du partie >");
scanf("%s",nomparti);
FILE *p=fopen(nomparti,"w");
    for(i=0;i<8;i++){
            for(j=0;j<8;j++){
   fprintf(p,"%d ",board[i][j]);
    }
    }
    fprintf(p,"%d",tour);

fclose(p);

printf("sauvegarde!");


      break;
  case 4:
      printf("entrer le nom du partie >");
      scanf("%s",nomparti);
      FILE *k=fopen(nomparti,"r");
      if(k!=NULL){
         for(i=0;i<8;i++){
            for(j=0;j<8;j++){
   fscanf(k,"%d ",&board[i][j]);
    }
         }
    fscanf(k,"%d",&tour);
    fclose(k);
    }
    else {
        printf("Cette partie nexist pas!");
    }
      break;

  case 5:
      w=0;
      break;

      default:
      printf("erreur!");
break;

  }


}
else{//erreur dans les coordonees hors plataux ou la meme place
    printf("erreur coordonnées(hors plataux ou vous avez entre les même cordonnées)\n");
}

}//Fin while

}//Fin maine


