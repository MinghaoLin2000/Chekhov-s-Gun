__ZN6google8protobuf2io16ArrayInputStream4NextEPPKvPi
bool __fastcall google::protobuf::io::ArrayInputStream::Next(
        google::protobuf::io::ArrayInputStream *this,
        const void **a2,
        int *a3)
{
  __int64 v3; // x8
  int v4; // w9
  int v5; // w10

  v3 = *((int *)this + 6);
  v4 = *((_DWORD *)this + 4);
  if ( (int)v3 >= v4 )
  {
    *((_DWORD *)this + 7) = 0;
  }
  else
  {
    v5 = *((_DWORD *)this + 5);
    if ( v4 - (int)v3 < v5 )
      v5 = v4 - v3;
    *((_DWORD *)this + 7) = v5;
    *a2 = (const void *)(*((_QWORD *)this + 1) + v3);
    *a3 = v5;
    *((_DWORD *)this + 6) += *((_DWORD *)this + 7);
  }
  return (int)v3 < v4;
}