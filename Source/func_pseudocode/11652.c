__ZNK6google8protobuf8internal12ExtensionSet9Extension26SpaceUsedExcludingSelfLongEv
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong(__int64 **this)
{
  int v1; // w8
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v5; // x9
  __int64 v6; // x16
  __int64 (*v7)(void); // x1
  __int64 *v8; // x20
  __int64 v9; // x19
  int *v10; // x8
  __int64 v11; // x21
  __int64 *v12; // x20
  int *v13; // x8
  __int64 v14; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned __int8 *)this + 8)];
  if ( *((_BYTE *)this + 9) )
  {
    switch ( *((_BYTE *)this + 8) )
    {
      case 1:
      case 3:
      case 4:
      case 6:
      case 0x10:
      case 0x12:
        v2 = *((unsigned int *)*this + 1);
        v3 = 8 * v2;
        goto LABEL_9;
      case 2:
      case 5:
      case 7:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x11:
        v2 = *((unsigned int *)*this + 1);
        v3 = 4 * v2;
LABEL_9:
        v5 = v3 + 24;
        goto LABEL_10;
      case 8:
        v2 = *((unsigned int *)*this + 1);
        v5 = v2 + 24;
LABEL_10:
        if ( (int)v2 <= 0 )
          return 16LL;
        else
          return v5;
      case 9:
      case 0xC:
        v8 = *this;
        v9 = 8LL * *((int *)*this + 3);
        v10 = (int *)(*this)[2];
        if ( !v10 )
          return v9 + 24;
        if ( *v10 >= 1 )
        {
          v11 = 0LL;
          do
          {
            v9 += google::protobuf::internal::StringSpaceUsedExcludingSelfLong(*(_QWORD *)&v10[2 * v11++ + 2]) + 24;
            v10 = (int *)v8[2];
          }
          while ( v11 < *v10 );
        }
        break;
      case 0xA:
      case 0xB:
        v12 = *this;
        v9 = 8LL * *((int *)*this + 3);
        v13 = (int *)(*this)[2];
        if ( !v13 )
          return v9 + 24;
        if ( *v13 >= 1 )
        {
          v14 = 0LL;
          do
          {
            v9 += (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v13[2 * v14 + 2] + 136LL))(*(_QWORD *)&v13[2 * v14 + 2]);
            ++v14;
            v13 = (int *)v12[2];
          }
          while ( v14 < *v13 );
        }
        break;
      default:
        return 0LL;
    }
    v9 += 8LL;
    return v9 + 24;
  }
  else if ( v1 == 10 )
  {
    v6 = **this;
    if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
    {
      v7 = *(__int64 (**)(void))(v6 + 96);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
    }
    else
    {
      v7 = *(__int64 (**)(void))(v6 + 136);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
    }
    return v7();
  }
  else if ( v1 == 9 )
  {
    return google::protobuf::internal::StringSpaceUsedExcludingSelfLong(*this) + 24;
  }
  else
  {
    return 0LL;
  }
}