__ZN6google8protobuf8internal12ExtensionSet9Extension5ClearEv
_BYTE *__fastcall google::protobuf::internal::ExtensionSet::Extension::Clear(_BYTE *this)
{
  _BYTE *v1; // x19
  int v2; // w9
  _QWORD *v3; // x8
  __int64 v4; // x16
  _DWORD *v5; // x0
  _DWORD *v6; // x19
  __int64 v7; // x20
  __int64 *v8; // x21
  __int64 v9; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  if ( this[9] )
  {
    switch ( this[8] )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
        **(_DWORD **)this = 0;
        break;
      case 9:
      case 0xC:
        v5 = *(_DWORD **)this;
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        this = (_BYTE *)sub_1000B8898(v5);
        break;
      case 0xA:
      case 0xB:
        v6 = *(_DWORD **)this;
        v7 = *(unsigned int *)(*(_QWORD *)this + 8LL);
        if ( (int)v7 >= 1 )
        {
          v8 = (__int64 *)(*((_QWORD *)v6 + 2) + 8LL);
          do
          {
            v9 = *v8++;
            this = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
            --v7;
          }
          while ( v7 );
          v6[2] = 0;
        }
        break;
      default:
        return this;
    }
  }
  else if ( (this[10] & 1) == 0 )
  {
    v2 = google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[(unsigned __int8)this[8]];
    if ( v2 == 10 )
    {
      v4 = **(_QWORD **)this;
      if ( (this[10] & 0x10) != 0 )
        this = (_BYTE *)(*(__int64 (**)(void))(v4 + 112))();
      else
        this = (_BYTE *)(*(__int64 (**)(void))(v4 + 40))();
    }
    else if ( v2 == 9 )
    {
      v3 = *(_QWORD **)this;
      if ( *(char *)(*(_QWORD *)this + 23LL) < 0 )
      {
        *(_BYTE *)*v3 = 0;
        v3[1] = 0LL;
      }
      else
      {
        *(_BYTE *)v3 = 0;
        *((_BYTE *)v3 + 23) = 0;
      }
    }
    v1[10] = v1[10] & 0xF0 | 1;
  }
  return this;
}