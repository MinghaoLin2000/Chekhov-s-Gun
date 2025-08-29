__ZN6google8protobuf8internal15DynamicMapField5ClearEv
__int64 __fastcall google::protobuf::internal::DynamicMapField::Clear(
        google::protobuf::internal::DynamicMapField *this)
{
  char *v2; // x20
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x10
  __int64 v5; // x11
  __int64 v6; // x9
  __int64 result; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 *v10; // x22
  __int64 v11; // t1
  __int64 v12; // [xsp+8h] [xbp-38h] BYREF
  char *v13; // [xsp+10h] [xbp-30h]
  unsigned __int64 v14; // [xsp+18h] [xbp-28h]

  v2 = (char *)this + 96;
  if ( !*((_QWORD *)this + 1) )
  {
    v3 = *((_QWORD *)this + 15);
    v4 = *((_QWORD *)this + 13);
    if ( v4 > v3 )
    {
      v5 = *((_QWORD *)this + 16);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 8 * v3);
        if ( v6 )
          break;
        if ( v4 == ++v3 )
          goto LABEL_11;
      }
      if ( v6 == *(_QWORD *)(v5 + 8 * (v3 ^ 1)) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
        v12 = v6;
        v13 = (char *)this + 96;
        v14 = v3;
        if ( !v6 )
          goto LABEL_11;
      }
      else
      {
        v12 = *(_QWORD *)(v5 + 8 * v3);
        v13 = (char *)this + 96;
        v14 = v3;
      }
      do
      {
        sub_1000CD248(v6 + 32);
        sub_1000D1430(&v12);
        v6 = v12;
      }
      while ( v12 );
    }
  }
LABEL_11:
  result = sub_1000D1018(v2);
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 + 8);
    if ( (int)v9 >= 1 )
    {
      v10 = (__int64 *)(*(_QWORD *)(v8 + 16) + 8LL);
      do
      {
        v11 = *v10++;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
        --v9;
      }
      while ( v9 );
      *(_DWORD *)(v8 + 8) = 0;
    }
  }
  *((_DWORD *)this + 22) = 0;
  return result;
}