__ZNK6google8protobuf10Descriptor11DebugStringEiPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_18DebugStringOptionsEb
void __fastcall google::protobuf::Descriptor::DebugString(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  char SourceLocation; // w0
  int v11; // w8
  void **v12; // x9
  const char *v13; // x8
  int v14; // w9
  __int64 v15; // x11
  int v16; // w8
  __int64 v17; // x23
  char *v18; // x2
  __int64 v19; // x22
  __int64 v20; // x24
  __int64 v21; // x8
  __int64 v22; // x28
  std::once_flag::_State_type *v23; // x0
  __int64 v24; // x22
  __int64 v25; // x24
  __int64 v26; // x8
  __int64 v27; // x28
  std::once_flag::_State_type *v28; // x0
  int v29; // w8
  __int64 i; // x22
  unsigned __int64 v31; // x0
  _QWORD *v32; // x9
  unsigned __int64 v33; // x10
  __int64 v34; // x22
  __int64 v35; // x24
  __int64 v36; // x22
  __int64 v37; // x24
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x26
  __int64 v41; // x27
  int v42; // w8
  void **v43; // x9
  char *v44; // x2
  __int64 v45; // x25
  __int64 v46; // x23
  __int64 v47; // x26
  __int64 v48; // x8
  int v49; // w8
  void **v50; // x9
  int v51; // w8
  void **v52; // x9
  const char *v53; // x8
  int v54; // w9
  __int64 v55; // x11
  int v56; // w8
  __int64 v57; // x8
  int v58; // w8
  void **v59; // x9
  int v60; // w8
  void **v61; // x9
  char *v62; // x2
  __int64 v63; // x25
  __int64 v64; // x26
  unsigned int *v65; // x23
  google::protobuf *v66; // x0
  char *v67; // x2
  __int64 v68; // x8
  int v69; // w8
  void **v70; // x9
  __int64 v71; // x22
  const char *p_p; // x9
  int v73; // w8
  __int64 v74; // x8
  int v75; // w8
  void **v76; // x9
  __int128 v77; // [xsp+0h] [xbp-330h]
  __int128 v78; // [xsp+0h] [xbp-330h]
  __int128 v79; // [xsp+0h] [xbp-330h]
  __int128 v80; // [xsp+0h] [xbp-330h]
  __int128 v81; // [xsp+0h] [xbp-330h]
  __int128 v82; // [xsp+0h] [xbp-330h]
  __int128 v83; // [xsp+0h] [xbp-330h]
  __int128 v84; // [xsp+0h] [xbp-330h]
  __int128 v85; // [xsp+0h] [xbp-330h]
  __int128 v86; // [xsp+0h] [xbp-330h]
  __int128 v87; // [xsp+0h] [xbp-330h]
  int v88; // [xsp+24h] [xbp-30Ch]
  void *__p; // [xsp+28h] [xbp-308h] BYREF
  __int64 v90; // [xsp+30h] [xbp-300h]
  unsigned __int8 v91; // [xsp+3Fh] [xbp-2F1h]
  _QWORD *v92; // [xsp+40h] [xbp-2F0h] BYREF
  _QWORD v93[2]; // [xsp+48h] [xbp-2E8h] BYREF
  _BYTE v94[8]; // [xsp+58h] [xbp-2D8h] BYREF
  __int64 v95; // [xsp+60h] [xbp-2D0h] BYREF
  void *v96[2]; // [xsp+70h] [xbp-2C0h]
  void *v97[2]; // [xsp+80h] [xbp-2B0h]
  __int128 v98; // [xsp+90h] [xbp-2A0h]
  __int128 v99; // [xsp+A0h] [xbp-290h] BYREF
  __int64 v100; // [xsp+B0h] [xbp-280h]
  __int16 v101; // [xsp+B8h] [xbp-278h]
  char v102; // [xsp+BAh] [xbp-276h]
  __int128 v103; // [xsp+C0h] [xbp-270h] BYREF
  __int64 v104; // [xsp+D0h] [xbp-260h]
  void *__b[2]; // [xsp+D8h] [xbp-258h] BYREF
  __int64 v106; // [xsp+E8h] [xbp-248h]
  __int64 v107; // [xsp+F0h] [xbp-240h] BYREF
  int v108; // [xsp+F8h] [xbp-238h]
  __int64 v109; // [xsp+120h] [xbp-210h] BYREF
  int v110; // [xsp+128h] [xbp-208h]
  __int64 v111; // [xsp+150h] [xbp-1E0h] BYREF
  int v112; // [xsp+158h] [xbp-1D8h]
  __int64 v113; // [xsp+180h] [xbp-1B0h] BYREF
  int v114; // [xsp+188h] [xbp-1A8h]
  __int64 v115; // [xsp+1B0h] [xbp-180h] BYREF
  int v116; // [xsp+1B8h] [xbp-178h]
  __int64 v117; // [xsp+1E0h] [xbp-150h] BYREF
  int v118; // [xsp+1E8h] [xbp-148h]
  __int64 v119; // [xsp+210h] [xbp-120h] BYREF
  int v120; // [xsp+218h] [xbp-118h]
  const char *v121; // [xsp+240h] [xbp-F0h] BYREF
  int v122; // [xsp+248h] [xbp-E8h]
  int v123; // [xsp+24Ch] [xbp-E4h] BYREF
  const char *v124; // [xsp+270h] [xbp-C0h] BYREF
  int v125; // [xsp+278h] [xbp-B8h]
  _BYTE v126[36]; // [xsp+27Ch] [xbp-B4h] BYREF
  const char *v127; // [xsp+2A0h] [xbp-90h] BYREF
  _QWORD v128[5]; // [xsp+2A8h] [xbp-88h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 32) + 75LL) )
  {
    sub_10009C1E8(__b, 2 * a2, 32);
    v100 = 0LL;
    v98 = 0u;
    v99 = 0u;
    *(_OWORD *)v96 = 0u;
    *(_OWORD *)v97 = 0u;
    v101 = *(_WORD *)a4;
    v102 = *(_BYTE *)(a4 + 2);
    if ( SHIBYTE(v106) < 0 )
    {
      sub_10007A474(&v103, __b[0]);
    }
    else
    {
      v103 = *(_OWORD *)__b;
      v104 = v106;
    }
    if ( *(_BYTE *)a4 )
      SourceLocation = google::protobuf::Descriptor::GetSourceLocation(a1, &v95);
    else
      SourceLocation = 0;
    v94[0] = SourceLocation;
    sub_100080B14(v94, a3);
    if ( a5 )
    {
      v11 = HIBYTE(v106);
      v12 = __b;
      if ( v106 < 0 )
        v12 = (void **)__b[0];
      v127 = (const char *)v12;
      if ( v106 < 0 )
        v11 = (int)__b[1];
      LODWORD(v128[0]) = v11;
      v13 = *(const char **)a1;
      v14 = *(char *)(*(_QWORD *)a1 + 23LL);
      v15 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
      if ( v14 < 0 )
        v13 = **(const char ***)a1;
      v124 = v13;
      v16 = (unsigned __int8)v14;
      if ( v14 < 0 )
        v16 = v15;
      v125 = v16;
      v121 = 0LL;
      v122 = -1;
      v119 = 0LL;
      v120 = -1;
      v117 = 0LL;
      v118 = -1;
      v115 = 0LL;
      v116 = -1;
      v113 = 0LL;
      v114 = -1;
      v111 = 0LL;
      v112 = -1;
      v109 = 0LL;
      v110 = -1;
      v107 = 0LL;
      v108 = -1;
      *(_QWORD *)&v77 = &v113;
      *((_QWORD *)&v77 + 1) = &v111;
      google::protobuf::strings::SubstituteAndAppend(
        (std::string *)a3,
        (int)"$0message $1",
        (int)&v127,
        (int)&v124,
        (int)&v121,
        (int)&v119,
        (int)&v117,
        (int)&v115,
        v77,
        (__int64)&v109,
        (__int64)&v107);
    }
    std::string::append((std::string *)a3, " {\n");
    v17 = (unsigned int)(a2 + 1);
    sub_100080D5C(v17, *(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), a3);
    v88 = a2;
    v93[0] = 0LL;
    v93[1] = 0LL;
    v92 = v93;
    if ( *(int *)(a1 + 104) >= 1 )
    {
      v19 = 0LL;
      v20 = 0LL;
      do
      {
        v21 = *(_QWORD *)(a1 + 40);
        v22 = v21 + v19;
        v23 = *(std::once_flag::_State_type **)(v21 + v19 + 48);
        if ( v23 )
        {
          v121 = (const char *)google::protobuf::FieldDescriptor::TypeOnceInit;
          v119 = v21 + v19;
          if ( atomic_load_explicit((atomic_ullong *volatile)v23, memory_order_acquire) != -1LL )
          {
            v127 = (const char *)&v121;
            v128[0] = &v119;
            v124 = (const char *)&v127;
            std::__call_once(v23, &v124, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        if ( *(_DWORD *)(v22 + 56) == 10 )
        {
          v127 = (const char *)google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)(*(_QWORD *)(a1 + 40) + v19));
          sub_10009C2CC(&v92, &v127, &v127);
        }
        ++v20;
        v19 += 152LL;
      }
      while ( v20 < *(int *)(a1 + 104) );
    }
    if ( *(int *)(a1 + 128) >= 1 )
    {
      v24 = 0LL;
      v25 = 0LL;
      do
      {
        v26 = *(_QWORD *)(a1 + 80);
        v27 = v26 + v24;
        v28 = *(std::once_flag::_State_type **)(v26 + v24 + 48);
        if ( v28 )
        {
          v121 = (const char *)google::protobuf::FieldDescriptor::TypeOnceInit;
          v119 = v26 + v24;
          if ( atomic_load_explicit((atomic_ullong *volatile)v28, memory_order_acquire) != -1LL )
          {
            v127 = (const char *)&v121;
            v128[0] = &v119;
            v124 = (const char *)&v127;
            std::__call_once(v28, &v124, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        if ( *(_DWORD *)(v27 + 56) == 10 )
        {
          v127 = (const char *)google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)(*(_QWORD *)(a1 + 80) + v24));
          sub_10009C2CC(&v92, &v127, &v127);
        }
        ++v25;
        v24 += 152LL;
      }
      while ( v25 < *(int *)(a1 + 128) );
    }
    v29 = *(_DWORD *)(a1 + 116);
    if ( v29 >= 1 )
    {
      for ( i = 0LL; i < v29; ++i )
      {
        v31 = *(_QWORD *)(a1 + 56) + 144 * i;
        v32 = (_QWORD *)v93[0];
        if ( v93[0] )
        {
          do
          {
            v33 = v32[4];
            if ( v31 >= v33 )
            {
              if ( v33 >= v31 )
                goto LABEL_42;
              ++v32;
            }
            v32 = (_QWORD *)*v32;
          }
          while ( v32 );
        }
        google::protobuf::Descriptor::DebugString(v31, v17, a3, a4, 1LL);
        v29 = *(_DWORD *)(a1 + 116);
LABEL_42:
        ;
      }
    }
    if ( *(int *)(a1 + 120) >= 1 )
    {
      v34 = 0LL;
      v35 = 0LL;
      do
      {
        google::protobuf::EnumDescriptor::DebugString(*(_QWORD *)(a1 + 64) + v34, v17, a3, (__int16 *)a4);
        ++v35;
        v34 += 80LL;
      }
      while ( v35 < *(int *)(a1 + 120) );
    }
    if ( *(int *)(a1 + 104) >= 1 )
    {
      v36 = 0LL;
      v37 = 0LL;
      do
      {
        v38 = *(_QWORD *)(a1 + 40) + v36;
        v39 = *(_QWORD *)(v38 + 88);
        if ( v39 )
        {
          if ( v38 == **(_QWORD **)(v39 + 32) )
            google::protobuf::OneofDescriptor::DebugString();
        }
        else
        {
          google::protobuf::FieldDescriptor::DebugString(*(_QWORD *)(a1 + 40) + v36, v17, a3, a4);
        }
        ++v37;
        v36 += 152LL;
      }
      while ( v37 < *(int *)(a1 + 104) );
    }
    if ( *(int *)(a1 + 124) >= 1 )
    {
      v40 = 0LL;
      v41 = 0LL;
      do
      {
        v42 = HIBYTE(v106);
        v43 = (void **)__b[0];
        if ( v106 >= 0 )
          v43 = __b;
        v127 = (const char *)v43;
        if ( v106 < 0 )
          v42 = (int)__b[1];
        LODWORD(v128[0]) = v42;
        v124 = (const char *)google::protobuf::FastInt32ToBuffer(
                               (google::protobuf *)*(unsigned int *)(*(_QWORD *)(a1 + 72) + v40),
                               (int)v126,
                               v18);
        v125 = strlen(v124);
        v121 = (const char *)google::protobuf::FastInt32ToBuffer(
                               (google::protobuf *)(unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 72) + v40 + 4) - 1),
                               (int)&v123,
                               v44);
        v122 = strlen(v121);
        v119 = 0LL;
        v120 = -1;
        v117 = 0LL;
        v118 = -1;
        v115 = 0LL;
        v116 = -1;
        v113 = 0LL;
        v114 = -1;
        v111 = 0LL;
        v112 = -1;
        v109 = 0LL;
        v110 = -1;
        v107 = 0LL;
        v108 = -1;
        *(_QWORD *)&v78 = &v113;
        *((_QWORD *)&v78 + 1) = &v111;
        google::protobuf::strings::SubstituteAndAppend(
          (std::string *)a3,
          (int)"$0  extensions $1 to $2;\n",
          (int)&v127,
          (int)&v124,
          (int)&v121,
          (int)&v119,
          (int)&v117,
          (int)&v115,
          v78,
          (__int64)&v109,
          (__int64)&v107);
        ++v41;
        v40 += 16LL;
      }
      while ( v41 < *(int *)(a1 + 124) );
    }
    if ( *(int *)(a1 + 128) >= 1 )
    {
      v45 = 0LL;
      v46 = 0LL;
      v47 = 80LL;
      do
      {
        v48 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(v48 + v47) != v46 )
        {
          v46 = *(_QWORD *)(v48 + v47);
          if ( v47 != 80 )
          {
            v49 = HIBYTE(v106);
            v50 = (void **)__b[0];
            if ( v106 >= 0 )
              v50 = __b;
            v127 = (const char *)v50;
            if ( v106 < 0 )
              v49 = (int)__b[1];
            LODWORD(v128[0]) = v49;
            v124 = 0LL;
            v125 = -1;
            v121 = 0LL;
            v122 = -1;
            v119 = 0LL;
            v120 = -1;
            v117 = 0LL;
            v118 = -1;
            v115 = 0LL;
            v116 = -1;
            v113 = 0LL;
            v114 = -1;
            v111 = 0LL;
            v112 = -1;
            v109 = 0LL;
            v110 = -1;
            v107 = 0LL;
            v108 = -1;
            *((_QWORD *)&v79 + 1) = &v111;
            *(_QWORD *)&v79 = &v113;
            google::protobuf::strings::SubstituteAndAppend(
              (std::string *)a3,
              (int)"$0  }\n",
              (int)&v127,
              (int)&v124,
              (int)&v121,
              (int)&v119,
              (int)&v117,
              (int)&v115,
              v79,
              (__int64)&v109,
              (__int64)&v107);
            v46 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + v47);
          }
          v51 = HIBYTE(v106);
          v52 = (void **)__b[0];
          if ( v106 >= 0 )
            v52 = __b;
          v127 = (const char *)v52;
          if ( v106 < 0 )
            v51 = (int)__b[1];
          LODWORD(v128[0]) = v51;
          v53 = *(const char **)(v46 + 8);
          v54 = v53[23];
          v55 = *((_QWORD *)v53 + 1);
          if ( v54 < 0 )
            v53 = *(const char **)v53;
          v124 = v53;
          v56 = (unsigned __int8)v54;
          if ( v54 < 0 )
            v56 = v55;
          v125 = v56;
          v121 = 0LL;
          v122 = -1;
          v119 = 0LL;
          v120 = -1;
          v117 = 0LL;
          v118 = -1;
          v115 = 0LL;
          v116 = -1;
          v113 = 0LL;
          v114 = -1;
          v111 = 0LL;
          v112 = -1;
          v109 = 0LL;
          v110 = -1;
          v107 = 0LL;
          v108 = -1;
          *((_QWORD *)&v80 + 1) = &v111;
          *(_QWORD *)&v80 = &v113;
          google::protobuf::strings::SubstituteAndAppend(
            (std::string *)a3,
            (int)"$0  extend .$1 {\n",
            (int)&v127,
            (int)&v124,
            (int)&v121,
            (int)&v119,
            (int)&v117,
            (int)&v115,
            v80,
            (__int64)&v109,
            (__int64)&v107);
          v48 = *(_QWORD *)(a1 + 80);
        }
        google::protobuf::FieldDescriptor::DebugString(v48 + v47 - 80, (unsigned int)(v88 + 2), a3, a4);
        ++v45;
        v57 = *(int *)(a1 + 128);
        v47 += 152LL;
      }
      while ( v45 < v57 );
      if ( (int)v57 > 0 )
      {
        v58 = HIBYTE(v106);
        v59 = __b;
        if ( v106 < 0 )
          v59 = (void **)__b[0];
        v127 = (const char *)v59;
        if ( v106 < 0 )
          v58 = (int)__b[1];
        LODWORD(v128[0]) = v58;
        v124 = 0LL;
        v125 = -1;
        v121 = 0LL;
        v122 = -1;
        v119 = 0LL;
        v120 = -1;
        v117 = 0LL;
        v118 = -1;
        v115 = 0LL;
        v116 = -1;
        v113 = 0LL;
        v114 = -1;
        v111 = 0LL;
        v112 = -1;
        v109 = 0LL;
        v110 = -1;
        v107 = 0LL;
        v108 = -1;
        *(_QWORD *)&v81 = &v113;
        *((_QWORD *)&v81 + 1) = &v111;
        google::protobuf::strings::SubstituteAndAppend(
          (std::string *)a3,
          (int)"$0  }\n",
          (int)&v127,
          (int)&v124,
          (int)&v121,
          (int)&v119,
          (int)&v117,
          (int)&v115,
          v81,
          (__int64)&v109,
          (__int64)&v107);
      }
    }
    if ( *(int *)(a1 + 132) >= 1 )
    {
      v60 = HIBYTE(v106);
      v61 = __b;
      if ( v106 < 0 )
        v61 = (void **)__b[0];
      v127 = (const char *)v61;
      if ( v106 < 0 )
        v60 = (int)__b[1];
      LODWORD(v128[0]) = v60;
      v124 = 0LL;
      v125 = -1;
      v121 = 0LL;
      v122 = -1;
      v119 = 0LL;
      v120 = -1;
      v117 = 0LL;
      v118 = -1;
      v115 = 0LL;
      v116 = -1;
      v113 = 0LL;
      v114 = -1;
      v111 = 0LL;
      v112 = -1;
      v109 = 0LL;
      v110 = -1;
      v107 = 0LL;
      v108 = -1;
      *(_QWORD *)&v82 = &v113;
      *((_QWORD *)&v82 + 1) = &v111;
      google::protobuf::strings::SubstituteAndAppend(
        (std::string *)a3,
        (int)"$0  reserved ",
        (int)&v127,
        (int)&v124,
        (int)&v121,
        (int)&v119,
        (int)&v117,
        (int)&v115,
        v82,
        (__int64)&v109,
        (__int64)&v107);
      if ( *(int *)(a1 + 132) >= 1 )
      {
        v63 = 0LL;
        v64 = 0LL;
        do
        {
          v65 = (unsigned int *)(*(_QWORD *)(a1 + 88) + v63);
          v66 = (google::protobuf *)*v65;
          if ( v65[1] == (_DWORD)v66 + 1 )
          {
            v127 = (const char *)google::protobuf::FastInt32ToBuffer(v66, (int)v128 + 4, v62);
            LODWORD(v128[0]) = strlen(v127);
            v124 = 0LL;
            v125 = -1;
            v121 = 0LL;
            v122 = -1;
            v119 = 0LL;
            v120 = -1;
            v117 = 0LL;
            v118 = -1;
            v115 = 0LL;
            v116 = -1;
            v113 = 0LL;
            v114 = -1;
            v111 = 0LL;
            v112 = -1;
            v109 = 0LL;
            v110 = -1;
            v107 = 0LL;
            v108 = -1;
            *((_QWORD *)&v83 + 1) = &v111;
            *(_QWORD *)&v83 = &v113;
            google::protobuf::strings::SubstituteAndAppend(
              (std::string *)a3,
              (int)"$0, ",
              (int)&v127,
              (int)&v124,
              (int)&v121,
              (int)&v119,
              (int)&v117,
              (int)&v115,
              v83,
              (__int64)&v109,
              (__int64)&v107);
          }
          else
          {
            v127 = (const char *)google::protobuf::FastInt32ToBuffer(v66, (int)v128 + 4, v62);
            LODWORD(v128[0]) = strlen(v127);
            v124 = (const char *)google::protobuf::FastInt32ToBuffer((google::protobuf *)(v65[1] - 1), (int)v126, v67);
            v125 = strlen(v124);
            v121 = 0LL;
            v122 = -1;
            v119 = 0LL;
            v120 = -1;
            v117 = 0LL;
            v118 = -1;
            v115 = 0LL;
            v116 = -1;
            v113 = 0LL;
            v114 = -1;
            v111 = 0LL;
            v112 = -1;
            v109 = 0LL;
            v110 = -1;
            v107 = 0LL;
            v108 = -1;
            *((_QWORD *)&v84 + 1) = &v111;
            *(_QWORD *)&v84 = &v113;
            google::protobuf::strings::SubstituteAndAppend(
              (std::string *)a3,
              (int)"$0 to $1, ",
              (int)&v127,
              (int)&v124,
              (int)&v121,
              (int)&v119,
              (int)&v117,
              (int)&v115,
              v84,
              (__int64)&v109,
              (__int64)&v107);
          }
          ++v64;
          v63 += 8LL;
        }
        while ( v64 < *(int *)(a1 + 132) );
      }
      if ( *(char *)(a3 + 23) < 0 )
        v68 = *(_QWORD *)(a3 + 8);
      else
        v68 = *(unsigned __int8 *)(a3 + 23);
      std::string::replace((std::string *)a3, v68 - 2, 2uLL, ";\n");
    }
    if ( *(int *)(a1 + 136) >= 1 )
    {
      v69 = HIBYTE(v106);
      v70 = __b;
      if ( v106 < 0 )
        v70 = (void **)__b[0];
      v127 = (const char *)v70;
      if ( v106 < 0 )
        v69 = (int)__b[1];
      LODWORD(v128[0]) = v69;
      v124 = 0LL;
      v125 = -1;
      v121 = 0LL;
      v122 = -1;
      v119 = 0LL;
      v120 = -1;
      v117 = 0LL;
      v118 = -1;
      v115 = 0LL;
      v116 = -1;
      v113 = 0LL;
      v114 = -1;
      v111 = 0LL;
      v112 = -1;
      v109 = 0LL;
      v110 = -1;
      v107 = 0LL;
      v108 = -1;
      *(_QWORD *)&v85 = &v113;
      *((_QWORD *)&v85 + 1) = &v111;
      google::protobuf::strings::SubstituteAndAppend(
        (std::string *)a3,
        (int)"$0  reserved ",
        (int)&v127,
        (int)&v124,
        (int)&v121,
        (int)&v119,
        (int)&v117,
        (int)&v115,
        v85,
        (__int64)&v109,
        (__int64)&v107);
      if ( *(int *)(a1 + 136) >= 1 )
      {
        v71 = 0LL;
        do
        {
          google::protobuf::CEscape(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v71));
          p_p = (const char *)__p;
          if ( (v91 & 0x80u) == 0 )
            p_p = (const char *)&__p;
          v127 = p_p;
          v73 = v91;
          if ( (v91 & 0x80u) != 0 )
            v73 = v90;
          LODWORD(v128[0]) = v73;
          v124 = 0LL;
          v125 = -1;
          v121 = 0LL;
          v122 = -1;
          v119 = 0LL;
          v120 = -1;
          v117 = 0LL;
          v118 = -1;
          v115 = 0LL;
          v116 = -1;
          v113 = 0LL;
          v114 = -1;
          v111 = 0LL;
          v112 = -1;
          v109 = 0LL;
          v110 = -1;
          v107 = 0LL;
          v108 = -1;
          *(_QWORD *)&v86 = &v113;
          *((_QWORD *)&v86 + 1) = &v111;
          google::protobuf::strings::SubstituteAndAppend(
            (std::string *)a3,
            (int)"\"$0\", ",
            (int)&v127,
            (int)&v124,
            (int)&v121,
            (int)&v119,
            (int)&v117,
            (int)&v115,
            v86,
            (__int64)&v109,
            (__int64)&v107);
          if ( (char)v91 < 0 )
            operator delete(__p);
          ++v71;
        }
        while ( v71 < *(int *)(a1 + 136) );
      }
      if ( *(char *)(a3 + 23) < 0 )
        v74 = *(_QWORD *)(a3 + 8);
      else
        v74 = *(unsigned __int8 *)(a3 + 23);
      std::string::replace((std::string *)a3, v74 - 2, 2uLL, ";\n");
    }
    v75 = HIBYTE(v106);
    v76 = __b;
    if ( v106 < 0 )
      v76 = (void **)__b[0];
    v127 = (const char *)v76;
    if ( v106 < 0 )
      v75 = (int)__b[1];
    LODWORD(v128[0]) = v75;
    v124 = 0LL;
    v125 = -1;
    v121 = 0LL;
    v122 = -1;
    v119 = 0LL;
    v120 = -1;
    v117 = 0LL;
    v118 = -1;
    v115 = 0LL;
    v116 = -1;
    v113 = 0LL;
    v114 = -1;
    v111 = 0LL;
    v112 = -1;
    v109 = 0LL;
    v110 = -1;
    v107 = 0LL;
    v108 = -1;
    *(_QWORD *)&v87 = &v113;
    *((_QWORD *)&v87 + 1) = &v111;
    google::protobuf::strings::SubstituteAndAppend(
      (std::string *)a3,
      (int)"$0}\n",
      (int)&v127,
      (int)&v124,
      (int)&v121,
      (int)&v119,
      (int)&v117,
      (int)&v115,
      v87,
      (__int64)&v109,
      (__int64)&v107);
    sub_100080C48(v94, a3);
    sub_10002AC6C(&v92, v93[0]);
    if ( SHIBYTE(v104) < 0 )
      operator delete((void *)v103);
    v127 = (const char *)&v99;
    sub_10009857C(&v127);
    if ( SHIBYTE(v98) < 0 )
      operator delete(v97[1]);
    if ( SHIBYTE(v97[0]) < 0 )
      operator delete(v96[0]);
    if ( SHIBYTE(v106) < 0 )
      operator delete(__b[0]);
  }
}