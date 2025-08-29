__ZN6google8protobuf8internal12ExtensionSet12GrowCapacityEm
unsigned __int16 *__fastcall google::protobuf::internal::ExtensionSet::GrowCapacity(
        unsigned __int16 *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // x22
  _WORD *v4; // x19
  char *v5; // x20
  __int64 v6; // x23
  google::protobuf::Arena *v7; // x0
  void *v8; // x21
  char *v9; // x23
  void *v10; // x1
  char *v11; // x25
  __int128 v12; // q0
  bool v13; // zf
  int v14; // [xsp+0h] [xbp-60h] BYREF
  __int128 v15; // [xsp+8h] [xbp-58h]
  __int64 v16; // [xsp+18h] [xbp-48h]

  v2 = this[4];
  if ( v2 <= 0x100 && v2 < a2 )
  {
    v4 = this;
    do
    {
      if ( (_WORD)v2 )
        LOWORD(v2) = 4 * v2;
      else
        LOWORD(v2) = 1;
    }
    while ( (unsigned __int16)v2 < a2 );
    v5 = (char *)*((_QWORD *)this + 2);
    v6 = this[5];
    v7 = *(google::protobuf::Arena **)this;
    if ( (unsigned __int16)v2 < 0x101u )
    {
      this = (unsigned __int16 *)sub_1000C147C(v7, (unsigned __int16)v2);
      v8 = this;
      if ( (_DWORD)v6 )
        this = (unsigned __int16 *)memmove(this, v5, 32 * v6);
    }
    else
    {
      this = (unsigned __int16 *)sub_1000C8CEC(v7);
      v8 = this;
      if ( (_DWORD)v6 )
      {
        v9 = &v5[32 * v6];
        v10 = *(void **)this;
        v11 = v5;
        do
        {
          v14 = *(_DWORD *)v11;
          v12 = *(_OWORD *)(v11 + 8);
          v16 = *((_QWORD *)v11 + 3);
          v15 = v12;
          this = (unsigned __int16 *)sub_1000C8DF8(v8, v10, &v14, &v14);
          v10 = this;
          v11 += 32;
        }
        while ( v11 != v9 );
      }
    }
    if ( *(_QWORD *)v4 )
      v13 = 1;
    else
      v13 = v5 == 0LL;
    if ( !v13 )
      this = (unsigned __int16 *)operator delete[](v5, 0x1062C802AB6010CLL);
    v4[4] = v2;
    *((_QWORD *)v4 + 2) = v8;
    if ( (unsigned __int16)v2 >= 0x101u )
      v4[5] = 0;
  }
  return this;
}