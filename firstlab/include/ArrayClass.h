#ifndef ARRAYCLASS_H
#define ARRAYCLASS_H


class ArrayClass
{
    public:
        ArrayClass(int newSizeN = 3, int newSizeM = 3, int **newArray = nullptr);
        virtual ~ArrayClass();
        void input();
        void output();
        ArrayClass *summMatrix(ArrayClass *firstMatrix);
        ArrayClass *multiplyMatrix(ArrayClass *firstMatrix);
        ArrayClass (){};
        int getElementOfMatrix(int fieldN,int fieldM);
        void setElementOfMatrix(int fieldN,int fieldM, int newValue);

        int getSizeN();
        int getSizeM();

    protected:

    private:
        int sizeN;
        int sizeM;
        int **myArray;
        int **getMemory();
};

#endif // ARRAYCLASS_H
