__ZN15fileFormatUtils8Material11_makeShaderERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS_3MapEN9serialize12MapInputNameES9_PNSD_3MatEPNSD_5StageE
char *__fastcall fileFormatUtils::Material::_makeShader(
        __int64 a1,
        const void **a2,
        __int64 a3,
        __int64 a4,
        const std::string *a5)
{
  char *v9; // x19
  size_t v10; // x24
  std::string *v11; // x25
  const void *v12; // x1
  int v13; // w11
  const std::string::value_type *v14; // x1
  std::string::size_type v15; // x2
  std::string *v16; // x0
  __int128 v17; // q0
  std::string *v18; // x0
  __int128 v19; // q0
  int v20; // s0
  int v21; // w8
  __int128 v23; // q0
  std::string::size_type size; // x9
  const std::string *v30; // x9
  int v31; // w10
  std::string v33; // [xsp+8h] [xbp-98h] BYREF
  std::string v34; // [xsp+20h] [xbp-80h] BYREF
  void *__p[2]; // [xsp+40h] [xbp-60h] BYREF
  std::string::size_type v36; // [xsp+50h] [xbp-50h]
  char v37; // [xsp+5Fh] [xbp-41h] BYREF

  v9 = (char *)operator new(0xB0uLL);
  if ( *((char *)a2 + 23) >= 0 )
    v10 = *((unsigned __int8 *)a2 + 23);
  else
    v10 = (size_t)a2[1];
  v11 = &v33;
  sub_100007F94(&v33, v10 + 1, &v37);
  if ( (v33.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v11 = (std::string *)v33.__r_.__value_.__r.__words[0];
  if ( v10 )
  {
    if ( *((char *)a2 + 23) >= 0 )
      v12 = a2;
    else
      v12 = *a2;
    memmove(v11, v12, v10);
  }
  *(_WORD *)((char *)&v11->__r_.__value_.__l.__data_ + v10) = 47;
  v13 = *(char *)(a3 + 95);
  if ( v13 >= 0 )
    v14 = (const std::string::value_type *)(a3 + 72);
  else
    v14 = *(const std::string::value_type **)(a3 + 72);
  if ( v13 >= 0 )
    v15 = *(unsigned __int8 *)(a3 + 95);
  else
    v15 = *(_QWORD *)(a3 + 80);
  v16 = std::string::append(&v33, v14, v15);
  v17 = *(_OWORD *)&v16->__r_.__value_.__l.__data_;
  v34.__r_.__value_.__r.__words[2] = v16->__r_.__value_.__r.__words[2];
  *(_OWORD *)&v34.__r_.__value_.__l.__data_ = v17;
  v16->__r_.__value_.__l.__size_ = 0LL;
  v16->__r_.__value_.__r.__words[2] = 0LL;
  v16->__r_.__value_.__r.__words[0] = 0LL;
  v18 = std::string::append(&v34, "_texture");
  v19 = *(_OWORD *)&v18->__r_.__value_.__l.__data_;
  v36 = v18->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v19;
  v18->__r_.__value_.__l.__size_ = 0LL;
  v18->__r_.__value_.__r.__words[2] = 0LL;
  v18->__r_.__value_.__r.__words[0] = 0LL;
  sub_100009BCC(v9, a4, __p);
  if ( SHIBYTE(v36) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v34.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v34.__r_.__value_.__l.__data_);
  if ( SHIBYTE(v33.__r_.__value_.__r.__words[2]) < 0 )
  {
    operator delete(v33.__r_.__value_.__l.__data_);
    if ( (_DWORD)a4 )
    {
LABEL_23:
      v20 = *(_DWORD *)(a3 + 96);
      v21 = HIBYTE(a5->__r_.__value_.__r.__words[2]);
      if ( SHIBYTE(a5->__r_.__value_.__r.__words[2]) < 0 )
      {
        size = a5->__r_.__value_.__l.__size_;
        if ( size != 1 )
        {
          if ( size != 3 )
            goto LABEL_54;
          if ( *(_WORD *)a5->__r_.__value_.__l.__data_ != 26482
            || *(_BYTE *)(a5->__r_.__value_.__r.__words[0] + 2) != 98 )
          {
            goto LABEL_54;
          }
LABEL_49:
          *((_DWORD *)v9 + 17) = v20;
          *((_QWORD *)v9 + 9) = *(_QWORD *)(a3 + 100);
          goto LABEL_55;
        }
        if ( *a5->__r_.__value_.__l.__data_ == 103 )
          goto LABEL_48;
        if ( a5->__r_.__value_.__l.__size_ != 1 )
          goto LABEL_54;
        v30 = (const std::string *)a5->__r_.__value_.__r.__words[0];
        if ( *a5->__r_.__value_.__l.__data_ == 98 )
          goto LABEL_51;
        if ( (v21 & 0x80) == 0 )
        {
          v30 = a5;
          if ( v21 != 1 )
          {
LABEL_54:
            *((_DWORD *)v9 + 17) = v20;
            goto LABEL_55;
          }
        }
      }
      else
      {
        if ( v21 != 1 )
        {
          if ( v21 != 3 )
            goto LABEL_54;
          if ( LOWORD(a5->__r_.__value_.__l.__data_) != 26482 || a5->__r_.__value_.__s.__data_[2] != 98 )
            goto LABEL_54;
          goto LABEL_49;
        }
        v31 = (unsigned __int8)a5->__r_.__value_.__s.__data_[0];
        if ( v31 == 103 )
        {
LABEL_48:
          *((_DWORD *)v9 + 18) = v20;
          goto LABEL_55;
        }
        v30 = a5;
        if ( v31 == 98 )
        {
LABEL_51:
          *((_DWORD *)v9 + 19) = v20;
          goto LABEL_55;
        }
      }
      if ( v30->__r_.__value_.__s.__data_[0] == 97 )
      {
        *((_DWORD *)v9 + 20) = v20;
        goto LABEL_55;
      }
      goto LABEL_54;
    }
  }
  else if ( (_DWORD)a4 )
  {
    goto LABEL_23;
  }
  *(_QWORD *)&v23 = 0x4000000040000000LL;
  *((_QWORD *)&v23 + 1) = 0x4000000040000000LL;
  *(_OWORD *)(v9 + 68) = v23;
  __asm { FMOV            V0.4S, #-1.0 }
  *(_OWORD *)(v9 + 84) = _Q0;
LABEL_55:
  std::string::operator=((std::string *)(v9 + 104), (const std::string *)(a3 + 24));
  std::string::operator=((std::string *)(v9 + 128), a5);
  return v9;
}