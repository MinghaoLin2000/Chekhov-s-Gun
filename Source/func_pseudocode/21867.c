__ZN15fileFormatUtils19makeValidIdentifierERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __usercall fileFormatUtils::makeValidIdentifier(__int64 *a1@<X0>, std::string *a2@<X8>)
{
  bool v3; // w8
  __int64 v4; // x9
  unsigned __int64 v6; // x23
  __int64 *v7; // x8
  int v8; // w0
  __uint32_t v9; // w0
  __int64 *v10; // x8
  unsigned __int64 v11; // x9
  std::string *v12; // x8
  int v13; // w8
  std::string v14; // [xsp+8h] [xbp-68h] BYREF
  std::string v15; // [xsp+20h] [xbp-50h] BYREF

  memset(&v15, 0, sizeof(v15));
  v3 = *((char *)a1 + 23) < 0;
  v4 = *((unsigned __int8 *)a1 + 23);
  if ( (v4 & 0x80u) != 0LL )
    v4 = a1[1];
  if ( v4 )
  {
    v6 = 0LL;
    do
    {
      if ( v3 )
        v7 = (__int64 *)*a1;
      else
        v7 = a1;
      v8 = *((char *)v7 + v6);
      if ( v8 < 0 )
        v9 = __maskrune();
      else
        v9 = _DefaultRuneLocale.__runetype[v8] & 0x500;
      if ( v9 )
      {
        if ( *((char *)a1 + 23) >= 0 )
          v10 = a1;
        else
          v10 = (__int64 *)*a1;
        std::string::push_back(&v15, *((_BYTE *)v10 + v6));
      }
      else
      {
        std::string::append(&v15, "_");
      }
      ++v6;
      v3 = *((char *)a1 + 23) < 0;
      v11 = *((unsigned __int8 *)a1 + 23);
      if ( (v11 & 0x80u) != 0LL )
        v11 = a1[1];
    }
    while ( v6 < v11 );
    v12 = (std::string *)v15.__r_.__value_.__r.__words[0];
    if ( (v15.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
      v12 = &v15;
    v13 = v12->__r_.__value_.__s.__data_[0];
    if ( (v13 & 0x80000000) == 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v13] & 0x400) != 0 )
    {
      std::operator+<char>(&v14, "_", &v15);
      if ( SHIBYTE(v15.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v15.__r_.__value_.__l.__data_);
      v15 = v14;
    }
    *a2 = v15;
  }
  else
  {
    sub_100009C90((int)a2, "defaultIdentifier");
  }
}