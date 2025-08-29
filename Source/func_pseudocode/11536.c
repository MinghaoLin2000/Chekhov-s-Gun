__ZN6google8protobuf8internal12ExtensionSet9MergeFromERKS2_
__int64 __fastcall google::protobuf::internal::ExtensionSet::MergeFrom(
        __int64 this,
        const google::protobuf::internal::ExtensionSet *a2)
{
  unsigned __int16 *v3; // x19
  unsigned int v4; // w8
  char *v5; // x0
  __int64 v6; // x9
  char *v7; // x1
  char *v8; // x3
  __int64 v9; // x10
  char *v10; // x8
  __int64 v11; // x9
  bool v12; // zf
  char *v13; // x14
  unsigned __int64 v14; // x1
  __int64 *v15; // x21
  __int64 *v16; // x20
  const google::protobuf::internal::ExtensionSet::Extension *v17; // x2
  int v18; // t1
  __int64 v19; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (unsigned __int16 *)this;
  if ( *(unsigned __int16 *)(this + 8) <= 0x100u )
  {
    v4 = *((unsigned __int16 *)a2 + 4);
    v5 = *(char **)(this + 16);
    v6 = v3[5];
    v7 = &v5[32 * v6];
    v8 = (char *)*((_QWORD *)a2 + 2);
    if ( v4 > 0x100 )
    {
      v14 = sub_1000C3578();
    }
    else
    {
      v9 = *((unsigned __int16 *)a2 + 5);
      v10 = &v8[32 * v9];
      v12 = (_DWORD)v6 == 0;
      v11 = 0LL;
      v12 = v12 || (_DWORD)v9 == 0;
      if ( !v12 )
      {
        do
        {
          if ( *(_DWORD *)v5 == *(_DWORD *)v8 )
            v13 = v5 + 32;
          else
            v13 = v5;
          if ( *(_DWORD *)v5 < *(_DWORD *)v8 )
          {
            v5 += 32;
          }
          else
          {
            v8 += 32;
            v5 = v13;
          }
          ++v11;
        }
        while ( v5 != v7 && v8 != v10 );
      }
      v14 = v11 + ((v10 - v8) >> 5) + ((v7 - v5) >> 5);
    }
    this = google::protobuf::internal::ExtensionSet::GrowCapacity((google::protobuf::internal::ExtensionSet *)v3, v14);
  }
  v15 = (__int64 *)*((_QWORD *)a2 + 2);
  if ( *((unsigned __int16 *)a2 + 4) >= 0x101u )
  {
    v19 = *v15;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_1000C897C(v19, (int)v15 + 8, (google::protobuf::internal::ExtensionSet *)v3);
  }
  else if ( *((_WORD *)a2 + 5) )
  {
    v16 = &v15[4 * *((unsigned __int16 *)a2 + 5)];
    do
    {
      v17 = (const google::protobuf::internal::ExtensionSet::Extension *)(v15 + 1);
      v18 = *(_DWORD *)v15;
      v15 += 4;
      this = google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
               (google::protobuf::internal::ExtensionSet *)v3,
               v18,
               v17);
    }
    while ( v15 != v16 );
  }
  return this;
}