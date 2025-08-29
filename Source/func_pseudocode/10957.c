__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter21InterpretSingleOptionEPNS0_7MessageERKNSt3__16vectorIiNS5_9allocatorIiEEEESB_
__int64 __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::InterpretSingleOption(
        __int64 *a1,
        google::protobuf::Message *a2,
        __int64 a3)
{
  __int64 v4; // x8
  unsigned __int64 v7; // x8
  int v8; // w9
  unsigned __int64 v9; // x9
  __int64 v10; // x10
  int v11; // w8
  __int64 *v14; // x20
  __int64 v15; // x0
  const std::string::value_type **v16; // x1
  const std::string::value_type **v17; // x25
  __int64 v18; // x0
  google::protobuf::internal::LogMessage *v19; // x0
  __int64 v20; // x24
  std::string::size_type v21; // x22
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x20
  std::string::size_type size; // x9
  unsigned __int64 v26; // x20
  std::string *v27; // x0
  __int128 v28; // q0
  unsigned __int8 *v29; // x1
  std::string::size_type v30; // x2
  google::protobuf::DescriptorBuilder::OptionInterpreter *FieldByName; // x0
  std::string::size_type v32; // x1
  int v33; // w9
  const std::string::value_type *v34; // x1
  std::string::size_type v35; // x2
  __int64 v36; // x8
  int v37; // w20
  char *v38; // x9
  char *v39; // x27
  char *v40; // x0
  __int64 v41; // x27
  unsigned __int64 v42; // x10
  __int64 v43; // x8
  __int64 v44; // x1
  __int64 v45; // x8
  char *v46; // x10
  int v47; // t1
  __int64 v48; // x8
  std::once_flag::_State_type *v49; // x0
  char *v50; // x20
  char *v51; // x20
  __int64 v52; // x20
  unsigned __int64 v53; // x9
  __int64 v54; // x1
  __int64 v55; // x0
  std::string::size_type *v56; // x9
  char *v57; // x8
  char *v58; // x10
  std::string::size_type v59; // t1
  char *v60; // x20
  char *v61; // x23
  __int64 v62; // x1
  __int64 UnknownFields; // x0
  google::protobuf::UnknownFieldSet *v64; // x0
  char *v65; // x23
  _QWORD *v66; // x0
  char *v67; // x24
  std::string::size_type v68; // x25
  std::once_flag::_State_type *v69; // x0
  int v70; // w8
  __int64 v71; // x0
  google::protobuf::io::EpsCopyOutputStream *v72; // x3
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  google::protobuf::internal::LogMessage *v76; // x0
  google::protobuf::UnknownFieldSet *v77; // x0
  std::string::size_type v78; // x8
  std::string::size_type v79; // x1
  std::string::size_type v80; // x1
  google::protobuf::Reflection *v81; // x1
  google::protobuf::UnknownFieldSet *v82; // x0
  __int64 v83; // x0
  int v84; // w20
  char *v85; // x9
  char *v86; // x21
  __int64 v87; // x19
  __int64 v88; // x8
  __int64 v89; // x8
  std::string *v90; // x0
  __int128 v91; // q0
  int v92; // w10
  const std::string::value_type *v93; // x1
  std::string::size_type v94; // x2
  std::string *v95; // x0
  __int128 v96; // q0
  std::string *v97; // x0
  __int128 v98; // q0
  void *v99; // x0
  std::string *v100; // x0
  __int128 v101; // q0
  std::string *v102; // x0
  __int128 v103; // q0
  __int64 v104; // x0
  __int64 v105; // x19
  std::string::size_type v106; // x20
  std::once_flag::_State_type *v107; // x0
  google::protobuf::internal::LogMessage *v108; // x0
  std::string::size_type v109; // x1
  char *v110; // x0
  __int64 v111; // x21
  unsigned __int64 v112; // x10
  __int64 v113; // x8
  __int64 v114; // x1
  __int64 v115; // x8
  std::string *v116; // x0
  __int128 v117; // q0
  int v118; // w11
  const std::string::value_type *v119; // x1
  std::string::size_type v120; // x2
  std::string *v121; // x0
  __int128 v122; // q0
  std::string *v123; // x0
  __int128 v124; // q0
  std::string *v125; // x1
  std::string::size_type v126; // x2
  std::string *v127; // x0
  __int128 v128; // q0
  std::string *v129; // x0
  __int128 v130; // q0
  std::string *v131; // x0
  __int128 v132; // q0
  std::string *v133; // x0
  __int128 v134; // q0
  char *v135; // x10
  __int64 v136; // x8
  int v137; // t1
  void **v138; // x0
  std::string::size_type v139; // x1
  __int64 v141; // [xsp+0h] [xbp-1D0h]
  std::string v142; // [xsp+10h] [xbp-1C0h] BYREF
  std::string v143; // [xsp+40h] [xbp-190h] BYREF
  std::string v144; // [xsp+58h] [xbp-178h] BYREF
  std::string v145; // [xsp+70h] [xbp-160h] BYREF
  std::string v146; // [xsp+90h] [xbp-140h] BYREF
  std::string v147; // [xsp+B0h] [xbp-120h] BYREF
  void *__p; // [xsp+D0h] [xbp-100h] BYREF
  char *v149; // [xsp+D8h] [xbp-F8h]
  unsigned __int64 v150; // [xsp+E0h] [xbp-F0h] BYREF
  std::string __str; // [xsp+E8h] [xbp-E8h] BYREF
  char *v152; // [xsp+100h] [xbp-D0h] BYREF
  char *v153; // [xsp+108h] [xbp-C8h]
  unsigned __int64 v154; // [xsp+110h] [xbp-C0h] BYREF
  char v155; // [xsp+11Fh] [xbp-B1h] BYREF
  unsigned __int8 v156[16]; // [xsp+120h] [xbp-B0h] BYREF
  signed __int64 v157; // [xsp+130h] [xbp-A0h]
  char v158; // [xsp+158h] [xbp-78h]
  const google::protobuf::UnknownFieldSet *v159; // [xsp+160h] [xbp-70h]

  v4 = a1[2];
  if ( !*(_DWORD *)(v4 + 32) )
  {
    sub_10007A754((int)v156, "Option must have a name.");
    google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)v156);
