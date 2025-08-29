__ZN6google8protobuf17DescriptorBuilder21BuildFieldOrExtensionERKNS0_20FieldDescriptorProtoEPNS0_10DescriptorEPNS0_15FieldDescriptorEb
void __fastcall google::protobuf::DescriptorBuilder::BuildFieldOrExtension(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::FieldDescriptorProto *a2,
        std::string::size_type *a3,
        google::protobuf::FieldDescriptor *a4,
        int a5)
{
  __int64 **v10; // x8
  void **NameString; // x24
  _QWORD *v12; // x25
  __int64 v13; // x8
  int v14; // w9
  unsigned __int64 v15; // x8
  __int128 v16; // q0
  char *v17; // x8
  void *v18; // x2
  void **v19; // x10
  void **v20; // x9
  int v21; // w8
  unsigned __int64 v22; // x24
  void *v23; // x10
  void *v24; // x11
  int v25; // w9
  unsigned __int8 *v26; // x1
  void **v27; // x9
  _QWORD *v28; // x24
  _QWORD *v29; // x25
  _QWORD *v30; // x24
  char **v31; // x2
  _QWORD *v32; // x24
  int32x2_t v33; // d0
  __int64 v34; // x24
  std::string *v35; // x0
  __int128 v36; // q0
  int v37; // w8
  int v38; // w8
  __int64 v39; // x23
  int v40; // w8
  std::once_flag::_State_type *v41; // x0
  __int64 v42; // x24
  char *v43; // x2
  google::protobuf *v44; // x0
  __int64 v45; // x8
  std::once_flag::_State_type *v46; // x0
  int v47; // w8
  unsigned __int64 v48; // x0
  int v49; // w0
  __int64 v50; // x23
  std::string::size_type v51; // x8
  int v52; // w9
  __int64 v53; // x11
  int v54; // w8
  __int64 v55; // x23
  unsigned __int64 v56; // x0
  unsigned __int64 String; // x0
  unsigned __int64 v58; // x0
  unsigned __int64 v59; // x0
  __int64 v60; // x8
  unsigned __int64 v61; // x0
  int v62; // w9
  unsigned __int16 *v63; // x8
  __int64 v64; // x8
  unsigned __int64 v65; // x0
  int v66; // w9
  unsigned __int16 *v67; // x8
  __int64 v68; // x8
  unsigned __int64 v69; // x0
  int v70; // w9
  _DWORD *v71; // x8
  std::once_flag::_State_type *v72; // x0
  _QWORD *v73; // x24
  int v74; // w9
  int v75; // w8
  unsigned __int64 v77; // x8
  int v78; // w9
  int v79; // w8
  int v81; // w8
  char *v82; // x0
  __int64 v83; // d0
  char *v84; // x0
  google::protobuf::io *v85; // x0
  double v86; // d0
  int v87; // s0
  unsigned __int64 v88; // x1
  __int64 v89; // x24
  std::string *v90; // x0
  __int128 v91; // q0
  __int128 v92; // [xsp+0h] [xbp-300h]
  __int128 v93; // [xsp+0h] [xbp-300h]
  __int128 v94; // [xsp+0h] [xbp-300h]
  void *__p[2]; // [xsp+18h] [xbp-2E8h] BYREF
  char v96; // [xsp+2Fh] [xbp-2D1h]
  __int64 v97[2]; // [xsp+30h] [xbp-2D0h] BYREF
  __int64 v98[2]; // [xsp+40h] [xbp-2C0h] BYREF
  __int64 v99[2]; // [xsp+50h] [xbp-2B0h] BYREF
  __int64 v100[2]; // [xsp+60h] [xbp-2A0h] BYREF
  __int64 v101[2]; // [xsp+70h] [xbp-290h] BYREF
  __int64 v102[2]; // [xsp+80h] [xbp-280h] BYREF
  void *__s1[2]; // [xsp+90h] [xbp-270h] BYREF
  __int64 v104; // [xsp+A0h] [xbp-260h]
  __int64 v105[2]; // [xsp+B0h] [xbp-250h] BYREF
  __int64 v106; // [xsp+C0h] [xbp-240h] BYREF
  int v107; // [xsp+C8h] [xbp-238h]
  __int64 v108; // [xsp+F0h] [xbp-210h] BYREF
  int v109; // [xsp+F8h] [xbp-208h]
  __int64 v110; // [xsp+120h] [xbp-1E0h] BYREF
  int v111; // [xsp+128h] [xbp-1D8h]
  __int64 v112; // [xsp+150h] [xbp-1B0h] BYREF
  int v113; // [xsp+158h] [xbp-1A8h]
  __int64 v114; // [xsp+180h] [xbp-180h] BYREF
  int v115; // [xsp+188h] [xbp-178h]
  char *__endptr; // [xsp+1B0h] [xbp-150h] BYREF
  int v117; // [xsp+1B8h] [xbp-148h]
  google::protobuf::FieldDescriptor *v118; // [xsp+1E0h] [xbp-120h] BYREF
  int v119; // [xsp+1E8h] [xbp-118h]
  __int64 (__fastcall *v120)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+210h] [xbp-F0h] BYREF
  int v121; // [xsp+218h] [xbp-E8h]
  std::string v122; // [xsp+240h] [xbp-C0h] BYREF
  __int128 v123; // [xsp+270h] [xbp-90h] BYREF
  std::string::size_type v124; // [xsp+280h] [xbp-80h]

  if ( a3 )
    v10 = (__int64 **)(a3 + 1);
  else
    v10 = (__int64 **)(*((_QWORD *)this + 10) + 8LL);
  NameString = google::protobuf::DescriptorBuilder::AllocateNameString(
                 (__int64)this,
                 *v10,
                 (__int64 *)(*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL));
  google::protobuf::DescriptorBuilder::ValidateSymbolName(
    (__int64)this,
    (unsigned __int8 *)(*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL),
    (__int64)NameString,
    (__int64)a2);
  v12 = (_QWORD *)*((_QWORD *)this + 1);
  sub_10007A644(v105, *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL);
  *(_QWORD *)a4 = google::protobuf::DescriptorPool::Tables::AllocateString(v12, v105[0], v105[1]);
  *((_QWORD *)a4 + 1) = NameString;
  v13 = *((_QWORD *)this + 10);
  *((_QWORD *)a4 + 5) = v13;
  *((_DWORD *)a4 + 17) = *((_DWORD *)a2 + 18);
  *((_BYTE *)a4 + 67) = a5;
  v14 = *((unsigned __int8 *)a2 + 80);
  *((_BYTE *)a4 + 65) = v14;
  if ( v14 )
  {
    if ( *(_DWORD *)(v13 + 60) != 3 )
    {
      std::operator+<char>("The [proto3_optional=true] option may only be set on proto3fields, not ", NameString);
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        (__int64)NameString,
        (__int64)a2,
        2LL,
        (__int64)&v123);
      if ( SHIBYTE(v124) < 0 )
        operator delete((void *)v123);
    }
  }
  v15 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
  if ( *(char *)(v15 + 23) < 0 )
  {
    sub_10007A474(__s1, *(void **)v15);
  }
  else
  {
    v16 = *(_OWORD *)v15;
    v104 = *(_QWORD *)(v15 + 16);
    *(_OWORD *)__s1 = v16;
  }
  v17 = (char *)HIBYTE(v104);
  v19 = (void **)__s1[0];
  v18 = __s1[1];
  if ( v104 >= 0 )
    v20 = (void **)((char *)__s1 + HIBYTE(v104));
  else
    v20 = (void **)((char *)__s1[0] + (unsigned __int64)__s1[1]);
  if ( v104 >= 0 )
    v19 = __s1;
  if ( v19 != v20 )
  {
    do
    {
      v21 = *(unsigned __int8 *)v19;
      if ( (unsigned int)(v21 - 65) <= 0x19 )
        *(_BYTE *)v19 = v21 + 32;
      v19 = (void **)((char *)v19 + 1);
    }
    while ( v19 != v20 );
    v17 = (char *)HIBYTE(v104);
    v18 = __s1[1];
  }
  v22 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
  if ( (char)v17 >= 0 )
    v23 = v17;
  else
    v23 = v18;
  v24 = (void *)*(unsigned __int8 *)(v22 + 23);
  v25 = (char)v24;
  if ( (char)v24 < 0 )
    v24 = *(void **)(v22 + 8);
  if ( v23 != v24 )
    goto LABEL_37;
  if ( v25 >= 0 )
    v26 = (unsigned __int8 *)(*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL);
  else
    v26 = *(unsigned __int8 **)v22;
  if ( ((unsigned __int8)v17 & 0x80) != 0 )
  {
    if ( !memcmp(__s1[0], v26, (size_t)v18) )
      goto LABEL_38;
LABEL_37:
    v28 = (_QWORD *)*((_QWORD *)this + 1);
    sub_10007A644(v102, __s1);
    *((_QWORD *)a4 + 2) = google::protobuf::DescriptorPool::Tables::AllocateString(v28, v102[0], v102[1]);
    v22 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_39;
  }
  if ( (_DWORD)v17 )
  {
    v27 = __s1;
    while ( *(unsigned __int8 *)v27 == *v26 )
    {
      v27 = (void **)((char *)v27 + 1);
      ++v26;
      if ( !--v17 )
        goto LABEL_38;
    }
    goto LABEL_37;
  }
