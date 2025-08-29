__ZN6google8protobuf14DescriptorPool6Tables24RollbackToLastCheckpointEv
__int64 __fastcall google::protobuf::DescriptorPool::Tables::RollbackToLastCheckpoint(
        google::protobuf::DescriptorPool::Tables *this)
{
  __int64 v2; // x24
  unsigned __int64 v3; // x21
  __int64 i; // x8
  unsigned __int64 v5; // x23
  __int64 j; // x8
  unsigned __int64 v7; // x25
  __int64 v8; // x8
  __int64 v9; // x26
  __int64 result; // x0
  _BYTE v11[16]; // [xsp+0h] [xbp-50h] BYREF

  v2 = *((_QWORD *)this + 52);
  v3 = *(int *)(v2 - 12);
  for ( i = *((_QWORD *)this + 54); v3 < (*((_QWORD *)this + 55) - i) >> 3; i = *((_QWORD *)this + 54) )
  {
    sub_1000965F4((int)v11, *(char **)(i + 8 * v3));
    sub_100099864((char *)this + 304, v11);
    ++v3;
  }
  v5 = *(int *)(v2 - 8);
  for ( j = *((_QWORD *)this + 57); v5 < (*((_QWORD *)this + 58) - j) >> 3; j = *((_QWORD *)this + 57) )
  {
    sub_1000965F4((int)v11, *(char **)(j + 8 * v5));
    sub_100099864((char *)this + 344, v11);
    ++v5;
  }
  v7 = *(int *)(v2 - 4);
  v8 = *((_QWORD *)this + 60);
  if ( v7 < (*((_QWORD *)this + 61) - v8) >> 4 )
  {
    v9 = 16 * v7;
    do
    {
      sub_100099B3C((char *)this + 384, v8 + v9);
      ++v7;
      v8 = *((_QWORD *)this + 60);
      v9 += 16LL;
    }
    while ( v7 < (*((_QWORD *)this + 61) - v8) >> 4 );
  }
  sub_10007B540((char *)this + 432, *(int *)(v2 - 12));
  sub_10007B540((char *)this + 456, *(int *)(v2 - 8));
  sub_10007B570((char *)this + 480, *(int *)(v2 - 4));
  sub_10007B5A0((char *)this + 208, *(int *)(v2 - 32));
  sub_10007B5D0((char *)this + 232, *(int *)(v2 - 28));
  sub_10007B680((char *)this + 256, *(int *)(v2 - 24));
  sub_10007B6B0((char *)this + 280, *(int *)(v2 - 20));
  result = sub_10007B740((char *)this + 184, *(int *)(v2 - 16));
  *((_QWORD *)this + 52) -= 32LL;
  return result;
}