__ZN6google8protobuf8internal15ParseAnyTypeUrlENS0_11StringPieceEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_
__int64 __fastcall google::protobuf::internal::ParseAnyTypeUrl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 last_of; // x0
  unsigned __int64 v7; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned __int64 v11; // [xsp+8h] [xbp-58h] BYREF
  __int64 v12; // [xsp+10h] [xbp-50h]
  __int128 v13; // [xsp+18h] [xbp-48h] BYREF
  __int64 v14; // [xsp+28h] [xbp-38h]
  __int64 v15; // [xsp+30h] [xbp-30h] BYREF
  __int64 v16; // [xsp+38h] [xbp-28h]

  v15 = a1;
  v16 = a2;
  last_of = google::protobuf::StringPiece::find_last_of(&v15, "/", 1LL, 0xFFFFFFFFFFFFFFFFLL);
  if ( last_of == -1 )
    return 0LL;
  v7 = last_of + 1;
  if ( last_of + 1 == v16 )
    return 0LL;
  if ( a3 )
  {
    v11 = google::protobuf::StringPiece::substr((google::protobuf::StringPiece *)&v15, 0LL);
    v12 = v9;
    sub_1000967C4(&v13, &v11);
    if ( *(char *)(a3 + 23) < 0 )
      operator delete(*(void **)a3);
    *(_OWORD *)a3 = v13;
    *(_QWORD *)(a3 + 16) = v14;
  }
  v11 = google::protobuf::StringPiece::substr((google::protobuf::StringPiece *)&v15, v7);
  v12 = v10;
  sub_1000967C4(&v13, &v11);
  if ( *(char *)(a4 + 23) < 0 )
    operator delete(*(void **)a4);
  *(_OWORD *)a4 = v13;
  *(_QWORD *)(a4 + 16) = v14;
  return 1LL;
}