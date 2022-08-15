#include "hash_table.hpp"

template <typename Key, typename Value>
Hash_table<Key, Value>::Hash_table() = default;

template <typename Key, typename Value>
Hash_table<Key, Value>::Hash_table(const Hash_table<Key, Value>& oth) : 
    m_buffer(oth.m_buffer),
    m_size(oth.m_size),
    m_count(oth.m_count)
    {}

template <typename Key, typename Value>
Hash_table<Key, Value>::Hash_table(Hash_table<Key, Value>&& oth) :
    m_buffer(std::move(oth.m_buffer)),
    m_size(oth.m_size),
    m_count(oth.m_count)
    {}

template <typename Key, typename Value>
Hash_table<Key, Value>::~Hash_table() = default;

template <typename Key, typename Value>
Hash_table<Key, Value>& Hash_table<Key, Value>::operator=(const Hash_table<Key, Value>& oth)
{
    m_buffer = oth.m_buffer;
    m_size = oth.m_size;
    m_count = oth.m_count;
    return *this;
}

template <typename Key, typename Value>
Hash_table<Key, Value>& Hash_table<Key, Value>::operator=(Hash_table<Key, Value>&& oth)
{
    m_buffer = std::move(oth.m_buffer);
    m_size = oth.m_size;
    m_count = oth.m_count;
    return *this;
}

int main()
{
    Hash_table<int, int> obj;
    //Hash_table<int, int> obj1 = obj;
    //Hash_table<int, int> obj2 = std::move(obj);
    //Hash_table<int, int> obj3;
    //obj3 = obj;
    //obj3 = std::move(obj);
}  