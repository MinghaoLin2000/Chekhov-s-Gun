__ZN3mlc3xpcINSt3__16vectorIPKcNS1_9allocatorIS4_EEEEE9get_valueEPv
void __usercall mlc::xpc<std::vector<char const*>>::get_value(void *a1@<X0>, const char ***a2@<X8>)
{
  size_t count; // x21
  const char **v4; // x23
  size_t v5; // x22
  const char **v6; // x25
  xpc_object_t value; // x0
  const char *string_ptr; // x0
  const char *v9; // x24
  unsigned __int64 v10; // x8
  const char **v11; // x28
  __int64 v12; // x20
  __int64 v13; // x26
  unsigned __int64 v14; // x9
  __int64 v15; // x8
  unsigned __int64 v16; // x27
  _BYTE *v17; // x0
  const char **v18; // x8
  unsigned __int64 v19; // x9
  const char **v20; // x9
  const char *v21; // t1
  unsigned __int64 v22; // x11
  __int64 v23; // x10
  __int64 v24; // x12
  const char **v25; // x12
  _OWORD *v26; // x13
  __int64 v27; // x14
  __int128 v28; // q0
  __int128 v29; // q2
  __int128 v30; // q3

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  count = xpc_array_get_count(a1);
  if ( count )
  {
    v4 = 0LL;
    v5 = 0LL;
    while ( 1 )
    {
      value = xpc_array_get_value(a1, v5);
      string_ptr = xpc_string_get_string_ptr(value);
      v9 = string_ptr;
      v10 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)v4 >= v10 )
        break;
      *v4 = string_ptr;
      v6 = v4 + 1;
LABEL_4:
      a2[1] = v6;
      ++v5;
      v4 = v6;
      if ( v5 == count )
        return;
    }
    v11 = *a2;
    v12 = (char *)v4 - (char *)*a2;
    v13 = v12 >> 3;
    v14 = (v12 >> 3) + 1;
    if ( v14 >> 61 )
      std::vector<char const*>::__throw_length_error[abi:ne180100](a2);
    v15 = v10 - (_QWORD)v11;
    if ( v15 >> 2 > v14 )
      v14 = v15 >> 2;
    if ( (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL )
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v16 = v14;
    if ( v16 )
    {
      if ( v16 >> 61 )
        std::__throw_bad_array_new_length[abi:ne180100]();
      v17 = operator new(8 * v16);
    }
    else
    {
      v17 = 0LL;
    }
    v18 = (const char **)&v17[8 * v13];
    *v18 = v9;
    v6 = v18 + 1;
    if ( v4 == v11 )
    {
LABEL_21:
      *a2 = v18;
      a2[1] = v6;
      a2[2] = (const char **)&v17[8 * v16];
      if ( v4 )
        operator delete(v4);
      goto LABEL_4;
    }
    v19 = (char *)v4 - (char *)v11 - 8;
    if ( v19 >= 0x168 )
    {
      v22 = ((char *)(v4 - 1) - (char *)v11) & 0xFFFFFFFFFFFFFFF8LL;
      if ( &v17[v12 - 8 - v22] > &v17[v12 - 8] )
      {
        v20 = v4;
      }
      else if ( (const char **)((char *)v4 - v22 - 8) > v4 - 1 )
      {
        v20 = v4;
      }
      else if ( (unsigned __int64)((char *)v4 - v17 - v12) >= 0x40 )
      {
        v23 = (v19 >> 3) + 1;
        v24 = 8 * (v23 & 0x3FFFFFFFFFFFFFF8LL);
        v20 = &v4[v24 / 0xFFFFFFFFFFFFFFF8LL];
        v18 = (const char **)((char *)v18 - v24);
        v25 = v4 - 4;
        v26 = &v17[8 * v13 - 32];
        v27 = v23 & 0x3FFFFFFFFFFFFFF8LL;
        do
        {
          v28 = *((_OWORD *)v25 + 1);
          v30 = *((_OWORD *)v25 - 2);
          v29 = *((_OWORD *)v25 - 1);
          *v26 = *(_OWORD *)v25;
          v26[1] = v28;
          *(v26 - 2) = v30;
          *(v26 - 1) = v29;
          v25 -= 8;
          v26 -= 4;
          v27 -= 8LL;
        }
        while ( v27 );
        if ( v23 == (v23 & 0x3FFFFFFFFFFFFFF8LL) )
          goto LABEL_20;
      }
      else
      {
        v20 = v4;
      }
    }
    else
    {
      v20 = v4;
    }
    do
    {
      v21 = *--v20;
      *--v18 = v21;
    }
    while ( v20 != v11 );
LABEL_20:
    v4 = *a2;
    goto LABEL_21;
  }
}