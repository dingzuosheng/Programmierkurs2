#ifndef _MATRIX_H_
#define _MATRIX_H_ 
#include <iostream>

template<class T>
class Matrix{
    private:
        int n;
        T** m;
    public: // sobald Matrix benutzt wird, sollte dort template angewendet werden
        Matrix(int n);
        Matrix(const Matrix<T>& orig); 
        ~Matrix();  
        void set(int zeile, int spalte, T z);
        Matrix<T> operator*(const Matrix<T>& m);
        inline T* operator[](int index) const{
            if(index < 0 || index > m.getDimension()){
                return nullptr;
            }
            return m[i];
        }
        inline T* getZeile(int n) const{
            if(index < 0 || index > m.getDimension()){
                return nullptr;
            }
            return m[i];
        }
        inline T getElement(int x, int y) const{
            return m[x][y];
        }
        inline int getDimension() const{
            return n;
        }
};
template<class T>
Matrix<T>::Matrix(int n):n{n}{ // die Dimension sollte hier mal gespeichert werden
    m= new T*[n]; //2-Dimension-Array    
    for(int i = 0; i < n; i++){
        m[i] = new T[n];//1-Dimension-Array
    }
}
template<class T>
Matrix<T>::Matrix(const Matrix<T>& orig):Matrix(orig.getDimension()){
    //Matrix<T>::Matrix(n);
    //1. ein Matrix deklarieren 
    //2. Werte zuweisen
    for(int i = 0;i < n; i++){ 
        for(int j = 0; j < n; j++){
            set(i,j,orig.getElement(i,j)); 
        }
    }
}
template<class T>
Matrix<T>::~Matrix(){
    std::cout << " Destruktor " << std::endl;
    for(int i = 0; i < getDimension(); i++){
        delete[] m[i];
    }
    delete[] m; // m ist auch ein Array
    std::cout << " Destruktor " << std::endl;
}
template<class T>
std::ostream& operator<<(std::ostream& ausgabe ,const Matrix<T>& m){ // globale Operation, darf nicht in einer Klasse implementiert werden.
    int n = m.getDimension();
    ausgabe << " ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           ausgabe << m.getElement(i,j) << " ";
        }
        ausgabe << std::endl;
    }
    return ausgabe;
}
template<class T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& m){
        int n = m.getDimension();
        Matrix<T> neu(n);
        T result;
        for(int i = 0;i < n; i++){//this->zeile
            for(int j = 0;j < n;j++){//this->spalte/m1->spalte
                result = 0;
                for(int x = 0;x < n; x++){//m1->zeile
                    result += getElement(i,x)*m.getElement(x,j);
                }
                neu.set(i,j,result);
            }
        }
        return neu;
}
template<class T>
Matrix<T> operator*(const Matrix<T>& l, const Matrix<T>& r){
    int n = l.getDimension();
    Matrix<T> neu(n);
    if(l.getDimension() != r.getDimension()){
        std::cout << "Diese zwei Matrixen sind nicht gleiche Dimension" << std::endl;
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int result = 0;
                for(int x = 0; x < n; x++){
                    result += l.getElement(i,x)*r.getElement(x,j);
                }
                neu.set(i,j,result);
            }
        }
    }
    return neu;
}
template<class T>
void Matrix<T>::set(int x,int y, T z){
    m[x][y] = z;
}

#endif