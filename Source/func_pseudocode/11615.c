__ZNK6google8protobuf8internal12MapFieldBase28SpaceUsedExcludingSelfNoLockEv
__int64 __fastcall google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfNoLock(
        google::protobuf::internal::MapFieldBase *this)
{
  __int64 v1; // x20
  __int64 v2; // x19
  int *v3; // x8
  __int64 v4; // x21

  v1 = *((_QWORD *)this + 2);
  if ( !v1 )
    return 0LL;
  v2 = 8LL * *(int *)(v1 + 12);
  v3 = *(int **)(v1 + 16);
  if ( v3 )
  {
    if ( *v3 >= 1 )
    {
      v4 = 0LL;
      do
      {
        v2 += (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v3[2 * v4 + 2] + 136LL))(*(_QWORD *)&v3[2 * v4 + 2]);
        ++v4;
        v3 = *(int **)(v1 + 16);
      }
      while ( v4 < *v3 );
    }
    v2 += 8LL;
  }
  return v2;
}