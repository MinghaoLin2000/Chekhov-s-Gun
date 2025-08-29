__ZN6google8protobuf2io16ArrayInputStreamC1EPKvii
__int64 __fastcall google::protobuf::io::ArrayInputStream::ArrayInputStream(
        __int64 this,
        const void *a2,
        int a3,
        int a4)
{
  int v4; // w8

  *(_QWORD *)this = off_1001DBEB8;
  *(_QWORD *)(this + 8) = a2;
  if ( a4 <= 0 )
    v4 = a3;
  else
    v4 = a4;
  *(_DWORD *)(this + 16) = a3;
  *(_DWORD *)(this + 20) = v4;
  *(_QWORD *)(this + 24) = 0LL;
  return this;
}