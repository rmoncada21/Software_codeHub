/*
10. Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : 
Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 
and Total in all three subject >=190 
or Total in Maths and Physics >=140 
------------------------------------- 
*/

#include <stdio.h>

void criteria_admission(int, int, int);

int main(){
    int math, phy, chem;
    scanf("%d %d %d", &math, &phy, &chem);

    criteria_admission(math, phy, chem);
}

void criteria_admission(int math, int phy, int chem){
    int total = math + phy + chem;
    int math_plus_phy = math + phy;
    if(math>=65 && phy>=55 && chem>=50){
        if(total>=190 || math_plus_phy>=140){
            printf("Admitido \n");
        } else {
            printf("Selección de elegible  \n");
        }
    } else {
        printf("No cumple con los requisitos  \n");
    }
}