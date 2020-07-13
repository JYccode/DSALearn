#ifndef _VECTOR_INSERT_H
#define _VECTOR_INSERT_H

template<typename T>
Rank Vector<T>::insert(Rank r,T const& e){
    expend();
    for(int i = _size; i > r; i++){
        _elem[i] = _elem[i-1];
    }
    _elem[r] = e;
    _size++;
    return r;
    
}
template<typename T>
Rank Vector<T>::insert(T const& e){
    return insert(_size, e );

}


#endif