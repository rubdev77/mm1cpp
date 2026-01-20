#ifndef HASHTABLE_H
#define HASHTABLE_H

template <typename T>
class HashTable
{
    private:
    std::vector<std::forward_list<T>> table;
    static const int MOD = 1009;
    int hash(const T & x) const;
    public:
    HashTable();
    void insert(const T & x);
    bool contains(const T & x) const;
    void erase(const T & x);
};

template <typename T>
HashTable<T>::HashTable() : table(MOD)
{

}

template <>
int HashTable<int>::hash(const int & x) const
{
    return std::abs(x) % MOD;
}

template <>
int HashTable<std::string>::hash(const std::string & x) const
{
    int count = 0;
    for(int i = 0; i < x.size(); i++)
    {   
        count += int(x[i]);
    }

    return count % MOD;
}

template <typename T>
void HashTable<T>::insert(const T& x)
{
    int h = hash(x);

    for(auto it = table[h].begin(); it != table[h].end(); ++it)
    {
        if(*it == x)
        {
            return;
        }
    }
    table[h].push_front(x);
}

template <typename T>
bool HashTable<T>::contains(const T& x) const
{
    int h = hash(x);

    for(auto it = table[h].begin(); it != table[h].end(); ++it)
    {
        if(*it == x)
        return true;
    }
    return false;
}

template <typename T>
void HashTable<T>::erase(const T& x)
{
    int h = hash(x);

    table[h].remove(x);
}

#endif