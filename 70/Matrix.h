#ifndef Vector_H
#define Vector_H
template <typename T>
class Vector
{
    protected:
    T ** mat;
    int n; 
    int m;
    public:
    Vector(int row, int column);
    Vector();
    ~Vector();
    Vector(const Vector<T>&);
    Vector& operator=(const Vector<T>&);
    public:
    T* operator[](int i);
    int retn();
    int retm();
    virtual void Init();
    virtual void Print();
};
template <typename T>
Vector<T>::Vector()
{
    mat = nullptr;
    n = 0;
    m = 0;
}
template <typename T>
Vector<T>::Vector(int row, int column)
{
        n = row;
        m = column;
        mat = new T*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new T[m];
        }
}
template <typename T>
Vector<T>::~Vector()
{
        
        for(int i = 0; i < n; i++)
        {
            delete [] mat[i];
        }
        delete [] mat;
}
template <typename T>
Vector<T>::Vector(const Vector& oth)
{
    this -> n = oth.n;
    this -> m = oth.m;
    mat = new T*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new T[m];
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = oth.mat[i][j];
            }
        }
}
template <typename T>
Vector<T>& Vector<T>::operator=(const Vector& oth)
{
     if(this==&oth)
    {
            return *this;
    }
        for(int i = 0; i < n; i++)
        {
            delete [] this->mat[i];
        }
        delete [] mat;
        n = oth.n;
        m = oth.m;
        mat = new T*[n];
        for(int i = 0; i < n; i++)
        {
            mat[i] = new T[m];
            for(int j = 0; j < m; j++)
            {
                mat[i][j] = oth.mat[i][j];
            }
        }
    return *this;
}
template <typename T>
void Vector<T>::Print()
{
    std::cout << "<<<   Print Vector   >>>\n" << std::endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
                std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
template <typename T>
T* Vector<T>::operator [](int i)
{
    return mat[i];
}
template <typename T>
int Vector<T>::retn()
{
    return this->n;
}
template <typename T>
int Vector<T>::retm()
{
    return this->m;
}
template <typename T>
void Vector<T>::Init()
{
    std::cout << "<<< Init Vector >>>" << std::endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            mat[i][j] = i+j;
        }
    }
}

#endif