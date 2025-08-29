__ZNK6google8protobuf8internal15DynamicMapField28SpaceUsedExcludingSelfNoLockEv
__int64 __fastcall google::protobuf::internal::DynamicMapField::SpaceUsedExcludingSelfNoLock(
        google::protobuf::internal::DynamicMapField *this)
{
  __int64 v2; // x21
  __int64 v3; // x19
  int *v4; // x8
  __int64 v5; // x22
  __int64 v6; // x19
  char *v7; // x8
  __int64 v8; // x21
  unsigned __int64 v9; // x9
  unsigned __int64 v10; // x10
  __int64 v11; // x11
  __int64 v12; // x20
  __int64 v13; // x8
  __int64 v14; // x20
  __int64 v15; // x1
  _QWORD v17[3]; // [xsp+8h] [xbp-38h] BYREF

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = 8LL * *(int *)(v2 + 12);
    v4 = *(int **)(v2 + 16);
    if ( v4 )
    {
      if ( *v4 >= 1 )
      {
        v5 = 0LL;
        do
        {
          v3 += (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v4[2 * v5 + 2] + 136LL))(*(_QWORD *)&v4[2 * v5 + 2]);
          ++v5;
          v4 = *(int **)(v2 + 16);
        }
        while ( v5 < *v4 );
      }
      v3 += 8LL;
    }
    v6 = v3 + 48;
  }
  else
  {
    v6 = 48LL;
  }
  v7 = (char *)this + 96;
  v8 = *((_QWORD *)this + 12);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 15);
    v10 = *((_QWORD *)this + 13);
    if ( v10 <= v9 )
    {
      v12 = 0LL;
    }
    else
    {
      v11 = *((_QWORD *)this + 16);
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + 8 * v9);
        if ( v12 )
          break;
        if ( v10 == ++v9 )
        {
          v12 = 0LL;
          v9 = v10;
          goto LABEL_18;
        }
      }
      if ( v12 == *(_QWORD *)(v11 + 8 * (v9 ^ 1)) )
        v12 = *(_QWORD *)(*(_QWORD *)v12 + 40LL);
    }
LABEL_18:
    v17[0] = v12;
    v17[1] = v7;
    v17[2] = v9;
    if ( (unsigned int)sub_1000D0A48(v12) == 9 )
      v13 = 24 * v8;
    else
      v13 = 0LL;
    v6 += 48 * v8 + v13;
    switch ( (unsigned int)sub_1000D0AE8(v12 + 32) )
    {
      case 1u:
      case 3u:
      case 6u:
      case 8u:
        v6 += 4 * v8;
        break;
      case 2u:
      case 4u:
      case 5u:
        v6 += 8 * v8;
        break;
      case 7u:
        v6 += v8;
        break;
      case 9u:
        v6 += 24 * v8;
        break;
      case 0xAu:
        while ( v12 )
        {
          v14 = sub_1000CF1AC(v12 + 32);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
          v6 += google::protobuf::Reflection::SpaceUsedLong(v15, v14);
          sub_1000D1430(v17);
          v12 = v17[0];
        }
        break;
      default:
        return v6;
    }
  }
  return v6;
}