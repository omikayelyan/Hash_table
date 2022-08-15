#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <iostream>
#include <vector>
#include <forward_list>
#include <initializer_list>

template <typename Key, typename Value>
class Hash_table
{
public:
    Hash_table();
    Hash_table(const Hash_table<Key, Value>&);
    Hash_table(Hash_table<Key, Value>&&);
    ~Hash_table();
public:    
    Hash_table& operator=(const Hash_table<Key, Value>&);
    Hash_table& operator=(Hash_table<Key, Value>&&);
protected:
    std::vector<std::forward_list<std::pair<Key, Value>>> m_buffer;
    size_t m_size;
    size_t m_count;
};

#endif // HASH_TABLE_H