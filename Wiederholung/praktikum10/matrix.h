#ifndef MATRIX_H_
#define MATRIX_H_
#include <iostream>

template<class T>
class Matrix{
    private:
        int n;
        T** m;

    public:
        Matrix(int n);
        Matrix(const Matrix& orig);
        ~Matrix();
        void set(int zeile,int spalte,T zahl);
        inline T getElement(int x,int y) const{
            return m[x][y];
        }
        inline int getDimension() const{
            return n;
        }
        T* operator[](int zeile) const{
            if(zeile < 0 || zeile > this->getDimension()){
                return nullptr;
            }
            return m[zeile];
        }
        T* getZeile(int index) const{
            if(index < 0 || index > this->getDimension()){
                return nullptr;
            }
            return m[index];
        }
        //friend Matrix<T> operator*(const Matrix& l, const Matrix& r);
        //friend std::ostream& operator<<(std::ostream& ausgabe, const Matrix& m);
};

template<class T>
Matrix<T>::Matrix(int n): n{n}{
    int i = 0;
    m = new int*[n];
    while(i < n){
        m[i] = new int[n];
        i++;
    }
}
template<class T>
Matrix<T>::Matrix(const Matrix<T>& orig):Matrix{orig.getDimension()}{
    int n = orig.n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            set(i,j,orig.getElement(i,j));
        }
    }
}
template<class T>
Matrix<T>::~Matrix(){
    std::cout << "Destructor" << std::endl;
    for(int i = 0; i < getDimension(); i++){
        delete[] m[i];
    }
    delete m;
}
template<class T>
std::ostream& operator<<(std::ostream& ausgabe, const Matrix<T>& m){
    int n = m.getDimension();
    ausgabe << "";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ausgabe << m.getElement(i,j) << " ";
        }
        ausgabe << "\n";
    }
    return ausgabe;
}
template<class T>
void Matrix<T>::set(int i, int j, T zahl){
    m[i][j] = zahl;
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
#endif