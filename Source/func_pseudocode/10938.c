__ZN6google8protobuf17DescriptorBuilder16CrossLinkMessageEPNS0_10DescriptorERKNS0_15DescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::CrossLinkMessage(
        google::protobuf::DescriptorPool::Tables **this,
        google::protobuf::Descriptor *a2,
        const google::protobuf::DescriptorProto *a3)
{
  google::protobuf::DescriptorPool::Tables **v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 v12; // x22
  __int64 v13; // x23
  int v14; // w8
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  int v18; // w8
  __int64 v19; // x25
  __int64 i; // x26
  __int64 v21; // x9
  __int64 v22; // x28
  const void **v23; // x22
  size_t v24; // x23
  std::string *v25; // x24
  const void *v26; // x1
  __int64 v27; // x8
  int v28; // w10
  const std::string::value_type *v29; // x1
  std::string::size_type v30; // x2
  std::string *v31; // x0
  __int128 v32; // q0
  __int64 v33; // x23
  __int64 **v34; // x8
  int v35; // w9
  __int64 *v36; // x11
  int v37; // w8
  std::string::size_type v38; // x8
  int v39; // w9
  __int64 v40; // x11
  int v41; // w8
  __int64 v42; // x9
  __int64 v43; // x9
  __int64 v44; // x25
  __int64 v45; // x26
  __int64 v46; // x28
  __int64 v47; // x27
  int v48; // w8
  const void **v49; // x22
  size_t v50; // x23
  std::string *v51; // x24
  const void *v52; // x1
  int v53; // w10
  const std::string::value_type *v54; // x1
  std::string::size_type v55; // x2
  std::string *v56; // x0
  __int128 v57; // q0
  google::protobuf::OneofOptions *Bytes; // x0
  __int64 v59; // x9
  __int64 v60; // x13
  __int64 v61; // x14
  __int64 v62; // x14
  __int64 v63; // x15
  __int64 v64; // x16
  __int64 v65; // x23
  __int64 j; // x24
  __int64 v67; // x9
  __int64 v68; // x9
  __int64 v69; // x24
  __int64 v70; // x25
  int v71; // w23
  __int64 v72; // x8
  __int128 v73; // [xsp+0h] [xbp-2B0h]
  void *__p[2]; // [xsp+20h] [xbp-290h] BYREF
  char v75; // [xsp+37h] [xbp-279h]
  std::string v76; // [xsp+38h] [xbp-278h] BYREF
  void *v77[2]; // [xsp+50h] [xbp-260h] BYREF
  std::string::size_type v78; // [xsp+60h] [xbp-250h]
  __int64 v79; // [xsp+70h] [xbp-240h] BYREF
  int v80; // [xsp+78h] [xbp-238h]
  __int64 v81; // [xsp+A0h] [xbp-210h] BYREF
  int v82; // [xsp+A8h] [xbp-208h]
  __int64 v83; // [xsp+D0h] [xbp-1E0h] BYREF
  int v84; // [xsp+D8h] [xbp-1D8h]
  __int64 v85; // [xsp+100h] [xbp-1B0h] BYREF
  int v86; // [xsp+108h] [xbp-1A8h]
  __int64 v87; // [xsp+130h] [xbp-180h] BYREF
  int v88; // [xsp+138h] [xbp-178h]
  __int64 v89; // [xsp+160h] [xbp-150h] BYREF
  int v90; // [xsp+168h] [xbp-148h]
  __int64 v91; // [xsp+190h] [xbp-120h] BYREF
  int v92; // [xsp+198h] [xbp-118h]
  __int64 v93; // [xsp+1C0h] [xbp-F0h] BYREF
  int v94; // [xsp+1C8h] [xbp-E8h]
  std::string v95; // [xsp+1F0h] [xbp-C0h] BYREF
  __int128 v96; // [xsp+220h] [xbp-90h] BYREF
  std::string::size_type v97; // [xsp+230h] [xbp-80h]

  v5 = this;
  if ( !*((_QWORD *)a2 + 4) )
  {
    this = (google::protobuf::DescriptorPool::Tables **)google::protobuf::MessageOptions::default_instance((google::protobuf::MessageOptions *)this);
    *((_QWORD *)a2 + 4) = this;
  }
  if ( *((int *)a2 + 29) >= 1 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorPool::Tables **)google::protobuf::DescriptorBuilder::CrossLinkMessage(
                                                            (google::protobuf::DescriptorBuilder *)v5,
                                                            (google::protobuf::Descriptor *)(*((_QWORD *)a2 + 7) + v6),
                                                            *(const google::protobuf::DescriptorProto **)(*((_QWORD *)a3 + 8) + 8 * v7++ + 8));
      v6 += 144LL;
    }
    while ( v7 < *((int *)a2 + 29) );
  }
  if ( *((int *)a2 + 30) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorPool::Tables **)google::protobuf::DescriptorBuilder::CrossLinkEnum(
                                                            (google::protobuf::DescriptorBuilder *)this,
                                                            (google::protobuf::EnumDescriptor *)(*((_QWORD *)a2 + 8) + v8),
                                                            a3);
      ++v9;
      v8 += 80LL;
    }
    while ( v9 < *((int *)a2 + 30) );
  }
  if ( *((int *)a2 + 26) >= 1 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorPool::Tables **)google::protobuf::DescriptorBuilder::CrossLinkField(
                                                            (google::protobuf::DescriptorBuilder *)v5,
                                                            (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 5)
                                                                                                + v10),
                                                            *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 5) + 8 * v11++ + 8));
      v10 += 152LL;
    }
    while ( v11 < *((int *)a2 + 26) );
  }
  if ( *((int *)a2 + 32) >= 1 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      this = (google::protobuf::DescriptorPool::Tables **)google::protobuf::DescriptorBuilder::CrossLinkField(
                                                            (google::protobuf::DescriptorBuilder *)v5,
                                                            (google::protobuf::FieldDescriptor *)(*((_QWORD *)a2 + 10)
                                                                                                + v12),
                                                            *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)a3 + 17) + 8 * v13++ + 8));
      v12 += 152LL;
    }
    while ( v13 < *((int *)a2 + 32) );
  }
  v14 = *((_DWORD *)a2 + 31);
  if ( v14 >= 1 )
  {
    v15 = 0LL;
    v16 = 8LL;
    do
    {
      v17 = *((_QWORD *)a2 + 9);
      if ( !*(_QWORD *)(v17 + v16) )
      {
        this = (google::protobuf::DescriptorPool::Tables **)google::protobuf::ExtensionRangeOptions::default_instance((google::protobuf::ExtensionRangeOptions *)this);
        *(_QWORD *)(v17 + v16) = this;
        v14 = *((_DWORD *)a2 + 31);
      }
      ++v15;
      v16 += 16LL;
    }
    while ( v15 < v14 );
  }
  v18 = *((_DWORD *)a2 + 26);
  if ( v18 >= 1 )
  {
    v19 = 0LL;
    for ( i = 0LL; i < v18; ++i )
    {
      v21 = *((_QWORD *)a2 + 5);
      v22 = *(_QWORD *)(v21 + v19 + 88);
      if ( v22 )
      {
        if ( *(int *)(v22 + 24) >= 1 && *(_QWORD *)(v21 + v19 - 64) != v22 )
        {
          v23 = (const void **)*((_QWORD *)a2 + 1);
          if ( *((char *)v23 + 23) >= 0 )
            v24 = *((unsigned __int8 *)v23 + 23);
          else
            v24 = (size_t)v23[1];
          sub_10007A5BC(&v76, v24 + 1, &v96);
          if ( (v76.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
            v25 = &v76;
          else
            v25 = (std::string *)v76.__r_.__value_.__r.__words[0];
          if ( v24 )
          {
            if ( *((char *)v23 + 23) >= 0 )
              v26 = v23;
            else
              v26 = *v23;
            memmove(v25, v26, v24);
          }
          *(_WORD *)((char *)&v25->__r_.__value_.__l.__data_ + v24) = 46;
          v27 = *(_QWORD *)(*((_QWORD *)a2 + 5) + v19 - 152);
          v28 = *(char *)(v27 + 23);
          if ( v28 >= 0 )
            v29 = *(const std::string::value_type **)(*((_QWORD *)a2 + 5) + v19 - 152);
          else
            v29 = *(const std::string::value_type **)v27;
          if ( v28 >= 0 )
            v30 = *(unsigned __int8 *)(v27 + 23);
          else
            v30 = *(_QWORD *)(v27 + 8);
          v31 = std::string::append(&v76, v29, v30);
          v32 = *(_OWORD *)&v31->__r_.__value_.__l.__data_;
          v78 = v31->__r_.__value_.__r.__words[2];
          *(_OWORD *)v77 = v32;
          v31->__r_.__value_.__l.__size_ = 0LL;
          v31->__r_.__value_.__r.__words[2] = 0LL;
          v31->__r_.__value_.__r.__words[0] = 0LL;
          v33 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 8 * i);
          v34 = *(__int64 ***)(*((_QWORD *)a2 + 5) + v19 - 152);
          v35 = *((char *)v34 + 23);
          v36 = v34[1];
          if ( v35 < 0 )
            v34 = (__int64 **)*v34;
          *(_QWORD *)&v96 = v34;
          v37 = (unsigned __int8)v35;
          if ( v35 < 0 )
            v37 = (int)v36;
          DWORD2(v96) = v37;
          v38 = *(_QWORD *)v22;
          v39 = *(char *)(*(_QWORD *)v22 + 23LL);
          v40 = *(_QWORD *)(*(_QWORD *)v22 + 8LL);
          if ( v39 < 0 )
            v38 = **(_QWORD **)v22;
          v95.__r_.__value_.__r.__words[0] = v38;
          v41 = (unsigned __int8)v39;
          if ( v39 < 0 )
            v41 = v40;
          LODWORD(v95.__r_.__value_.__r.__words[1]) = v41;
          v93 = 0LL;
          v94 = -1;
          v91 = 0LL;
          v92 = -1;
          v89 = 0LL;
          v90 = -1;
          v87 = 0LL;
          v88 = -1;
          v85 = 0LL;
          v86 = -1;
          v83 = 0LL;
          v84 = -1;
          v81 = 0LL;
          v82 = -1;
          v79 = 0LL;
          v80 = -1;
          *((_QWORD *)&v73 + 1) = &v81;
          *(_QWORD *)&v73 = &v83;
          google::protobuf::strings::Substitute(
            (__int64 *)__p,
            (int)"Fields in the same oneof must be defined consecutively. \"$0\" cannot be defined before the completion "
                 "of the \"$1\" oneof definition.",
            (int)&v96,
            (int)&v95,
            (int)&v93,
            (int)&v91,
            (int)&v89,
            (int)&v87,
            (int)&v85,
            v73,
            (__int64)&v79);
          google::protobuf::DescriptorBuilder::AddError((__int64)v5, (__int64)v77, v33, 2LL, (__int64)__p);
          if ( v75 < 0 )
            operator delete(__p[0]);
          if ( SHIBYTE(v78) < 0 )
            operator delete(v77[0]);
          if ( SHIBYTE(v76.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v76.__r_.__value_.__l.__data_);
          v18 = *((_DWORD *)a2 + 26);
        }
        v42 = *((_QWORD *)a2 + 6)
            + 48LL * (int)(-1431655765 * ((unsigned __int64)(v22 - *(_QWORD *)(*(_QWORD *)(v22 + 16) + 48LL)) >> 4));
        ++*(_DWORD *)(v42 + 24);
      }
      v19 += 152LL;
    }
  }
  LODWORD(v43) = *((_DWORD *)a2 + 27);
  if ( (int)v43 >= 1 )
  {
    v44 = 0LL;
    v45 = 0LL;
    do
    {
      v46 = *((_QWORD *)a2 + 6);
      v47 = v46 + v44;
      v48 = *(_DWORD *)(v46 + v44 + 24);
      if ( !v48 )
      {
        v49 = (const void **)*((_QWORD *)a2 + 1);
        if ( *((char *)v49 + 23) >= 0 )
          v50 = *((unsigned __int8 *)v49 + 23);
        else
          v50 = (size_t)v49[1];
        sub_10007A5BC(&v95, v50 + 1, &v93);
        if ( (v95.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
          v51 = &v95;
        else
          v51 = (std::string *)v95.__r_.__value_.__r.__words[0];
        if ( v50 )
        {
          if ( *((char *)v49 + 23) >= 0 )
            v52 = v49;
          else
            v52 = *v49;
          memmove(v51, v52, v50);
        }
        *(_WORD *)((char *)&v51->__r_.__value_.__l.__data_ + v50) = 46;
        v53 = *(char *)(*(_QWORD *)v47 + 23LL);
        if ( v53 >= 0 )
          v54 = *(const std::string::value_type **)v47;
        else
          v54 = **(const std::string::value_type ***)v47;
        if ( v53 >= 0 )
          v55 = *(unsigned __int8 *)(*(_QWORD *)v47 + 23LL);
        else
          v55 = *(_QWORD *)(*(_QWORD *)v47 + 8LL);
        v56 = std::string::append(&v95, v54, v55);
        v57 = *(_OWORD *)&v56->__r_.__value_.__l.__data_;
        v97 = v56->__r_.__value_.__r.__words[2];
        v96 = v57;
        v56->__r_.__value_.__l.__size_ = 0LL;
        v56->__r_.__value_.__r.__words[2] = 0LL;
        v56->__r_.__value_.__r.__words[0] = 0LL;
        google::protobuf::DescriptorBuilder::AddError(
          (__int64)v5,
          (__int64)&v96,
          *(_QWORD *)(*((_QWORD *)a3 + 20) + 8 * v45 + 8),
          0LL,
          "Oneof must have at least one field.");
        if ( SHIBYTE(v97) < 0 )
          operator delete((void *)v96);
        if ( SHIBYTE(v95.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v95.__r_.__value_.__l.__data_);
        v48 = *(_DWORD *)(v47 + 24);
      }
      Bytes = (google::protobuf::OneofOptions *)google::protobuf::DescriptorPool::Tables::AllocateBytes(v5[1], 8 * v48);
      *(_QWORD *)(v46 + v44 + 32) = Bytes;
      *(_DWORD *)(v47 + 24) = 0;
      if ( !*(_QWORD *)(v46 + v44 + 40) )
        *(_QWORD *)(v46 + v44 + 40) = google::protobuf::OneofOptions::default_instance(Bytes);
      ++v45;
      v43 = *((int *)a2 + 27);
      v44 += 48LL;
    }
    while ( v45 < v43 );
    v18 = *((_DWORD *)a2 + 26);
  }
  if ( v18 >= 1 )
  {
    v59 = 0LL;
    do
    {
      v60 = *((_QWORD *)a2 + 5) + v59;
      v61 = *(_QWORD *)(v60 + 88);
      if ( v61 )
      {
        v62 = *((_QWORD *)a2 + 6)
            + 48LL * (int)(-1431655765 * ((unsigned __int64)(v61 - *(_QWORD *)(*(_QWORD *)(v61 + 16) + 48LL)) >> 4));
        v63 = *(int *)(v62 + 24);
        *(_DWORD *)(v60 + 72) = v63;
        v64 = *(_QWORD *)(v62 + 32);
        *(_DWORD *)(v62 + 24) = v63 + 1;
        *(_QWORD *)(v64 + 8 * v63) = v60;
      }
      v59 += 152LL;
    }
    while ( 152LL * (unsigned int)v18 != v59 );
    v65 = 0LL;
    for ( j = 0LL; j < v18; ++j )
    {
      v67 = *((_QWORD *)a2 + 5) + v65;
      if ( *(_BYTE *)(v67 + 65) )
      {
        v68 = *(_QWORD *)(v67 + 88);
        if ( !v68 || *(_DWORD *)(v68 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v68 + 32) + 65LL) )
        {
          google::protobuf::DescriptorBuilder::AddError(
            (__int64)v5,
            *((_QWORD *)a2 + 1),
            *(_QWORD *)(*((_QWORD *)a3 + 5) + 8 * j + 8),
            10LL,
            "Fields with proto3_optional set must be a member of a one-field oneof");
          v18 = *((_DWORD *)a2 + 26);
        }
      }
      v65 += 152LL;
    }
    LODWORD(v43) = *((_DWORD *)a2 + 27);
  }
  if ( (int)v43 >= 1 )
  {
    v69 = 0LL;
    v70 = 0LL;
    v71 = -1;
    do
    {
      v72 = *((_QWORD *)a2 + 6) + v69;
      if ( *(_DWORD *)(v72 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v72 + 32) + 65LL) )
      {
        if ( v71 == -1 )
          v71 = v70;
      }
      else if ( v71 != -1 )
      {
        google::protobuf::DescriptorBuilder::AddError(
          (__int64)v5,
          *((_QWORD *)a2 + 1),
          *(_QWORD *)(*((_QWORD *)a3 + 20) + 8 * v70 + 8),
          10LL,
          "Synthetic oneofs must be after all other oneofs");
        LODWORD(v43) = *((_DWORD *)a2 + 27);
      }
      ++v70;
      v69 += 48LL;
    }
    while ( v70 < (int)v43 );
    if ( v71 != -1 )
      LODWORD(v43) = v71;
  }
  *((_DWORD *)a2 + 28) = v43;
}