__ZNK6google8protobuf14EnumDescriptor11DebugStringEiPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_18DebugStringOptionsE
void __fastcall google::protobuf::EnumDescriptor::DebugString(__int64 a1, int a2, __int64 a3, __int16 *a4)
{
  char SourceLocation; // w0
  int v9; // w8
  void **v10; // x9
  const char *v11; // x8
  int v12; // w9
  __int64 v13; // x11
  int v14; // w8
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  int v18; // w8
  void **v19; // x9
  char *v20; // x2
  __int64 v21; // x25
  __int64 v22; // x26
  unsigned int *v23; // x23
  google::protobuf *v24; // x0
  char *v25; // x2
  __int64 v26; // x8
  int v27; // w8
  void **v28; // x9
  __int64 v29; // x22
  const char *p_p; // x9
  int v31; // w8
  __int64 v32; // x8
  int v33; // w8
  void **v34; // x9
  __int128 v35; // [xsp+0h] [xbp-310h]
  __int128 v36; // [xsp+0h] [xbp-310h]
  __int128 v37; // [xsp+0h] [xbp-310h]
  __int128 v38; // [xsp+0h] [xbp-310h]
  __int128 v39; // [xsp+0h] [xbp-310h]
  __int128 v40; // [xsp+0h] [xbp-310h]
  __int128 v41; // [xsp+0h] [xbp-310h]
  void *__p; // [xsp+20h] [xbp-2F0h] BYREF
  __int64 v43; // [xsp+28h] [xbp-2E8h]
  unsigned __int8 v44; // [xsp+37h] [xbp-2D9h]
  _BYTE v45[8]; // [xsp+38h] [xbp-2D8h] BYREF
  __int64 v46; // [xsp+40h] [xbp-2D0h] BYREF
  void *v47[2]; // [xsp+50h] [xbp-2C0h]
  void *v48[2]; // [xsp+60h] [xbp-2B0h]
  __int128 v49; // [xsp+70h] [xbp-2A0h]
  __int128 v50; // [xsp+80h] [xbp-290h] BYREF
  __int64 v51; // [xsp+90h] [xbp-280h]
  __int16 v52; // [xsp+98h] [xbp-278h]
  char v53; // [xsp+9Ah] [xbp-276h]
  __int128 v54; // [xsp+A0h] [xbp-270h] BYREF
  __int64 v55; // [xsp+B0h] [xbp-260h]
  void *__b[2]; // [xsp+B8h] [xbp-258h] BYREF
  __int64 v57; // [xsp+C8h] [xbp-248h]
  __int64 v58; // [xsp+D0h] [xbp-240h] BYREF
  int v59; // [xsp+D8h] [xbp-238h]
  __int64 v60; // [xsp+100h] [xbp-210h] BYREF
  int v61; // [xsp+108h] [xbp-208h]
  __int64 v62; // [xsp+130h] [xbp-1E0h] BYREF
  int v63; // [xsp+138h] [xbp-1D8h]
  __int64 v64; // [xsp+160h] [xbp-1B0h] BYREF
  int v65; // [xsp+168h] [xbp-1A8h]
  __int64 v66; // [xsp+190h] [xbp-180h] BYREF
  int v67; // [xsp+198h] [xbp-178h]
  __int64 v68; // [xsp+1C0h] [xbp-150h] BYREF
  int v69; // [xsp+1C8h] [xbp-148h]
  __int64 v70; // [xsp+1F0h] [xbp-120h] BYREF
  int v71; // [xsp+1F8h] [xbp-118h]
  __int64 v72; // [xsp+220h] [xbp-F0h] BYREF
  int v73; // [xsp+228h] [xbp-E8h]
  const char *v74; // [xsp+250h] [xbp-C0h] BYREF
  int v75; // [xsp+258h] [xbp-B8h]
  int v76; // [xsp+25Ch] [xbp-B4h] BYREF
  const char *v77; // [xsp+280h] [xbp-90h] BYREF
  int v78; // [xsp+288h] [xbp-88h]
  _BYTE v79[36]; // [xsp+28Ch] [xbp-84h] BYREF

  sub_10009C1E8(__b, 2 * a2, 32);
  v51 = 0LL;
  v49 = 0u;
  v50 = 0u;
  *(_OWORD *)v47 = 0u;
  *(_OWORD *)v48 = 0u;
  v52 = *a4;
  v53 = *((_BYTE *)a4 + 2);
  if ( SHIBYTE(v57) < 0 )
  {
    sub_10007A474(&v54, __b[0]);
  }
  else
  {
    v54 = *(_OWORD *)__b;
    v55 = v57;
  }
  if ( *(_BYTE *)a4 )
    SourceLocation = google::protobuf::EnumDescriptor::GetSourceLocation(a1, &v46);
  else
    SourceLocation = 0;
  v45[0] = SourceLocation;
  sub_100080B14(v45, a3);
  v9 = HIBYTE(v57);
  v10 = __b;
  if ( v57 < 0 )
    v10 = (void **)__b[0];
  v77 = (const char *)v10;
  if ( v57 < 0 )
    v9 = (int)__b[1];
  v78 = v9;
  v11 = *(const char **)a1;
  v12 = *(char *)(*(_QWORD *)a1 + 23LL);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v12 < 0 )
    v11 = **(const char ***)a1;
  v74 = v11;
  v14 = (unsigned __int8)v12;
  if ( v12 < 0 )
    v14 = v13;
  v75 = v14;
  v72 = 0LL;
  v73 = -1;
  v70 = 0LL;
  v71 = -1;
  v68 = 0LL;
  v69 = -1;
  v66 = 0LL;
  v67 = -1;
  v64 = 0LL;
  v65 = -1;
  v62 = 0LL;
  v63 = -1;
  v60 = 0LL;
  v61 = -1;
  v58 = 0LL;
  v59 = -1;
  *(_QWORD *)&v35 = &v64;
  *((_QWORD *)&v35 + 1) = &v62;
  google::protobuf::strings::SubstituteAndAppend(
    (std::string *)a3,
    (int)"$0enum $1 {\n",
    (int)&v77,
    (int)&v74,
    (int)&v72,
    (int)&v70,
    (int)&v68,
    (int)&v66,
    v35,
    (__int64)&v60,
    (__int64)&v58);
  v15 = (unsigned int)(a2 + 1);
  sub_100080D5C(v15, *(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), a3);
  if ( *(int *)(a1 + 44) >= 1 )
  {
    v16 = 0LL;
    v17 = 0LL;
    do
    {
      google::protobuf::EnumValueDescriptor::DebugString(*(_QWORD *)(a1 + 48) + v16, v15, a3, a4);
      ++v17;
      v16 += 40LL;
    }
    while ( v17 < *(int *)(a1 + 44) );
  }
  if ( *(int *)(a1 + 56) > 0 )
  {
    v18 = HIBYTE(v57);
    v19 = __b;
    if ( v57 < 0 )
      v19 = (void **)__b[0];
    v77 = (const char *)v19;
    if ( v57 < 0 )
      v18 = (int)__b[1];
    v78 = v18;
    v74 = 0LL;
    v75 = -1;
    v72 = 0LL;
    v73 = -1;
    v70 = 0LL;
    v71 = -1;
    v68 = 0LL;
    v69 = -1;
    v66 = 0LL;
    v67 = -1;
    v64 = 0LL;
    v65 = -1;
    v62 = 0LL;
    v63 = -1;
    v60 = 0LL;
    v61 = -1;
    v58 = 0LL;
    v59 = -1;
    *(_QWORD *)&v36 = &v64;
    *((_QWORD *)&v36 + 1) = &v62;
    google::protobuf::strings::SubstituteAndAppend(
      (std::string *)a3,
      (int)"$0  reserved ",
      (int)&v77,
      (int)&v74,
      (int)&v72,
      (int)&v70,
      (int)&v68,
      (int)&v66,
      v36,
      (__int64)&v60,
      (__int64)&v58);
    if ( *(int *)(a1 + 56) >= 1 )
    {
      v21 = 0LL;
      v22 = 0LL;
      do
      {
        v23 = (unsigned int *)(*(_QWORD *)(a1 + 64) + v21);
        v24 = (google::protobuf *)v23[1];
        if ( (_DWORD)v24 == *v23 )
        {
          v77 = (const char *)google::protobuf::FastInt32ToBuffer(v24, (int)v79, v20);
          v78 = strlen(v77);
          v74 = 0LL;
          v75 = -1;
          v72 = 0LL;
          v73 = -1;
          v70 = 0LL;
          v71 = -1;
          v68 = 0LL;
          v69 = -1;
          v66 = 0LL;
          v67 = -1;
          v64 = 0LL;
          v65 = -1;
          v62 = 0LL;
          v63 = -1;
          v60 = 0LL;
          v61 = -1;
          v58 = 0LL;
          v59 = -1;
          *((_QWORD *)&v37 + 1) = &v62;
          *(_QWORD *)&v37 = &v64;
          google::protobuf::strings::SubstituteAndAppend(
            (std::string *)a3,
            (int)"$0, ",
            (int)&v77,
            (int)&v74,
            (int)&v72,
            (int)&v70,
            (int)&v68,
            (int)&v66,
            v37,
            (__int64)&v60,
            (__int64)&v58);
        }
        else
        {
          v77 = (const char *)google::protobuf::FastInt32ToBuffer((google::protobuf *)*v23, (int)v79, v20);
          v78 = strlen(v77);
          v74 = (const char *)google::protobuf::FastInt32ToBuffer((google::protobuf *)v23[1], (int)&v76, v25);
          v75 = strlen(v74);
          v72 = 0LL;
          v73 = -1;
          v70 = 0LL;
          v71 = -1;
          v68 = 0LL;
          v69 = -1;
          v66 = 0LL;
          v67 = -1;
          v64 = 0LL;
          v65 = -1;
          v62 = 0LL;
          v63 = -1;
          v60 = 0LL;
          v61 = -1;
          v58 = 0LL;
          v59 = -1;
          *((_QWORD *)&v38 + 1) = &v62;
          *(_QWORD *)&v38 = &v64;
          google::protobuf::strings::SubstituteAndAppend(
            (std::string *)a3,
            (int)"$0 to $1, ",
            (int)&v77,
            (int)&v74,
            (int)&v72,
            (int)&v70,
            (int)&v68,
            (int)&v66,
            v38,
            (__int64)&v60,
            (__int64)&v58);
        }
        ++v22;
        v21 += 8LL;
      }
      while ( v22 < *(int *)(a1 + 56) );
    }
    if ( *(char *)(a3 + 23) < 0 )
      v26 = *(_QWORD *)(a3 + 8);
    else
      v26 = *(unsigned __int8 *)(a3 + 23);
    std::string::replace((std::string *)a3, v26 - 2, 2uLL, ";\n");
  }
  if ( *(int *)(a1 + 60) >= 1 )
  {
    v27 = HIBYTE(v57);
    v28 = __b;
    if ( v57 < 0 )
      v28 = (void **)__b[0];
    v77 = (const char *)v28;
    if ( v57 < 0 )
      v27 = (int)__b[1];
    v78 = v27;
    v74 = 0LL;
    v75 = -1;
    v72 = 0LL;
    v73 = -1;
    v70 = 0LL;
    v71 = -1;
    v68 = 0LL;
    v69 = -1;
    v66 = 0LL;
    v67 = -1;
    v64 = 0LL;
    v65 = -1;
    v62 = 0LL;
    v63 = -1;
    v60 = 0LL;
    v61 = -1;
    v58 = 0LL;
    v59 = -1;
    *(_QWORD *)&v39 = &v64;
    *((_QWORD *)&v39 + 1) = &v62;
    google::protobuf::strings::SubstituteAndAppend(
      (std::string *)a3,
      (int)"$0  reserved ",
      (int)&v77,
      (int)&v74,
      (int)&v72,
      (int)&v70,
      (int)&v68,
      (int)&v66,
      v39,
      (__int64)&v60,
      (__int64)&v58);
    if ( *(int *)(a1 + 60) >= 1 )
    {
      v29 = 0LL;
      do
      {
        google::protobuf::CEscape(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v29));
        p_p = (const char *)__p;
        if ( (v44 & 0x80u) == 0 )
          p_p = (const char *)&__p;
        v77 = p_p;
        v31 = v44;
        if ( (v44 & 0x80u) != 0 )
          v31 = v43;
        v78 = v31;
        v74 = 0LL;
        v75 = -1;
        v72 = 0LL;
        v73 = -1;
        v70 = 0LL;
        v71 = -1;
        v68 = 0LL;
        v69 = -1;
        v66 = 0LL;
        v67 = -1;
        v64 = 0LL;
        v65 = -1;
        v62 = 0LL;
        v63 = -1;
        v60 = 0LL;
        v61 = -1;
        v58 = 0LL;
        v59 = -1;
        *(_QWORD *)&v40 = &v64;
        *((_QWORD *)&v40 + 1) = &v62;
        google::protobuf::strings::SubstituteAndAppend(
          (std::string *)a3,
          (int)"\"$0\", ",
          (int)&v77,
          (int)&v74,
          (int)&v72,
          (int)&v70,
          (int)&v68,
          (int)&v66,
          v40,
          (__int64)&v60,
          (__int64)&v58);
        if ( (char)v44 < 0 )
          operator delete(__p);
        ++v29;
      }
      while ( v29 < *(int *)(a1 + 60) );
    }
    if ( *(char *)(a3 + 23) < 0 )
      v32 = *(_QWORD *)(a3 + 8);
    else
      v32 = *(unsigned __int8 *)(a3 + 23);
    std::string::replace((std::string *)a3, v32 - 2, 2uLL, ";\n");
  }
  v33 = HIBYTE(v57);
  v34 = __b;
  if ( v57 < 0 )
    v34 = (void **)__b[0];
  v77 = (const char *)v34;
  if ( v57 < 0 )
    v33 = (int)__b[1];
  v78 = v33;
  v74 = 0LL;
  v75 = -1;
  v72 = 0LL;
  v73 = -1;
  v70 = 0LL;
  v71 = -1;
  v68 = 0LL;
  v69 = -1;
  v66 = 0LL;
  v67 = -1;
  v64 = 0LL;
  v65 = -1;
  v62 = 0LL;
  v63 = -1;
  v60 = 0LL;
  v61 = -1;
  v58 = 0LL;
  v59 = -1;
  *(_QWORD *)&v41 = &v64;
  *((_QWORD *)&v41 + 1) = &v62;
  google::protobuf::strings::SubstituteAndAppend(
    (std::string *)a3,
    (int)"$0}\n",
    (int)&v77,
    (int)&v74,
    (int)&v72,
    (int)&v70,
    (int)&v68,
    (int)&v66,
    v41,
    (__int64)&v60,
    (__int64)&v58);
  sub_100080C48(v45, a3);
  if ( SHIBYTE(v55) < 0 )
    operator delete((void *)v54);
  v77 = (const char *)&v50;
  sub_10009857C(&v77);
  if ( SHIBYTE(v49) < 0 )
    operator delete(v48[1]);
  if ( SHIBYTE(v48[0]) < 0 )
    operator delete(v47[0]);
  if ( SHIBYTE(v57) < 0 )
    operator delete(__b[0]);
}