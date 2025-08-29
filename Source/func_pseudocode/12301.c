__ZN6google8protobuf4util6StatusC2ENS1_5error4CodeENS0_11StringPieceE
__int64 __fastcall google::protobuf::util::Status::Status(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x21
  __int128 v7; // [xsp+8h] [xbp-48h] BYREF
  __int64 v8; // [xsp+18h] [xbp-38h]
  _QWORD v9[2]; // [xsp+20h] [xbp-30h] BYREF

  v9[0] = a3;
  v9[1] = a4;
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = a1 + 8;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a2 )
  {
    sub_1000967C4(&v7, v9);
    if ( *(char *)(a1 + 31) < 0 )
      operator delete(*(void **)v5);
    *(_OWORD *)v5 = v7;
    *(_QWORD *)(v5 + 16) = v8;
  }
  return a1;
}