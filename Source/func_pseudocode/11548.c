__ZN6google8protobuf8internal12ExtensionSet9Extension4FreeEv
_BYTE *__fastcall google::protobuf::internal::ExtensionSet::Extension::Free(_BYTE *this)
{
  int v1; // w8
  __int64 v2; // x19
  __int64 v3; // x0
  void *v4; // x0
  __int64 v5; // t1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x19
  char v9; // w8
  __int64 (*v10)(void); // x1
  __int64 v11; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[(unsigned __int8)this[8]];
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
        v2 = *(_QWORD *)this;
        if ( *(_QWORD *)this )
        {
          if ( *(int *)(v2 + 4) >= 1 )
          {
            v3 = *(_QWORD *)(v2 + 8);
            v5 = *(_QWORD *)(v3 - 8);
            v4 = (void *)(v3 - 8);
            if ( !v5 )
              operator delete(v4);
          }
          v6 = v2;
          v7 = 0x1080C4057E67DB5LL;
          goto LABEL_28;
        }
        break;
      case 9:
      case 0xC:
        v11 = *(_QWORD *)this;
        if ( *(_QWORD *)this )
        {
          sub_1000B8A24(*(_QWORD *)this);
          goto LABEL_27;
        }
        break;
      case 0xA:
      case 0xB:
        v11 = *(_QWORD *)this;
        if ( *(_QWORD *)this )
        {
          sub_1000C09A0(*(_QWORD *)this);
LABEL_27:
          v6 = v11;
          v7 = 0x1020C4014030ADELL;
          goto LABEL_28;
        }
        break;
      default:
        return this;
    }
  }
  else
  {
    if ( v1 == 10 )
    {
      v9 = this[10];
      this = *(_BYTE **)this;
      if ( (v9 & 0x10) != 0 )
      {
        if ( !this )
          return this;
        v10 = *(__int64 (**)(void))(*(_QWORD *)this + 8LL);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
      }
      else
      {
        if ( !this )
          return this;
        v10 = *(__int64 (**)(void))(*(_QWORD *)this + 8LL);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
      }
      return (_BYTE *)v10();
    }
    if ( v1 == 9 )
    {
      v8 = *(_QWORD *)this;
      if ( *(_QWORD *)this )
      {
        if ( *(char *)(v8 + 23) < 0 )
          operator delete(*(void **)v8);
        v6 = v8;
        v7 = 0x1012C40EC159624LL;
LABEL_28:
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return (_BYTE *)operator delete(v6, v7);
      }
    }
  }
  return this;
}