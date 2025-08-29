__ZN9serialize10Serializer4syncEPKcRNSt3__16vectorIPNS_4PrimENS3_9allocatorIS6_EEEE
void __fastcall serialize::Serializer::sync(xpc_object_t *a1, char *a2, char ***a3)
{
  std::string *v6; // x0
  __int128 v7; // q0
  void **v8; // x1
  size_t v9; // x19
  char **v10; // x24
  char **v11; // x25
  char *v12; // x23
  std::string::size_type size; // x20
  char *v14; // x23
  void *v15; // x23
  signed __int64 v16; // x23
  unsigned __int64 v17; // x9
  __int64 v18; // x1
  __int64 v19; // x0
  std::string::size_type *v20; // x9
  char *v21; // x8
  char *v22; // x10
  std::string::size_type v23; // t1
  xpc_object_t v24; // x0
  xpc_object_t value; // x20
  size_t v26; // x21
  xpc_object_t v27; // x0
  char *v28; // x0
  char *v29; // x24
  unsigned __int64 v30; // x8
  char **v31; // x28
  char **v32; // x28
  __int64 v33; // x28
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x1
  __int64 v37; // x0
  char **v38; // x9
  char **v39; // x8
  char **v40; // x10
  char *v41; // t1
  char *key; // [xsp+0h] [xbp-90h]
  std::string v43; // [xsp+8h] [xbp-88h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-70h] BYREF
  void *v45; // [xsp+30h] [xbp-60h] BYREF
  unsigned __int64 v46; // [xsp+38h] [xbp-58h] BYREF

  v46 = a3[1] - *a3;
  sub_100009C90((int)&v43, a2);
  v6 = std::string::append(&v43, ":count");
  v7 = *(_OWORD *)&v6->__r_.__value_.__l.__data_;
  v45 = (void *)v6->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v7;
  v6->__r_.__value_.__l.__size_ = 0LL;
  v6->__r_.__value_.__r.__words[2] = 0LL;
  v6->__r_.__value_.__r.__words[0] = 0LL;
  if ( SHIBYTE(v45) >= 0 )
    v8 = __p;
  else
    v8 = (void **)__p[0];
  serialize::Serializer::sync((serialize::Serializer *)a1, (const char *)v8, &v46);
  if ( SHIBYTE(v45) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v43.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v43.__r_.__value_.__l.__data_);
  v9 = v46;
  if ( v46 )
  {
    if ( *(_BYTE *)a1 )
    {
      key = a2;
      __p[0] = 0LL;
      __p[1] = 0LL;
      v45 = 0LL;
      sub_100009770(__p, v46);
      v10 = *a3;
      v11 = a3[1];
      if ( *a3 != v11 )
      {
        do
        {
          v12 = *v10;
          v43.__r_.__value_.__s.__data_[0] = 1;
          v43.__r_.__value_.__l.__size_ = (std::string::size_type)xpc_dictionary_create(0LL, 0LL, 0LL);
          (*(void (__fastcall **)(char *, std::string *))(*(_QWORD *)v12 + 24LL))(v12, &v43);
          size = v43.__r_.__value_.__l.__size_;
          v14 = (char *)__p[1];
          if ( __p[1] >= v45 )
          {
            v16 = ((char *)__p[1] - (char *)__p[0]) >> 3;
            if ( (unsigned __int64)(v16 + 1) >> 61 )
              sub_100007480(__p);
            v17 = (signed __int64)((__int64)v45 - (unsigned __int64)__p[0]) >> 2;
            if ( v17 <= v16 + 1 )
              v17 = v16 + 1;
            if ( (unsigned __int64)v45 - (unsigned __int64)__p[0] >= 0x7FFFFFFFFFFFFFF8LL )
              v18 = 0x1FFFFFFFFFFFFFFFLL;
            else
              v18 = v17;
            if ( v18 )
              v19 = sub_100008574(&v45);
            else
              v19 = 0LL;
            v20 = (std::string::size_type *)(v19 + 8 * v16);
            *v20 = size;
            v15 = v20 + 1;
            v22 = (char *)__p[0];
            v21 = (char *)__p[1];
            if ( __p[1] != __p[0] )
            {
              do
              {
                v23 = *((_QWORD *)v21 - 1);
                v21 -= 8;
                *--v20 = v23;
              }
              while ( v21 != v22 );
              v21 = (char *)__p[0];
            }
            __p[0] = v20;
            __p[1] = v15;
            v45 = (void *)(v19 + 8 * v18);
            if ( v21 )
              operator delete(v21);
          }
          else
          {
            *(_QWORD *)__p[1] = v43.__r_.__value_.__l.__size_;
            v15 = v14 + 8;
          }
          __p[1] = v15;
          ++v10;
        }
        while ( v10 != v11 );
      }
      v24 = xpc_array_create((xpc_object_t *)__p[0], v9);
      xpc_dictionary_set_value(a1[1], key, v24);
      if ( __p[0] )
      {
        __p[1] = __p[0];
        operator delete(__p[0]);
      }
    }
    else
    {
      value = xpc_dictionary_get_value(a1[1], a2);
      sub_100009770(a3, v9);
      v26 = 0LL;
      do
      {
        v27 = xpc_array_get_value(value, v26);
        LOBYTE(__p[0]) = 1;
        __p[1] = v27;
        v28 = serialize::Serializer::load(__p);
        if ( v28 )
        {
          v29 = v28;
          v31 = a3[1];
          v30 = (unsigned __int64)a3[2];
          if ( (unsigned __int64)v31 >= v30 )
          {
            v33 = v31 - *a3;
            if ( (unsigned __int64)(v33 + 1) >> 61 )
              sub_100007480(a3);
            v34 = v30 - (_QWORD)*a3;
            v35 = v34 >> 2;
            if ( v34 >> 2 <= (unsigned __int64)(v33 + 1) )
              v35 = v33 + 1;
            if ( (unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL )
              v36 = 0x1FFFFFFFFFFFFFFFLL;
            else
              v36 = v35;
            if ( v36 )
              v37 = sub_100008574(a3 + 2);
            else
              v37 = 0LL;
            v38 = (char **)(v37 + 8 * v33);
            *v38 = v29;
            v32 = v38 + 1;
            v40 = *a3;
            v39 = a3[1];
            if ( v39 != *a3 )
            {
              do
              {
                v41 = *--v39;
                *--v38 = v41;
              }
              while ( v39 != v40 );
              v39 = *a3;
            }
            *a3 = v38;
            a3[1] = v32;
            a3[2] = (char **)(v37 + 8 * v36);
            if ( v39 )
              operator delete(v39);
          }
          else
          {
            *v31 = v28;
            v32 = v31 + 1;
          }
          a3[1] = v32;
        }
        ++v26;
      }
      while ( v26 != v9 );
    }
  }
}