LABEL_115:
    if ( SHIBYTE(v157) < 0 )
      operator delete(*(void **)v156);
    return 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL) + 24LL) & 0xFFFFFFFFFFFFFFFELL;
  v8 = *(char *)(v7 + 23);
  if ( v8 < 0 )
  {
    if ( *(_QWORD *)(v7 + 8) != 20LL )
      goto LABEL_15;
    v7 = *(_QWORD *)v7;
  }
  else if ( v8 != 20 )
  {
    goto LABEL_15;
  }
  v9 = *(_QWORD *)v7;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(_DWORD *)(v7 + 16);
  if ( v9 == 0x707265746E696E75LL && v10 == 0x706F5F6465746572LL && v11 == 1852795252 )
  {
    sub_10007A754((int)v156, "Option must not use reserved name \"uninterpreted_option\".");
    google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)v156);
    goto LABEL_115;
  }
LABEL_15:
  v14 = (__int64 *)*a1;
  v15 = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
  if ( (unsigned int)google::protobuf::DescriptorBuilder::FindSymbolNotEnforcingDeps(v14, *(_QWORD *)(v15 + 8), 1) == 1 )
  {
    v17 = v16;
    if ( !v16 )
      goto LABEL_19;
  }
  else
  {
    v17 = (const std::string::value_type **)(*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    if ( !v17 )
    {
LABEL_19:
      v18 = google::protobuf::internal::LogMessage::LogMessage(
              v156,
              3LL,
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/google/protobuf/descriptor.cc",
              6502LL);
      v19 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                        v18,
                                                        "CHECK failed: options_descriptor: ");
      google::protobuf::internal::LogFinisher::operator=((int)&v142, v19);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v156);
    }
  }
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  sub_10007A754((int)&__str, "");
  __p = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  sub_10009C708(&__p);
  v141 = a3;
  if ( *(int *)(a1[2] + 32) >= 1 )
  {
    v20 = 0LL;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = *a1;
      if ( *(char *)(*a1 + 199) < 0 )
      {
        **(_BYTE **)(v22 + 176) = 0;
        *(_QWORD *)(v22 + 184) = 0LL;
      }
      else
      {
        *(_BYTE *)(v22 + 176) = 0;
        *(_BYTE *)(v22 + 199) = 0;
      }
      v23 = *(_QWORD *)(*(_QWORD *)(a1[2] + 40) + 8 * v20 + 8);
      v24 = *(_QWORD *)(v23 + 24);
      size = HIBYTE(__str.__r_.__value_.__r.__words[2]);
      if ( (__str.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
        size = __str.__r_.__value_.__l.__size_;
      if ( size )
      {
        std::string::append(&__str, ".");
        v23 = *(_QWORD *)(*(_QWORD *)(a1[2] + 40) + 8 * v20 + 8);
      }
      v26 = v24 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_BYTE *)(v23 + 32) )
      {
        std::operator+<char>("(", v26);
        v27 = std::string::append(&v142, ")");
        v28 = *(_OWORD *)&v27->__r_.__value_.__l.__data_;
        v157 = v27->__r_.__value_.__r.__words[2];
        *(_OWORD *)v156 = v28;
        v27->__r_.__value_.__l.__size_ = 0LL;
        v27->__r_.__value_.__r.__words[2] = 0LL;
        v27->__r_.__value_.__r.__words[0] = 0LL;
        if ( v157 >= 0 )
          v29 = v156;
        else
          v29 = *(unsigned __int8 **)v156;
        if ( v157 >= 0 )
          v30 = HIBYTE(v157);
        else
          v30 = *(_QWORD *)&v156[8];
        std::string::append(&__str, (const std::string::value_type *)v29, v30);
        if ( SHIBYTE(v157) < 0 )
          operator delete(*(void **)v156);
        if ( SHIBYTE(v142.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(v142.__r_.__value_.__l.__data_);
        FieldByName = (google::protobuf::DescriptorBuilder::OptionInterpreter *)google::protobuf::DescriptorBuilder::LookupSymbol(
                                                                                  (__int64 *)*a1,
                                                                                  (std::string *)v26,
                                                                                  a1[1],
                                                                                  0LL,
                                                                                  0,
                                                                                  1);
        if ( (_DWORD)FieldByName == 2 )
          v21 = v32;
        if ( !v21 )
        {
LABEL_118:
          v88 = *a1;
          if ( !*(_BYTE *)(*(_QWORD *)*a1 + 42LL) )
          {
            if ( *(char *)(v88 + 199) < 0 )
              v89 = *(_QWORD *)(v88 + 184);
            else
              v89 = *(unsigned __int8 *)(v88 + 199);
            if ( v89 )
            {
              std::operator+<char>("Option \"", &__str);
              v116 = std::string::append(&v144, "\" is resolved to \"(");
              v117 = *(_OWORD *)&v116->__r_.__value_.__l.__data_;
              v145.__r_.__value_.__r.__words[2] = v116->__r_.__value_.__r.__words[2];
              *(_OWORD *)&v145.__r_.__value_.__l.__data_ = v117;
              v116->__r_.__value_.__l.__size_ = 0LL;
              v116->__r_.__value_.__r.__words[2] = 0LL;
              v116->__r_.__value_.__r.__words[0] = 0LL;
              v118 = *(char *)(*a1 + 199);
              if ( v118 >= 0 )
                v119 = (const std::string::value_type *)(*a1 + 176);
              else
                v119 = *(const std::string::value_type **)(*a1 + 176);
              if ( v118 >= 0 )
                v120 = *(unsigned __int8 *)(*a1 + 199);
              else
                v120 = *(_QWORD *)(*a1 + 184);
              v121 = std::string::append(&v145, v119, v120);
              v122 = *(_OWORD *)&v121->__r_.__value_.__l.__data_;
              v146.__r_.__value_.__r.__words[2] = v121->__r_.__value_.__r.__words[2];
              *(_OWORD *)&v146.__r_.__value_.__l.__data_ = v122;
              v121->__r_.__value_.__l.__size_ = 0LL;
              v121->__r_.__value_.__r.__words[2] = 0LL;
              v121->__r_.__value_.__r.__words[0] = 0LL;
              v123 = std::string::append(
                       &v146,
                       ")\", which is not defined. The innermost scope is searched first in name resolution. Consider usi"
                       "ng a leading '.'(i.e., \"(.");
              v124 = *(_OWORD *)&v123->__r_.__value_.__l.__data_;
              v147.__r_.__value_.__r.__words[2] = v123->__r_.__value_.__r.__words[2];
              *(_OWORD *)&v147.__r_.__value_.__l.__data_ = v124;
              v123->__r_.__value_.__l.__size_ = 0LL;
              v123->__r_.__value_.__r.__words[2] = 0LL;
              v123->__r_.__value_.__r.__words[0] = 0LL;
              std::string::basic_string(&v143, &__str, 1uLL, 0xFFFFFFFFFFFFFFFFLL, (std::allocator<char> *)&v155);
              if ( (v143.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
                v125 = &v143;
              else
                v125 = (std::string *)v143.__r_.__value_.__r.__words[0];
              if ( (v143.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
                v126 = HIBYTE(v143.__r_.__value_.__r.__words[2]);
              else
                v126 = v143.__r_.__value_.__l.__size_;
              v127 = std::string::append(&v147, (const std::string::value_type *)v125, v126);
              v128 = *(_OWORD *)&v127->__r_.__value_.__l.__data_;
              v142.__r_.__value_.__r.__words[2] = v127->__r_.__value_.__r.__words[2];
              *(_OWORD *)&v142.__r_.__value_.__l.__data_ = v128;
              v127->__r_.__value_.__l.__size_ = 0LL;
              v127->__r_.__value_.__r.__words[2] = 0LL;
              v127->__r_.__value_.__r.__words[0] = 0LL;
              v129 = std::string::append(&v142, "\") to start from the outermost scope.");
              v130 = *(_OWORD *)&v129->__r_.__value_.__l.__data_;
              v157 = v129->__r_.__value_.__r.__words[2];
              *(_OWORD *)v156 = v130;
              v129->__r_.__value_.__l.__size_ = 0LL;
              v129->__r_.__value_.__r.__words[2] = 0LL;
              v129->__r_.__value_.__r.__words[0] = 0LL;
              google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)v156);
              if ( SHIBYTE(v157) < 0 )
                operator delete(*(void **)v156);
              if ( SHIBYTE(v142.__r_.__value_.__r.__words[2]) < 0 )
                operator delete(v142.__r_.__value_.__l.__data_);
              if ( SHIBYTE(v143.__r_.__value_.__r.__words[2]) < 0 )
                operator delete(v143.__r_.__value_.__l.__data_);
              if ( SHIBYTE(v147.__r_.__value_.__r.__words[2]) < 0 )
                operator delete(v147.__r_.__value_.__l.__data_);
              if ( SHIBYTE(v146.__r_.__value_.__r.__words[2]) < 0 )
                operator delete(v146.__r_.__value_.__l.__data_);
              if ( SHIBYTE(v145.__r_.__value_.__r.__words[2]) < 0 )
                operator delete(v145.__r_.__value_.__l.__data_);
              if ( SHIBYTE(v144.__r_.__value_.__r.__words[2]) < 0 )
              {
                v99 = (void *)v144.__r_.__value_.__r.__words[0];
                goto LABEL_192;
              }
            }
            else
            {
              std::operator+<char>("Option \"", &__str);
              v131 = std::string::append(&v147, "\" unknown. Ensure that your proto");
              v132 = *(_OWORD *)&v131->__r_.__value_.__l.__data_;
              v142.__r_.__value_.__r.__words[2] = v131->__r_.__value_.__r.__words[2];
              *(_OWORD *)&v142.__r_.__value_.__l.__data_ = v132;
              v131->__r_.__value_.__l.__size_ = 0LL;
              v131->__r_.__value_.__r.__words[2] = 0LL;
              v131->__r_.__value_.__r.__words[0] = 0LL;
              v133 = std::string::append(&v142, " definition file imports the proto which defines the option.");
              v134 = *(_OWORD *)&v133->__r_.__value_.__l.__data_;
              v157 = v133->__r_.__value_.__r.__words[2];
              *(_OWORD *)v156 = v134;
              v133->__r_.__value_.__l.__size_ = 0LL;
              v133->__r_.__value_.__r.__words[2] = 0LL;
              v133->__r_.__value_.__r.__words[0] = 0LL;
              google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)v156);
              if ( SHIBYTE(v157) < 0 )
                operator delete(*(void **)v156);
              if ( SHIBYTE(v142.__r_.__value_.__r.__words[2]) < 0 )
                operator delete(v142.__r_.__value_.__l.__data_);
              if ( SHIBYTE(v147.__r_.__value_.__r.__words[2]) < 0 )
              {
                v99 = (void *)v147.__r_.__value_.__r.__words[0];
LABEL_192:
                operator delete(v99);
              }
            }
LABEL_193:
            v87 = 0LL;
            goto LABEL_206;
          }
LABEL_123:
          google::protobuf::DescriptorBuilder::OptionInterpreter::AddWithoutInterpreting(
            FieldByName,
            (const google::protobuf::UninterpretedOption *)a1[2],
            a2);
          v87 = 1LL;
          goto LABEL_206;
        }
      }
      else
      {
        v33 = *(char *)(v26 + 23);
        if ( v33 >= 0 )
          v34 = (const std::string::value_type *)v26;
        else
          v34 = *(const std::string::value_type **)v26;
        if ( v33 >= 0 )
          v35 = *(unsigned __int8 *)(v26 + 23);
        else
          v35 = *(_QWORD *)(v26 + 8);
        std::string::append(&__str, v34, v35);
        FieldByName = (google::protobuf::DescriptorBuilder::OptionInterpreter *)google::protobuf::Descriptor::FindFieldByName(
                                                                                  (__int64)v17,
                                                                                  v26);
        v21 = (std::string::size_type)FieldByName;
        if ( !FieldByName )
          goto LABEL_118;
      }
      v36 = *(_QWORD *)(v21 + 80);
      if ( (const std::string::value_type **)v36 != v17 )
      {
        if ( !v36 || !*(_BYTE *)(v36 + 140) )
        {
          std::operator+<char>("Option field \"", &__str);
          v90 = std::string::append(&v146, "\" is not a field or extension of message \"");
          v91 = *(_OWORD *)&v90->__r_.__value_.__l.__data_;
          v147.__r_.__value_.__r.__words[2] = v90->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v147.__r_.__value_.__l.__data_ = v91;
          v90->__r_.__value_.__l.__size_ = 0LL;
          v90->__r_.__value_.__r.__words[2] = 0LL;
          v90->__r_.__value_.__r.__words[0] = 0LL;
          v92 = (*v17)[23];
          if ( v92 >= 0 )
            v93 = *v17;
          else
            v93 = *(const std::string::value_type **)*v17;
          if ( v92 >= 0 )
            v94 = *((unsigned __int8 *)*v17 + 23);
          else
            v94 = *((_QWORD *)*v17 + 1);
          v95 = std::string::append(&v147, v93, v94);
          v96 = *(_OWORD *)&v95->__r_.__value_.__l.__data_;
          v142.__r_.__value_.__r.__words[2] = v95->__r_.__value_.__r.__words[2];
          *(_OWORD *)&v142.__r_.__value_.__l.__data_ = v96;
          v95->__r_.__value_.__l.__size_ = 0LL;
          v95->__r_.__value_.__r.__words[2] = 0LL;
          v95->__r_.__value_.__r.__words[0] = 0LL;
          v97 = std::string::append(&v142, "\".");
          v98 = *(_OWORD *)&v97->__r_.__value_.__l.__data_;
          v157 = v97->__r_.__value_.__r.__words[2];
          *(_OWORD *)v156 = v98;
          v97->__r_.__value_.__l.__size_ = 0LL;
          v97->__r_.__value_.__r.__words[2] = 0LL;
          v97->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)v156);
          if ( SHIBYTE(v157) < 0 )
            operator delete(*(void **)v156);
          if ( SHIBYTE(v142.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v142.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v147.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v147.__r_.__value_.__l.__data_);
          if ( SHIBYTE(v146.__r_.__value_.__r.__words[2]) < 0 )
          {
            v99 = (void *)v146.__r_.__value_.__r.__words[0];
            goto LABEL_192;
          }
          goto LABEL_193;
        }
        goto LABEL_123;
      }
      v37 = *(_DWORD *)(v21 + 68);
      v38 = v149;
      if ( (unsigned __int64)v149 >= v150 )
      {
        v40 = (char *)__p;
        v41 = (v149 - (_BYTE *)__p) >> 2;
        v42 = v41 + 1;
        if ( (unsigned __int64)(v41 + 1) >> 62 )
          sub_100097888(&__p);
        v43 = v150 - (_QWORD)__p;
        if ( (__int64)(v150 - (_QWORD)__p) >> 1 > v42 )
          v42 = v43 >> 1;
        if ( (unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFFCLL )
          v44 = 0x3FFFFFFFFFFFFFFFLL;
        else
          v44 = v42;
        if ( v44 )
        {
          v45 = sub_10009C294(&v150);
          v40 = (char *)__p;
          v38 = v149;
        }
        else
        {
          v45 = 0LL;
        }
        v46 = (char *)(v45 + 4 * v41);
        *(_DWORD *)v46 = v37;
        v39 = v46 + 4;
        while ( v38 != v40 )
        {
          v47 = *((_DWORD *)v38 - 1);
          v38 -= 4;
          *((_DWORD *)v46 - 1) = v47;
          v46 -= 4;
        }
        __p = v46;
        v149 = v39;
        v150 = v45 + 4 * v44;
        if ( v40 )
          operator delete(v40);
      }
      else
      {
        *(_DWORD *)v149 = v37;
        v39 = v38 + 4;
      }
      v149 = v39;
      v48 = *(int *)(a1[2] + 32);
      if ( v20 < v48 - 1 )
      {
        v49 = *(std::once_flag::_State_type **)(v21 + 48);
        if ( v49 )
        {
          v147.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
          v146.__r_.__value_.__r.__words[0] = v21;
          if ( atomic_load_explicit((atomic_ullong *volatile)v49, memory_order_acquire) != -1LL )
          {
            *(_QWORD *)v156 = &v147;
            *(_QWORD *)&v156[8] = &v146;
            v142.__r_.__value_.__r.__words[0] = (std::string::size_type)v156;
            std::__call_once(v49, &v142, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        if ( (*(_DWORD *)(v21 + 56) & 0xFFFFFFFE) != 0xA )
        {
          std::operator+<char>("Option \"", &__str);
          v100 = std::string::append(&v142, "\" is an atomic type, not a message.");
          v101 = *(_OWORD *)&v100->__r_.__value_.__l.__data_;
          v157 = v100->__r_.__value_.__r.__words[2];
          *(_OWORD *)v156 = v101;
          v100->__r_.__value_.__l.__size_ = 0LL;
          v100->__r_.__value_.__r.__words[2] = 0LL;
          v100->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)v156);
          goto LABEL_140;
        }
        if ( *(_DWORD *)(v21 + 60) == 3 )
        {
          std::operator+<char>("Option field \"", &__str);
          v102 = std::string::append(
                   &v142,
                   "\" is a repeated message. Repeated message options must be initialized using an aggregate value.");
          v103 = *(_OWORD *)&v102->__r_.__value_.__l.__data_;
          v157 = v102->__r_.__value_.__r.__words[2];
          *(_OWORD *)v156 = v103;
          v102->__r_.__value_.__l.__size_ = 0LL;
          v102->__r_.__value_.__r.__words[2] = 0LL;
          v102->__r_.__value_.__r.__words[0] = 0LL;
          google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)v156);
LABEL_140:
          if ( SHIBYTE(v157) < 0 )
            operator delete(*(void **)v156);
          if ( SHIBYTE(v142.__r_.__value_.__r.__words[2]) < 0 )
          {
            v99 = (void *)v142.__r_.__value_.__r.__words[0];
            goto LABEL_192;
          }
          goto LABEL_193;
        }
        v50 = v153;
        if ( (unsigned __int64)v153 >= v154 )
        {
          v52 = (v153 - v152) >> 3;
          if ( (unsigned __int64)(v52 + 1) >> 61 )
            sub_100097888(&v152);
          v53 = (__int64)(v154 - (_QWORD)v152) >> 2;
          if ( v53 <= v52 + 1 )
            v53 = v52 + 1;
          if ( v154 - (unsigned __int64)v152 >= 0x7FFFFFFFFFFFFFF8LL )
            v54 = 0x1FFFFFFFFFFFFFFFLL;
          else
            v54 = v53;
          if ( v54 )
            v55 = sub_10009A09C(&v154);
          else
            v55 = 0LL;
          v56 = (std::string::size_type *)(v55 + 8 * v52);
          *v56 = v21;
          v51 = (char *)(v56 + 1);
          v58 = v152;
          v57 = v153;
          if ( v153 != v152 )
          {
            do
            {
              v59 = *((_QWORD *)v57 - 1);
              v57 -= 8;
              *--v56 = v59;
            }
            while ( v57 != v58 );
            v57 = v152;
          }
          v152 = (char *)v56;
          v153 = v51;
          v154 = v55 + 8 * v54;
          if ( v57 )
            operator delete(v57);
        }
        else
        {
          *(_QWORD *)v153 = v21;
          v51 = v50 + 8;
        }
        v153 = v51;
        v17 = (const std::string::value_type **)google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v21);
        LODWORD(v48) = *(_DWORD *)(a1[2] + 32);
      }
      if ( ++v20 >= (int)v48 )
        goto LABEL_94;
    }
  }
  v21 = 0LL;
