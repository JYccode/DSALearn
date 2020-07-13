#ifndef _VECTOR_ASSIGMENT_H
#define _VECTOR_ASSIGMENT_H

template<typename T> 
 Vector<T>& Vector<T>::operator=(Vector<T>const& V){
    if( _elem ) delete [] _elem;
    copyfrom(V._elem, 0, V._size);
    return *this;
};

#endif