__ZN6google8protobuf17DescriptorBuilder12BuildMessageERKNS0_15DescriptorProtoEPKNS0_10DescriptorEPS5_
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildMessage(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::DescriptorProto *a2,
        const google::protobuf::Descriptor *a3,
        google::protobuf::Descriptor *a4)
{
  _QWORD *v8; // x8
  __int64 NameString; // x23
  _QWORD *v10; // x24
  __int64 v11; // x0
  int v12; // w8
  const google::protobuf::DescriptorProto *v13; // x9
  __int64 v14; // x20
  __int64 v15; // x21
  int v16; // w8
  int *v17; // x20
  const google::protobuf::DescriptorProto *v18; // x9
  __int64 v19; // x20
  __int64 v20; // x21
  int v21; // w8
  int *v22; // x20
  const google::protobuf::DescriptorProto *v23; // x9
  __int64 v24; // x20
  __int64 v25; // x21
  int v26; // w8
  int *v27; // x20
  const google::protobuf::DescriptorProto *v28; // x9
  __int64 v29; // x20
  __int64 v30; // x21
  int v31; // w8
  int *v32; // x20
  const google::protobuf::DescriptorProto *v33; // x9
  __int64 v34; // x20
  __int64 v35; // x21
  int v36; // w8
  int *v37; // x20
  const google::protobuf::DescriptorProto *v38; // x9
  __int64 v39; // x20
  __int64 v40; // x21
  int v41; // w8
  int *v42; // x20
  int v43; // w8
  __int64 v44; // x20
  __int64 v45; // x2
  __int64 v46; // d0
  __int64 v47; // x21
  __int64 v48; // x20
  __int64 v49; // x21
  _QWORD *v50; // x23
  __int64 v51; // x20
  __int64 v52; // x23
  char *v53; // x2
  __int64 v54; // x20
  int v55; // w8
  __int64 v56; // x22
  __int64 v57; // x25
  __int64 v58; // x23
  __int64 v59; // x24
  __int64 v60; // x21
  __int64 v61; // x9
  __int64 v62; // x20
  google::protobuf *v63; // x0
  __int64 v64; // x27
  __int64 v65; // x28
  char *v66; // x2
  char *v67; // x2
  char *v68; // x2
  __int64 v69; // x9
  __int64 v70; // x21
  __int64 v71; // x23
  int v72; // w8
  bool v73; // cc
  void *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x22
  const char ***v77; // x21
  int v78; // w8
  __int64 v79; // x24
  __int64 v80; // x22
  __int64 v81; // x9
  _DWORD *v82; // x23
  __int64 *v83; // x25
  __int64 v84; // x9
  google::protobuf *v85; // x0
  __int64 v86; // x20
  __int64 v87; // x28
  __int64 v88; // x27
  char *v89; // x2
  char *v90; // x2
  const char *v91; // x8
  int v92; // w9
  const char *v93; // x11
  int v94; // w8
  int v95; // w8
  __int64 v96; // x22
  __int64 v97; // x23
  __int64 v98; // x9
  unsigned int *v99; // x24
  __int64 *v100; // x25
  __int64 v101; // x9
  google::protobuf *v102; // x0
  __int64 v103; // x27
  __int64 v104; // x28
  _QWORD *v105; // x8
  int v106; // w9
  const char *v107; // x11
  int v108; // w8
  __int64 v109; // x27
  _QWORD *v110; // x8
  int v111; // w9
  const char *v112; // x11
  __int64 v113; // x28
  int v114; // w8
  int v115; // w8
  __int64 v116; // x25
  __int64 v117; // x10
  int v118; // w24
  __int64 v119; // x12
  _DWORD *v120; // x22
  int v121; // w9
  __int64 v122; // x23
  __int64 v123; // x24
  _DWORD *v124; // x25
  __int64 v125; // x21
  google::protobuf *v126; // x0
  __int64 v127; // x28
  __int64 v128; // x27
  char *v129; // x2
  char *v130; // x2
  char *v131; // x2
  __int64 v132; // x11
  _DWORD *v133; // x23
  __int64 v134; // x20
  google::protobuf *v135; // x0
  __int64 v136; // x28
  __int64 v137; // x27
  char *v138; // x2
  char *v139; // x2
  char *v140; // x2
  __int64 v141; // x9
  __int128 v143; // [xsp+0h] [xbp-310h]
  __int128 v144; // [xsp+0h] [xbp-310h]
  __int128 v145; // [xsp+0h] [xbp-310h]
  __int128 v146; // [xsp+0h] [xbp-310h]
  __int128 v147; // [xsp+0h] [xbp-310h]
  __int128 v148; // [xsp+0h] [xbp-310h]
  __int128 v149; // [xsp+0h] [xbp-310h]
  __int64 v150; // [xsp+18h] [xbp-2F8h]
  __int64 v151; // [xsp+18h] [xbp-2F8h]
  int v152; // [xsp+24h] [xbp-2ECh]
  __int64 v153; // [xsp+28h] [xbp-2E8h]
  int v154[2]; // [xsp+30h] [xbp-2E0h]
  int v155[2]; // [xsp+38h] [xbp-2D8h]
  int v156[2]; // [xsp+50h] [xbp-2C0h]
  google::protobuf::DescriptorBuilder *v157; // [xsp+58h] [xbp-2B8h]
  const google::protobuf::DescriptorProto *v158; // [xsp+60h] [xbp-2B0h]
  void *v159[2]; // [xsp+68h] [xbp-2A8h] BYREF
  char v160; // [xsp+7Fh] [xbp-291h]
  void *__p[2]; // [xsp+80h] [xbp-290h] BYREF
  __int128 v162; // [xsp+90h] [xbp-280h]
  int v163; // [xsp+A0h] [xbp-270h]
  __int64 v164[2]; // [xsp+B0h] [xbp-260h] BYREF
  __int64 v165[2]; // [xsp+C0h] [xbp-250h] BYREF
  __int64 v166; // [xsp+D0h] [xbp-240h] BYREF
  int v167; // [xsp+D8h] [xbp-238h]
  __int64 v168; // [xsp+100h] [xbp-210h] BYREF
  int v169; // [xsp+108h] [xbp-208h]
  __int64 v170; // [xsp+130h] [xbp-1E0h] BYREF
  int v171; // [xsp+138h] [xbp-1D8h]
  __int64 v172; // [xsp+160h] [xbp-1B0h] BYREF
  int v173; // [xsp+168h] [xbp-1A8h]
  __int64 v174; // [xsp+190h] [xbp-180h] BYREF
  int v175; // [xsp+198h] [xbp-178h]
  __int64 v176; // [xsp+1C0h] [xbp-150h] BYREF
  int v177; // [xsp+1C8h] [xbp-148h]
  const char *v178; // [xsp+1F0h] [xbp-120h] BYREF
  int v179; // [xsp+1F8h] [xbp-118h]
  _BYTE v180[36]; // [xsp+1FCh] [xbp-114h] BYREF
  const char *v181; // [xsp+220h] [xbp-F0h] BYREF
  int v182; // [xsp+228h] [xbp-E8h]
  _BYTE v183[36]; // [xsp+22Ch] [xbp-E4h] BYREF
  const char *v184; // [xsp+250h] [xbp-C0h] BYREF
  int v185; // [xsp+258h] [xbp-B8h]
  _BYTE v186[36]; // [xsp+25Ch] [xbp-B4h] BYREF
  void *v187; // [xsp+280h] [xbp-90h] BYREF
  int v188; // [xsp+288h] [xbp-88h]
  _BYTE v189[36]; // [xsp+28Ch] [xbp-84h] BYREF

  if ( a3 )
    v8 = (_QWORD *)((char *)a3 + 8);
  else
    v8 = (_QWORD *)(*((_QWORD *)this + 10) + 8LL);
  NameString = google::protobuf::DescriptorBuilder::AllocateNameString(
                 this,
                 *v8,
                 *((_QWORD *)a2 + 27) & 0xFFFFFFFFFFFFFFFELL);
  google::protobuf::DescriptorBuilder::ValidateSymbolName(
    (__int64)this,
    (unsigned __int8 *)(*((_QWORD *)a2 + 27) & 0xFFFFFFFFFFFFFFFELL),
    NameString,
    (__int64)a2);
  v157 = this;
  v158 = a2;
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  sub_10007A644(v165, *((_QWORD *)a2 + 27) & 0xFFFFFFFFFFFFFFFELL);
  *(_QWORD *)a4 = google::protobuf::DescriptorPool::Tables::AllocateString(v10, v165[0], v165[1]);
  *((_QWORD *)a4 + 1) = NameString;
  *((_QWORD *)a4 + 2) = *((_QWORD *)this + 10);
  *((_QWORD *)a4 + 3) = a3;
  *((_WORD *)a4 + 70) = 0;
  *((_BYTE *)a4 + 142) = 0;
  v11 = sub_10009BC68(*(_QWORD *)(*(_QWORD *)this + 32LL) + 144LL, NameString);
  if ( v11 )
    *((_BYTE *)a4 + 142) = *(_DWORD *)(v11 + 40);
  v12 = *((_DWORD *)a2 + 38);
  *((_DWORD *)a4 + 27) = v12;
  *((_QWORD *)a4 + 6) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                          *((google::protobuf::DescriptorPool::Tables **)this + 1),
                          48 * v12);
  v13 = a2;
  if ( *((int *)a2 + 38) >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildOneof(
        v157,
        *(const google::protobuf::OneofDescriptorProto **)(*((_QWORD *)v13 + 20) + 8 * v15++ + 8),
        a4,
        (google::protobuf::OneofDescriptor *)(*((_QWORD *)a4 + 6) + v14));
      v13 = v158;
      v14 += 48LL;
    }
    while ( v15 < *((int *)v158 + 38) );
  }
  v17 = (int *)((char *)v13 + 32);
  v16 = *((_DWORD *)v13 + 8);
  *((_DWORD *)a4 + 26) = v16;
  *((_QWORD *)a4 + 5) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                          *((google::protobuf::DescriptorPool::Tables **)v157 + 1),
                          152 * v16);
  v18 = v158;
  if ( *v17 >= 1 )
  {
    v19 = 0LL;
    v20 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildFieldOrExtension(
        v157,
        *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)v18 + 5) + 8 * v20++ + 8),
        a4,
        (google::protobuf::FieldDescriptor *)(*((_QWORD *)a4 + 5) + v19),
        0);
      v18 = v158;
      v19 += 152LL;
    }
    while ( v20 < *((int *)v158 + 8) );
  }
  v22 = (int *)((char *)v18 + 56);
  v21 = *((_DWORD *)v18 + 14);
  *((_DWORD *)a4 + 29) = v21;
  *((_QWORD *)a4 + 7) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                          *((google::protobuf::DescriptorPool::Tables **)v157 + 1),
                          144 * v21);
  v23 = v158;
  if ( *v22 >= 1 )
  {
    v24 = 0LL;
    v25 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildMessage(
        v157,
        *(const google::protobuf::DescriptorProto **)(*((_QWORD *)v23 + 8) + 8 * v25++ + 8),
        a4,
        (google::protobuf::Descriptor *)(*((_QWORD *)a4 + 7) + v24));
      v23 = v158;
      v24 += 144LL;
    }
    while ( v25 < *((int *)v158 + 14) );
  }
  v27 = (int *)((char *)v23 + 80);
  v26 = *((_DWORD *)v23 + 20);
  *((_DWORD *)a4 + 30) = v26;
  *((_QWORD *)a4 + 8) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                          *((google::protobuf::DescriptorPool::Tables **)v157 + 1),
                          80 * v26);
  v28 = v158;
  if ( *v27 >= 1 )
  {
    v29 = 0LL;
    v30 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildEnum(
        v157,
        *(const google::protobuf::EnumDescriptorProto **)(*((_QWORD *)v28 + 11) + 8 * v30++ + 8),
        a4,
        (google::protobuf::EnumDescriptor *)(*((_QWORD *)a4 + 8) + v29));
      v28 = v158;
      v29 += 80LL;
    }
    while ( v30 < *((int *)v158 + 20) );
  }
  v32 = (int *)((char *)v28 + 104);
  v31 = *((_DWORD *)v28 + 26);
  *((_DWORD *)a4 + 31) = v31;
  *((_QWORD *)a4 + 9) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                          *((google::protobuf::DescriptorPool::Tables **)v157 + 1),
                          16 * v31);
  v33 = v158;
  if ( *v32 >= 1 )
  {
    v34 = 0LL;
    v35 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildExtensionRange(
        (int)v157,
        *(_QWORD *)(*((_QWORD *)v33 + 14) + 8 * v35++ + 8));
      v33 = v158;
      v34 += 16LL;
    }
    while ( v35 < *((int *)v158 + 26) );
  }
  v37 = (int *)((char *)v33 + 128);
  v36 = *((_DWORD *)v33 + 32);
  *((_DWORD *)a4 + 32) = v36;
  *((_QWORD *)a4 + 10) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                           *((google::protobuf::DescriptorPool::Tables **)v157 + 1),
                           152 * v36);
  v38 = v158;
  if ( *v37 >= 1 )
  {
    v39 = 0LL;
    v40 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildFieldOrExtension(
        v157,
        *(const google::protobuf::FieldDescriptorProto **)(*((_QWORD *)v38 + 17) + 8 * v40++ + 8),
        a4,
        (google::protobuf::FieldDescriptor *)(*((_QWORD *)a4 + 10) + v39),
        1);
      v38 = v158;
      v39 += 152LL;
    }
    while ( v40 < *((int *)v158 + 32) );
  }
  v42 = (int *)((char *)v38 + 176);
  v41 = *((_DWORD *)v38 + 44);
  *((_DWORD *)a4 + 33) = v41;
  *((_QWORD *)a4 + 11) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                           *((google::protobuf::DescriptorPool::Tables **)v157 + 1),
                           8 * v41);
  v43 = *v42;
  if ( *v42 >= 1 )
  {
    v44 = 0LL;
    do
    {
      v45 = *(_QWORD *)(*((_QWORD *)v158 + 23) + 8 * v44 + 8);
      v46 = *(_QWORD *)(v45 + 24);
      *(_QWORD *)(*((_QWORD *)a4 + 11) + 8 * v44) = v46;
      if ( (int)v46 <= 0 )
      {
        google::protobuf::DescriptorBuilder::AddError(
          (__int64)v157,
          *((_QWORD *)a4 + 1),
          v45,
          1LL,
          "Reserved numbers must be positive integers.");
        v43 = *((_DWORD *)v158 + 44);
      }
      ++v44;
    }
    while ( v44 < v43 );
  }
  v47 = *((unsigned int *)v158 + 50);
  *((_DWORD *)a4 + 34) = v47;
  *((_QWORD *)a4 + 12) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                           *((google::protobuf::DescriptorPool::Tables **)v157 + 1),
                           8 * (int)v47);
  if ( (int)v47 >= 1 )
  {
    v48 = 0LL;
    v49 = 8 * v47;
    do
    {
      v50 = (_QWORD *)*((_QWORD *)v157 + 1);
      sub_10007A644(v164, *(_QWORD *)(*((_QWORD *)v158 + 26) + v48 + 8));
      *(_QWORD *)(*((_QWORD *)a4 + 12) + v48) = google::protobuf::DescriptorPool::Tables::AllocateString(
                                                  v50,
                                                  v164[0],
                                                  v164[1]);
      v48 += 8LL;
    }
    while ( v49 != v48 );
  }
  *((_QWORD *)a4 + 4) = 0LL;
  v51 = (__int64)v158;
  if ( (*((_BYTE *)v158 + 16) & 2) != 0 )
  {
    v52 = *((_QWORD *)v158 + 28);
    sub_10007A754((int)&v187, "google.protobuf.MessageOptions");
    sub_10008C818(v157, v52, a4, 7LL, &v187);
    v51 = (__int64)v158;
    if ( (v189[11] & 0x80000000) != 0 )
      operator delete(v187);
  }
  google::protobuf::DescriptorBuilder::AddSymbol(
    (__int64)v157,
    *((std::string **)a4 + 1),
    (__int64)a3,
    *(char **)a4,
    v51,
    1LL,
    (__int64)a4);
  v54 = (__int64)v158;
  v55 = *((_DWORD *)v158 + 44);
  if ( v55 >= 1 )
  {
    v56 = 0LL;
    v57 = 2LL;
    do
    {
      v58 = v56 + 1;
      if ( v56 + 1 >= v55 )
      {
        v69 = v55;
      }
      else
      {
        v59 = *(_QWORD *)(*(_QWORD *)(v54 + 184) + 8 * v56 + 8);
        v60 = v57;
        do
        {
          v61 = *(_QWORD *)(v54 + 184);
          v62 = *(_QWORD *)(v61 + 8 * v60);
          v63 = (google::protobuf *)*(unsigned int *)(v62 + 24);
          if ( *(_DWORD *)(v59 + 28) > (int)v63 && *(_DWORD *)(v62 + 28) > *(_DWORD *)(v59 + 24) )
          {
            v64 = *((_QWORD *)a4 + 1);
            v65 = *(_QWORD *)(v61 + 8 * v56 + 8);
            v187 = (void *)google::protobuf::FastInt32ToBuffer(v63, (int)v189, v53);
            v188 = strlen((const char *)v187);
            v184 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)(unsigned int)(*(_DWORD *)(v62 + 28) - 1),
                                   (int)v186,
                                   v66);
            v185 = strlen(v184);
            v181 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)*(unsigned int *)(v59 + 24),
                                   (int)v183,
                                   v67);
            v182 = strlen(v181);
            v178 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)(unsigned int)(*(_DWORD *)(v59 + 28) - 1),
                                   (int)v180,
                                   v68);
            v179 = strlen(v178);
            v176 = 0LL;
            v177 = -1;
            v174 = 0LL;
            v175 = -1;
            v172 = 0LL;
            v173 = -1;
            v170 = 0LL;
            v171 = -1;
            v168 = 0LL;
            v169 = -1;
            v166 = 0LL;
            v167 = -1;
            *((_QWORD *)&v143 + 1) = &v168;
            *(_QWORD *)&v143 = &v170;
            google::protobuf::strings::Substitute(
              (__int64 *)__p,
              (int)"Reserved range $0 to $1 overlaps with already-defined range $2 to $3.",
              (int)&v187,
              (int)&v184,
              (int)&v181,
              (int)&v178,
              (int)&v176,
              (int)&v174,
              (int)&v172,
              v143,
              (__int64)&v166);
            google::protobuf::DescriptorBuilder::AddError((__int64)v157, v64, v65, 1LL, (__int64)__p);
            if ( SBYTE7(v162) < 0 )
              operator delete(__p[0]);
            v55 = *((_DWORD *)v158 + 44);
          }
          ++v60;
          v54 = (__int64)v158;
        }
        while ( v55 > (int)v60 - 1 );
        v69 = v55;
      }
      ++v57;
      ++v56;
    }
    while ( v58 < v69 );
  }
  *(_OWORD *)__p = 0u;
  v162 = 0u;
  v163 = 1065353216;
  if ( *(int *)(v54 + 200) >= 1 )
  {
    v70 = 0LL;
    do
    {
      v71 = *(_QWORD *)(*(_QWORD *)(v54 + 208) + 8 * v70 + 8);
      if ( sub_10009BC68(__p, v71) )
      {
        v72 = *(char *)(v71 + 23);
        v73 = v72 < 0;
        v74 = *(void **)v71;
        v75 = *(_QWORD *)(v71 + 8);
        if ( v72 >= 0 )
          v74 = (void *)v71;
        v187 = v74;
        v72 = (unsigned __int8)v72;
        if ( v73 )
          v72 = v75;
        v188 = v72;
        v184 = 0LL;
        v185 = -1;
        v181 = 0LL;
        v182 = -1;
        v178 = 0LL;
        v179 = -1;
        v176 = 0LL;
        v177 = -1;
        v174 = 0LL;
        v175 = -1;
        v172 = 0LL;
        v173 = -1;
        v170 = 0LL;
        v171 = -1;
        v168 = 0LL;
        v169 = -1;
        v166 = 0LL;
        v167 = -1;
        *((_QWORD *)&v144 + 1) = &v168;
        *(_QWORD *)&v144 = &v170;
        google::protobuf::strings::Substitute(
          (__int64 *)v159,
          (int)"Field name \"$0\" is reserved multiple times.",
          (int)&v187,
          (int)&v184,
          (int)&v181,
          (int)&v178,
          (int)&v176,
          (int)&v174,
          (int)&v172,
          v144,
          (__int64)&v166);
        google::protobuf::DescriptorBuilder::AddError((__int64)v157, v71, v54, 0LL, (__int64)v159);
        if ( v160 < 0 )
          operator delete(v159[0]);
      }
      else
      {
        sub_10009C7C8(__p, v71, v71);
      }
      ++v70;
    }
    while ( v70 < *(int *)(v54 + 200) );
  }
  if ( *((int *)a4 + 26) >= 1 )
  {
    v76 = 0LL;
    do
    {
      *(_QWORD *)v154 = *((_QWORD *)a4 + 5);
      *(_QWORD *)v155 = v76;
      v77 = (const char ***)(*(_QWORD *)v154 + 152 * v76);
      v78 = *((_DWORD *)a4 + 31);
      if ( v78 >= 1 )
      {
        v79 = 0LL;
        v80 = 0LL;
        v81 = *(_QWORD *)v154 + 152LL * *(_QWORD *)v155;
        v82 = (_DWORD *)(v81 + 68);
        v83 = (__int64 *)(v81 + 8);
        do
        {
          v84 = *((_QWORD *)a4 + 9);
          v85 = (google::protobuf *)*(unsigned int *)(v84 + v79);
          if ( (int)v85 <= *v82 )
          {
            v86 = v84 + v79;
            if ( *v82 < *(_DWORD *)(v84 + v79 + 4) )
            {
              v87 = *v83;
              v88 = *(_QWORD *)(*((_QWORD *)v158 + 14) + 8 * v80 + 8);
              v187 = (void *)google::protobuf::FastInt32ToBuffer(v85, (int)v189, v53);
              v188 = strlen((const char *)v187);
              v184 = (const char *)google::protobuf::FastInt32ToBuffer(
                                     (google::protobuf *)(unsigned int)(*(_DWORD *)(v86 + 4) - 1),
                                     (int)v186,
                                     v89);
              v185 = strlen(v184);
              v91 = (const char *)*v77;
              v92 = *((char *)*v77 + 23);
              v93 = (*v77)[1];
              if ( v92 < 0 )
                v91 = **v77;
              v181 = v91;
              v94 = (unsigned __int8)v92;
              if ( v92 < 0 )
                v94 = (int)v93;
              v182 = v94;
              v178 = (const char *)google::protobuf::FastInt32ToBuffer(
                                     (google::protobuf *)(unsigned int)*v82,
                                     (int)v180,
                                     v90);
              v179 = strlen(v178);
              v176 = 0LL;
              v177 = -1;
              v174 = 0LL;
              v175 = -1;
              v172 = 0LL;
              v173 = -1;
              v170 = 0LL;
              v171 = -1;
              v168 = 0LL;
              v169 = -1;
              v166 = 0LL;
              v167 = -1;
              *((_QWORD *)&v145 + 1) = &v168;
              *(_QWORD *)&v145 = &v170;
              google::protobuf::strings::Substitute(
                (__int64 *)v159,
                (int)"Extension range $0 to $1 includes field \"$2\" ($3).",
                (int)&v187,
                (int)&v184,
                (int)&v181,
                (int)&v178,
                (int)&v176,
                (int)&v174,
                (int)&v172,
                v145,
                (__int64)&v166);
              google::protobuf::DescriptorBuilder::AddError((__int64)v157, v87, v88, 1LL, (__int64)v159);
              if ( v160 < 0 )
                operator delete(v159[0]);
              v78 = *((_DWORD *)a4 + 31);
            }
          }
          ++v80;
          v79 += 16LL;
        }
        while ( v80 < v78 );
      }
      v95 = *((_DWORD *)a4 + 33);
      if ( v95 >= 1 )
      {
        v96 = 0LL;
        v97 = 0LL;
        v98 = *(_QWORD *)v154 + 152LL * *(_QWORD *)v155;
        v99 = (unsigned int *)(v98 + 68);
        v100 = (__int64 *)(v98 + 8);
        do
        {
          v101 = *((_QWORD *)a4 + 11);
          v102 = (google::protobuf *)*v99;
          if ( *(_DWORD *)(v101 + v96) <= (int)v102 && (int)v102 < *(_DWORD *)(v101 + v96 + 4) )
          {
            v103 = *v100;
            v104 = *(_QWORD *)(*((_QWORD *)v158 + 23) + v96 + 8);
            v105 = *v77;
            v106 = *((char *)*v77 + 23);
            v107 = (*v77)[1];
            if ( v106 < 0 )
              v105 = **v77;
            v187 = v105;
            v108 = (unsigned __int8)v106;
            if ( v106 < 0 )
              v108 = (int)v107;
            v188 = v108;
            v184 = (const char *)google::protobuf::FastInt32ToBuffer(v102, (int)v186, v53);
            v185 = strlen(v184);
            v181 = 0LL;
            v182 = -1;
            v178 = 0LL;
            v179 = -1;
            v176 = 0LL;
            v177 = -1;
            v174 = 0LL;
            v175 = -1;
            v172 = 0LL;
            v173 = -1;
            v170 = 0LL;
            v171 = -1;
            v168 = 0LL;
            v169 = -1;
            v166 = 0LL;
            v167 = -1;
            *((_QWORD *)&v146 + 1) = &v168;
            *(_QWORD *)&v146 = &v170;
            google::protobuf::strings::Substitute(
              (__int64 *)v159,
              (int)"Field \"$0\" uses reserved number $1.",
              (int)&v187,
              (int)&v184,
              (int)&v181,
              (int)&v178,
              (int)&v176,
              (int)&v174,
              (int)&v172,
              v146,
              (__int64)&v166);
            google::protobuf::DescriptorBuilder::AddError((__int64)v157, v103, v104, 1LL, (__int64)v159);
            if ( v160 < 0 )
              operator delete(v159[0]);
            v95 = *((_DWORD *)a4 + 33);
          }
          ++v97;
          v96 += 8LL;
        }
        while ( v97 < v95 );
      }
      if ( sub_10009BC68(__p, *v77) )
      {
        v109 = *(_QWORD *)(*(_QWORD *)v154 + 152LL * *(_QWORD *)v155 + 8);
        v110 = *v77;
        v111 = *((char *)*v77 + 23);
        v112 = (*v77)[1];
        if ( v111 < 0 )
          v110 = **v77;
        v113 = *(_QWORD *)(*((_QWORD *)v158 + 5) + 8LL * *(_QWORD *)v155 + 8);
        v187 = v110;
        v114 = (unsigned __int8)v111;
        if ( v111 < 0 )
          v114 = (int)v112;
        v188 = v114;
        v184 = 0LL;
        v185 = -1;
        v181 = 0LL;
        v182 = -1;
        v178 = 0LL;
        v179 = -1;
        v176 = 0LL;
        v177 = -1;
        v174 = 0LL;
        v175 = -1;
        v172 = 0LL;
        v173 = -1;
        v170 = 0LL;
        v171 = -1;
        v168 = 0LL;
        v169 = -1;
        v166 = 0LL;
        v167 = -1;
        *((_QWORD *)&v147 + 1) = &v168;
        *(_QWORD *)&v147 = &v170;
        google::protobuf::strings::Substitute(
          (__int64 *)v159,
          (int)"Field name \"$0\" is reserved.",
          (int)&v187,
          (int)&v184,
          (int)&v181,
          (int)&v178,
          (int)&v176,
          (int)&v174,
          (int)&v172,
          v147,
          (__int64)&v166);
        google::protobuf::DescriptorBuilder::AddError((__int64)v157, v109, v113, 0LL, (__int64)v159);
        if ( v160 < 0 )
          operator delete(v159[0]);
      }
      v76 = *(_QWORD *)v155 + 1LL;
    }
    while ( *(_QWORD *)v155 + 1LL < *((int *)a4 + 26) );
  }
  v115 = *((_DWORD *)a4 + 31);
  if ( v115 >= 1 )
  {
    v116 = 0LL;
    v117 = 0LL;
    v118 = 1;
    do
    {
      v119 = *((_QWORD *)a4 + 9);
      v120 = (_DWORD *)(v119 + 16 * v117);
      v121 = *((_DWORD *)a4 + 33);
      v153 = v116;
      v152 = v118;
      *(_QWORD *)v156 = v117;
      if ( v121 >= 1 )
      {
        v150 = *((_QWORD *)a4 + 9);
        v122 = 0LL;
        v123 = 0LL;
        v124 = v120 + 1;
        do
        {
          v125 = *((_QWORD *)a4 + 11);
          if ( *v124 > *(_DWORD *)(v125 + v122) )
          {
            v126 = (google::protobuf *)(unsigned int)*v120;
            if ( *(_DWORD *)(v125 + v122 + 4) > (int)v126 )
            {
              v127 = *((_QWORD *)a4 + 1);
              v128 = *(_QWORD *)(*((_QWORD *)v158 + 14) + 8LL * *(_QWORD *)v156 + 8);
              v187 = (void *)google::protobuf::FastInt32ToBuffer(v126, (int)v189, v53);
              v188 = strlen((const char *)v187);
              v184 = (const char *)google::protobuf::FastInt32ToBuffer(
                                     (google::protobuf *)(unsigned int)(*v124 - 1),
                                     (int)v186,
                                     v129);
              v185 = strlen(v184);
              v181 = (const char *)google::protobuf::FastInt32ToBuffer(
                                     (google::protobuf *)*(unsigned int *)(v125 + v122),
                                     (int)v183,
                                     v130);
              v182 = strlen(v181);
              v178 = (const char *)google::protobuf::FastInt32ToBuffer(
                                     (google::protobuf *)(unsigned int)(*(_DWORD *)(v125 + v122 + 4) - 1),
                                     (int)v180,
                                     v131);
              v179 = strlen(v178);
              v176 = 0LL;
              v177 = -1;
              v174 = 0LL;
              v175 = -1;
              v172 = 0LL;
              v173 = -1;
              v170 = 0LL;
              v171 = -1;
              v168 = 0LL;
              v169 = -1;
              v166 = 0LL;
              v167 = -1;
              *((_QWORD *)&v148 + 1) = &v168;
              *(_QWORD *)&v148 = &v170;
              google::protobuf::strings::Substitute(
                (__int64 *)v159,
                (int)"Extension range $0 to $1 overlaps with reserved range $2 to $3.",
                (int)&v187,
                (int)&v184,
                (int)&v181,
                (int)&v178,
                (int)&v176,
                (int)&v174,
                (int)&v172,
                v148,
                (__int64)&v166);
              google::protobuf::DescriptorBuilder::AddError((__int64)v157, v127, v128, 1LL, (__int64)v159);
              if ( v160 < 0 )
                operator delete(v159[0]);
              v121 = *((_DWORD *)a4 + 33);
            }
          }
          ++v123;
          v122 += 8LL;
        }
        while ( v123 < v121 );
        v115 = *((_DWORD *)a4 + 31);
        v116 = v153;
        v118 = v152;
        v117 = *(_QWORD *)v156;
        v119 = v150;
      }
      v132 = v117 + 1;
      if ( v117 + 1 >= v115 )
      {
        v141 = v115;
      }
      else
      {
        v151 = v117 + 1;
        v133 = (_DWORD *)(v119 + 16 * v117 + 4);
        do
        {
          v134 = *((_QWORD *)a4 + 9) + v116;
          v135 = (google::protobuf *)*(unsigned int *)(v134 + 16);
          if ( *v133 > (int)v135 && *(_DWORD *)(v134 + 20) > *v120 )
          {
            v136 = *((_QWORD *)a4 + 1);
            v137 = *(_QWORD *)(*((_QWORD *)v158 + 14) + 8LL * *(_QWORD *)v156 + 8);
            v187 = (void *)google::protobuf::FastInt32ToBuffer(v135, (int)v189, v53);
            v188 = strlen((const char *)v187);
            v184 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)(unsigned int)(*(_DWORD *)(v134 + 20) - 1),
                                   (int)v186,
                                   v138);
            v185 = strlen(v184);
            v181 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)(unsigned int)*v120,
                                   (int)v183,
                                   v139);
            v182 = strlen(v181);
            v178 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)(unsigned int)(*v133 - 1),
                                   (int)v180,
                                   v140);
            v179 = strlen(v178);
            v176 = 0LL;
            v177 = -1;
            v174 = 0LL;
            v175 = -1;
            v172 = 0LL;
            v173 = -1;
            v170 = 0LL;
            v171 = -1;
            v168 = 0LL;
            v169 = -1;
            v166 = 0LL;
            v167 = -1;
            *((_QWORD *)&v149 + 1) = &v168;
            *(_QWORD *)&v149 = &v170;
            google::protobuf::strings::Substitute(
              (__int64 *)v159,
              (int)"Extension range $0 to $1 overlaps with already-defined range $2 to $3.",
              (int)&v187,
              (int)&v184,
              (int)&v181,
              (int)&v178,
              (int)&v176,
              (int)&v174,
              (int)&v172,
              v149,
              (__int64)&v166);
            google::protobuf::DescriptorBuilder::AddError((__int64)v157, v136, v137, 1LL, (__int64)v159);
            if ( v160 < 0 )
              operator delete(v159[0]);
            v115 = *((_DWORD *)a4 + 31);
          }
          ++v118;
          v116 += 16LL;
        }
        while ( v115 > v118 );
        v141 = v115;
        v116 = v153;
        v118 = v152;
        v132 = v151;
      }
      v116 += 16LL;
      ++v118;
      v117 = v132;
    }
    while ( v132 < v141 );
  }
  return sub_10009881C(__p);
}