__ZN6google8protobuf17DescriptorBuilder24CheckEnumValueUniquenessERKNS0_19EnumDescriptorProtoEPKNS0_14EnumDescriptorE
void __fastcall google::protobuf::DescriptorBuilder::CheckEnumValueUniqueness(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::EnumDescriptorProto *a2,
        const google::protobuf::EnumDescriptor *a3)
{
  unsigned __int8 *v4; // x20
  __int64 v5; // x21
  int v6; // w8
  __int64 v7; // x28
  __int64 v8; // x21
  _QWORD *v9; // x23
  std::string::size_type size; // x12
  std::string::size_type v11; // x11
  std::string::size_type v12; // x10
  std::string *v13; // x13
  int v14; // w14
  std::string::size_type v15; // x1
  char v16; // w8
  std::string *p_p; // x26
  std::string::size_type v18; // x27
  char v19; // w8
  int v20; // w9
  bool v21; // w22
  bool v22; // zf
  char v23; // w8
  char v24; // w10
  char v25; // w8
  __int64 v26; // x26
  char v27; // w1
  char v28; // w27
  _DWORD *v29; // x27
  const void **v30; // x8
  unsigned __int8 **v31; // x26
  __int64 v32; // x9
  unsigned __int8 *v33; // x11
  unsigned __int8 *v34; // x12
  int v35; // w10
  unsigned __int8 *v36; // x1
  std::string *v37; // x0
  __int128 v38; // q0
  __int64 v39; // x0
  __int64 v40; // x8
  int v41; // w10
  const std::string::value_type *v42; // x1
  std::string::size_type v43; // x2
  std::string *v44; // x0
  __int128 v45; // q0
  std::string *v46; // x0
  __int128 v47; // q0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  std::string v53; // [xsp+18h] [xbp-148h] BYREF
  std::string v54; // [xsp+30h] [xbp-130h] BYREF
  std::string v55; // [xsp+50h] [xbp-110h] BYREF
  std::string __p; // [xsp+70h] [xbp-F0h] BYREF
  __int64 v57; // [xsp+88h] [xbp-D8h]
  __int128 v58; // [xsp+90h] [xbp-D0h] BYREF
  std::string v59; // [xsp+A0h] [xbp-C0h] BYREF
  _QWORD *v60; // [xsp+B8h] [xbp-A8h] BYREF
  _QWORD v61[2]; // [xsp+C0h] [xbp-A0h] BYREF
  unsigned __int8 *v62; // [xsp+D0h] [xbp-90h] BYREF
  __int64 v63; // [xsp+D8h] [xbp-88h]
  std::string v64; // [xsp+E0h] [xbp-80h] BYREF
  char v65; // [xsp+FFh] [xbp-61h] BYREF
  std::string *v66; // [xsp+100h] [xbp-60h] BYREF

  sub_10007A644(&v62, *(_QWORD *)a3);
  v4 = v62;
  v5 = v63;
  memset(&v64, 0, sizeof(v64));
  if ( v63 )
  {
    do
    {
      v6 = *v4;
      if ( v6 != 95 )
      {
        if ( (unsigned int)(v6 - 65) < 0x1A )
          LOBYTE(v6) = v6 + 32;
        std::string::push_back(&v64, v6);
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  v61[0] = 0LL;
  v61[1] = 0LL;
  v60 = v61;
  if ( *((int *)a3 + 11) >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *((_QWORD *)a3 + 6);
      v9 = (_QWORD *)(v8 + 40 * v7);
      sub_10007A644(&v58, *v9);
      *(_OWORD *)&v55.__r_.__value_.__l.__data_ = v58;
      size = HIBYTE(v64.__r_.__value_.__r.__words[2]);
      if ( !*((_QWORD *)&v58 + 1) )
        break;
      v11 = 0LL;
      v12 = 0LL;
      if ( (v64.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
        size = v64.__r_.__value_.__l.__size_;
      v13 = (std::string *)v64.__r_.__value_.__r.__words[0];
      if ( (v64.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        v13 = &v64;
      while ( v11 < size )
      {
        v14 = *(unsigned __int8 *)(v58 + v12);
        if ( v14 != 95 )
        {
          if ( (unsigned int)(v14 - 65) < 0x1A )
            LOBYTE(v14) = v14 + 32;
          if ( (unsigned __int8)v13->__r_.__value_.__s.__data_[v11] != (unsigned __int8)v14 )
            goto LABEL_33;
          ++v11;
        }
        if ( *((_QWORD *)&v58 + 1) == ++v12 )
        {
          v12 = *((_QWORD *)&v58 + 1);
          break;
        }
      }
      if ( v11 >= size )
      {
        if ( v12 < *((_QWORD *)&v58 + 1) )
        {
          while ( *(_BYTE *)(v58 + v12) == 95 )
          {
            if ( *((_QWORD *)&v58 + 1) == ++v12 )
              goto LABEL_33;
          }
        }
LABEL_31:
        if ( *((_QWORD *)&v58 + 1) != v12 )
        {
          v55.__r_.__value_.__r.__words[0] = v58 + v12;
          v55.__r_.__value_.__l.__size_ = *((_QWORD *)&v58 + 1) - v12;
        }
      }
LABEL_33:
      sub_1000967C4(&__p, &v55);
      memset(&v59, 0, sizeof(v59));
      if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        v15 = HIBYTE(__p.__r_.__value_.__r.__words[2]);
      else
        v15 = __p.__r_.__value_.__l.__size_;
      std::string::reserve(&v59, v15);
      v16 = HIBYTE(__p.__r_.__value_.__r.__words[2]);
      if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        p_p = &__p;
      else
        p_p = (std::string *)__p.__r_.__value_.__r.__words[0];
      if ( (__p.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
        v18 = HIBYTE(__p.__r_.__value_.__r.__words[2]);
      else
        v18 = __p.__r_.__value_.__l.__size_;
      if ( v18 )
      {
        v19 = 1;
        do
        {
          v20 = (unsigned __int8)p_p->__r_.__value_.__s.__data_[0];
          v21 = v20 == 95;
          if ( v20 != 95 )
          {
            v22 = (v19 & 1) == 0;
            if ( (v19 & 1) != 0 )
              v23 = -97;
            else
              v23 = -65;
            if ( v22 )
              v24 = 32;
            else
              v24 = -32;
            if ( (unsigned __int8)(v20 + v23) >= 0x1Au )
              v25 = 0;
            else
              v25 = v24;
            std::string::push_back(&v59, v25 + v20);
          }
          p_p = (std::string *)((char *)p_p + 1);
          v19 = v21;
          --v18;
        }
        while ( v18 );
        v16 = HIBYTE(__p.__r_.__value_.__r.__words[2]);
      }
      if ( v16 < 0 )
        operator delete(__p.__r_.__value_.__l.__data_);
      if ( SHIBYTE(v59.__r_.__value_.__r.__words[2]) < 0 )
        sub_10007A474(&__p, v59.__r_.__value_.__l.__data_);
      else
        __p = v59;
      v57 = v8 + 40 * v7;
      v26 = sub_10009E1C0(&v60, &__p, &__p);
      v28 = v27;
      if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__p.__r_.__value_.__l.__data_);
      if ( v28 )
        goto LABEL_65;
      v29 = *(_DWORD **)(v26 + 56);
      v30 = *(const void ***)v29;
      v31 = (unsigned __int8 **)*v9;
      v32 = *(unsigned __int8 *)(*(_QWORD *)v29 + 23LL);
      if ( (v32 & 0x80u) == 0LL )
        v33 = (unsigned __int8 *)*(unsigned __int8 *)(*(_QWORD *)v29 + 23LL);
      else
        v33 = *(unsigned __int8 **)(*(_QWORD *)v29 + 8LL);
      v34 = (unsigned __int8 *)*((unsigned __int8 *)v31 + 23);
      v35 = (char)v34;
      if ( (char)v34 < 0 )
        v34 = v31[1];
      if ( v33 != v34 )
        goto LABEL_84;
      if ( v35 >= 0 )
        v36 = (unsigned __int8 *)*v9;
      else
        v36 = *v31;
      if ( (v32 & 0x80) != 0 )
      {
        if ( memcmp(*v30, v36, *(_QWORD *)(*(_QWORD *)v29 + 8LL)) )
          goto LABEL_84;
      }
      else if ( *(_BYTE *)(*(_QWORD *)v29 + 23LL) )
      {
        while ( *(unsigned __int8 *)v30 == *v36 )
        {
          v30 = (const void **)((char *)v30 + 1);
          ++v36;
          if ( !--v32 )
            goto LABEL_65;
        }
LABEL_84:
        if ( v29[4] != *(_DWORD *)(v8 + 40 * v7 + 16) )
        {
          std::operator+<char>("Enum name ", v31);
          v37 = std::string::append(&v53, " has the same name as ");
          v38 = *(_OWORD *)&v37->__r_.__value_.__l.__data_;
          v54.__r_.__value_.__r.__words[2] = v37->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v54.__r_.__value_.__l.__data_ = v38;
          v37->__r_.__value_.__l.__size_ = 0LL;
          v37->__r_.__value_.__r.__words[2] = 0LL;
          v37->__r_.__value_.__r.__words[0] = 0LL;
          v66 = &v59;
          v39 = sub_10009E254(&v60, &v59, &unk_1001891C0, &v66, &v65);
          v40 = **(_QWORD **)(v39 + 56);
          v41 = *(char *)(v40 + 23);
          if ( v41 >= 0 )
            v42 = **(const std::string::value_type ***)(v39 + 56);
          else
            v42 = *(const std::string::value_type **)v40;
          if ( v41 >= 0 )
            v43 = *(unsigned __int8 *)(v40 + 23);
          else
            v43 = *(_QWORD *)(v40 + 8);
          v44 = std::string::append(&v54, v42, v43);
          v45 = *(_OWORD *)&v44->__r_.__value_.__l.__data_;
          v55.__r_.__value_.__r.__words[2] = v44->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v55.__r_.__value_.__l.__data_ = v45;
          v44->__r_.__value_.__l.__size_ = 0LL;
          v44->__r_.__value_.__r.__words[2] = 0LL;
          v44->__r_.__value_.__r.__words[0] = 0LL;
          v46 = std::string::append(
                  &v55,
                  " if you ignore case and strip out the enum name prefix (if any). This is error-prone and can lead to u"
                  "ndefined behavior. Please avoid doing this. If you are using allow_alias, please assign the same numer"
                  "ic value to both enums.");
          v47 = *(_OWORD *)&v46->__r_.__value_.__l.__data_;
          __p.__r_.__value_.__r.__words[2] = v46->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__p.__r_.__value_.__l.__data_ = v47;
          v46->__r_.__value_.__l.__size_ = 0LL;
          v46->__r_.__value_.__r.__words[2] = 0LL;
          v46->__r_.__value_.__r.__words[0] = 0LL;
          if ( SHIBYTE(v55.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v55.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v54.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v54.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v53.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v53.__r_.__value_.__l.__data_);
          v48 = *(_QWORD *)(v8 + 40 * v7 + 8);
          v49 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v7 + 8);
          if ( *(_DWORD *)(*((_QWORD *)a3 + 2) + 60LL) == 2 )
            google::protobuf::DescriptorBuilder::AddWarning((__int64)this, v48, v49, 0LL, (__int64)&__p);
          else
            google::protobuf::DescriptorBuilder::AddError((__int64)this, v48, v49, 0LL, (__int64)&__p);
          if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(__p.__r_.__value_.__l.__data_);
        }
      }
LABEL_65:
      if ( SHIBYTE(v59.__r_.__value_.__r.__words[2]) < 0 )
        operator delete(v59.__r_.__value_.__l.__data_);
      if ( ++v7 >= *((int *)a3 + 11) )
      {
        v50 = v61[0];
        goto LABEL_103;
      }
    }
    if ( (v64.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
      v12 = HIBYTE(v64.__r_.__value_.__r.__words[2]);
    else
      v12 = v64.__r_.__value_.__l.__size_;
    if ( v12 )
      goto LABEL_33;
    goto LABEL_31;
  }
  v50 = 0LL;
LABEL_103:
  sub_10009BDBC(&v60, v50);
  if ( SHIBYTE(v64.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v64.__r_.__value_.__l.__data_);
}