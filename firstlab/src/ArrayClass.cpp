#include "ArrayClass.h"
#include <stdio.h>

ArrayClass::ArrayClass(int newSizeN, int newSizeM, int **newArray)
{
    this->sizeN = newSizeN;
    this->sizeM = newSizeM;
    //TODO exception
    this->myArray = getMemory();
    for (int i=0;i<newSizeN;i++){
        for (int j=0;j<newSizeM;j++){
            if (newArray != nullptr){
                this->myArray[i][j] = newArray[i][j];
            }else{
                this->myArray[i][j] = 0;
            }
        }
    }
}

ArrayClass::~ArrayClass()
{
    for (int i=0;i<this->sizeN;i++){
        delete [] this->myArray[i];
    }
    delete []this->myArray;
}

int **ArrayClass::getMemory()
{
    int **newArray = new int*[this->sizeN];
    for (int i=0;i<this->sizeN;i++){
        newArray[i] = new int[this->sizeM];
    }
    return newArray;
}

void ArrayClass::output()
{
    for (int i=0;i<this->sizeN;i++){
        for (int j=0;j<this->sizeM;j++){
            printf("%3d",this->myArray[i][j]);
        }
        printf("\n");
    }
}

void ArrayClass::input()
{
    printf("Input size for your matrix\n");
    do{
        printf("Please input integer value\n");
        fflush(stdin);
    }while (!scanf("%d %d",&this->sizeN,&this->sizeM));
    for (int i=0;i<this->sizeN;i++){
        for (int j=0;j<this->sizeM;j++){
            do{
                printf("Input array[%d][%d]:",i+1,j+1);
            }while(!scanf("%d",&this->myArray[i][j]));
        }
    }
}

int ArrayClass::getElementOfMatrix(int fieldN, int fieldM)
{
    return this->myArray[fieldN][fieldM];
}

void ArrayClass::setElementOfMatrix(int fieldN, int fieldM, int newValue)
{
    this->myArray[fieldN][fieldM] = newValue;
}

int ArrayClass::getSizeN()
{
    return this->sizeN;
}

int ArrayClass::getSizeM()
{
    return this->sizeN;
}

ArrayClass *ArrayClass::summMatrix(ArrayClass *addingMatrix)
{
    //TODO exception
    ArrayClass *newArrayClass =new ArrayClass(this->sizeN, this->sizeM, this->myArray);
    for (int i=0;i<this->sizeN;i++){
        for (int j=0;j<this->sizeM;j++){
            newArrayClass->setElementOfMatrix(i,j,this->myArray[i][j]+addingMatrix->getElementOfMatrix(i,j));
        }
    }
    return newArrayClass;
}

ArrayClass *ArrayClass::multiplyMatrix(ArrayClass *multiMatrix)
{
    //TODO exception
    ArrayClass *newArrayClass =new ArrayClass(this->sizeN, multiMatrix->getSizeM());
    for (int i=0;i<this->sizeN;i++){
        for (int j=0;j<multiMatrix->getSizeM();j++){
            int multiplyValue = 0;
            for (int k=0;k<this->sizeM;j++){
                multiplyValue += this->getElementOfMatrix(i,k)+multiMatrix->getElementOfMatrix(k,j);
            }
            newArrayClass->setElementOfMatrix(i,j,multiplyValue);
        }
    }
    return newArrayClass;
}




