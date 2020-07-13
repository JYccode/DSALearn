#ifndef _VECTOR_BRACKET_H
#define _VECTOR_BRACKET_H

template<typename T>
T& Vector<T>::operator[]( Rank r){
    return _elem[r];
}
/*template<typename T>
const T& Vector<T>::operator[]( Rank r)const{
    return _elem[r];

}
*/

#endif