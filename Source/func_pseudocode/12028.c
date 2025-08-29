__ZN6google8protobuf16SplitStringUsingENS0_11StringPieceEPKcPNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE
void __fastcall google::protobuf::SplitStringUsing(unsigned __int8 *__src, __int64 a2, char *__s, __int64 a4)
{
  int v7; // w21
  size_t v8; // x0
  const char *v9; // x2
  size_t v10; // x21
  __int64 first_not_of; // x0
  unsigned __int64 v12; // x23
  size_t v13; // x0
  const char *v14; // x2
  size_t v15; // x22
  __int64 first_of; // x0
  __int64 v17; // x22
  __int64 v18; // x1
  size_t v19; // x0
  const char *v20; // x2
  size_t v21; // x23
  __int64 v22; // x1
  unsigned __int8 *v23; // x1
  char *v24; // x20
  char *v25; // x22
  unsigned __int8 *v26; // x23
  char *v27; // x8
  int v28; // t1
  __int64 v29; // [xsp+0h] [xbp-70h] BYREF
  __int64 v30; // [xsp+8h] [xbp-68h] BYREF
  __int64 v31; // [xsp+10h] [xbp-60h]
  void *__p[2]; // [xsp+18h] [xbp-58h] BYREF
  char v33; // [xsp+2Fh] [xbp-41h]
  _QWORD v34[2]; // [xsp+30h] [xbp-40h] BYREF

  v34[0] = __src;
  v34[1] = a2;
  v7 = (unsigned __int8)*__s;
  if ( *__s && !__s[1] )
  {
    if ( a2 )
    {
      v23 = __src;
      v24 = (char *)&__src[a2];
      v25 = (char *)&__src[a2];
      do
      {
        if ( *v23 == v7 )
        {
          v26 = v23 + 1;
        }
        else
        {
          v27 = (char *)(v23 + 1);
          while ( v27 != v24 )
          {
            v28 = (unsigned __int8)*v27++;
            if ( v28 == v7 )
            {
              v26 = (unsigned __int8 *)(v27 - 1);
              goto LABEL_27;
            }
          }
          v26 = (unsigned __int8 *)v25;
LABEL_27:
          sub_10007A6A8(__p, v23, v26 - v23);
          v30 = a4;
          sub_1000F22A4(&v30, __p);
          if ( v33 < 0 )
            operator delete(__p[0]);
        }
        v23 = v26;
      }
      while ( v26 != (unsigned __int8 *)v24 );
    }
  }
  else
  {
    v8 = strlen(__s);
    v10 = v8;
    if ( (v8 & 0x8000000000000000LL) != 0 )
      google::protobuf::StringPiece::LogFatalSizeTooBig(
        (google::protobuf::StringPiece *)v8,
        (unsigned __int64)"size_t to int conversion",
        v9);
    first_not_of = google::protobuf::StringPiece::find_first_not_of(v34, __s, v10, 0LL);
    if ( first_not_of != -1 )
    {
      v12 = first_not_of;
      while ( 1 )
      {
        v13 = strlen(__s);
        v15 = v13;
        if ( (v13 & 0x8000000000000000LL) != 0 )
          google::protobuf::StringPiece::LogFatalSizeTooBig(
            (google::protobuf::StringPiece *)v13,
            (unsigned __int64)"size_t to int conversion",
            v14);
        first_of = google::protobuf::StringPiece::find_first_of(v34, __s, v15, v12);
        if ( first_of == -1 )
          break;
        v17 = first_of;
        v30 = google::protobuf::StringPiece::substr((google::protobuf::StringPiece *)v34, v12, first_of - v12);
        v31 = v18;
        sub_1000967C4(__p, &v30);
        v29 = a4;
        sub_1000F22A4(&v29, __p);
        if ( v33 < 0 )
          operator delete(__p[0]);
        v19 = strlen(__s);
        v21 = v19;
        if ( (v19 & 0x8000000000000000LL) != 0 )
          google::protobuf::StringPiece::LogFatalSizeTooBig(
            (google::protobuf::StringPiece *)v19,
            (unsigned __int64)"size_t to int conversion",
            v20);
        v12 = google::protobuf::StringPiece::find_first_not_of(v34, __s, v21, v17);
        if ( v12 == -1LL )
          return;
      }
      v30 = google::protobuf::StringPiece::substr((google::protobuf::StringPiece *)v34, v12, 0xFFFFFFFFFFFFFFFFLL);
      v31 = v22;
      sub_1000967C4(__p, &v30);
      v29 = a4;
      sub_1000F22A4(&v29, __p);
      if ( v33 < 0 )
        operator delete(__p[0]);
    }
  }
}