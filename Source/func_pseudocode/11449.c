__ZN6google8protobuf25EncodedDescriptorDatabase15DescriptorIndex9AddSymbolENS0_11StringPieceE
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::AddSymbol(
        __int64 a1,
        void *a2,
        void *a3)
{
  _QWORD *v6; // x21
  _QWORD *v7; // x23
  _QWORD *v8; // x22
  int v9; // w0
  _QWORD *v10; // x8
  _QWORD *v11; // x8
  _QWORD *v12; // x24
  bool v13; // zf
  __int64 v14; // x0
  google::protobuf::internal::LogMessage *v15; // x0
  int v16; // w0
  int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x20
  __int64 v21; // x0
  google::protobuf::internal::LogMessage *v22; // x0
  _QWORD *v23; // x8
  _QWORD *v24; // x25
  __int128 v25; // kr00_16
  int v26; // w23
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x20
  __int64 v30; // x0
  google::protobuf::internal::LogMessage *v31; // x0
  __int64 v32; // x23
  __int64 v33; // x9
  unsigned __int64 v34; // x24
  __int64 v35; // x8
  __int64 v36; // x22
  __int64 v37; // x22
  __int64 v38; // x24
  int v39; // w0
  int v40; // w23
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x20
  __int64 v44; // x0
  google::protobuf::internal::LogMessage *v45; // x0
  __int64 v46; // x22
  __int128 v47; // kr10_16
  int v48; // w23
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x20
  __int64 v52; // x0
  google::protobuf::internal::LogMessage *v53; // x0
  __int64 v54; // x19
  __int128 v56; // [xsp+0h] [xbp-120h] BYREF
  __int128 v57; // [xsp+10h] [xbp-110h] BYREF
  void *v58[2]; // [xsp+28h] [xbp-F8h] BYREF
  char v59; // [xsp+3Fh] [xbp-E1h]
  int v60; // [xsp+40h] [xbp-E0h] BYREF
  void *v61; // [xsp+48h] [xbp-D8h] BYREF
  char v62; // [xsp+5Fh] [xbp-C1h]
  void *v63; // [xsp+60h] [xbp-C0h] BYREF
  char v64; // [xsp+77h] [xbp-A9h] BYREF
  void *v65[2]; // [xsp+78h] [xbp-A8h] BYREF
  char v66; // [xsp+8Fh] [xbp-91h]
  void *__p[2]; // [xsp+90h] [xbp-90h] BYREF
  char v68; // [xsp+A7h] [xbp-79h]
  void *v69; // [xsp+C0h] [xbp-60h] BYREF
  size_t v70; // [xsp+C8h] [xbp-58h]
  __int128 v71; // [xsp+D0h] [xbp-50h] BYREF

  v60 = -858993459 * ((*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3) - 1;
  __p[0] = a2;
  __p[1] = a3;
  sub_1000967C4(&v61, __p);
  sub_1000BC080(v58, &v60, a1);
  if ( (sub_1000BC144(a2, a3) & 1) == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      __p,
      2LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor_database.cc",
      703LL);
    v14 = google::protobuf::internal::LogMessage::operator<<(__p, "Invalid symbol name: ");
    v15 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v14, v58);
    google::protobuf::internal::LogFinisher::operator=((int)v65, v15);
LABEL_53:
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)__p);
    v54 = 0LL;
    goto LABEL_54;
  }
  v6 = (_QWORD *)(a1 + 88);
  v7 = *(_QWORD **)(a1 + 88);
  v8 = (_QWORD *)(a1 + 88);
  if ( v7 )
  {
    v8 = (_QWORD *)(a1 + 88);
    do
    {
      v9 = sub_1000BDAD0(a1 + 104, &v60, v7 + 4);
      v10 = v7 + 1;
      if ( v9 )
      {
        v10 = v7;
        v8 = v7;
      }
      v7 = (_QWORD *)*v10;
    }
    while ( *v10 );
  }
  if ( v8 == *(_QWORD **)(a1 + 80) )
  {
    v12 = v8;
  }
  else
  {
    v11 = (_QWORD *)*v8;
    if ( *v8 )
    {
      do
      {
        v12 = v11;
        v11 = (_QWORD *)v11[1];
      }
      while ( v11 );
    }
    else
    {
      do
      {
        v12 = (_QWORD *)v8[2];
        v13 = *v12 == (_QWORD)v8;
        v8 = v12;
      }
      while ( v13 );
    }
  }
  sub_10007A644(&v57, v58);
  v71 = v57;
  if ( v12 != v6 )
  {
    sub_1000BC080(__p, v12 + 4, a1);
    sub_10007A644(&v69, __p);
    v16 = sub_1000BC4E8(v69, v70, (void *)v71);
    v17 = v16;
    if ( v68 < 0 )
    {
      operator delete(__p[0]);
      if ( v17 )
        goto LABEL_18;
    }
    else if ( v16 )
    {
LABEL_18:
      google::protobuf::internal::LogMessage::LogMessage(
        __p,
        2LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor_database.cc",
        668LL);
      v18 = google::protobuf::internal::LogMessage::operator<<(__p, "Symbol name \"");
      v19 = google::protobuf::internal::LogMessage::operator<<(v18, &v71);
      v20 = google::protobuf::internal::LogMessage::operator<<(v19, "\" conflicts with the existing symbol \"");
      sub_1000BC080(v65, v12 + 4, a1);
      v21 = google::protobuf::internal::LogMessage::operator<<(v20, v65);
      v22 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v21, "\".");
      google::protobuf::internal::LogFinisher::operator=((int)&v64, v22);
      goto LABEL_51;
    }
    v23 = (_QWORD *)v12[1];
    if ( v23 )
    {
      do
      {
        v24 = v23;
        v23 = (_QWORD *)*v23;
      }
      while ( v23 );
    }
    else
    {
      do
      {
        v24 = (_QWORD *)v12[2];
        v13 = *v24 == (_QWORD)v12;
        v12 = v24;
      }
      while ( !v13 );
    }
    if ( v24 != v6 )
    {
      v25 = v71;
      sub_1000BC080(__p, v24 + 4, a1);
      sub_10007A644(&v63, __p);
      v26 = sub_1000BC4E8((void *)v25, *((size_t *)&v25 + 1), v63);
      if ( v68 < 0 )
        operator delete(__p[0]);
      v6 = v24;
      if ( v26 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          __p,
          2LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/descriptor_database.cc",
          682LL);
        v27 = google::protobuf::internal::LogMessage::operator<<(__p, "Symbol name \"");
        v28 = google::protobuf::internal::LogMessage::operator<<(v27, &v71);
        v29 = google::protobuf::internal::LogMessage::operator<<(v28, "\" conflicts with the existing symbol \"");
        sub_1000BC080(v65, v24 + 4, a1);
        v30 = google::protobuf::internal::LogMessage::operator<<(v29, v65);
        v31 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v30, "\".");
        google::protobuf::internal::LogFinisher::operator=((int)&v64, v31);
        goto LABEL_51;
      }
    }
  }
  v32 = *(_QWORD *)(a1 + 112);
  v33 = *(_QWORD *)(a1 + 120);
  __p[0] = *(void **)(a1 + 104);
  if ( v33 == v32 )
  {
    v35 = v32;
  }
  else
  {
    v34 = (v33 - v32) >> 5;
    do
    {
      if ( (unsigned int)sub_1000BDAD0(__p, &v60, v32 + 32 * (v34 >> 1)) )
      {
        v34 >>= 1;
      }
      else
      {
        v32 += 32 * (v34 >> 1) + 32;
        v34 += ~(v34 >> 1);
      }
    }
    while ( v34 );
    v35 = *(_QWORD *)(a1 + 112);
  }
  if ( v32 == v35 )
    v36 = 0LL;
  else
    v36 = -1LL;
  sub_10007A644(&v56, v58);
  v37 = v32 + 32 * v36;
  v38 = *(_QWORD *)(a1 + 120);
  v71 = v56;
  if ( v37 != v38 )
  {
    sub_1000BC080(__p, v37, a1);
    sub_10007A644(&v69, __p);
    v39 = sub_1000BC4E8(v69, v70, (void *)v71);
    v40 = v39;
    if ( v68 < 0 )
    {
      operator delete(__p[0]);
      if ( v40 )
        goto LABEL_44;
    }
    else if ( v39 )
    {
LABEL_44:
      google::protobuf::internal::LogMessage::LogMessage(
        __p,
        2LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor_database.cc",
        668LL);
      v41 = google::protobuf::internal::LogMessage::operator<<(__p, "Symbol name \"");
      v42 = google::protobuf::internal::LogMessage::operator<<(v41, &v71);
      v43 = google::protobuf::internal::LogMessage::operator<<(v42, "\" conflicts with the existing symbol \"");
      sub_1000BC080(v65, v37, a1);
      v44 = google::protobuf::internal::LogMessage::operator<<(v43, v65);
      v45 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v44, "\".");
      google::protobuf::internal::LogFinisher::operator=((int)&v64, v45);
      goto LABEL_51;
    }
    v46 = v37 + 32;
    if ( v46 != v38 )
    {
      v47 = v71;
      sub_1000BC080(__p, v46, a1);
      sub_10007A644(&v63, __p);
      v48 = sub_1000BC4E8((void *)v47, *((size_t *)&v47 + 1), v63);
      if ( v68 < 0 )
        operator delete(__p[0]);
      if ( v48 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          __p,
          2LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/descriptor_database.cc",
          682LL);
        v49 = google::protobuf::internal::LogMessage::operator<<(__p, "Symbol name \"");
        v50 = google::protobuf::internal::LogMessage::operator<<(v49, &v71);
        v51 = google::protobuf::internal::LogMessage::operator<<(v50, "\" conflicts with the existing symbol \"");
        sub_1000BC080(v65, v46, a1);
        v52 = google::protobuf::internal::LogMessage::operator<<(v51, v65);
        v53 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v52, "\".");
        google::protobuf::internal::LogFinisher::operator=((int)&v64, v53);
LABEL_51:
        if ( v66 < 0 )
          operator delete(v65[0]);
        goto LABEL_53;
      }
    }
  }
  sub_1000BDD68(a1 + 80, v6, &v60, &v60);
  v54 = 1LL;
LABEL_54:
  if ( v59 < 0 )
    operator delete(v58[0]);
  if ( v62 < 0 )
    operator delete(v61);
  return v54;
}