LABEL_94:
  if ( *(_DWORD *)(v21 + 60) != 3 )
  {
    v60 = v152;
    v61 = v153;
    (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    UnknownFields = google::protobuf::Reflection::GetUnknownFields(v62, a2);
    if ( (google::protobuf::DescriptorBuilder::OptionInterpreter::ExamineIfOptionIsSet(
            a1,
            v60,
            v61,
            v21,
            &__str,
            UnknownFields) & 1) == 0 )
      goto LABEL_193;
  }
  v64 = (google::protobuf::UnknownFieldSet *)operator new(24LL, 0x20C40960023A9LL);
  *(_QWORD *)v64 = 0LL;
  *((_QWORD *)v64 + 1) = 0LL;
  *((_QWORD *)v64 + 2) = 0LL;
  v144.__r_.__value_.__r.__words[0] = (std::string::size_type)v64;
  if ( (google::protobuf::DescriptorBuilder::OptionInterpreter::SetOptionValue(
          (google::protobuf::DescriptorBuilder::OptionInterpreter *)a1,
          (const google::protobuf::FieldDescriptor *)v21,
          v64) & 1) == 0 )
    goto LABEL_149;
  v65 = v153;
  if ( v153 == v152 )
  {
LABEL_111:
    (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
    v82 = (google::protobuf::UnknownFieldSet *)google::protobuf::Reflection::MutableUnknownFields(v81, a2);
    google::protobuf::UnknownFieldSet::MergeFrom(
      v82,
      (const google::protobuf::UnknownFieldSet *)v144.__r_.__value_.__l.__data_);
    if ( *(_DWORD *)(v21 + 60) == 3 )
    {
      *(_QWORD *)v156 = &__p;
      v83 = sub_10009F724(a1 + 6, &__p, &unk_1001891C0, v156, &v142);
      v84 = *(_DWORD *)(v83 + 56);
      *(_DWORD *)(v83 + 56) = v84 + 1;
      v85 = v149;
      if ( (unsigned __int64)v149 >= v150 )
      {
        v110 = (char *)__p;
        v111 = (v149 - (_BYTE *)__p) >> 2;
        v112 = v111 + 1;
        if ( (unsigned __int64)(v111 + 1) >> 62 )
          sub_100097888(&__p);
        v113 = v150 - (_QWORD)__p;
        if ( (__int64)(v150 - (_QWORD)__p) >> 1 > v112 )
          v112 = v113 >> 1;
        if ( (unsigned __int64)v113 >= 0x7FFFFFFFFFFFFFFCLL )
          v114 = 0x3FFFFFFFFFFFFFFFLL;
        else
          v114 = v112;
        if ( v114 )
        {
          v115 = sub_10009C294(&v150);
          v110 = (char *)__p;
          v85 = v149;
        }
        else
        {
          v115 = 0LL;
        }
        v135 = (char *)(v115 + 4 * v111);
        v136 = v115 + 4 * v114;
        *(_DWORD *)v135 = v84;
        v86 = v135 + 4;
        while ( v85 != v110 )
        {
          v137 = *((_DWORD *)v85 - 1);
          v85 -= 4;
          *((_DWORD *)v135 - 1) = v137;
          v135 -= 4;
        }
        __p = v135;
        v149 = v86;
        v150 = v136;
        if ( v110 )
          operator delete(v110);
      }
      else
      {
        *(_DWORD *)v149 = v84;
        v86 = v85 + 4;
      }
      v149 = v86;
    }
    *(_QWORD *)v156 = v141;
    v138 = (void **)(sub_10009F974(a1 + 3, v141, &unk_1001891C0, v156, &v142) + 56);
    if ( v138 != &__p )
      sub_10009FB00((int)v138, __p);
    v87 = 1LL;
    goto LABEL_204;
  }
  while ( 1 )
  {
    v66 = (_QWORD *)operator new(24LL, 0x20C40960023A9LL);
    *v66 = 0LL;
    v66[1] = 0LL;
    v66[2] = 0LL;
    v143.__r_.__value_.__r.__words[0] = (std::string::size_type)v66;
    v67 = v65 - 8;
    v68 = *((_QWORD *)v65 - 1);
    v69 = *(std::once_flag::_State_type **)(v68 + 48);
    if ( v69 )
    {
      v147.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
      v146.__r_.__value_.__r.__words[0] = v68;
      if ( atomic_load_explicit((atomic_ullong *volatile)v69, memory_order_acquire) != -1LL )
      {
        *(_QWORD *)v156 = &v147;
        *(_QWORD *)&v156[8] = &v146;
        v142.__r_.__value_.__r.__words[0] = (std::string::size_type)v156;
        std::__call_once(v69, &v142, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v70 = *(_DWORD *)(v68 + 56);
    if ( v70 != 10 )
      break;
    v77 = (google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::AddGroup(
                                                 (google::protobuf::UnknownFieldSet *)v143.__r_.__value_.__l.__data_,
                                                 *(_DWORD *)(*((_QWORD *)v65 - 1) + 68LL));
    google::protobuf::UnknownFieldSet::MergeFrom(
      v77,
      (const google::protobuf::UnknownFieldSet *)v144.__r_.__value_.__l.__data_);
LABEL_107:
    v78 = v143.__r_.__value_.__r.__words[0];
    v143.__r_.__value_.__r.__words[0] = 0LL;
    v79 = v144.__r_.__value_.__r.__words[0];
    v144.__r_.__value_.__r.__words[0] = v78;
    if ( v79 )
    {
      sub_10009F6A8(&v144);
      v80 = v143.__r_.__value_.__r.__words[0];
      v143.__r_.__value_.__r.__words[0] = 0LL;
      if ( v80 )
        sub_10009F6A8(&v143);
    }
    v65 -= 8;
    if ( v67 == v152 )
      goto LABEL_111;
  }
  if ( v70 == 11 )
  {
    v71 = google::protobuf::UnknownFieldSet::AddLengthDelimited(
            (google::protobuf::UnknownFieldSet *)v143.__r_.__value_.__l.__data_,
            *(_DWORD *)(*((_QWORD *)v65 - 1) + 68LL));
    google::protobuf::io::StringOutputStream::StringOutputStream(&v147, v71);
    google::protobuf::io::CodedOutputStream::CodedOutputStream(
      (google::protobuf::io::CodedOutputStream *)v156,
      (google::protobuf::io::ZeroCopyOutputStream *)&v147,
      1);
    v159 = (const google::protobuf::UnknownFieldSet *)google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
                                                        (google::protobuf::internal::WireFormat *)v144.__r_.__value_.__l.__data_,
                                                        v159,
                                                        v156,
                                                        v72);
    v159 = (const google::protobuf::UnknownFieldSet *)google::protobuf::io::EpsCopyOutputStream::FlushAndResetBuffer(
                                                        (google::protobuf::io::EpsCopyOutputStream *)v156,
                                                        (unsigned __int8 *)v159);
    if ( v158 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v142,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor.cc",
        6641LL);
      v73 = google::protobuf::internal::LogMessage::operator<<(&v142, "CHECK failed: !out.HadError(): ");
      v74 = google::protobuf::internal::LogMessage::operator<<(
              v73,
              "Unexpected failure while serializing option submessage ");
      v75 = google::protobuf::internal::LogMessage::operator<<(v74, &__str);
      v76 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v75, "\".");
      google::protobuf::internal::LogFinisher::operator=((int)&v146, v76);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v142);
    }
    google::protobuf::io::CodedOutputStream::~CodedOutputStream((google::protobuf::io::CodedOutputStream *)v156);
    goto LABEL_107;
  }
  v104 = google::protobuf::internal::LogMessage::LogMessage(
           v156,
           3LL,
           "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/i"
           "WorkXPC/shared/persistence/google/protobuf/descriptor.cc",
           6654LL);
  v105 = google::protobuf::internal::LogMessage::operator<<(v104, "Invalid wire type for CPPTYPE_MESSAGE: ");
  v106 = *((_QWORD *)v65 - 1);
  v107 = *(std::once_flag::_State_type **)(v106 + 48);
  if ( v107 )
  {
    v146.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
    v145.__r_.__value_.__r.__words[0] = v106;
    if ( atomic_load_explicit((atomic_ullong *volatile)v107, memory_order_acquire) != -1LL )
    {
      v142.__r_.__value_.__r.__words[0] = (std::string::size_type)&v146;
      v142.__r_.__value_.__l.__size_ = (std::string::size_type)&v145;
      v147.__r_.__value_.__r.__words[0] = (std::string::size_type)&v142;
      std::__call_once(v107, &v147, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v108 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v105,
                                                     *(unsigned int *)(v106 + 56));
  google::protobuf::internal::LogFinisher::operator=((int)&v142, v108);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v156);
  v109 = v143.__r_.__value_.__r.__words[0];
  v143.__r_.__value_.__r.__words[0] = 0LL;
  if ( v109 )
    sub_10009F6A8(&v143);
LABEL_149:
  v87 = 0LL;
LABEL_204:
  v139 = v144.__r_.__value_.__r.__words[0];
  v144.__r_.__value_.__r.__words[0] = 0LL;
  if ( v139 )
    sub_10009F6A8(&v144);
LABEL_206:
  if ( __p )
  {
    v149 = (char *)__p;
    operator delete(__p);
  }
  if ( SHIBYTE(__str.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__str.__r_.__value_.__l.__data_);
  if ( v152 )
  {
    v153 = v152;
    operator delete(v152);
  }
  return v87;
}