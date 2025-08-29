__ZNK6google8protobuf15OneofDescriptor11DebugStringEiPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_18DebugStringOptionsE
void __fastcall google::protobuf::OneofDescriptor::DebugString(int *a1, int a2, std::string *a3, __int64 a4)
{
  char SourceLocation; // w0
  int v9; // w8
  void **v10; // x9
  __int64 *v11; // x8
  int v12; // w9
  __int64 v13; // x11
  int v14; // w8
  __int64 v15; // x22
  __int64 v16; // x23
  int v17; // w8
  void **v18; // x9
  __int128 v19; // [xsp+0h] [xbp-2D0h]
  __int128 v20; // [xsp+0h] [xbp-2D0h]
  _BYTE v21[8]; // [xsp+20h] [xbp-2B0h] BYREF
  __int64 v22; // [xsp+28h] [xbp-2A8h] BYREF
  void *v23[2]; // [xsp+38h] [xbp-298h]
  void *v24[2]; // [xsp+48h] [xbp-288h]
  __int128 v25; // [xsp+58h] [xbp-278h]
  __int128 v26; // [xsp+68h] [xbp-268h] BYREF
  __int64 v27; // [xsp+78h] [xbp-258h]
  __int16 v28; // [xsp+80h] [xbp-250h]
  char v29; // [xsp+82h] [xbp-24Eh]
  __int128 __p; // [xsp+88h] [xbp-248h] BYREF
  __int64 v31; // [xsp+98h] [xbp-238h]
  void *__b[2]; // [xsp+A0h] [xbp-230h] BYREF
  __int64 v33; // [xsp+B0h] [xbp-220h]
  __int64 v34; // [xsp+B8h] [xbp-218h] BYREF
  int v35; // [xsp+C0h] [xbp-210h]
  __int64 v36; // [xsp+E8h] [xbp-1E8h] BYREF
  int v37; // [xsp+F0h] [xbp-1E0h]
  __int64 v38; // [xsp+118h] [xbp-1B8h] BYREF
  int v39; // [xsp+120h] [xbp-1B0h]
  __int64 v40; // [xsp+148h] [xbp-188h] BYREF
  int v41; // [xsp+150h] [xbp-180h]
  __int64 v42; // [xsp+178h] [xbp-158h] BYREF
  int v43; // [xsp+180h] [xbp-150h]
  __int64 v44; // [xsp+1A8h] [xbp-128h] BYREF
  int v45; // [xsp+1B0h] [xbp-120h]
  __int64 v46; // [xsp+1D8h] [xbp-F8h] BYREF
  int v47; // [xsp+1E0h] [xbp-F0h]
  __int64 v48; // [xsp+208h] [xbp-C8h] BYREF
  int v49; // [xsp+210h] [xbp-C0h]
  __int64 *v50; // [xsp+238h] [xbp-98h] BYREF
  int v51; // [xsp+240h] [xbp-90h]
  void **v52; // [xsp+268h] [xbp-68h] BYREF
  int v53; // [xsp+270h] [xbp-60h]

  sub_10009C1E8(__b, 2 * a2, 32);
  v27 = 0LL;
  v26 = 0u;
  v25 = 0u;
  *(_OWORD *)v24 = 0u;
  *(_OWORD *)v23 = 0u;
  v28 = *(_WORD *)a4;
  v29 = *(_BYTE *)(a4 + 2);
  if ( SHIBYTE(v33) < 0 )
  {
    sub_10007A474(&__p, __b[0]);
  }
  else
  {
    __p = *(_OWORD *)__b;
    v31 = v33;
  }
  if ( *(_BYTE *)a4 )
    SourceLocation = google::protobuf::OneofDescriptor::GetSourceLocation(a1, &v22);
  else
    SourceLocation = 0;
  v21[0] = SourceLocation;
  sub_100080B14(v21, a3);
  v9 = HIBYTE(v33);
  v10 = __b;
  if ( v33 < 0 )
    v10 = (void **)__b[0];
  v52 = v10;
  if ( v33 < 0 )
    v9 = (int)__b[1];
  v53 = v9;
  v11 = *(__int64 **)a1;
  v12 = *(char *)(*(_QWORD *)a1 + 23LL);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v12 < 0 )
    v11 = **(__int64 ***)a1;
  v50 = v11;
  v14 = (unsigned __int8)v12;
  if ( v12 < 0 )
    v14 = v13;
  v51 = v14;
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
  v34 = 0LL;
  v35 = -1;
  *(_QWORD *)&v19 = &v40;
  *((_QWORD *)&v19 + 1) = &v38;
  google::protobuf::strings::SubstituteAndAppend(
    a3,
    (int)"$0oneof $1 {",
    (int)&v52,
    (int)&v50,
    (int)&v48,
    (int)&v46,
    (int)&v44,
    (int)&v42,
    v19,
    (__int64)&v36,
    (__int64)&v34);
  v15 = (unsigned int)(a2 + 1);
  sub_100080D5C(v15, *((_QWORD *)a1 + 5), *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 16LL), a3);
  if ( *(_BYTE *)(a4 + 2) )
  {
    std::string::append(a3, " ... }\n");
  }
  else
  {
    std::string::append(a3, "\n");
    if ( a1[6] >= 1 )
    {
      v16 = 0LL;
      do
        google::protobuf::FieldDescriptor::DebugString(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8 * v16++), v15, a3, a4);
      while ( v16 < a1[6] );
    }
    v17 = HIBYTE(v33);
    v18 = __b;
    if ( v33 < 0 )
      v18 = (void **)__b[0];
    v52 = v18;
    if ( v33 < 0 )
      v17 = (int)__b[1];
    v53 = v17;
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
    v34 = 0LL;
    v35 = -1;
    *(_QWORD *)&v20 = &v40;
    *((_QWORD *)&v20 + 1) = &v38;
    google::protobuf::strings::SubstituteAndAppend(
      a3,
      (int)"$0}\n",
      (int)&v52,
      (int)&v50,
      (int)&v48,
      (int)&v46,
      (int)&v44,
      (int)&v42,
      v20,
      (__int64)&v36,
      (__int64)&v34);
  }
  sub_100080C48(v21, a3);
  if ( SHIBYTE(v31) < 0 )
    operator delete((void *)__p);
  v52 = (void **)&v26;
  sub_10009857C(&v52);
  if ( SHIBYTE(v25) < 0 )
    operator delete(v24[1]);
  if ( SHIBYTE(v24[0]) < 0 )
    operator delete(v23[0]);
  if ( SHIBYTE(v33) < 0 )
    operator delete(__b[0]);
}