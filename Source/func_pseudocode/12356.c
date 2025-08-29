__ZN6google8protobuf2io17CodedOutputStreamC2EPNS1_20ZeroCopyOutputStreamEb
__int64 __fastcall google::protobuf::io::CodedOutputStream::CodedOutputStream(__int64 a1, __int64 a2, int a3)
{
  char v6; // w8
  __int64 v7; // x22
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x10
  int v13; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  v6 = google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ & 1;
  v7 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_QWORD *)(a1 + 48) = a2;
  *(_WORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 58) = v6;
  *(_QWORD *)(a1 + 64) = a1 + 16;
  *(_QWORD *)(a1 + 72) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( a3 )
  {
    v14 = 0LL;
    v13 = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)a2 + 16LL))(a2, &v14, &v13) && v13 != 0 )
    {
      v9 = v14;
      if ( v13 <= 16 )
        v10 = v7 + v13;
      else
        v10 = v14 + (unsigned int)v13 - 16;
      if ( v13 <= 16 )
        v11 = v14;
      else
        v11 = 0LL;
      if ( v13 <= 16 )
        v9 = v7;
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 64) = v9;
    }
  }
  return a1;
}