LABEL_38:
  *((_QWORD *)a4 + 2) = *(_QWORD *)a4;
LABEL_39:
  v29 = (_QWORD *)*((_QWORD *)this + 1);
  sub_10008D8A4(&v123, v22, 1LL);
  sub_10007A644(v101, &v123);
  *((_QWORD *)a4 + 3) = google::protobuf::DescriptorPool::Tables::AllocateString(v29, v101[0], v101[1]);
  if ( SHIBYTE(v124) < 0 )
    operator delete((void *)v123);
  if ( (*((_BYTE *)a2 + 16) & 0x10) != 0 )
  {
    *((_BYTE *)a4 + 66) = 1;
    v32 = (_QWORD *)*((_QWORD *)this + 1);
    sub_10007A644(v100, *((_QWORD *)a2 + 7) & 0xFFFFFFFFFFFFFFFELL);
    *((_QWORD *)a4 + 4) = google::protobuf::DescriptorPool::Tables::AllocateString(v32, v100[0], v100[1]);
  }
  else
  {
    *((_BYTE *)a4 + 66) = 0;
    v30 = (_QWORD *)*((_QWORD *)this + 1);
    sub_10008D9BC(&v123, *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFELL);
    sub_10007A644(v99, &v123);
    *((_QWORD *)a4 + 4) = google::protobuf::DescriptorPool::Tables::AllocateString(v30, v99[0], v99[1]);
    if ( SHIBYTE(v124) < 0 )
      operator delete((void *)v123);
  }
  v33 = *(int32x2_t *)((char *)a2 + 84);
  *((int32x2_t *)a4 + 7) = vrev64_s32(v33);
  if ( v33.i32[0] == 2 && *((_BYTE *)a4 + 67) )
  {
    v34 = *((_QWORD *)a4 + 1);
    std::operator+<char>("The extension ", v34);
    v35 = std::string::append(&v122, " cannot be required.");
    v36 = *(_OWORD *)&v35->__r_.__value_.__l.__data_;
    v124 = v35->__r_.__value_.__r.__words[2];
    v123 = v36;
    v35->__r_.__value_.__l.__size_ = 0LL;
    v35->__r_.__value_.__r.__words[2] = 0LL;
    v35->__r_.__value_.__r.__words[0] = 0LL;
    google::protobuf::DescriptorBuilder::AddError((__int64)this, v34, (__int64)a2, 2LL, (__int64)&v123);
    if ( SHIBYTE(v124) < 0 )
      operator delete((void *)v123);
    if ( SHIBYTE(v122.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v122.__r_.__value_.__l.__data_);
  }
  *((_QWORD *)a4 + 12) = 0LL;
  *((_QWORD *)a4 + 10) = 0LL;
  *((_QWORD *)a4 + 6) = 0LL;
  *((_QWORD *)a4 + 13) = 0LL;
  *((_QWORD *)a4 + 14) = 0LL;
  *((_QWORD *)a4 + 17) = 0LL;
  *((_QWORD *)a4 + 18) = 0LL;
  *((_QWORD *)a4 + 16) = 0LL;
  v37 = *((_DWORD *)a2 + 4);
  *((_BYTE *)a4 + 64) = (v37 & 8) != 0;
  if ( (v37 & 8) != 0 && *((_DWORD *)a4 + 15) == 3 )
  {
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a4 + 1),
      (__int64)a2,
      4LL,
      "Repeated fields can't have default values.");
    v37 = *((_DWORD *)a2 + 4);
  }
  if ( (v37 & 0x400) != 0 )
  {
    if ( (v37 & 8) == 0 )
    {
      v41 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
      if ( v41 )
      {
        v120 = google::protobuf::FieldDescriptor::TypeOnceInit;
        v118 = a4;
        if ( atomic_load_explicit((atomic_ullong *volatile)v41, memory_order_acquire) != -1LL )
        {
          *(_QWORD *)&v123 = &v120;
          *((_QWORD *)&v123 + 1) = &v118;
          v122.__r_.__value_.__r.__words[0] = (std::string::size_type)&v123;
          std::__call_once(v41, &v122, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *((_DWORD *)a4 + 14) )
      {
        case 1:
        case 3:
        case 4:
        case 6:
        case 0xE:
        case 0x10:
        case 0x12:
          *((_QWORD *)a4 + 18) = 0LL;
          break;
        case 2:
        case 5:
        case 7:
        case 0xD:
        case 0xF:
        case 0x11:
          *((_DWORD *)a4 + 36) = 0;
          break;
        case 8:
          *((_BYTE *)a4 + 144) = 0;
          break;
        case 9:
        case 0xC:
          if ( (atomic_load_explicit(google::protobuf::internal::init_protobuf_defaults_state, memory_order_acquire) & 1) == 0 )
            google::protobuf::internal::InitProtobufDefaultsSlow((google::protobuf::internal *)v41);
          *((_QWORD *)a4 + 18) = &google::protobuf::internal::fixed_address_empty_string;
          break;
        case 0xA:
        case 0xB:
          atomic_store(0LL, (unsigned __int64 *)a4 + 18);
          break;
        default:
          goto LABEL_55;
      }
      goto LABEL_55;
    }
    __endptr = 0LL;
    v46 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
    if ( v46 )
    {
      v120 = google::protobuf::FieldDescriptor::TypeOnceInit;
      v118 = a4;
      if ( atomic_load_explicit((atomic_ullong *volatile)v46, memory_order_acquire) != -1LL )
      {
        *(_QWORD *)&v123 = &v120;
        *((_QWORD *)&v123 + 1) = &v118;
        v122.__r_.__value_.__r.__words[0] = (std::string::size_type)&v123;
        std::__call_once(v46, &v122, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v47 = *((_DWORD *)a4 + 14);
    switch ( v47 )
    {
      case 1:
        v60 = *((_QWORD *)a2 + 6);
        v61 = v60 & 0xFFFFFFFFFFFFFFFELL;
        v62 = *(char *)((v60 & 0xFFFFFFFFFFFFFFFELL) + 23);
        if ( v62 < 0 )
        {
          if ( *(_QWORD *)(v61 + 8) != 3LL )
          {
LABEL_144:
            if ( (unsigned int)sub_100089650(v61, "-inf") )
            {
              v77 = 0xFFF0000000000000LL;
LABEL_171:
              *((_QWORD *)a4 + 18) = v77;
              goto LABEL_174;
            }
            if ( (unsigned int)sub_100089650((unsigned int)*((_QWORD *)a2 + 6) & 0xFFFFFFFE, "nan") )
            {
              v77 = 0x7FF8000000000000LL;
              goto LABEL_171;
            }
            v82 = (char *)(*((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL);
            if ( v82[23] < 0 )
              v82 = *(char **)v82;
            google::protobuf::io::NoLocaleStrtod((google::protobuf::io *)v82, (const char *)&__endptr, v31);
            *((_QWORD *)a4 + 18) = v83;
LABEL_174:
            if ( !__endptr )
              break;
            v88 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
            if ( *(char *)(v88 + 23) < 0 )
            {
              if ( !*(_QWORD *)(v88 + 8) )
              {
LABEL_180:
                v89 = *((_QWORD *)a4 + 1);
                std::operator+<char>("Couldn't parse default value \"", v88);
                v90 = std::string::append(&v122, "\".");
                v91 = *(_OWORD *)&v90->__r_.__value_.__l.__data_;
                v124 = v90->__r_.__value_.__r.__words[2];
                v123 = v91;
                v90->__r_.__value_.__l.__size_ = 0LL;
                v90->__r_.__value_.__r.__words[2] = 0LL;
                v90->__r_.__value_.__r.__words[0] = 0LL;
                google::protobuf::DescriptorBuilder::AddError((__int64)this, v89, (__int64)a2, 4LL, (__int64)&v123);
                if ( SHIBYTE(v124) < 0 )
                  operator delete((void *)v123);
                if ( SHIBYTE(v122.__r_.__value_.__r.__words[2]) < 0 )
                  operator delete(v122.__r_.__value_.__l.__data_);
                break;
              }
            }
            else if ( !*(_BYTE *)(v88 + 23) )
            {
              goto LABEL_180;
            }
            if ( !*__endptr )
              break;
            goto LABEL_180;
          }
          v63 = *(unsigned __int16 **)v61;
        }
        else
        {
          v63 = (unsigned __int16 *)(v60 & 0xFFFFFFFFFFFFFFFELL);
          if ( v62 != 3 )
            goto LABEL_144;
        }
        v74 = *v63;
        v75 = *((unsigned __int8 *)v63 + 2);
        if ( v74 == 28265 && v75 == 102 )
        {
          v77 = 0x7FF0000000000000LL;
          goto LABEL_171;
        }
        goto LABEL_144;
      case 2:
        v64 = *((_QWORD *)a2 + 6);
        v65 = v64 & 0xFFFFFFFFFFFFFFFELL;
        v66 = *(char *)((v64 & 0xFFFFFFFFFFFFFFFELL) + 23);
        if ( v66 < 0 )
        {
          if ( *(_QWORD *)(v65 + 8) != 3LL )
            goto LABEL_154;
          v67 = *(unsigned __int16 **)v65;
        }
        else
        {
          v67 = (unsigned __int16 *)(v64 & 0xFFFFFFFFFFFFFFFELL);
          if ( v66 != 3 )
            goto LABEL_154;
        }
        v78 = *v67;
        v79 = *((unsigned __int8 *)v67 + 2);
        if ( v78 == 28265 && v79 == 102 )
        {
          v81 = 2139095040;
          goto LABEL_173;
        }
LABEL_154:
        if ( (unsigned int)sub_100089650(v65, "-inf") )
        {
          v81 = -8388608;
        }
        else
        {
          if ( !(unsigned int)sub_100089650((unsigned int)*((_QWORD *)a2 + 6) & 0xFFFFFFFE, "nan") )
          {
            v84 = (char *)(*((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL);
            if ( v84[23] < 0 )
              v84 = *(char **)v84;
            v85 = (google::protobuf::io *)google::protobuf::io::NoLocaleStrtod(
                                            (google::protobuf::io *)v84,
                                            (const char *)&__endptr,
                                            v31);
            google::protobuf::io::SafeDoubleToFloat(v85, v86);
            *((_DWORD *)a4 + 36) = v87;
            goto LABEL_174;
          }
          v81 = 2143289344;
        }
LABEL_173:
        *((_DWORD *)a4 + 36) = v81;
        goto LABEL_174;
      case 3:
      case 16:
      case 18:
        v56 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
        if ( *(char *)(v56 + 23) < 0 )
          v56 = *(_QWORD *)v56;
        String = strtoll((const char *)v56, &__endptr, 0);
        goto LABEL_137;
      case 4:
      case 6:
        v59 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
        if ( *(char *)(v59 + 23) < 0 )
          v59 = *(_QWORD *)v59;
        String = strtoull((const char *)v59, &__endptr, 0);
        goto LABEL_137;
      case 5:
      case 15:
      case 17:
        v48 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
        if ( *(char *)(v48 + 23) < 0 )
          v48 = *(_QWORD *)v48;
        v49 = strtol((const char *)v48, &__endptr, 0);
        goto LABEL_114;
      case 7:
      case 13:
        v58 = *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL;
        if ( *(char *)(v58 + 23) < 0 )
          v58 = *(_QWORD *)v58;
        v49 = strtoul((const char *)v58, &__endptr, 0);
LABEL_114:
        *((_DWORD *)a4 + 36) = v49;
        goto LABEL_174;
      case 8:
        v68 = *((_QWORD *)a2 + 6);
        v69 = v68 & 0xFFFFFFFFFFFFFFFELL;
        v70 = *(char *)((v68 & 0xFFFFFFFFFFFFFFFELL) + 23);
        if ( v70 < 0 )
        {
          if ( *(_QWORD *)(v69 + 8) != 4LL )
            goto LABEL_161;
          v71 = *(_DWORD **)v69;
        }
        else
        {
          v71 = (_DWORD *)(v68 & 0xFFFFFFFFFFFFFFFELL);
          if ( v70 != 4 )
            goto LABEL_161;
        }
        if ( *v71 == 1702195828 )
        {
          *((_BYTE *)a4 + 144) = 1;
          goto LABEL_174;
        }
LABEL_161:
        if ( (unsigned int)sub_100089650(v69, "false") )
          *((_BYTE *)a4 + 144) = 0;
        else
          google::protobuf::DescriptorBuilder::AddError(
            (__int64)this,
            *((_QWORD *)a4 + 1),
            (__int64)a2,
            4LL,
            "Boolean default must be true or false.");
        goto LABEL_174;
      case 9:
      case 12:
        v72 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
        if ( v72 )
        {
          v120 = google::protobuf::FieldDescriptor::TypeOnceInit;
          v118 = a4;
          if ( atomic_load_explicit((atomic_ullong *volatile)v72, memory_order_acquire) != -1LL )
          {
            *(_QWORD *)&v123 = &v120;
            *((_QWORD *)&v123 + 1) = &v118;
            v122.__r_.__value_.__r.__words[0] = (std::string::size_type)&v123;
            std::__call_once(v72, &v122, (void (__cdecl *)(void *))sub_10007A460);
          }
          v47 = *((_DWORD *)a4 + 14);
        }
        v73 = (_QWORD *)*((_QWORD *)this + 1);
        if ( v47 == 12 )
        {
          google::protobuf::UnescapeCEscapeString(&v123, *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL);
          sub_10007A644(v98, &v123);
          *((_QWORD *)a4 + 18) = google::protobuf::DescriptorPool::Tables::AllocateString(v73, v98[0], v98[1]);
          if ( SHIBYTE(v124) < 0 )
            operator delete((void *)v123);
        }
        else
        {
          sub_10007A644(v97, *((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFFELL);
          String = (unsigned __int64)google::protobuf::DescriptorPool::Tables::AllocateString(v73, v97[0], v97[1]);
LABEL_137:
          *((_QWORD *)a4 + 18) = String;
        }
        goto LABEL_174;
      case 10:
      case 11:
        google::protobuf::DescriptorBuilder::AddError(
          (__int64)this,
          *((_QWORD *)a4 + 1),
          (__int64)a2,
          4LL,
          "Messages can't have default values.");
        *((_BYTE *)a4 + 64) = 0;
        atomic_store(0LL, (unsigned __int64 *)a4 + 18);
        goto LABEL_174;
      case 14:
        *((_QWORD *)a4 + 18) = 0LL;
        goto LABEL_174;
      default:
        goto LABEL_174;
    }
  }
LABEL_55:
  v38 = *((_DWORD *)a4 + 17);
  if ( v38 <= 0 )
  {
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a4 + 1),
      (__int64)a2,
      1LL,
      "Field numbers must be positive integers.");
  }
  else
  {
    if ( (unsigned int)v38 >> 29 && (a5 & 1) == 0 )
    {
      v39 = *((_QWORD *)a4 + 1);
      *(_QWORD *)&v123 = google::protobuf::FastInt32ToBuffer(
                           (google::protobuf *)0x1FFFFFFF,
                           (int)&v123 + 12,
                           (char *)v31);
      DWORD2(v123) = strlen((const char *)v123);
      v122.__r_.__value_.__r.__words[0] = 0LL;
      LODWORD(v122.__r_.__value_.__r.__words[1]) = -1;
      v120 = 0LL;
      v121 = -1;
      v118 = 0LL;
      v119 = -1;
      __endptr = 0LL;
      v117 = -1;
      v114 = 0LL;
      v115 = -1;
      v112 = 0LL;
      v113 = -1;
      v110 = 0LL;
      v111 = -1;
      v108 = 0LL;
      v109 = -1;
      v106 = 0LL;
      v107 = -1;
      *(_QWORD *)&v92 = &v110;
      *((_QWORD *)&v92 + 1) = &v108;
      google::protobuf::strings::Substitute(
        (__int64 *)__p,
        (int)"Field numbers cannot be greater than $0.",
        (int)&v123,
        (int)&v122,
        (int)&v120,
        (int)&v118,
        (int)&__endptr,
        (int)&v114,
        (int)&v112,
        v92,
        (__int64)&v106);
      google::protobuf::DescriptorBuilder::AddError((__int64)this, v39, (__int64)a2, 1LL, (__int64)__p);
      if ( v96 < 0 )
        operator delete(__p[0]);
      v40 = *((_DWORD *)a2 + 4);
      goto LABEL_76;
    }
    if ( (unsigned int)(v38 - 19000) <= 0x3E7 )
    {
      v42 = *((_QWORD *)a4 + 1);
      *(_QWORD *)&v123 = google::protobuf::FastInt32ToBuffer((google::protobuf *)0x4A38, (int)&v123 + 12, (char *)v31);
      DWORD2(v123) = strlen((const char *)v123);
      v122.__r_.__value_.__r.__words[0] = google::protobuf::FastInt32ToBuffer(
                                            (google::protobuf *)0x4E1F,
                                            (int)&v122.__r_.__value_.__r.__words[1] + 4,
                                            v43);
      LODWORD(v122.__r_.__value_.__r.__words[1]) = strlen(v122.__r_.__value_.__l.__data_);
      v120 = 0LL;
      v121 = -1;
      v118 = 0LL;
      v119 = -1;
      __endptr = 0LL;
      v117 = -1;
      v114 = 0LL;
      v115 = -1;
      v112 = 0LL;
      v113 = -1;
      v110 = 0LL;
      v111 = -1;
      v108 = 0LL;
      v109 = -1;
      v106 = 0LL;
      v107 = -1;
      *(_QWORD *)&v93 = &v110;
      *((_QWORD *)&v93 + 1) = &v108;
      google::protobuf::strings::Substitute(
        (__int64 *)__p,
        (int)"Field numbers $0 through $1 are reserved for the protocol buffer library implementation.",
        (int)&v123,
        (int)&v122,
        (int)&v120,
        (int)&v118,
        (int)&__endptr,
        (int)&v114,
        (int)&v112,
        v93,
        (__int64)&v106);
      google::protobuf::DescriptorBuilder::AddError((__int64)this, v42, (__int64)a2, 1LL, (__int64)__p);
      if ( v96 < 0 )
        operator delete(__p[0]);
    }
  }
  v40 = *((_DWORD *)a2 + 4);
  if ( a5 )
  {
    if ( (v40 & 2) == 0 )
    {
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a4 + 1),
        (__int64)a2,
        3LL,
        "FieldDescriptorProto.extendee not set for extension field.");
      v40 = *((_DWORD *)a2 + 4);
    }
    *((_QWORD *)a4 + 12) = a3;
    if ( (v40 & 0x80) != 0 )
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)this,
        *((_QWORD *)a4 + 1),
        (__int64)a2,
        2LL,
        "FieldDescriptorProto.oneof_index should not be set for extensions.");
    goto LABEL_95;
  }
LABEL_76:
  if ( (v40 & 2) != 0 )
  {
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      *((_QWORD *)a4 + 1),
      (__int64)a2,
      3LL,
      "FieldDescriptorProto.extendee set for non-extension field.");
    v40 = *((_DWORD *)a2 + 4);
  }
  *((_QWORD *)a4 + 10) = a3;
  if ( (v40 & 0x80) == 0 )
    goto LABEL_95;
  v44 = (google::protobuf *)*((unsigned int *)a2 + 19);
  if ( ((unsigned int)v44 & 0x80000000) != 0 || (int)v44 >= *((_DWORD *)a3 + 27) )
  {
    v50 = *((_QWORD *)a4 + 1);
    *(_QWORD *)&v123 = google::protobuf::FastInt32ToBuffer(v44, (int)&v123 + 12, (char *)v31);
    DWORD2(v123) = strlen((const char *)v123);
    v51 = *a3;
    v52 = *(char *)(*a3 + 23);
    v53 = *(_QWORD *)(*a3 + 8);
    if ( v52 < 0 )
      v51 = *(_QWORD *)*a3;
    v122.__r_.__value_.__r.__words[0] = v51;
    v54 = (unsigned __int8)v52;
    if ( v52 < 0 )
      v54 = v53;
    LODWORD(v122.__r_.__value_.__r.__words[1]) = v54;
    v120 = 0LL;
    v121 = -1;
    v118 = 0LL;
    v119 = -1;
    __endptr = 0LL;
    v117 = -1;
    v114 = 0LL;
    v115 = -1;
    v112 = 0LL;
    v113 = -1;
    v110 = 0LL;
    v111 = -1;
    v108 = 0LL;
    v109 = -1;
    v106 = 0LL;
    v107 = -1;
    *(_QWORD *)&v94 = &v110;
    *((_QWORD *)&v94 + 1) = &v108;
    google::protobuf::strings::Substitute(
      (__int64 *)__p,
      (int)"FieldDescriptorProto.oneof_index $0 is out of range for type \"$1\".",
      (int)&v123,
      (int)&v122,
      (int)&v120,
      (int)&v118,
      (int)&__endptr,
      (int)&v114,
      (int)&v112,
      v94,
      (__int64)&v106);
    google::protobuf::DescriptorBuilder::AddError((__int64)this, v50, (__int64)a2, 2LL, (__int64)__p);
    if ( v96 < 0 )
      operator delete(__p[0]);
LABEL_95:
    v45 = 0LL;
    goto LABEL_96;
  }
  v45 = a3[6] + 48LL * (unsigned int)v44;
LABEL_96:
  *((_QWORD *)a4 + 11) = v45;
  *((_QWORD *)a4 + 15) = 0LL;
  if ( (*((_BYTE *)a2 + 16) & 0x20) != 0 )
  {
    v55 = *((_QWORD *)a2 + 8);
    sub_10007A754((int)&v123, "google.protobuf.FieldOptions");
    sub_10008DA90(this, v55, a4, 8LL, &v123);
    if ( SHIBYTE(v124) < 0 )
      operator delete((void *)v123);
  }
  google::protobuf::DescriptorBuilder::AddSymbol(
    (__int64)this,
    *((std::string **)a4 + 1),
    (__int64)a3,
    *(char **)a4,
    (__int64)a2,
    2LL,
    (__int64)a4);
  if ( SHIBYTE(v104) < 0 )
    operator delete(__s1[0]);
}