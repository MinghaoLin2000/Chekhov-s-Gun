__ZN6google8protobuf17DescriptorBuilder14CrossLinkFieldEPNS0_15FieldDescriptorERKNS0_20FieldDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::CrossLinkField(
        google::protobuf::DescriptorPool::Tables **this,
        google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptorProto *a3)
{
  unsigned int v6; // w8
  std::once_flag::_State_type *v7; // x0
  int v8; // w8
  std::once_flag::_State_type *v9; // x0
  char *v10; // x2
  google::protobuf::DescriptorPool::Tables *v11; // x22
  std::string::size_type v12; // x9
  __int64 v13; // x0
  char *v14; // x2
  __int64 v15; // x22
  int v16; // w0
  __int64 v17; // x1
  char *v18; // x2
  __int64 v19; // x1
  unsigned __int64 v20; // x4
  unsigned int v21; // w8
  __int64 v22; // x3
  _BOOL4 v23; // w26
  int8x8_t *v24; // x14
  __int64 v25; // x8
  int8x8_t v26; // x9
  int v27; // w10
  unsigned __int64 v28; // x11
  uint8x8_t v29; // d0
  __int64 v30; // x13
  __int64 v31; // x24
  google::protobuf *v32; // x22
  __int64 v33; // x8
  _DWORD *v34; // x9
  _QWORD *v35; // x0
  int v36; // w8
  __int64 v37; // x21
  std::string *v38; // x0
  __int128 v39; // q0
  unsigned __int8 *v40; // x9
  int v41; // w24
  int Symbol; // w23
  __int64 v43; // x1
  __int64 v44; // x22
  int v45; // w8
  __int64 v46; // x1
  __int64 **v47; // x14
  __int64 *i; // x14
  unsigned __int64 v49; // x16
  std::string::size_type *v51; // x23
  __int128 *v52; // x8
  __int128 v53; // q0
  unsigned __int64 v54; // x8
  __int128 v55; // q0
  std::once_flag::_State_type *v56; // x0
  int v57; // w8
  std::once_flag::_State_type *v58; // x0
  __int64 v59; // x21
  std::string *v60; // x0
  __int128 v61; // q0
  __int64 v62; // x21
  std::string *v63; // x0
  __int128 v64; // q0
  __int64 v65; // x23
  std::string::size_type v66; // x8
  int v67; // w9
  __int64 v68; // x11
  int v69; // w8
  __int64 v70; // x8
  __int128 *v71; // x8
  __int128 v72; // q0
  __int64 v73; // x21
  std::string *v74; // x0
  __int128 v75; // q0
  void *v76; // x0
  google::protobuf::DescriptorPool::Tables *v77; // x22
  google::protobuf::DescriptorPool::Tables *v78; // x22
  int v79; // w8
  void **v80; // x9
  std::string::size_type v81; // x8
  int v82; // w9
  __int64 v83; // x11
  int v84; // w8
  std::string::size_type v85; // x8
  int v86; // w9
  __int64 v87; // x11
  int v88; // w8
  __int64 v89; // x22
  int v90; // w8
  void **v91; // x9
  std::string::size_type v92; // x8
  int v93; // w9
  __int64 v94; // x11
  int v95; // w8
  int v96; // w8
  void **v97; // x9
  std::string::size_type v98; // x8
  int v99; // w9
  __int64 v100; // x11
  int v101; // w8
  __int64 v102; // x22
  __int64 v103; // x0
  __int64 v104; // x1
  __int64 v105; // x22
  __int64 v106; // x23
  __int64 v107; // x22
  __int64 v108; // x0
  std::string *v109; // x0
  __int128 v110; // q0
  unsigned __int64 v111; // x8
  int v112; // w10
  const std::string::value_type *v113; // x1
  std::string::size_type v114; // x2
  std::string *v115; // x0
  __int128 v116; // q0
  std::string *v117; // x0
  __int128 v118; // q0
  __int128 v119; // [xsp+0h] [xbp-2B0h]
  __int128 v120; // [xsp+0h] [xbp-2B0h]
  __int128 v121; // [xsp+0h] [xbp-2B0h]
  __int128 v122; // [xsp+0h] [xbp-2B0h]
  void *v123[2]; // [xsp+18h] [xbp-298h] BYREF
  char v124; // [xsp+2Fh] [xbp-281h]
  __int64 v125[2]; // [xsp+30h] [xbp-280h] BYREF
  __int64 v126[2]; // [xsp+40h] [xbp-270h] BYREF
  void *__p[2]; // [xsp+50h] [xbp-260h] BYREF
  __int64 v128; // [xsp+60h] [xbp-250h]
  __int64 v129; // [xsp+70h] [xbp-240h] BYREF
  int v130; // [xsp+78h] [xbp-238h]
  __int64 v131; // [xsp+A0h] [xbp-210h] BYREF
  int v132; // [xsp+A8h] [xbp-208h]
  __int64 v133; // [xsp+D0h] [xbp-1E0h] BYREF
  int v134; // [xsp+D8h] [xbp-1D8h]
  __int64 v135; // [xsp+100h] [xbp-1B0h] BYREF
  int v136; // [xsp+108h] [xbp-1A8h]
  __int64 v137; // [xsp+130h] [xbp-180h] BYREF
  int v138; // [xsp+138h] [xbp-178h]
  __int64 v139; // [xsp+160h] [xbp-150h] BYREF
  int v140; // [xsp+168h] [xbp-148h]
  std::string v141; // [xsp+190h] [xbp-120h] BYREF
  std::string v142; // [xsp+1C0h] [xbp-F0h] BYREF
  std::string v143; // [xsp+1F0h] [xbp-C0h] BYREF
  std::string __dst[2]; // [xsp+220h] [xbp-90h] BYREF
  __int64 vars8; // [xsp+2B8h] [xbp+8h]

  if ( !*((_QWORD *)a2 + 15) )
    *((_QWORD *)a2 + 15) = google::protobuf::FieldOptions::default_instance((google::protobuf::FieldOptions *)this);
  google::protobuf::FileDescriptorTables::AddFieldByStylizedNames(this[11], a2);
  if ( (*((_BYTE *)a3 + 16) & 2) == 0 )
    goto LABEL_4;
  v16 = google::protobuf::DescriptorBuilder::LookupSymbol(
          (__int64 *)this,
          (std::string *)(*((_QWORD *)a3 + 4) & 0xFFFFFFFFFFFFFFFELL),
          *((_QWORD *)a2 + 1),
          2LL,
          0,
          1);
  if ( v16 != 1 )
  {
    if ( !v16 )
    {
      v19 = *((_QWORD *)a2 + 1);
      v20 = *((_QWORD *)a3 + 4) & 0xFFFFFFFFFFFFFFFELL;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      google::protobuf::DescriptorBuilder::AddNotDefinedError((__int64)this, v19, (__int64)a3, 3LL, v20);
      return;
    }
    v37 = *((_QWORD *)a2 + 1);
    std::operator+<char>("\"", *((_QWORD *)a3 + 4) & 0xFFFFFFFFFFFFFFFELL);
    v38 = std::string::append(&v143, "\" is not a message type.");
    v39 = *(_OWORD *)&v38->__r_.__value_.__l.__data_;
    __dst[0].__r_.__value_.__r.__words[2] = v38->__r_.__value_.__r.__words[2];
    *(_OWORD *)&__dst[0].__r_.__value_.__l.__data_ = v39;
    v38->__r_.__value_.__l.__size_ = 0LL;
    v38->__r_.__value_.__r.__words[2] = 0LL;
    v38->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError((__int64)this, v37, (__int64)a3, 3LL, (__int64)__dst);
    goto LABEL_123;
  }
  v31 = v17;
  *((_QWORD *)a2 + 10) = v17;
  v32 = (google::protobuf *)*((unsigned int *)a2 + 17);
  v33 = *(unsigned int *)(v17 + 124);
  if ( (int)v33 < 1 )
  {
LABEL_41:
    if ( *((_BYTE *)*this + 42) )
    {
      v35 = (_QWORD *)(*((_QWORD *)a3 + 4) & 0xFFFFFFFFFFFFFFFELL);
      v36 = *((char *)v35 + 23);
      if ( (v36 & 0x80000000) == 0 )
      {
        if ( v36 != 33 )
          goto LABEL_111;
LABEL_110:
        if ( !memcmp(v35, "google.protobuf.bridge.MessageSet", 0x21uLL) )
          goto LABEL_4;
        goto LABEL_111;
      }
      if ( v35[1] == 33LL )
      {
        v35 = (_QWORD *)*v35;
        goto LABEL_110;
      }
    }
LABEL_111:
    v65 = *((_QWORD *)a2 + 1);
    v66 = *(_QWORD *)(v31 + 8);
    v67 = *(char *)(v66 + 23);
    v68 = *(_QWORD *)(v66 + 8);
    if ( v67 < 0 )
      v66 = *(_QWORD *)v66;
    __dst[0].__r_.__value_.__r.__words[0] = v66;
    v69 = (unsigned __int8)v67;
    if ( v67 < 0 )
      v69 = v68;
    LODWORD(__dst[0].__r_.__value_.__r.__words[1]) = v69;
    v143.__r_.__value_.__r.__words[0] = google::protobuf::FastInt32ToBuffer(
                                          v32,
                                          (int)&v143.__r_.__value_.__r.__words[1] + 4,
                                          v18);
    LODWORD(v143.__r_.__value_.__r.__words[1]) = strlen(v143.__r_.__value_.__l.__data_);
    v142.__r_.__value_.__r.__words[0] = 0LL;
    LODWORD(v142.__r_.__value_.__r.__words[1]) = -1;
    v141.__r_.__value_.__r.__words[0] = 0LL;
    LODWORD(v141.__r_.__value_.__r.__words[1]) = -1;
    v139 = 0LL;
    v140 = -1;
    v137 = 0LL;
    v138 = -1;
    v135 = 0LL;
    v136 = -1;
    v133 = 0LL;
    v134 = -1;
    v131 = 0LL;
    v132 = -1;
    v129 = 0LL;
    v130 = -1;
    *(_QWORD *)&v119 = &v133;
    *((_QWORD *)&v119 + 1) = &v131;
    google::protobuf::strings::Substitute(
      (__int64 *)__p,
      (int)"\"$0\" does not declare $1 as an extension number.",
      (int)__dst,
      (int)&v143,
      (int)&v142,
      (int)&v141,
      (int)&v139,
      (int)&v137,
      (int)&v135,
      v119,
      (__int64)&v129);
    google::protobuf::DescriptorBuilder::AddError((__int64)this, v65, (__int64)a3, 1LL, (__int64)__p);
    if ( SHIBYTE(v128) < 0 )
      operator delete(__p[0]);
    goto LABEL_4;
  }
  v34 = (_DWORD *)(*(_QWORD *)(v17 + 72) + 4LL);
  while ( *(v34 - 1) > (int)v32 || *v34 <= (int)v32 )
  {
    v34 += 4;
    if ( !--v33 )
      goto LABEL_41;
  }
LABEL_4:
  if ( *((_QWORD *)a2 + 11) && *((_DWORD *)a2 + 15) != 1 )
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a2 + 1),
      (__int64)a3,
      0LL,
      "Fields of oneofs must themselves have label LABEL_OPTIONAL.");
  v6 = *((_DWORD *)a3 + 4);
  if ( (v6 & 4) == 0 )
  {
    v7 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( v7 )
    {
      v142.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
      v141.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
      if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
      {
        __dst[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v142;
        __dst[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v141;
        v143.__r_.__value_.__r.__words[0] = (std::string::size_type)__dst;
        std::__call_once(v7, &v143, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v8 = *((_DWORD *)a2 + 14);
    if ( (v8 & 0xFFFFFFFE) == 0xA )
      goto LABEL_17;
    v9 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( v9 )
    {
      v142.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
      v141.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
      if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
      {
        __dst[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v142;
        __dst[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v141;
        v143.__r_.__value_.__r.__words[0] = (std::string::size_type)__dst;
        std::__call_once(v9, &v143, (void (__cdecl *)(void *))sub_10007A460);
      }
      v8 = *((_DWORD *)a2 + 14);
    }
    if ( v8 == 14 )
LABEL_17:
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        2LL,
        "Field with message or enum type missing type_name.");
    goto LABEL_18;
  }
  v21 = (v6 >> 3) & 1;
  if ( *((_DWORD *)a3 + 22) == 14 )
    v22 = 1LL;
  else
    v22 = v21;
  if ( *((_BYTE *)*this + 43) )
  {
    v23 = 0;
  }
  else
  {
    v40 = (unsigned __int8 *)&google::protobuf::_FieldOptions_default_instance_;
    if ( *((_QWORD *)a3 + 8) )
      v40 = (unsigned __int8 *)*((_QWORD *)a3 + 8);
    v23 = v40[79] != 0;
  }
  if ( *((_BYTE *)*this + 41) )
    v41 = v23;
  else
    v41 = 1;
  Symbol = google::protobuf::DescriptorBuilder::LookupSymbol(
             (__int64 *)this,
             (std::string *)(*((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL),
             *((_QWORD *)a2 + 1),
             v22,
             1,
             v41);
  v44 = v43;
  if ( Symbol )
  {
LABEL_53:
    if ( (*((_BYTE *)a3 + 17) & 4) == 0 )
    {
      if ( Symbol == 1 )
      {
        v45 = 11;
      }
      else
      {
        if ( Symbol != 4 )
        {
          v62 = *((_QWORD *)a2 + 1);
          std::operator+<char>("\"", *((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL);
          v63 = std::string::append(&v143, "\" is not a type.");
          v64 = *(_OWORD *)&v63->__r_.__value_.__l.__data_;
          __dst[0].__r_.__value_.__r.__words[2] = v63->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst[0].__r_.__value_.__l.__data_ = v64;
          v63->__r_.__value_.__l.__size_ = 0LL;
          v63->__r_.__value_.__r.__words[2] = 0LL;
          v63->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError((__int64)this, v62, (__int64)a3, 2LL, (__int64)__dst);
          goto LABEL_123;
        }
        v45 = 14;
      }
      *((_DWORD *)a2 + 14) = v45;
    }
    v56 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( v56 )
    {
      v142.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
      v141.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
      if ( atomic_load_explicit((atomic_ullong *volatile)v56, memory_order_acquire) != -1LL )
      {
        __dst[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v142;
        __dst[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v141;
        v143.__r_.__value_.__r.__words[0] = (std::string::size_type)__dst;
        std::__call_once(v56, &v143, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v57 = *((_DWORD *)a2 + 14);
    if ( (v57 & 0xFFFFFFFE) == 0xA )
    {
      if ( Symbol == 1 )
      {
        *((_QWORD *)a2 + 13) = v44;
        if ( *((_BYTE *)a2 + 64) )
          google::protobuf::DescriptorBuilder::AddError(
            (__int64)this,
            *((_QWORD *)a2 + 1),
            (__int64)a3,
            4LL,
            "Messages can't have default values.");
        goto LABEL_18;
      }
      v59 = *((_QWORD *)a2 + 1);
      std::operator+<char>("\"", *((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL);
      v60 = std::string::append(&v143, "\" is not a message type.");
      v61 = *(_OWORD *)&v60->__r_.__value_.__l.__data_;
      __dst[0].__r_.__value_.__r.__words[2] = v60->__r_.__value_.__r.__words[2];
      *(_OWORD *)&__dst[0].__r_.__value_.__l.__data_ = v61;
      v60->__r_.__value_.__l.__size_ = 0LL;
      v60->__r_.__value_.__r.__words[2] = 0LL;
      v60->__r_.__value_.__r.__words[0] = 0LL;
      google::protobuf::DescriptorBuilder::AddError((__int64)this, v59, (__int64)a3, 2LL, (__int64)__dst);
LABEL_123:
      if ( SHIBYTE(__dst[0].__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__dst[0].__r_.__value_.__l.__data_);
      if ( SHIBYTE(v143.__r_.__value_.__r.__words[2]) < 0 )
      {
        v76 = (void *)v143.__r_.__value_.__r.__words[0];
        goto LABEL_173;
      }
      return;
    }
    v58 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( v58 )
    {
      v142.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
      v141.__r_.__value_.__r.__words[0] = (std::string::size_type)a2;
      if ( atomic_load_explicit((atomic_ullong *volatile)v58, memory_order_acquire) != -1LL )
      {
        __dst[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v142;
        __dst[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v141;
        v143.__r_.__value_.__r.__words[0] = (std::string::size_type)__dst;
        std::__call_once(v58, &v143, (void (__cdecl *)(void *))sub_10007A460);
      }
      v57 = *((_DWORD *)a2 + 14);
    }
    if ( v57 != 14 )
    {
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        2LL,
        "Field with primitive type has type_name.");
      goto LABEL_18;
    }
    if ( Symbol != 4 )
    {
      v73 = *((_QWORD *)a2 + 1);
      std::operator+<char>("\"", *((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL);
      v74 = std::string::append(&v143, "\" is not an enum type.");
      v75 = *(_OWORD *)&v74->__r_.__value_.__l.__data_;
      __dst[0].__r_.__value_.__r.__words[2] = v74->__r_.__value_.__r.__words[2];
      *(_OWORD *)&__dst[0].__r_.__value_.__l.__data_ = v75;
      v74->__r_.__value_.__l.__size_ = 0LL;
      v74->__r_.__value_.__r.__words[2] = 0LL;
      v74->__r_.__value_.__r.__words[0] = 0LL;
      google::protobuf::DescriptorBuilder::AddError((__int64)this, v73, (__int64)a3, 2LL, (__int64)__dst);
      goto LABEL_123;
    }
    *((_QWORD *)a2 + 14) = v44;
    if ( *(_BYTE *)(google::protobuf::FieldDescriptor::enum_type(a2) + 40) )
    {
      *((_BYTE *)a2 + 64) = 0;
    }
    else if ( *((_BYTE *)a2 + 64) )
    {
      if ( (google::protobuf::io::Tokenizer::IsIdentifier(*((_QWORD *)a3 + 6) & 0xFFFFFFFFFFFFFFFELL) & 1) != 0 )
      {
        v102 = *((_QWORD *)a3 + 6);
        v103 = google::protobuf::FieldDescriptor::enum_type(a2);
        if ( (unsigned int)google::protobuf::DescriptorBuilder::LookupSymbolNoPlaceholder(
                             (__int64)this,
                             (std::string *)(v102 & 0xFFFFFFFFFFFFFFFELL),
                             *(_QWORD *)(v103 + 8),
                             0,
                             1) == 5
          && (v105 = v104, v106 = *(_QWORD *)(v104 + 24), v106 == google::protobuf::FieldDescriptor::enum_type(a2)) )
        {
          *((_QWORD *)a2 + 18) = v105;
        }
        else
        {
          v107 = *((_QWORD *)a2 + 1);
          v108 = google::protobuf::FieldDescriptor::enum_type(a2);
          std::operator+<char>("Enum type \"", *(_QWORD *)(v108 + 8));
          v109 = std::string::append(&v141, "\" has no value named \"");
          v110 = *(_OWORD *)&v109->__r_.__value_.__l.__data_;
          v142.__r_.__value_.__r.__words[2] = v109->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v142.__r_.__value_.__l.__data_ = v110;
          v109->__r_.__value_.__l.__size_ = 0LL;
          v109->__r_.__value_.__r.__words[2] = 0LL;
          v109->__r_.__value_.__r.__words[0] = 0LL;
          v111 = *((_QWORD *)a3 + 6) & 0xFFFFFFFFFFFFFFFELL;
          v112 = *(char *)(v111 + 23);
          if ( v112 >= 0 )
            v113 = (const std::string::value_type *)(*((_QWORD *)a3 + 6) & 0xFFFFFFFFFFFFFFFELL);
          else
            v113 = *(const std::string::value_type **)v111;
          if ( v112 >= 0 )
            v114 = *(unsigned __int8 *)(v111 + 23);
          else
            v114 = *(_QWORD *)(v111 + 8);
          v115 = std::string::append(&v142, v113, v114);
          v116 = *(_OWORD *)&v115->__r_.__value_.__l.__data_;
          v143.__r_.__value_.__r.__words[2] = v115->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v143.__r_.__value_.__l.__data_ = v116;
          v115->__r_.__value_.__l.__size_ = 0LL;
          v115->__r_.__value_.__r.__words[2] = 0LL;
          v115->__r_.__value_.__r.__words[0] = 0LL;
          v117 = std::string::append(&v143, "\".");
          v118 = *(_OWORD *)&v117->__r_.__value_.__l.__data_;
          __dst[0].__r_.__value_.__r.__words[2] = v117->__r_.__value_.__r.__words[2];
          *(_OWORD *)&__dst[0].__r_.__value_.__l.__data_ = v118;
          v117->__r_.__value_.__l.__size_ = 0LL;
          v117->__r_.__value_.__r.__words[2] = 0LL;
          v117->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError((__int64)this, v107, (__int64)a3, 4LL, (__int64)__dst);
          if ( SHIBYTE(__dst[0].__r_.__value_.__r.__words[2]) < 0 )
            operator delete(__dst[0].__r_.__value_.__l.__data_);
          if ( SHIBYTE(v143.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v143.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v142.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v142.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v141.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v141.__r_.__value_.__l.__data_);
        }
      }
      else
      {
        google::protobuf::DescriptorBuilder::AddError(
          (__int64)this,
          *((_QWORD *)a2 + 1),
          (__int64)a3,
          4LL,
          "Default value for an enum field must be an identifier.");
      }
LABEL_18:
      if ( (google::protobuf::FileDescriptorTables::AddFieldByNumber(this[11], a2) & 1) != 0 )
      {
        if ( *((_BYTE *)a2 + 67) && (google::protobuf::DescriptorPool::Tables::AddExtension(this[1], a2) & 1) == 0 )
        {
          v11 = this[1];
          v12 = *((unsigned int *)a2 + 17);
          __dst[0].__r_.__value_.__r.__words[0] = *((_QWORD *)a2 + 10);
          __dst[0].__r_.__value_.__l.__size_ = v12;
          v13 = sub_100096848((char *)v11 + 384, __dst);
          if ( (google::protobuf::DescriptorPool::Tables *)((char *)v11 + 392) == (google::protobuf::DescriptorPool::Tables *)v13 )
            v15 = 0LL;
          else
            v15 = *(_QWORD *)(v13 + 48);
          v70 = *((_QWORD *)a2 + 10);
          if ( v70 )
          {
            v71 = *(__int128 **)(v70 + 8);
            if ( *((char *)v71 + 23) < 0 )
            {
              sub_10007A474(__p, *(void **)v71);
            }
            else
            {
              v72 = *v71;
              v128 = *((_QWORD *)v71 + 2);
              *(_OWORD *)__p = v72;
            }
          }
          else
          {
            sub_10007A754((int)__p, "unknown");
          }
          __dst[0].__r_.__value_.__r.__words[0] = google::protobuf::FastInt32ToBuffer(
                                                    (google::protobuf *)*((unsigned int *)a2 + 17),
                                                    (int)&__dst[0].__r_.__value_.__r.__words[1] + 4,
                                                    v14);
          LODWORD(__dst[0].__r_.__value_.__r.__words[1]) = strlen(__dst[0].__r_.__value_.__l.__data_);
          v79 = HIBYTE(v128);
          v80 = __p;
          if ( v128 < 0 )
            v80 = (void **)__p[0];
          v143.__r_.__value_.__r.__words[0] = (std::string::size_type)v80;
          if ( v128 < 0 )
            v79 = (int)__p[1];
          LODWORD(v143.__r_.__value_.__r.__words[1]) = v79;
          v81 = *(_QWORD *)(v15 + 8);
          v82 = *(char *)(v81 + 23);
          v83 = *(_QWORD *)(v81 + 8);
          if ( v82 < 0 )
            v81 = *(_QWORD *)v81;
          v142.__r_.__value_.__r.__words[0] = v81;
          v84 = (unsigned __int8)v82;
          if ( v82 < 0 )
            v84 = v83;
          LODWORD(v142.__r_.__value_.__r.__words[1]) = v84;
          v85 = **(_QWORD **)(v15 + 40);
          v86 = *(char *)(v85 + 23);
          v87 = *(_QWORD *)(v85 + 8);
          if ( v86 < 0 )
            v85 = *(_QWORD *)v85;
          v141.__r_.__value_.__r.__words[0] = v85;
          v88 = (unsigned __int8)v86;
          if ( v86 < 0 )
            v88 = v87;
          LODWORD(v141.__r_.__value_.__r.__words[1]) = v88;
          v139 = 0LL;
          v140 = -1;
          v137 = 0LL;
          v138 = -1;
          v135 = 0LL;
          v136 = -1;
          v133 = 0LL;
          v134 = -1;
          v131 = 0LL;
          v132 = -1;
          v129 = 0LL;
          v130 = -1;
          *(_QWORD *)&v120 = &v133;
          *((_QWORD *)&v120 + 1) = &v131;
          google::protobuf::strings::Substitute(
            (__int64 *)v123,
            (int)"Extension number $0 has already been used in \"$1\" by extension \"$2\" defined in $3.",
            (int)__dst,
            (int)&v143,
            (int)&v142,
            (int)&v141,
            (int)&v139,
            (int)&v137,
            (int)&v135,
            v120,
            (__int64)&v129);
          google::protobuf::DescriptorBuilder::AddWarning(
            (__int64)this,
            *((_QWORD *)a2 + 1),
            (__int64)a3,
            1LL,
            (__int64)v123);
          goto LABEL_169;
        }
        return;
      }
      v24 = (int8x8_t *)this[11];
      v25 = *((_QWORD *)a2 + 10);
      v26 = v24[20];
      if ( v26 )
      {
        v27 = *((_DWORD *)a2 + 17);
        v28 = (16777619LL * v27) ^ (16777499 * v25);
        v29 = (uint8x8_t)vcnt_s8(v26);
        v29.i16[0] = vaddlv_u8(v29);
        if ( v29.u32[0] > 1uLL )
        {
          v30 = (16777619LL * v27) ^ (16777499 * v25);
          if ( v28 >= *(_QWORD *)&v26 )
            v30 = v28 % *(_QWORD *)&v26;
        }
        else
        {
          v30 = v28 & (*(_QWORD *)&v26 - 1LL);
        }
        v47 = *(__int64 ***)(*(_QWORD *)&v24[19] + 8 * v30);
        if ( v47 )
        {
          for ( i = *v47; i; i = (__int64 *)*i )
          {
            v49 = i[1];
            if ( v28 == v49 )
            {
              if ( i[2] == v25 && *((_DWORD *)i + 6) == v27 )
              {
                v51 = (std::string::size_type *)i[4];
                if ( !v25 )
                {
LABEL_149:
                  sub_10007A754((int)__p, "unknown");
LABEL_150:
                  v89 = *((_QWORD *)a2 + 1);
                  if ( *((_BYTE *)a2 + 67) )
                  {
                    __dst[0].__r_.__value_.__r.__words[0] = google::protobuf::FastInt32ToBuffer(
                                                              (google::protobuf *)*((unsigned int *)a2 + 17),
                                                              (int)&__dst[0].__r_.__value_.__r.__words[1] + 4,
                                                              v10);
                    LODWORD(__dst[0].__r_.__value_.__r.__words[1]) = strlen(__dst[0].__r_.__value_.__l.__data_);
                    v90 = HIBYTE(v128);
                    v91 = __p;
                    if ( v128 < 0 )
                      v91 = (void **)__p[0];
                    v143.__r_.__value_.__r.__words[0] = (std::string::size_type)v91;
                    if ( v128 < 0 )
                      v90 = (int)__p[1];
                    LODWORD(v143.__r_.__value_.__r.__words[1]) = v90;
                    v92 = v51[1];
                    v93 = *(char *)(v92 + 23);
                    v94 = *(_QWORD *)(v92 + 8);
                    if ( v93 < 0 )
                      v92 = *(_QWORD *)v92;
                    v142.__r_.__value_.__r.__words[0] = v92;
                    v95 = (unsigned __int8)v93;
                    if ( v93 < 0 )
                      v95 = v94;
                    LODWORD(v142.__r_.__value_.__r.__words[1]) = v95;
                    v141.__r_.__value_.__r.__words[0] = 0LL;
                    LODWORD(v141.__r_.__value_.__r.__words[1]) = -1;
                    v139 = 0LL;
                    v140 = -1;
                    v137 = 0LL;
                    v138 = -1;
                    v135 = 0LL;
                    v136 = -1;
                    v133 = 0LL;
                    v134 = -1;
                    v131 = 0LL;
                    v132 = -1;
                    v129 = 0LL;
                    v130 = -1;
                    *(_QWORD *)&v121 = &v133;
                    *((_QWORD *)&v121 + 1) = &v131;
                    google::protobuf::strings::Substitute(
                      (__int64 *)v123,
                      (int)"Extension number $0 has already been used in \"$1\" by extension \"$2\".",
                      (int)__dst,
                      (int)&v143,
                      (int)&v142,
                      (int)&v141,
                      (int)&v139,
                      (int)&v137,
                      (int)&v135,
                      v121,
                      (__int64)&v129);
                    google::protobuf::DescriptorBuilder::AddError((__int64)this, v89, (__int64)a3, 1LL, (__int64)v123);
                  }
                  else
                  {
                    __dst[0].__r_.__value_.__r.__words[0] = google::protobuf::FastInt32ToBuffer(
                                                              (google::protobuf *)*((unsigned int *)a2 + 17),
                                                              (int)&__dst[0].__r_.__value_.__r.__words[1] + 4,
                                                              v10);
                    LODWORD(__dst[0].__r_.__value_.__r.__words[1]) = strlen(__dst[0].__r_.__value_.__l.__data_);
                    v96 = HIBYTE(v128);
                    v97 = __p;
                    if ( v128 < 0 )
                      v97 = (void **)__p[0];
                    v143.__r_.__value_.__r.__words[0] = (std::string::size_type)v97;
                    if ( v128 < 0 )
                      v96 = (int)__p[1];
                    LODWORD(v143.__r_.__value_.__r.__words[1]) = v96;
                    v98 = *v51;
                    v99 = *(char *)(*v51 + 23);
                    v100 = *(_QWORD *)(*v51 + 8);
                    if ( v99 < 0 )
                      v98 = *(_QWORD *)*v51;
                    v142.__r_.__value_.__r.__words[0] = v98;
                    v101 = (unsigned __int8)v99;
                    if ( v99 < 0 )
                      v101 = v100;
                    LODWORD(v142.__r_.__value_.__r.__words[1]) = v101;
                    v141.__r_.__value_.__r.__words[0] = 0LL;
                    LODWORD(v141.__r_.__value_.__r.__words[1]) = -1;
                    v139 = 0LL;
                    v140 = -1;
                    v137 = 0LL;
                    v138 = -1;
                    v135 = 0LL;
                    v136 = -1;
                    v133 = 0LL;
                    v134 = -1;
                    v131 = 0LL;
                    v132 = -1;
                    v129 = 0LL;
                    v130 = -1;
                    *(_QWORD *)&v122 = &v133;
                    *((_QWORD *)&v122 + 1) = &v131;
                    google::protobuf::strings::Substitute(
                      (__int64 *)v123,
                      (int)"Field number $0 has already been used in \"$1\" by field \"$2\".",
                      (int)__dst,
                      (int)&v143,
                      (int)&v142,
                      (int)&v141,
                      (int)&v139,
                      (int)&v137,
                      (int)&v135,
                      v122,
                      (__int64)&v129);
                    google::protobuf::DescriptorBuilder::AddError((__int64)this, v89, (__int64)a3, 1LL, (__int64)v123);
                  }
LABEL_169:
                  if ( v124 < 0 )
                    operator delete(v123[0]);
                  if ( SHIBYTE(v128) < 0 )
                  {
                    v76 = __p[0];
LABEL_173:
                    operator delete(v76);
                  }
                  return;
                }
LABEL_81:
                v52 = *(__int128 **)(v25 + 8);
                if ( *((char *)v52 + 23) < 0 )
                {
                  sub_10007A474(__p, *(void **)v52);
                }
                else
                {
                  v53 = *v52;
                  v128 = *((_QWORD *)v52 + 2);
                  *(_OWORD *)__p = v53;
                }
                goto LABEL_150;
              }
            }
            else
            {
              if ( v29.u32[0] > 1uLL )
              {
                if ( v49 >= *(_QWORD *)&v26 )
                  v49 %= *(_QWORD *)&v26;
              }
              else
              {
                v49 &= *(_QWORD *)&v26 - 1LL;
              }
              if ( v49 != v30 )
                break;
            }
          }
        }
      }
      v51 = 0LL;
      if ( !v25 )
        goto LABEL_149;
      goto LABEL_81;
    }
    if ( *(int *)(google::protobuf::FieldDescriptor::enum_type(a2) + 44) >= 1 )
      *((_QWORD *)a2 + 18) = *(_QWORD *)(google::protobuf::FieldDescriptor::enum_type(a2) + 48);
    goto LABEL_18;
  }
  if ( (v41 & 1) != 0 )
  {
    if ( v23 )
    {
      sub_10007A754((int)__dst, "google.protobuf.Empty");
      Symbol = google::protobuf::DescriptorBuilder::FindSymbol((__int64)this, __dst, 1);
      v44 = v46;
      if ( SHIBYTE(__dst[0].__r_.__value_.__r.__words[2]) < 0 )
        operator delete(__dst[0].__r_.__value_.__l.__data_);
    }
    if ( !Symbol )
    {
      google::protobuf::DescriptorBuilder::AddNotDefinedError(
        (__int64)this,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        2LL,
        *((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL);
      return;
    }
    goto LABEL_53;
  }
  v54 = *((_QWORD *)a3 + 5) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v54 + 23) < 0 )
  {
    sub_10007A474(__dst, *(void **)v54);
  }
  else
  {
    v55 = *(_OWORD *)v54;
    __dst[0].__r_.__value_.__r.__words[2] = *(_QWORD *)(v54 + 16);
    *(_OWORD *)&__dst[0].__r_.__value_.__l.__data_ = v55;
  }
  *((_QWORD *)a2 + 6) = google::protobuf::DescriptorPool::Tables::AllocateOnceDynamic(this[1]);
  v77 = this[1];
  sub_10007A644(v126, __dst);
  *((_QWORD *)a2 + 16) = google::protobuf::DescriptorPool::Tables::AllocateString(v77, v126[0], v126[1]);
  if ( (*((_BYTE *)a3 + 16) & 8) != 0 )
  {
    v78 = this[1];
    sub_10007A644(v125, *((_QWORD *)a3 + 6) & 0xFFFFFFFFFFFFFFFELL);
    *((_QWORD *)a2 + 17) = google::protobuf::DescriptorPool::Tables::AllocateString(v78, v125[0], v125[1]);
  }
  google::protobuf::FileDescriptorTables::AddFieldByNumber(this[11], a2);
  if ( *((_BYTE *)a2 + 67) )
    google::protobuf::DescriptorPool::Tables::AddExtension(this[1], a2);
  if ( SHIBYTE(__dst[0].__r_.__value_.__r.__words[2]) < 0 )
  {
    v76 = (void *)__dst[0].__r_.__value_.__r.__words[0];
    goto LABEL_173;
  }
}