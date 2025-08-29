__ZN6google8protobuf17DescriptorBuilder19ValidateEnumOptionsEPNS0_14EnumDescriptorERKNS0_19EnumDescriptorProtoE
__int64 __fastcall google::protobuf::DescriptorBuilder::ValidateEnumOptions(
        __int64 this,
        google::protobuf::EnumDescriptor *a2,
        const google::protobuf::EnumDescriptorProto *a3)
{
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x23
  __int64 v8; // x8
  __int64 v9; // x26
  int v10; // w9
  int *v11; // x26
  int v12; // t1
  __int64 v13; // x13
  __int64 *v14; // x14
  __int64 *v15; // x10
  __int64 *v16; // x11
  int v17; // w12
  __int64 *v18; // x13
  const std::string *v19; // x26
  __int64 v20; // x0
  std::string *v21; // x0
  __int128 v22; // q0
  __int64 v23; // x0
  __int64 v24; // x0
  const std::string::value_type *v25; // x8
  const std::string::value_type *v26; // t1
  int v27; // w10
  const std::string::value_type *v28; // x1
  std::string::size_type v29; // x2
  std::string *v30; // x0
  __int128 v31; // q0
  std::string *v32; // x0
  __int128 v33; // q0
  __int64 v34; // x1
  int v35; // [xsp+4h] [xbp-FCh] BYREF
  std::string v36; // [xsp+8h] [xbp-F8h] BYREF
  std::string v37; // [xsp+20h] [xbp-E0h] BYREF
  std::string v38; // [xsp+40h] [xbp-C0h] BYREF
  void *__p[2]; // [xsp+60h] [xbp-A0h] BYREF
  std::string::size_type v40; // [xsp+70h] [xbp-90h]
  _QWORD *v41; // [xsp+78h] [xbp-88h] BYREF
  _QWORD v42[2]; // [xsp+80h] [xbp-80h] BYREF
  char v43; // [xsp+97h] [xbp-69h] BYREF
  int *v44; // [xsp+98h] [xbp-68h] BYREF

  v5 = this;
  v6 = *((_QWORD *)a2 + 4);
  if ( (*(_BYTE *)(v6 + 40) & 1) == 0 || !*(_BYTE *)(v6 + 72) )
  {
    v42[1] = 0LL;
    v41 = v42;
    v42[0] = 0LL;
    if ( *((int *)a2 + 11) < 1 )
    {
      v34 = 0LL;
    }
    else
    {
      v7 = 0LL;
      do
      {
        v8 = *((_QWORD *)a2 + 6);
        v9 = v8 + 40 * v7;
        v12 = *(_DWORD *)(v9 + 16);
        v11 = (int *)(v9 + 16);
        v10 = v12;
        v13 = v42[0];
        if ( !v42[0] )
          goto LABEL_14;
        v14 = v42;
        do
        {
          v15 = (__int64 *)v13;
          v16 = v14;
          v17 = *(_DWORD *)(v13 + 32);
          v18 = (__int64 *)(v13 + 8);
          if ( v17 >= v10 )
          {
            v18 = v15;
            v14 = v15;
          }
          v13 = *v18;
        }
        while ( v13 );
        if ( v14 == v42 )
          goto LABEL_14;
        if ( v17 < v10 )
          v15 = v16;
        if ( v10 >= *((_DWORD *)v15 + 8) )
        {
          std::operator+<char>("\"", *(_QWORD *)(v8 + 40 * v7 + 8));
          v21 = std::string::append(&v36, "\" uses the same enum value as \"");
          v22 = *(_OWORD *)&v21->__r_.__value_.__l.__data_;
          v37.__r_.__value_.__r.__words[2] = v21->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v37.__r_.__value_.__l.__data_ = v22;
          v21->__r_.__value_.__l.__size_ = 0LL;
          v21->__r_.__value_.__r.__words[2] = 0LL;
          v21->__r_.__value_.__r.__words[0] = 0LL;
          v35 = *v11;
          v44 = &v35;
          v23 = sub_10009F4C8(&v41, &v35, &unk_1001891C0, &v44, &v43);
          v26 = *(const std::string::value_type **)(v23 + 40);
          v24 = v23 + 40;
          v25 = v26;
          v27 = *(char *)(v24 + 23);
          if ( v27 >= 0 )
            v28 = (const std::string::value_type *)v24;
          else
            v28 = v25;
          if ( v27 >= 0 )
            v29 = *(unsigned __int8 *)(v24 + 23);
          else
            v29 = *(_QWORD *)(v24 + 8);
          v30 = std::string::append(&v37, v28, v29);
          v31 = *(_OWORD *)&v30->__r_.__value_.__l.__data_;
          v38.__r_.__value_.__r.__words[2] = v30->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v38.__r_.__value_.__l.__data_ = v31;
          v30->__r_.__value_.__l.__size_ = 0LL;
          v30->__r_.__value_.__r.__words[2] = 0LL;
          v30->__r_.__value_.__r.__words[0] = 0LL;
          v32 = std::string::append(
                  &v38,
                  "\". If this is intended, set 'option allow_alias = true;' to the enum definition.");
          v33 = *(_OWORD *)&v32->__r_.__value_.__l.__data_;
          v40 = v32->__r_.__value_.__r.__words[2];
          *(_OWORD *)__p = v33;
          v32->__r_.__value_.__l.__size_ = 0LL;
          v32->__r_.__value_.__r.__words[2] = 0LL;
          v32->__r_.__value_.__r.__words[0] = 0LL;
          if ( SHIBYTE(v38.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v38.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v37.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v37.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v36.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v36.__r_.__value_.__l.__data_);
          if ( !*(_BYTE *)(*((_QWORD *)a2 + 4) + 72LL) )
            google::protobuf::DescriptorBuilder::AddError(
              v5,
              *((_QWORD *)a2 + 1),
              *(_QWORD *)(*((_QWORD *)a3 + 5) + 8 * v7 + 8),
              1LL,
              (__int64)__p);
          if ( SHIBYTE(v40) < 0 )
            operator delete(__p[0]);
        }
        else
        {
LABEL_14:
          v19 = *(const std::string **)(v8 + 40 * v7 + 8);
          LODWORD(v38.__r_.__value_.__l.__data_) = v10;
          __p[0] = &v38;
          v20 = sub_10009F4C8(&v41, &v38, &unk_1001891C0, __p, &v37);
          std::string::operator=((std::string *)(v20 + 40), v19);
        }
        ++v7;
      }
      while ( v7 < *((int *)a2 + 11) );
      v34 = v42[0];
    }
    return sub_10009F464(&v41, v34);
  }
  return this;
}