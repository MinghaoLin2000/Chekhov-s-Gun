__ZN15fileFormatUtils8Material23_makeTextureShaderNamesEv
void __fastcall fileFormatUtils::Material::_makeTextureShaderNames(fileFormatUtils::Material *this)
{
  signed int v2; // w24
  _QWORD *v3; // x25
  __int64 v4; // x9
  _QWORD *v5; // x8
  signed int v6; // w10
  bool v7; // cc
  __int64 *v8; // x10
  __int64 v9; // x0
  __int64 v10; // x22
  std::string **v11; // x0
  __int64 v12; // x1
  std::string **v13; // x23
  std::string **v14; // x8
  std::string **v15; // x10
  std::string **v16; // x9
  std::string *v17; // t1
  bool v18; // cc
  signed int v19; // w8
  signed int v20; // w27
  __int64 v21; // x10
  _QWORD *v22; // x9
  signed int v23; // w11
  bool v24; // cc
  __int64 *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x23
  __int64 v28; // x8
  size_t v29; // x2
  size_t v30; // x9
  __int64 v31; // x11
  int v32; // w10
  const void **v33; // x9
  unsigned __int8 *v34; // x1
  float v35; // s8
  float v36; // s9
  __int64 v37; // x8
  __int64 v38; // x9
  char v39; // w9
  __int64 v40; // x10
  __int64 v41; // x11
  __int64 v42; // x10
  unsigned __int8 *v43; // x1
  unsigned __int8 *v44; // x9
  std::string::const_iterator v45; // x1
  std::string *p_p; // x1
  std::string::size_type size; // x2
  std::string **v48; // x23
  std::string **v49; // x23
  __int64 v50; // x23
  unsigned __int64 v51; // x9
  __int64 v52; // x1
  __int64 v53; // x0
  std::string **v54; // x9
  std::string **v55; // x8
  std::string **v56; // x10
  std::string *v57; // t1
  std::string **v58; // x20
  std::string *v59; // [xsp+8h] [xbp-E8h]
  std::string v60; // [xsp+18h] [xbp-D8h] BYREF
  std::string __p; // [xsp+30h] [xbp-C0h] BYREF
  unsigned int v62; // [xsp+4Ch] [xbp-A4h] BYREF
  std::string **v63; // [xsp+50h] [xbp-A0h] BYREF
  std::string **v64; // [xsp+58h] [xbp-98h]
  char *v65; // [xsp+60h] [xbp-90h] BYREF
  std::string __str; // [xsp+68h] [xbp-88h] BYREF
  _DWORD v67[3]; // [xsp+84h] [xbp-6Ch] BYREF

  v2 = 0;
  v3 = (_QWORD *)((char *)this + 8);
  do
  {
    v67[0] = v2;
    v4 = *v3;
    if ( *v3 )
    {
      v5 = v3;
      do
      {
        v6 = *(_DWORD *)(v4 + 32);
        v7 = v6 < v2;
        if ( v6 >= v2 )
          v8 = (__int64 *)v4;
        else
          v8 = (__int64 *)(v4 + 8);
        if ( !v7 )
          v5 = (_QWORD *)v4;
        v4 = *v8;
      }
      while ( *v8 );
      if ( v5 != v3 && *((_DWORD *)v5 + 8) <= v2 )
      {
        __str.__r_.__value_.__r.__words[0] = (std::string::size_type)v67;
        v9 = sub_100011BD8(this, v67, &std::piecewise_construct, &__str, &v63);
        v10 = v9;
        if ( *(char *)(v9 + 87) < 0 )
        {
          if ( !*(_QWORD *)(v9 + 72) )
            goto LABEL_12;
        }
        else if ( !*(_BYTE *)(v9 + 87) )
        {
          goto LABEL_12;
        }
        if ( *(char *)(v9 + 135) < 0 )
        {
          if ( *(_QWORD *)(v9 + 120) )
            goto LABEL_12;
        }
        else if ( *(_BYTE *)(v9 + 135) )
        {
          goto LABEL_12;
        }
        sub_100013658(&__str, v67[0]);
        v63 = 0LL;
        v64 = 0LL;
        v65 = 0LL;
        v11 = (std::string **)sub_100008574(&v65);
        *v11 = (std::string *)(v10 + 40);
        v13 = v11 + 1;
        v15 = v63;
        v14 = v64;
        v16 = v11;
        if ( v64 != v63 )
        {
          do
          {
            v17 = *--v14;
            *--v16 = v17;
          }
          while ( v14 != v15 );
          v14 = v63;
        }
        v63 = v16;
        v64 = v11 + 1;
        v65 = (char *)&v11[v12];
        if ( v14 )
          operator delete(v14);
        v64 = v13;
        if ( v67[0] )
          v18 = (unsigned int)v2 > 5;
        else
          v18 = 1;
        v19 = v2;
        if ( v18 )
        {
LABEL_120:
          v58 = v63;
          if ( v63 != v13 )
          {
            do
              std::string::operator=(*v58++ + 3, &__str);
            while ( v58 != v13 );
            v13 = v63;
          }
          if ( v13 )
          {
            v64 = v13;
            operator delete(v13);
          }
          if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(__str.__r_.__value_.__l.__data_);
          goto LABEL_12;
        }
        while ( 1 )
        {
          v20 = v19 + 1;
          v62 = v19 + 1;
          v21 = *v3;
          if ( !*v3 )
            goto LABEL_114;
          v22 = v3;
          do
          {
            v23 = *(_DWORD *)(v21 + 32);
            v24 = v23 <= v19;
            if ( v23 <= v19 )
              v25 = (__int64 *)(v21 + 8);
            else
              v25 = (__int64 *)v21;
            if ( !v24 )
              v22 = (_QWORD *)v21;
            v21 = *v25;
          }
          while ( *v25 );
          if ( v22 == v3 || *((_DWORD *)v22 + 8) > v20 )
            goto LABEL_114;
          __p.__r_.__value_.__r.__words[0] = (std::string::size_type)&v62;
          v26 = sub_100011BD8(this, &v62, &std::piecewise_construct, &__p, &v60);
          v27 = v26;
          v28 = *(unsigned __int8 *)(v26 + 87);
          if ( *(char *)(v26 + 87) < 0 )
          {
            v29 = *(_QWORD *)(v26 + 72);
            if ( !v29 )
              goto LABEL_114;
          }
          else
          {
            if ( !*(_BYTE *)(v26 + 87) )
              goto LABEL_114;
            v29 = *(_QWORD *)(v26 + 72);
          }
          if ( (v28 & 0x80u) == 0LL )
            v30 = *(unsigned __int8 *)(v26 + 87);
          else
            v30 = v29;
          v31 = *(unsigned __int8 *)(v10 + 87);
          v32 = (char)v31;
          if ( (v31 & 0x80u) != 0LL )
            v31 = *(_QWORD *)(v10 + 72);
          if ( v30 == v31 )
          {
            v33 = (const void **)(v26 + 64);
            if ( v32 >= 0 )
              v34 = (unsigned __int8 *)(v10 + 64);
            else
              v34 = *(unsigned __int8 **)(v10 + 64);
            if ( (v28 & 0x80) == 0 )
            {
              while ( *(unsigned __int8 *)v33 == *v34 )
              {
                v33 = (const void **)((char *)v33 + 1);
                ++v34;
                if ( !--v28 )
                  goto LABEL_59;
              }
              goto LABEL_114;
            }
            if ( !memcmp(*v33, v34, v29) )
            {
LABEL_59:
              v59 = (std::string *)(v27 + 40);
              v35 = *(float *)(v10 + 136);
              v36 = *(float *)(v27 + 136);
              v37 = *(unsigned __int8 *)(v10 + 63);
              if ( *(char *)(v10 + 63) < 0 )
                v38 = *(_QWORD *)(v10 + 48);
              else
                v38 = *(unsigned __int8 *)(v10 + 63);
              if ( v38 != 1 )
                goto LABEL_84;
              v39 = *(_BYTE *)(v27 + 63);
              v40 = v39 < 0 ? *(_QWORD *)(v27 + 48) : *(unsigned __int8 *)(v27 + 63);
              if ( v40 != 1 )
                goto LABEL_84;
              v41 = (v37 & 0x80u) == 0LL ? *(unsigned __int8 *)(v10 + 63) : *(_QWORD *)(v10 + 48);
              v42 = v39 >= 0 ? *(unsigned __int8 *)(v27 + 63) : *(_QWORD *)(v27 + 48);
              if ( v41 != v42 )
                goto LABEL_84;
              if ( v39 >= 0 )
                v43 = (unsigned __int8 *)(v27 + 40);
              else
                v43 = (unsigned __int8 *)v59->__r_.__value_.__r.__words[0];
              if ( (v37 & 0x80) != 0 )
              {
                if ( memcmp(*(const void **)(v10 + 40), v43, *(_QWORD *)(v10 + 48)) )
                  goto LABEL_84;
              }
              else if ( *(_BYTE *)(v10 + 63) )
              {
                v44 = (unsigned __int8 *)(v10 + 40);
                while ( *v44 == *v43 )
                {
                  ++v44;
                  ++v43;
                  if ( !--v37 )
                    goto LABEL_116;
                }
LABEL_84:
                sub_100013658(&v60, v62);
                if ( (v60.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
                  v45.__i_ = (std::__wrap_iter<const char *>::iterator_type)&v60;
                else
                  v45.__i_ = (std::__wrap_iter<const char *>::iterator_type)v60.__r_.__value_.__r.__words[0];
                std::string::insert(&v60, v45, 95);
                __p = v60;
                memset(&v60, 0, sizeof(v60));
                if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
                  p_p = &__p;
                else
                  p_p = (std::string *)__p.__r_.__value_.__r.__words[0];
                if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
                  size = HIBYTE(__p.__r_.__value_.__r.__words[2]);
                else
                  size = __p.__r_.__value_.__l.__size_;
                std::string::append(&__str, (const std::string::value_type *)p_p, size);
                if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
                  operator delete(__p.__r_.__value_.__l.__data_);
                if ( SHIBYTE(v60.__r_.__value_.__r.__words[2]) < 0 )
                  operator delete(v60.__r_.__value_.__l.__data_);
                v48 = v64;
                if ( v64 >= (std::string **)v65 )
                {
                  v50 = v64 - v63;
                  if ( (unsigned __int64)(v50 + 1) >> 61 )
                    sub_100007480(&v63);
                  v51 = (v65 - (char *)v63) >> 2;
                  if ( v51 <= v50 + 1 )
                    v51 = v50 + 1;
                  if ( (unsigned __int64)(v65 - (char *)v63) >= 0x7FFFFFFFFFFFFFF8LL )
                    v52 = 0x1FFFFFFFFFFFFFFFLL;
                  else
                    v52 = v51;
                  if ( v52 )
                    v53 = sub_100008574(&v65);
                  else
                    v53 = 0LL;
                  v54 = (std::string **)(v53 + 8 * v50);
                  *v54 = v59;
                  v49 = v54 + 1;
                  v56 = v63;
                  v55 = v64;
                  if ( v64 != v63 )
                  {
                    do
                    {
                      v57 = *--v55;
                      *--v54 = v57;
                    }
                    while ( v55 != v56 );
                    v55 = v63;
                  }
                  v63 = v54;
                  v64 = v49;
                  v65 = (char *)(v53 + 8 * v52);
                  if ( v55 )
                    operator delete(v55);
                }
                else
                {
                  *v64 = v59;
                  v49 = v48 + 1;
                }
                v64 = v49;
                goto LABEL_114;
              }
LABEL_116:
              if ( v35 == v36
                && *(float *)(v10 + 140) == *(float *)(v27 + 140)
                && *(float *)(v10 + 144) == *(float *)(v27 + 144) )
              {
                goto LABEL_84;
              }
            }
          }
LABEL_114:
          v19 = v20;
          if ( v20 == 6 )
          {
            v13 = v64;
            goto LABEL_120;
          }
        }
      }
    }
LABEL_12:
    ++v2;
  }
  while ( v2 != 7 );
}