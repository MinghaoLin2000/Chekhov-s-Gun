__ZNK6google8protobuf8internal12ExtensionSet12AppendToListEPKNS0_10DescriptorEPKNS0_14DescriptorPoolEPNSt3__16vectorIPKNS0_15FieldDescriptorENS9_9allocatorISD_EEEE
__int64 __fastcall google::protobuf::internal::ExtensionSet::AppendToList(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // x19
  __int64 v5; // x8
  _QWORD *v6; // x20
  google::protobuf::internal::ExtensionSet::Extension *v7; // x2
  int v8; // t1
  _QWORD *v9; // x19
  _QWORD *v10; // x20
  _QWORD *v11; // t1
  _QWORD *v12; // x9
  _QWORD *v13; // x8
  bool v14; // zf
  __int64 v15; // [xsp+0h] [xbp-30h] BYREF
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF
  __int64 v17; // [xsp+10h] [xbp-20h]
  __int64 *v18; // [xsp+18h] [xbp-18h]

  v15 = a4;
  v4 = *(_QWORD **)(result + 16);
  if ( *(unsigned __int16 *)(result + 8) >= 0x101u )
  {
    v11 = (_QWORD *)*v4;
    v9 = v4 + 1;
    v10 = v11;
    v16 = a2;
    v17 = a3;
    v18 = &v15;
    if ( v11 != v9 )
    {
      do
      {
        result = sub_1000D4F0C(
                   (int)&v16,
                   *((_DWORD *)v10 + 8),
                   (google::protobuf::internal::ExtensionSet::Extension *)(v10 + 5));
        v12 = (_QWORD *)v10[1];
        if ( v12 )
        {
          do
          {
            v13 = v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
        else
        {
          do
          {
            v13 = (_QWORD *)v10[2];
            v14 = *v13 == (_QWORD)v10;
            v10 = v13;
          }
          while ( !v14 );
        }
        v10 = v13;
      }
      while ( v13 != v9 );
    }
  }
  else
  {
    v5 = *(unsigned __int16 *)(result + 10);
    v16 = a2;
    v17 = a3;
    v18 = &v15;
    if ( v5 )
    {
      v6 = &v4[4 * v5];
      do
      {
        v7 = (google::protobuf::internal::ExtensionSet::Extension *)(v4 + 1);
        v8 = *(_DWORD *)v4;
        v4 += 4;
        result = sub_1000D4F0C((int)&v16, v8, v7);
      }
      while ( v4 != v6 );
    }
  }
  return result;
}