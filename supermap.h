#include<bits/stdc++.h>
using namespace std;
template <class T,class U>
class super_map
{
private:
    unordered_map<T,U> map1;
    unordered_map<U, vector<T>> map2;
    T index;


public:
    super_map()
    {
        index=0;
    }
    void insert(U key)
    {

        map1[index]=key;
        map2[key].push_back(index);
        index++;
    }

    T search_first(U key);
    T search_last(U key);
    vector<T> search_all(U key);
    /* void delete_first_key(U key)
     {

         if(map2[key].size()==0)
         {
             return ;
         }
         T index_ele= map2[key][0];

         map1.erase(index_ele);
         map2[key].erase(map2[key].begin());




     }


     void delete_last_key(U key)
     {

         if(map2[key].size()==0)
         {
             return ;
         }
          T index_ele= map2[key][map2[key].size()-1];
         map1.erase(index_ele);
         map2[key].erase(map2[key].end());




     }

     void delete_all(U key)
     {
         vector<T> indexes=search_all(key);
         for(unsigned long long int i=0;i<indexes.size();i++)
         {
             map1.erase(indexes[i]);

         }

         map2[key].clear();
     }

     void delete_index(T index_)
     {
         U key_=map1[index_];
         if(map2[key_].size()==0)
         {
             return;
         }

         T index_ele=-1;
         for(T i=0;i<map2[key_].size();i++)
         {
             if(map2[key_][i]==index_)
             {
                 index_ele=i;
                 break;
             }
         }

         map1.erase(index_);
         map2[key_].erase(map2[key_].begin()+index_ele);

     }*/


    U operator[](T index_)
    {
        U key_=map1[index_];
        if(map2[key_].size()==0)
        {
            return INT_MAX;
        }

        return key_;
    }






};





 template <typename T,typename U>
T super_map<T,U>::search_first(U key)
    {

        if(map2[key].size()==0)
        {
            return -1;
        }
        T index_ele= map2[key][0];

        return index_ele;
    }
    template <typename T,typename U>
T  super_map<T,U>::search_last(U key)
    {

        if(map2[key].size()==0)
        {
            return -1;
        }

        T index_ele= map2[key][map2[key].size()-1];
        return index_ele;
    }
    template <typename T, typename U>
 vector<T>   super_map<T,U>::search_all(U key)
    {
        return map2[key];
    }


