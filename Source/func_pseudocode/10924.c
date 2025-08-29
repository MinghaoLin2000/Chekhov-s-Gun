__ZN6google8protobuf17DescriptorBuilder9BuildEnumERKNS0_19EnumDescriptorProtoEPKNS0_10DescriptorEPNS0_14EnumDescriptorE
__int64 __fastcall google::protobuf::DescriptorBuilder::BuildEnum(
        google::protobuf::DescriptorBuilder *this,
        const google::protobuf::EnumDescriptorProto *a2,
        const google::protobuf::Descriptor *a3,
        google::protobuf::EnumDescriptor *a4)
{
  _QWORD *v8; // x8
  __int64 NameString; // x23
  _QWORD *v10; // x24
  google::protobuf::DescriptorBuilder *v11; // x0
  int v12; // w8
  const google::protobuf::EnumDescriptorProto *v13; // x9
  __int64 v14; // x20
  __int64 v15; // x21
  int v16; // w8
  int *v17; // x20
  int v18; // w8
  const google::protobuf::EnumDescriptorProto *v19; // x10
  __int64 v20; // x20
  __int64 v21; // x2
  int32x2_t v22; // d0
  __int64 v23; // x21
  __int64 v24; // x20
  __int64 v25; // x21
  google::protobuf::DescriptorPool::Tables *v26; // x23
  __int64 v27; // x20
  __int64 v28; // x23
  char *v29; // x2
  const google::protobuf::EnumDescriptorProto *v30; // x10
  int v31; // w8
  __int64 v32; // x22
  __int64 v33; // x25
  __int64 v34; // x23
  __int64 v35; // x24
  __int64 v36; // x26
  __int64 v37; // x9
  __int64 v38; // x20
  google::protobuf *v39; // x0
  __int64 v40; // x27
  __int64 v41; // x28
  char *v42; // x2
  char *v43; // x2
  char *v44; // x2
  __int64 v45; // x9
  __int64 v46; // x20
  __int64 v47; // x23
  int v48; // w8
  bool v49; // cc
  void *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x27
  void ***v53; // x21
  int v54; // w8
  __int64 v55; // x28
  __int64 v56; // x22
  __int64 v57; // x9
  unsigned int *v58; // x23
  __int64 *v59; // x20
  __int64 v60; // x9
  google::protobuf *v61; // x0
  __int64 v62; // x25
  __int64 v63; // x26
  void *v64; // x8
  int v65; // w9
  void *v66; // x11
  int v67; // w8
  __int64 v68; // x25
  _QWORD *v69; // x8
  int v70; // w9
  void *v71; // x11
  __int64 v72; // x26
  int v73; // w8
  __int128 v75; // [xsp+0h] [xbp-2F0h]
  __int128 v76; // [xsp+0h] [xbp-2F0h]
  __int128 v77; // [xsp+0h] [xbp-2F0h]
  __int128 v78; // [xsp+0h] [xbp-2F0h]
  int v79[2]; // [xsp+28h] [xbp-2C8h]
  google::protobuf::DescriptorPool::Tables **v80; // [xsp+38h] [xbp-2B8h]
  const google::protobuf::EnumDescriptorProto *v81; // [xsp+40h] [xbp-2B0h]
  void *v82[2]; // [xsp+48h] [xbp-2A8h] BYREF
  char v83; // [xsp+5Fh] [xbp-291h]
  void *__p[2]; // [xsp+60h] [xbp-290h] BYREF
  __int128 v85; // [xsp+70h] [xbp-280h]
  int v86; // [xsp+80h] [xbp-270h]
  __int64 v87[2]; // [xsp+90h] [xbp-260h] BYREF
  __int64 v88[2]; // [xsp+A0h] [xbp-250h] BYREF
  __int64 v89; // [xsp+B0h] [xbp-240h] BYREF
  int v90; // [xsp+B8h] [xbp-238h]
  __int64 v91; // [xsp+E0h] [xbp-210h] BYREF
  int v92; // [xsp+E8h] [xbp-208h]
  __int64 v93; // [xsp+110h] [xbp-1E0h] BYREF
  int v94; // [xsp+118h] [xbp-1D8h]
  __int64 v95; // [xsp+140h] [xbp-1B0h] BYREF
  int v96; // [xsp+148h] [xbp-1A8h]
  __int64 v97; // [xsp+170h] [xbp-180h] BYREF
  int v98; // [xsp+178h] [xbp-178h]
  __int64 v99; // [xsp+1A0h] [xbp-150h] BYREF
  int v100; // [xsp+1A8h] [xbp-148h]
  const char *v101; // [xsp+1D0h] [xbp-120h] BYREF
  int v102; // [xsp+1D8h] [xbp-118h]
  int v103; // [xsp+1DCh] [xbp-114h] BYREF
  const char *v104; // [xsp+200h] [xbp-F0h] BYREF
  int v105; // [xsp+208h] [xbp-E8h]
  int v106; // [xsp+20Ch] [xbp-E4h] BYREF
  const char *v107; // [xsp+230h] [xbp-C0h] BYREF
  int v108; // [xsp+238h] [xbp-B8h]
  _BYTE v109[36]; // [xsp+23Ch] [xbp-B4h] BYREF
  void *v110; // [xsp+260h] [xbp-90h] BYREF
  int v111; // [xsp+268h] [xbp-88h]
  _BYTE v112[36]; // [xsp+26Ch] [xbp-84h] BYREF

  if ( a3 )
    v8 = (_QWORD *)((char *)a3 + 8);
  else
    v8 = (_QWORD *)(*((_QWORD *)this + 10) + 8LL);
  NameString = google::protobuf::DescriptorBuilder::AllocateNameString(
                 this,
                 *v8,
                 *((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL);
  google::protobuf::DescriptorBuilder::ValidateSymbolName(
    (__int64)this,
    (unsigned __int8 *)(*((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL),
    NameString,
    (__int64)a2);
  v80 = (google::protobuf::DescriptorPool::Tables **)this;
  v81 = a2;
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  sub_10007A644(v88, *((_QWORD *)a2 + 12) & 0xFFFFFFFFFFFFFFFELL);
  *(_QWORD *)a4 = google::protobuf::DescriptorPool::Tables::AllocateString(v10, v88[0], v88[1]);
  *((_QWORD *)a4 + 1) = NameString;
  v11 = this;
  *((_QWORD *)a4 + 2) = *((_QWORD *)this + 10);
  *((_QWORD *)a4 + 3) = a3;
  *((_WORD *)a4 + 20) = 0;
  v12 = *((_DWORD *)a2 + 8);
  if ( !v12 )
  {
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)this,
      NameString,
      (__int64)a2,
      0LL,
      "Enums must contain at least one value.");
    v11 = this;
    v12 = *((_DWORD *)a2 + 8);
  }
  *((_DWORD *)a4 + 11) = v12;
  *((_QWORD *)a4 + 6) = google::protobuf::DescriptorPool::Tables::AllocateBytes(
                          *((google::protobuf::DescriptorPool::Tables **)v11 + 1),
                          40 * v12);
  v13 = a2;
  if ( *((int *)a2 + 8) >= 1 )
  {
    v14 = 0LL;
    v15 = 0LL;
    do
    {
      google::protobuf::DescriptorBuilder::BuildEnumValue(
        (google::protobuf::DescriptorBuilder *)v80,
        *(const google::protobuf::EnumValueDescriptorProto **)(*((_QWORD *)v13 + 5) + 8 * v15++ + 8),
        a4,
        (google::protobuf::EnumValueDescriptor *)(*((_QWORD *)a4 + 6) + v14));
      v13 = v81;
      v14 += 40LL;
    }
    while ( v15 < *((int *)v81 + 8) );
  }
  v17 = (int *)((char *)v13 + 56);
  v16 = *((_DWORD *)v13 + 14);
  *((_DWORD *)a4 + 14) = v16;
  *((_QWORD *)a4 + 8) = google::protobuf::DescriptorPool::Tables::AllocateBytes(v80[1], 8 * v16);
  v18 = *v17;
  v19 = v81;
  if ( *v17 >= 1 )
  {
    v20 = 0LL;
    do
    {
      v21 = *(_QWORD *)(*((_QWORD *)v19 + 8) + 8 * v20 + 8);
      v22 = *(int32x2_t *)(v21 + 24);
      *(int32x2_t *)(*((_QWORD *)a4 + 8) + 8 * v20) = v22;
      if ( (vcgt_s32(v22, vdup_lane_s32(v22, 1)).u8[0] & 1) != 0 )
      {
        google::protobuf::DescriptorBuilder::AddError(
          (__int64)v80,
          *((_QWORD *)a4 + 1),
          v21,
          1LL,
          "Reserved range end number must be greater than start number.");
        v19 = v81;
        v18 = *((_DWORD *)v81 + 14);
      }
      ++v20;
    }
    while ( v20 < v18 );
  }
  v23 = *((unsigned int *)v19 + 20);
  *((_DWORD *)a4 + 15) = v23;
  *((_QWORD *)a4 + 9) = google::protobuf::DescriptorPool::Tables::AllocateBytes(v80[1], 8 * (int)v23);
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = 8 * v23;
    do
    {
      v26 = v80[1];
      sub_10007A644(v87, *(_QWORD *)(*((_QWORD *)v81 + 11) + v24 + 8));
      *(_QWORD *)(*((_QWORD *)a4 + 9) + v24) = google::protobuf::DescriptorPool::Tables::AllocateString(
                                                 v26,
                                                 v87[0],
                                                 v87[1]);
      v24 += 8LL;
    }
    while ( v25 != v24 );
  }
  google::protobuf::DescriptorBuilder::CheckEnumValueUniqueness((google::protobuf::DescriptorBuilder *)v80, v81, a4);
  *((_QWORD *)a4 + 4) = 0LL;
  v27 = (__int64)v81;
  if ( (*((_BYTE *)v81 + 16) & 2) != 0 )
  {
    v28 = *((_QWORD *)v81 + 13);
    sub_10007A754((int)&v110, "google.protobuf.EnumOptions");
    sub_10008EC00(v80, v28, a4, 3LL, &v110);
    v27 = (__int64)v81;
    if ( (v112[11] & 0x80000000) != 0 )
      operator delete(v110);
  }
  google::protobuf::DescriptorBuilder::AddSymbol(
    (__int64)v80,
    *((std::string **)a4 + 1),
    (__int64)a3,
    *(char **)a4,
    v27,
    4LL,
    (__int64)a4);
  v30 = v81;
  v31 = *((_DWORD *)v81 + 14);
  if ( v31 >= 1 )
  {
    v32 = 0LL;
    v33 = 2LL;
    do
    {
      v34 = v32 + 1;
      if ( v32 + 1 >= v31 )
      {
        v45 = v31;
      }
      else
      {
        v35 = *(_QWORD *)(*((_QWORD *)v30 + 8) + 8 * v32 + 8);
        v36 = v33;
        do
        {
          v37 = *((_QWORD *)v81 + 8);
          v38 = *(_QWORD *)(v37 + 8 * v36);
          v39 = (google::protobuf *)*(unsigned int *)(v38 + 24);
          if ( *(_DWORD *)(v35 + 28) >= (int)v39 && *(_DWORD *)(v38 + 28) >= *(_DWORD *)(v35 + 24) )
          {
            v40 = *((_QWORD *)a4 + 1);
            v41 = *(_QWORD *)(v37 + 8 * v32 + 8);
            v110 = (void *)google::protobuf::FastInt32ToBuffer(v39, (int)v112, v29);
            v111 = strlen((const char *)v110);
            v107 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)*(unsigned int *)(v38 + 28),
                                   (int)v109,
                                   v42);
            v108 = strlen(v107);
            v104 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)*(unsigned int *)(v35 + 24),
                                   (int)&v106,
                                   v43);
            v105 = strlen(v104);
            v101 = (const char *)google::protobuf::FastInt32ToBuffer(
                                   (google::protobuf *)*(unsigned int *)(v35 + 28),
                                   (int)&v103,
                                   v44);
            v102 = strlen(v101);
            v99 = 0LL;
            v100 = -1;
            v97 = 0LL;
            v98 = -1;
            v95 = 0LL;
            v96 = -1;
            v93 = 0LL;
            v94 = -1;
            v91 = 0LL;
            v92 = -1;
            v89 = 0LL;
            v90 = -1;
            *((_QWORD *)&v75 + 1) = &v91;
            *(_QWORD *)&v75 = &v93;
            google::protobuf::strings::Substitute(
              (__int64 *)__p,
              (int)"Reserved range $0 to $1 overlaps with already-defined range $2 to $3.",
              (int)&v110,
              (int)&v107,
              (int)&v104,
              (int)&v101,
              (int)&v99,
              (int)&v97,
              (int)&v95,
              v75,
              (__int64)&v89);
            google::protobuf::DescriptorBuilder::AddError((__int64)v80, v40, v41, 1LL, (__int64)__p);
            if ( SBYTE7(v85) < 0 )
              operator delete(__p[0]);
            v31 = *((_DWORD *)v81 + 14);
          }
          ++v36;
        }
        while ( v31 > (int)v36 - 1 );
        v45 = v31;
        v30 = v81;
      }
      ++v33;
      ++v32;
    }
    while ( v34 < v45 );
  }
  *(_OWORD *)__p = 0u;
  v85 = 0u;
  v86 = 1065353216;
  if ( *((int *)v30 + 20) >= 1 )
  {
    v46 = 0LL;
    do
    {
      v47 = *(_QWORD *)(*((_QWORD *)v30 + 11) + 8 * v46 + 8);
      if ( sub_10009BC68(__p, v47) )
      {
        v48 = *(char *)(v47 + 23);
        v49 = v48 < 0;
        v50 = *(void **)v47;
        v51 = *(_QWORD *)(v47 + 8);
        if ( v48 >= 0 )
          v50 = (void *)v47;
        v110 = v50;
        v48 = (unsigned __int8)v48;
        if ( v49 )
          v48 = v51;
        v111 = v48;
        v107 = 0LL;
        v108 = -1;
        v104 = 0LL;
        v105 = -1;
        v101 = 0LL;
        v102 = -1;
        v99 = 0LL;
        v100 = -1;
        v97 = 0LL;
        v98 = -1;
        v95 = 0LL;
        v96 = -1;
        v93 = 0LL;
        v94 = -1;
        v91 = 0LL;
        v92 = -1;
        v89 = 0LL;
        v90 = -1;
        *((_QWORD *)&v76 + 1) = &v91;
        *(_QWORD *)&v76 = &v93;
        google::protobuf::strings::Substitute(
          (__int64 *)v82,
          (int)"Enum value \"$0\" is reserved multiple times.",
          (int)&v110,
          (int)&v107,
          (int)&v104,
          (int)&v101,
          (int)&v99,
          (int)&v97,
          (int)&v95,
          v76,
          (__int64)&v89);
        google::protobuf::DescriptorBuilder::AddError((__int64)v80, v47, (__int64)v81, 0LL, (__int64)v82);
        if ( v83 < 0 )
          operator delete(v82[0]);
      }
      else
      {
        sub_10009C7C8(__p, v47, v47);
      }
      ++v46;
      v30 = v81;
    }
    while ( v46 < *((int *)v81 + 20) );
  }
  if ( *((int *)a4 + 11) >= 1 )
  {
    v52 = 0LL;
    do
    {
      *(_QWORD *)v79 = *((_QWORD *)a4 + 6);
      v53 = (void ***)(*(_QWORD *)v79 + 40 * v52);
      v54 = *((_DWORD *)a4 + 14);
      if ( v54 >= 1 )
      {
        v55 = 0LL;
        v56 = 0LL;
        v57 = *(_QWORD *)v79 + 40 * v52;
        v58 = (unsigned int *)(v57 + 16);
        v59 = (__int64 *)(v57 + 8);
        do
        {
          v60 = *((_QWORD *)a4 + 8);
          v61 = (google::protobuf *)*v58;
          if ( *(_DWORD *)(v60 + v55) <= (int)v61 && (int)v61 <= *(_DWORD *)(v60 + v55 + 4) )
          {
            v62 = *v59;
            v63 = *(_QWORD *)(*((_QWORD *)v81 + 8) + v55 + 8);
            v64 = *v53;
            v65 = *((char *)*v53 + 23);
            v66 = (*v53)[1];
            if ( v65 < 0 )
              v64 = **v53;
            v110 = v64;
            v67 = (unsigned __int8)v65;
            if ( v65 < 0 )
              v67 = (int)v66;
            v111 = v67;
            v107 = (const char *)google::protobuf::FastInt32ToBuffer(v61, (int)v109, v29);
            v108 = strlen(v107);
            v104 = 0LL;
            v105 = -1;
            v101 = 0LL;
            v102 = -1;
            v99 = 0LL;
            v100 = -1;
            v97 = 0LL;
            v98 = -1;
            v95 = 0LL;
            v96 = -1;
            v93 = 0LL;
            v94 = -1;
            v91 = 0LL;
            v92 = -1;
            v89 = 0LL;
            v90 = -1;
            *((_QWORD *)&v77 + 1) = &v91;
            *(_QWORD *)&v77 = &v93;
            google::protobuf::strings::Substitute(
              (__int64 *)v82,
              (int)"Enum value \"$0\" uses reserved number $1.",
              (int)&v110,
              (int)&v107,
              (int)&v104,
              (int)&v101,
              (int)&v99,
              (int)&v97,
              (int)&v95,
              v77,
              (__int64)&v89);
            google::protobuf::DescriptorBuilder::AddError((__int64)v80, v62, v63, 1LL, (__int64)v82);
            if ( v83 < 0 )
              operator delete(v82[0]);
            v54 = *((_DWORD *)a4 + 14);
          }
          ++v56;
          v55 += 8LL;
        }
        while ( v56 < v54 );
      }
      if ( sub_10009BC68(__p, *v53) )
      {
        v68 = *(_QWORD *)(*(_QWORD *)v79 + 40 * v52 + 8);
        v69 = *v53;
        v70 = *((char *)*v53 + 23);
        v71 = (*v53)[1];
        if ( v70 < 0 )
          v69 = **v53;
        v72 = *(_QWORD *)(*((_QWORD *)v81 + 5) + 8 * v52 + 8);
        v110 = v69;
        v73 = (unsigned __int8)v70;
        if ( v70 < 0 )
          v73 = (int)v71;
        v111 = v73;
        v107 = 0LL;
        v108 = -1;
        v104 = 0LL;
        v105 = -1;
        v101 = 0LL;
        v102 = -1;
        v99 = 0LL;
        v100 = -1;
        v97 = 0LL;
        v98 = -1;
        v95 = 0LL;
        v96 = -1;
        v93 = 0LL;
        v94 = -1;
        v91 = 0LL;
        v92 = -1;
        v89 = 0LL;
        v90 = -1;
        *((_QWORD *)&v78 + 1) = &v91;
        *(_QWORD *)&v78 = &v93;
        google::protobuf::strings::Substitute(
          (__int64 *)v82,
          (int)"Enum value \"$0\" is reserved.",
          (int)&v110,
          (int)&v107,
          (int)&v104,
          (int)&v101,
          (int)&v99,
          (int)&v97,
          (int)&v95,
          v78,
          (__int64)&v89);
        google::protobuf::DescriptorBuilder::AddError((__int64)v80, v68, v72, 0LL, (__int64)v82);
        if ( v83 < 0 )
          operator delete(v82[0]);
      }
      ++v52;
    }
    while ( v52 < *((int *)a4 + 11) );
  }
  return sub_10009881C(__p);
}