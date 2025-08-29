__ZN6google8protobuf17DescriptorBuilder18DetectMapConflictsEPKNS0_10DescriptorERKNS0_15DescriptorProtoE
__int64 __fastcall google::protobuf::DescriptorBuilder::DetectMapConflicts(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::Descriptor *a2,
        const google::protobuf::DescriptorProto *a3)
{
  __int64 v6; // x27
  __int64 v7; // x28
  __int64 v8; // x23
  __int128 *v9; // x8
  __int128 v10; // q0
  __int64 v11; // x24
  char v12; // w1
  char v13; // w25
  __int64 v14; // x24
  std::string *v15; // x0
  __int128 v16; // q0
  __int64 v17; // x25
  __int64 v18; // x27
  _QWORD *v19; // x0
  _QWORD *v20; // x8
  __int64 v21; // x24
  std::string *v22; // x0
  __int128 v23; // q0
  __int64 v24; // x25
  __int64 v25; // x27
  _QWORD *v26; // x0
  _QWORD *v27; // x8
  __int64 v28; // x24
  std::string *v29; // x0
  __int128 v30; // q0
  __int64 v31; // x25
  __int64 v32; // x27
  _QWORD *v33; // x0
  _QWORD *v34; // x8
  __int64 v35; // x24
  std::string *v36; // x0
  __int128 v37; // q0
  std::string v39; // [xsp+8h] [xbp-A8h] BYREF
  void *__p[2]; // [xsp+20h] [xbp-90h] BYREF
  std::string::size_type v41; // [xsp+30h] [xbp-80h]
  __int64 v42; // [xsp+38h] [xbp-78h]
  _QWORD *v43; // [xsp+48h] [xbp-68h] BYREF
  _QWORD v44[2]; // [xsp+50h] [xbp-60h] BYREF

  v44[0] = 0LL;
  v44[1] = 0LL;
  v43 = v44;
  if ( *((int *)a2 + 29) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      v8 = *((_QWORD *)a2 + 7);
      v9 = *(__int128 **)(v8 + v6);
      if ( *((char *)v9 + 23) < 0 )
      {
        sub_10007A474(__p, *(void **)v9);
      }
      else
      {
        v10 = *v9;
        v41 = *((_QWORD *)v9 + 2);
        *(_OWORD *)__p = v10;
      }
      v42 = v8 + v6;
      v11 = sub_10009E1C0(&v43, __p, __p);
      v13 = v12;
      if ( SHIBYTE(v41) < 0 )
        operator delete(__p[0]);
      if ( !v13
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 56) + 32LL) + 75LL) || *(_BYTE *)(*(_QWORD *)(v8 + v6 + 32) + 75LL)) )
      {
        v14 = *((_QWORD *)a2 + 1);
        std::operator+<char>("Expanded map entry type ", *(_QWORD *)(v8 + v6));
        v15 = std::string::append(&v39, " conflicts with an existing nested message type.");
        v16 = *(_OWORD *)&v15->__r_.__value_.__l.__data_;
        v41 = v15->__r_.__value_.__r.__words[2];
        *(_OWORD *)__p = v16;
        v15->__r_.__value_.__l.__size_ = 0LL;
        v15->__r_.__value_.__r.__words[2] = 0LL;
        v15->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError((__int64)this, v14, (__int64)a3, 0LL, (__int64)__p);
        if ( SHIBYTE(v41) < 0 )
          operator delete(__p[0]);
        if ( SHIBYTE(v39.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v39.__r_.__value_.__l.__data_);
      }
      google::protobuf::DescriptorBuilder::DetectMapConflicts(
        this,
        (const google::protobuf::Descriptor *)(*((_QWORD *)a2 + 7) + v6),
        *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a3 + 8) + 8 * v7++ + 8));
      v6 += 144LL;
    }
    while ( v7 < *((int *)a2 + 29) );
  }
  if ( *((int *)a2 + 26) >= 1 )
  {
    v17 = 0LL;
    v18 = 0LL;
    do
    {
      v19 = (_QWORD *)sub_100098054(&v43, *(_QWORD *)(*((_QWORD *)a2 + 5) + v17));
      if ( v44 != v19 )
      {
        v20 = (_QWORD *)v19[7];
        if ( *(_BYTE *)(v20[4] + 75LL) )
        {
          v21 = *((_QWORD *)a2 + 1);
          std::operator+<char>("Expanded map entry type ", *v20);
          v22 = std::string::append(&v39, " conflicts with an existing field.");
          v23 = *(_OWORD *)&v22->__r_.__value_.__l.__data_;
          v41 = v22->__r_.__value_.__r.__words[2];
          *(_OWORD *)__p = v23;
          v22->__r_.__value_.__l.__size_ = 0LL;
          v22->__r_.__value_.__r.__words[2] = 0LL;
          v22->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError((__int64)this, v21, (__int64)a3, 0LL, (__int64)__p);
          if ( SHIBYTE(v41) < 0 )
            operator delete(__p[0]);
          if ( SHIBYTE(v39.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v39.__r_.__value_.__l.__data_);
        }
      }
      ++v18;
      v17 += 152LL;
    }
    while ( v18 < *((int *)a2 + 26) );
  }
  if ( *((int *)a2 + 30) >= 1 )
  {
    v24 = 0LL;
    v25 = 0LL;
    do
    {
      v26 = (_QWORD *)sub_100098054(&v43, *(_QWORD *)(*((_QWORD *)a2 + 8) + v24));
      if ( v44 != v26 )
      {
        v27 = (_QWORD *)v26[7];
        if ( *(_BYTE *)(v27[4] + 75LL) )
        {
          v28 = *((_QWORD *)a2 + 1);
          std::operator+<char>("Expanded map entry type ", *v27);
          v29 = std::string::append(&v39, " conflicts with an existing enum type.");
          v30 = *(_OWORD *)&v29->__r_.__value_.__l.__data_;
          v41 = v29->__r_.__value_.__r.__words[2];
          *(_OWORD *)__p = v30;
          v29->__r_.__value_.__l.__size_ = 0LL;
          v29->__r_.__value_.__r.__words[2] = 0LL;
          v29->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError((__int64)this, v28, (__int64)a3, 0LL, (__int64)__p);
          if ( SHIBYTE(v41) < 0 )
            operator delete(__p[0]);
          if ( SHIBYTE(v39.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v39.__r_.__value_.__l.__data_);
        }
      }
      ++v25;
      v24 += 80LL;
    }
    while ( v25 < *((int *)a2 + 30) );
  }
  if ( *((int *)a2 + 27) >= 1 )
  {
    v31 = 0LL;
    v32 = 0LL;
    do
    {
      v33 = (_QWORD *)sub_100098054(&v43, *(_QWORD *)(*((_QWORD *)a2 + 6) + v31));
      if ( v44 != v33 )
      {
        v34 = (_QWORD *)v33[7];
        if ( *(_BYTE *)(v34[4] + 75LL) )
        {
          v35 = *((_QWORD *)a2 + 1);
          std::operator+<char>("Expanded map entry type ", *v34);
          v36 = std::string::append(&v39, " conflicts with an existing oneof type.");
          v37 = *(_OWORD *)&v36->__r_.__value_.__l.__data_;
          v41 = v36->__r_.__value_.__r.__words[2];
          *(_OWORD *)__p = v37;
          v36->__r_.__value_.__l.__size_ = 0LL;
          v36->__r_.__value_.__r.__words[2] = 0LL;
          v36->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError((__int64)this, v35, (__int64)a3, 0LL, (__int64)__p);
          if ( SHIBYTE(v41) < 0 )
            operator delete(__p[0]);
          if ( SHIBYTE(v39.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v39.__r_.__value_.__l.__data_);
        }
      }
      ++v32;
      v31 += 48LL;
    }
    while ( v32 < *((int *)a2 + 27) );
  }
  return sub_10009BDBC(&v43, v44[0]);
}