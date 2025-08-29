__ZNK6google8protobuf15FieldDescriptor11DebugStringEiPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_18DebugStringOptionsE
void __fastcall google::protobuf::FieldDescriptor::DebugString(__int64 a1, __int64 a2, std::string *a3, __int64 a4)
{
  std::once_flag::_State_type *v8; // x0
  __int64 v9; // x0
  void *v10; // x9
  int v11; // w8
  __int64 v12; // x0
  std::string *p_p; // x9
  int v14; // w8
  std::once_flag::_State_type *v15; // x0
  std::string::value_type SourceLocation; // w0
  char *v17; // x2
  int v18; // w8
  void **v19; // x9
  int v20; // w8
  __int64 (__fastcall **v21)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // x9
  int v22; // w8
  std::string *v23; // x9
  std::once_flag::_State_type *v24; // x0
  __int64 (__fastcall ***v25)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // x0
  __int64 (__fastcall *v26)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // x8
  int v27; // w9
  __int64 (__fastcall *v28)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // x11
  int v29; // w8
  char *v30; // x2
  std::string *v31; // x9
  int v32; // w8
  const std::string::value_type *v33; // x1
  std::string *v34; // x1
  std::string::size_type v35; // x2
  int v36; // w23
  const std::string::value_type *v37; // x1
  std::string *v38; // x1
  std::string::size_type v39; // x2
  std::once_flag::_State_type *v40; // x0
  const std::string::value_type *v41; // x1
  __int64 v42; // x0
  __int128 v43; // [xsp+0h] [xbp-330h]
  __int128 v44; // [xsp+0h] [xbp-330h]
  __int128 v45; // [xsp+0h] [xbp-330h]
  void *v46; // [xsp+20h] [xbp-310h] BYREF
  __int64 v47; // [xsp+28h] [xbp-308h]
  unsigned __int8 v48; // [xsp+37h] [xbp-2F9h]
  void *__p; // [xsp+38h] [xbp-2F8h] BYREF
  __int64 v50; // [xsp+40h] [xbp-2F0h]
  unsigned __int8 v51; // [xsp+4Fh] [xbp-2E1h]
  std::string v52; // [xsp+50h] [xbp-2E0h] BYREF
  void *__b[2]; // [xsp+70h] [xbp-2C0h] BYREF
  __int64 v54; // [xsp+80h] [xbp-2B0h]
  void *v55; // [xsp+88h] [xbp-2A8h] BYREF
  __int64 v56; // [xsp+90h] [xbp-2A0h]
  unsigned __int8 v57; // [xsp+9Fh] [xbp-291h]
  std::string v58; // [xsp+B8h] [xbp-278h] BYREF
  __int128 v59; // [xsp+D0h] [xbp-260h]
  __int128 v60; // [xsp+E0h] [xbp-250h]
  __int128 v61; // [xsp+F0h] [xbp-240h]
  __int128 v62; // [xsp+100h] [xbp-230h] BYREF
  __int64 v63; // [xsp+110h] [xbp-220h]
  __int16 v64; // [xsp+118h] [xbp-218h]
  char v65; // [xsp+11Ah] [xbp-216h]
  __int128 v66; // [xsp+120h] [xbp-210h] BYREF
  __int64 v67; // [xsp+130h] [xbp-200h]
  __int64 v68; // [xsp+138h] [xbp-1F8h] BYREF
  int v69; // [xsp+140h] [xbp-1F0h]
  __int64 v70; // [xsp+168h] [xbp-1C8h] BYREF
  int v71; // [xsp+170h] [xbp-1C0h]
  __int64 (__fastcall *v72)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+198h] [xbp-198h] BYREF
  int v73; // [xsp+1A0h] [xbp-190h]
  const char **v74; // [xsp+1C8h] [xbp-168h] BYREF
  int v75; // [xsp+1D0h] [xbp-160h]
  __int64 (__fastcall **v76)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+1F8h] [xbp-138h] BYREF
  __int64 *v77; // [xsp+200h] [xbp-130h] BYREF
  __int64 (__fastcall *v78)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+228h] [xbp-108h] BYREF
  int v79; // [xsp+230h] [xbp-100h]
  __int64 (__fastcall ***v80)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+258h] [xbp-D8h] BYREF
  int v81; // [xsp+260h] [xbp-D0h]
  __int64 (__fastcall **v82)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+288h] [xbp-A8h] BYREF
  const char **v83; // [xsp+290h] [xbp-A0h]
  std::string *v84; // [xsp+2B8h] [xbp-78h] BYREF
  __int64 v85; // [xsp+2C0h] [xbp-70h]
  __int64 v86; // [xsp+2C8h] [xbp-68h]

  sub_10009C1E8(__b, 2 * (int)a2, 32);
  memset(&v52, 0, sizeof(v52));
  v8 = *(std::once_flag::_State_type **)(a1 + 48);
  if ( v8 )
  {
    v82 = (__int64 (__fastcall **)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))google::protobuf::FieldDescriptor::TypeOnceInit;
    v80 = (__int64 (__fastcall ***)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))a1;
    if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
    {
      v58.__r_.__value_.__r.__words[0] = (std::string::size_type)&v82;
      v58.__r_.__value_.__l.__size_ = (std::string::size_type)&v80;
      v84 = &v58;
      std::__call_once(v8, &v84, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *(_DWORD *)(a1 + 56) == 11 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 75LL) )
  {
    v9 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a1);
    google::protobuf::FieldDescriptor::FieldTypeNameDebugString(
      (__int64 *)&v55,
      *(google::protobuf::FieldDescriptor **)(v9 + 40));
    v10 = v55;
    if ( (v57 & 0x80u) == 0 )
      v10 = &v55;
    v58.__r_.__value_.__r.__words[0] = (std::string::size_type)v10;
    v11 = v57;
    if ( (v57 & 0x80u) != 0 )
      v11 = v56;
    LODWORD(v58.__r_.__value_.__r.__words[1]) = v11;
    v12 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a1);
    google::protobuf::FieldDescriptor::FieldTypeNameDebugString(
      (__int64 *)&__p,
      (google::protobuf::FieldDescriptor *)(*(_QWORD *)(v12 + 40) + 152LL));
    p_p = (std::string *)__p;
    if ( (v51 & 0x80u) == 0 )
      p_p = (std::string *)&__p;
    v84 = p_p;
    v14 = v51;
    if ( (v51 & 0x80u) != 0 )
      v14 = v50;
    LODWORD(v85) = v14;
    v82 = 0LL;
    LODWORD(v83) = -1;
    v80 = 0LL;
    v81 = -1;
    v78 = 0LL;
    v79 = -1;
    v76 = 0LL;
    LODWORD(v77) = -1;
    v74 = 0LL;
    v75 = -1;
    v72 = 0LL;
    v73 = -1;
    v70 = 0LL;
    v71 = -1;
    v68 = 0LL;
    v69 = -1;
    *(_QWORD *)&v43 = &v74;
    *((_QWORD *)&v43 + 1) = &v72;
    google::protobuf::strings::SubstituteAndAppend(
      &v52,
      (int)"map<$0, $1>",
      (int)&v58,
      (int)&v84,
      (int)&v82,
      (int)&v80,
      (int)&v78,
      (int)&v76,
      v43,
      (__int64)&v70,
      (__int64)&v68);
    if ( (char)v51 < 0 )
      operator delete(__p);
    if ( (char)v57 < 0 )
      operator delete(v55);
  }
  else
  {
    google::protobuf::FieldDescriptor::FieldTypeNameDebugString(
      (__int64 *)&v58,
      (google::protobuf::FieldDescriptor *)a1);
    if ( SHIBYTE(v52.__r_.__value_.__r.__words[2]) < 0 )
      operator delete(v52.__r_.__value_.__l.__data_);
    v52 = v58;
  }
  v58.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::kLabelToName[*(unsigned int *)(a1 + 60)];
  v58.__r_.__value_.__l.__size_ = strlen(v58.__r_.__value_.__l.__data_);
  v84 = (std::string *)" ";
  v85 = 1LL;
  google::protobuf::StrCat(&__p, &v58, &v84);
  v15 = *(std::once_flag::_State_type **)(a1 + 48);
  if ( v15 )
  {
    v82 = (__int64 (__fastcall **)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))google::protobuf::FieldDescriptor::TypeOnceInit;
    v80 = (__int64 (__fastcall ***)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))a1;
    if ( atomic_load_explicit((atomic_ullong *volatile)v15, memory_order_acquire) != -1LL )
    {
      v58.__r_.__value_.__r.__words[0] = (std::string::size_type)&v82;
      v58.__r_.__value_.__l.__size_ = (std::string::size_type)&v80;
      v84 = &v58;
      std::__call_once(v15, &v84, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *(_DWORD *)(a1 + 56) == 11 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 75LL)
    || *(_QWORD *)(a1 + 88)
    || *(_DWORD *)(a1 + 60) == 1 && !*(_BYTE *)(a1 + 65) && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 60LL) != 2 )
  {
    if ( (char)v51 < 0 )
    {
      *(_BYTE *)__p = 0;
      v50 = 0LL;
    }
    else
    {
      LOBYTE(__p) = 0;
      v51 = 0;
    }
  }
  v63 = 0LL;
  v62 = 0u;
  v61 = 0u;
  v60 = 0u;
  v59 = 0u;
  v64 = *(_WORD *)a4;
  v65 = *(_BYTE *)(a4 + 2);
  if ( SHIBYTE(v54) < 0 )
  {
    sub_10007A474(&v66, __b[0]);
  }
  else
  {
    v66 = *(_OWORD *)__b;
    v67 = v54;
  }
  if ( *(_BYTE *)a4 )
    SourceLocation = google::protobuf::FieldDescriptor::GetSourceLocation(a1, &v58.__r_.__value_.__r.__words[1]);
  else
    SourceLocation = 0;
  v58.__r_.__value_.__s.__data_[0] = SourceLocation;
  sub_100080B14(&v58, a3);
  v18 = HIBYTE(v54);
  v19 = __b;
  if ( v54 < 0 )
    v19 = (void **)__b[0];
  v84 = (std::string *)v19;
  if ( v54 < 0 )
    v18 = (int)__b[1];
  LODWORD(v85) = v18;
  v20 = v51;
  v21 = (__int64 (__fastcall **)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))&__p;
  if ( (v51 & 0x80u) != 0 )
    v21 = (__int64 (__fastcall **)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))__p;
  v82 = v21;
  if ( (v51 & 0x80u) != 0 )
    v20 = v50;
  LODWORD(v83) = v20;
  v22 = HIBYTE(v52.__r_.__value_.__r.__words[2]);
  v23 = &v52;
  if ( (v52.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v23 = (std::string *)v52.__r_.__value_.__r.__words[0];
  v80 = (__int64 (__fastcall ***)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))v23;
  if ( (v52.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v22 = v52.__r_.__value_.__r.__words[1];
  v81 = v22;
  v24 = *(std::once_flag::_State_type **)(a1 + 48);
  if ( v24 )
  {
    v72 = google::protobuf::FieldDescriptor::TypeOnceInit;
    v70 = a1;
    if ( atomic_load_explicit((atomic_ullong *volatile)v24, memory_order_acquire) != -1LL )
    {
      v76 = &v72;
      v77 = &v70;
      v74 = (const char **)&v76;
      std::__call_once(v24, &v74, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v25 = (__int64 (__fastcall ***)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))a1;
  if ( *(_DWORD *)(a1 + 56) == 10 )
    v25 = (__int64 (__fastcall ***)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a1);
  v26 = (__int64 (__fastcall *)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))*v25;
  v27 = *((char *)*v25 + 23);
  v28 = (*v25)[1];
  if ( v27 < 0 )
    v26 = **v25;
  v78 = v26;
  v29 = (unsigned __int8)v27;
  if ( v27 < 0 )
    v29 = (int)v28;
  v79 = v29;
  v76 = (__int64 (__fastcall **)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))google::protobuf::FastInt32ToBuffer((google::protobuf *)*(unsigned int *)(a1 + 68), (int)&v77 + 4, v17);
  LODWORD(v77) = strlen((const char *)v76);
  v74 = 0LL;
  v75 = -1;
  v72 = 0LL;
  v73 = -1;
  v70 = 0LL;
  v71 = -1;
  v68 = 0LL;
  v69 = -1;
  v55 = 0LL;
  LODWORD(v56) = -1;
  *(_QWORD *)&v44 = &v72;
  *((_QWORD *)&v44 + 1) = &v70;
  google::protobuf::strings::SubstituteAndAppend(
    a3,
    (int)"$0$1$2 $3 = $4",
    (int)&v84,
    (int)&v82,
    (int)&v80,
    (int)&v78,
    (int)&v76,
    (int)&v74,
    v44,
    (__int64)&v68,
    (__int64)&v55);
  if ( *(_BYTE *)(a1 + 64) )
  {
    google::protobuf::FieldDescriptor::DefaultValueAsString((google::protobuf::FieldDescriptor *)a1, 1, v30, &v46);
    v31 = (std::string *)v46;
    if ( (v48 & 0x80u) == 0 )
      v31 = (std::string *)&v46;
    v84 = v31;
    v32 = v48;
    if ( (v48 & 0x80u) != 0 )
      v32 = v47;
    LODWORD(v85) = v32;
    v82 = 0LL;
    LODWORD(v83) = -1;
    v80 = 0LL;
    v81 = -1;
    v78 = 0LL;
    v79 = -1;
    v76 = 0LL;
    LODWORD(v77) = -1;
    v74 = 0LL;
    v75 = -1;
    v72 = 0LL;
    v73 = -1;
    v70 = 0LL;
    v71 = -1;
    v68 = 0LL;
    v69 = -1;
    v55 = 0LL;
    LODWORD(v56) = -1;
    *(_QWORD *)&v45 = &v72;
    *((_QWORD *)&v45 + 1) = &v70;
    google::protobuf::strings::SubstituteAndAppend(
      a3,
      (int)" [default = $0",
      (int)&v84,
      (int)&v82,
      (int)&v80,
      (int)&v78,
      (int)&v76,
      (int)&v74,
      v45,
      (__int64)&v68,
      (__int64)&v55);
    if ( (char)v48 < 0 )
      operator delete(v46);
    if ( !*(_BYTE *)(a1 + 66) )
      goto LABEL_80;
    v33 = ", ";
LABEL_71:
    std::string::append(a3, v33);
    std::string::append(a3, "json_name = \"");
    google::protobuf::CEscape(*(_QWORD *)(a1 + 32));
    if ( v86 >= 0 )
      v34 = (std::string *)&v84;
    else
      v34 = v84;
    if ( v86 >= 0 )
      v35 = HIBYTE(v86);
    else
      v35 = v85;
    std::string::append(a3, (const std::string::value_type *)v34, v35);
    if ( SHIBYTE(v86) < 0 )
      operator delete(v84);
    std::string::append(a3, "\"");
LABEL_80:
    v36 = 1;
    goto LABEL_81;
  }
  if ( *(_BYTE *)(a1 + 66) )
  {
    v33 = " [";
    goto LABEL_71;
  }
  v36 = 0;
LABEL_81:
  v85 = 0LL;
  v86 = 0LL;
  v84 = 0LL;
  if ( (unsigned int)sub_1000836FC(a2, *(_QWORD *)(a1 + 120), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL), &v84) )
  {
    if ( v36 )
      v37 = ", ";
    else
      v37 = " [";
    std::string::append(a3, v37);
    if ( v86 >= 0 )
      v38 = (std::string *)&v84;
    else
      v38 = v84;
    if ( v86 >= 0 )
      v39 = HIBYTE(v86);
    else
      v39 = v85;
    std::string::append(a3, (const std::string::value_type *)v38, v39);
    goto LABEL_93;
  }
  if ( v36 )
LABEL_93:
    std::string::append(a3, "]");
  v40 = *(std::once_flag::_State_type **)(a1 + 48);
  if ( v40 )
  {
    v78 = google::protobuf::FieldDescriptor::TypeOnceInit;
    v76 = (__int64 (__fastcall **)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *))a1;
    if ( atomic_load_explicit((atomic_ullong *volatile)v40, memory_order_acquire) != -1LL )
    {
      v82 = &v78;
      v83 = (const char **)&v76;
      v80 = &v82;
      std::__call_once(v40, &v80, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *(_DWORD *)(a1 + 56) != 10 )
  {
    v41 = ";\n";
    goto LABEL_101;
  }
  if ( *(_BYTE *)(a4 + 1) )
  {
    v41 = " { ... };\n";
LABEL_101:
    std::string::append(a3, v41);
    goto LABEL_102;
  }
  v42 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)a1);
  google::protobuf::Descriptor::DebugString(v42, a2, (__int64)a3, a4, 0);
LABEL_102:
  sub_100080C48(&v58, a3);
  if ( SHIBYTE(v86) < 0 )
    operator delete(v84);
  if ( SHIBYTE(v67) < 0 )
    operator delete((void *)v66);
  v84 = (std::string *)&v62;
  sub_10009857C(&v84);
  if ( SHIBYTE(v61) < 0 )
    operator delete(*((void **)&v60 + 1));
  if ( SBYTE7(v60) < 0 )
    operator delete((void *)v59);
  if ( (char)v51 < 0 )
    operator delete(__p);
  if ( SHIBYTE(v52.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v52.__r_.__value_.__l.__data_);
  if ( SHIBYTE(v54) < 0 )
    operator delete(__b[0]);
}