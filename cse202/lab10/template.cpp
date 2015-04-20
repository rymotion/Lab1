template<typename T>

Mlist<T>::Mlist(){

}
T Mlist<T>::front(){
    return mlist[0];
}
T Mlist<T>::end(){
    return *(--mlist.end());
}
bool Mlist<T>::in(T x){
    while (/* condition */) {
        /* code */
        if (/* condition */) {
            return true;
        }
        else {
            return false;
        }
    }
}
bool Mlist<T>::empty(){
    if (/* condition */) {
        return true;
    }
    else {
        return false;
    }
}
void Mlist<T>::addfront(T entry){
    mlist.insert(mlist.begin(), entry);
}
void Mlist<T>::addend(T entry){
    mlist.insert(mlist.end(), entry);
}
void Mlist<T>::addorder(T entry){
    typename vector <T> :: iterator it;
    it = mlist.begin();
    while ((it!=mlist.end()), entry>*it){
        it++;
        mlist.insert(it,x); 
    }
}
void Mlist<T>::removefront(){
    mlist.erase(mlist.begin());
}
void Mlist<T>::removeend(){
    mlist.erase(--mlist.end());
    mlist.pop_back();
}
void Mlist<T>::remove(T n){
    if(mlist.size() > 0) {
        remove(mlist.begin(), x);
    }
}