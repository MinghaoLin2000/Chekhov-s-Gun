__ZNK6google8protobuf20FileDescriptorTables38FieldsByLowercaseNamesLazyInitInternalEv
__int64 __fastcall google::protobuf::FileDescriptorTables::FieldsByLowercaseNamesLazyInitInternal(__int64 this)
{
  _QWORD *v1; // x22
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 *v5; // x9
  char *v6; // x1
  __int64 v7; // [xsp+8h] [xbp-38h] BYREF
  __int64 v8; // [xsp+10h] [xbp-30h] BYREF

  v1 = *(_QWORD **)(this + 168);
  if ( v1 )
  {
    v2 = this + 40;
    while ( 1 )
    {
      v3 = v1[4];
      if ( !*(_BYTE *)(v3 + 67) )
        break;
      v4 = *(_QWORD *)(v3 + 96);
      if ( !v4 )
      {
        v5 = (__int64 *)(v3 + 40);
LABEL_7:
        v4 = *v5;
      }
      v6 = *(char **)(v3 + 16);
      if ( v6[23] < 0 )
        v6 = *(char **)v6;
      v7 = v4;
      sub_1000965F4((int)&v8, v6);
      this = sub_10007BBA8(v2, &v7, v1 + 4);
      v1 = (_QWORD *)*v1;
      if ( !v1 )
        return this;
    }
    v5 = (__int64 *)(v3 + 80);
    goto LABEL_7;
  }
  return this;
}