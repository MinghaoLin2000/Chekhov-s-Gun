__ZNK6google8protobuf19EnumValueDescriptor11DebugStringEiPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_18DebugStringOptionsE
void __fastcall google::protobuf::EnumValueDescriptor::DebugString(
        __int64 ***a1,
        __int64 a2,
        std::string *a3,
        __int16 *a4)
{
  char SourceLocation; // w0
  char *v9; // x2
  int v10; // w8
  void **v11; // x9
  __int64 **v12; // x8
  int v13; // w9
  __int64 *v14; // x11
  int v15; // w8
  int v16; // w8
  void **p_p; // x9
  __int128 v18; // [xsp+0h] [xbp-2F0h]
  __int128 v19; // [xsp+0h] [xbp-2F0h]
  void *__p; // [xsp+28h] [xbp-2C8h] BYREF
  __int64 v21; // [xsp+30h] [xbp-2C0h]
  __int64 v22; // [xsp+38h] [xbp-2B8h]
  char v23[8]; // [xsp+40h] [xbp-2B0h] BYREF
  __int64 v24; // [xsp+48h] [xbp-2A8h] BYREF
  void *v25[2]; // [xsp+58h] [xbp-298h]
  void *v26[2]; // [xsp+68h] [xbp-288h]
  __int128 v27; // [xsp+78h] [xbp-278h]
  __int128 v28; // [xsp+88h] [xbp-268h] BYREF
  __int64 v29; // [xsp+98h] [xbp-258h]
  __int16 v30; // [xsp+A0h] [xbp-250h]
  char v31; // [xsp+A2h] [xbp-24Eh]
  __int128 v32; // [xsp+A8h] [xbp-248h] BYREF
  __int64 v33; // [xsp+B8h] [xbp-238h]
  void *__b[2]; // [xsp+C0h] [xbp-230h] BYREF
  __int64 v35; // [xsp+D0h] [xbp-220h]
  __int64 v36; // [xsp+D8h] [xbp-218h] BYREF
  int v37; // [xsp+E0h] [xbp-210h]
  __int64 v38; // [xsp+108h] [xbp-1E8h] BYREF
  int v39; // [xsp+110h] [xbp-1E0h]
  __int64 v40; // [xsp+138h] [xbp-1B8h] BYREF
  int v41; // [xsp+140h] [xbp-1B0h]
  __int64 v42; // [xsp+168h] [xbp-188h] BYREF
  int v43; // [xsp+170h] [xbp-180h]
  __int64 v44; // [xsp+198h] [xbp-158h] BYREF
  int v45; // [xsp+1A0h] [xbp-150h]
  __int64 v46; // [xsp+1C8h] [xbp-128h] BYREF
  int v47; // [xsp+1D0h] [xbp-120h]
  __int64 v48; // [xsp+1F8h] [xbp-F8h] BYREF
  int v49; // [xsp+200h] [xbp-F0h]
  const char *v50; // [xsp+228h] [xbp-C8h] BYREF
  int v51; // [xsp+230h] [xbp-C0h]
  int v52; // [xsp+234h] [xbp-BCh] BYREF
  __int64 **v53; // [xsp+258h] [xbp-98h] BYREF
  int v54; // [xsp+260h] [xbp-90h]
  void **v55; // [xsp+288h] [xbp-68h] BYREF
  int v56; // [xsp+290h] [xbp-60h]

  sub_10009C1E8(__b, 2 * (int)a2, 32);
  v29 = 0LL;
  v28 = 0u;
  v27 = 0u;
  *(_OWORD *)v26 = 0u;
  *(_OWORD *)v25 = 0u;
  v30 = *a4;
  v31 = *((_BYTE *)a4 + 2);
  if ( SHIBYTE(v35) < 0 )
  {
    sub_10007A474(&v32, __b[0]);
  }
  else
  {
    v32 = *(_OWORD *)__b;
    v33 = v35;
  }
  if ( *(_BYTE *)a4 )
    SourceLocation = google::protobuf::EnumValueDescriptor::GetSourceLocation(a1, &v24);
  else
    SourceLocation = 0;
  v23[0] = SourceLocation;
  sub_100080B14(v23, a3);
  v10 = HIBYTE(v35);
  v11 = __b;
  if ( v35 < 0 )
    v11 = (void **)__b[0];
  v55 = v11;
  if ( v35 < 0 )
    v10 = (int)__b[1];
  v56 = v10;
  v12 = *a1;
  v13 = *((char *)*a1 + 23);
  v14 = (*a1)[1];
  if ( v13 < 0 )
    v12 = (__int64 **)**a1;
  v53 = v12;
  v15 = (unsigned __int8)v13;
  if ( v13 < 0 )
    v15 = (int)v14;
  v54 = v15;
  v50 = (const char *)google::protobuf::FastInt32ToBuffer((google::protobuf *)*((unsigned int *)a1 + 4), (int)&v52, v9);
  v51 = strlen(v50);
  v48 = 0LL;
  v49 = -1;
  v46 = 0LL;
  v47 = -1;
  v44 = 0LL;
  v45 = -1;
  v42 = 0LL;
  v43 = -1;
  v40 = 0LL;
  v41 = -1;
  v38 = 0LL;
  v39 = -1;
  v36 = 0LL;
  v37 = -1;
  *(_QWORD *)&v18 = &v42;
  *((_QWORD *)&v18 + 1) = &v40;
  google::protobuf::strings::SubstituteAndAppend(
    a3,
    (int)"$0$1 = $2",
    (int)&v55,
    (int)&v53,
    (int)&v50,
    (int)&v48,
    (int)&v46,
    (int)&v44,
    v18,
    (__int64)&v38,
    (__int64)&v36);
  v21 = 0LL;
  v22 = 0LL;
  __p = 0LL;
  if ( (unsigned int)sub_1000836FC(a2, a1[4], a1[3][2][2], &__p) )
  {
    v16 = HIBYTE(v22);
    p_p = &__p;
    if ( v22 < 0 )
      p_p = (void **)__p;
    v55 = p_p;
    if ( v22 < 0 )
      v16 = v21;
    v56 = v16;
    v53 = 0LL;
    v54 = -1;
    v50 = 0LL;
    v51 = -1;
    v48 = 0LL;
    v49 = -1;
    v46 = 0LL;
    v47 = -1;
    v44 = 0LL;
    v45 = -1;
    v42 = 0LL;
    v43 = -1;
    v40 = 0LL;
    v41 = -1;
    v38 = 0LL;
    v39 = -1;
    v36 = 0LL;
    v37 = -1;
    *(_QWORD *)&v19 = &v42;
    *((_QWORD *)&v19 + 1) = &v40;
    google::protobuf::strings::SubstituteAndAppend(
      a3,
      (int)" [$0]",
      (int)&v55,
      (int)&v53,
      (int)&v50,
      (int)&v48,
      (int)&v46,
      (int)&v44,
      v19,
      (__int64)&v38,
      (__int64)&v36);
  }
  std::string::append(a3, ";\n");
  sub_100080C48(v23, a3);
  if ( SHIBYTE(v22) < 0 )
    operator delete(__p);
  if ( SHIBYTE(v33) < 0 )
    operator delete((void *)v32);
  v55 = (void **)&v28;
  sub_10009857C(&v55);
  if ( SHIBYTE(v27) < 0 )
    operator delete(v26[1]);
  if ( SHIBYTE(v26[0]) < 0 )
    operator delete(v25[0]);
  if ( SHIBYTE(v35) < 0 )
    operator delete(__b[0]);
}