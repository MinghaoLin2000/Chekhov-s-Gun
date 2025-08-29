__ZN9serialize10Serializer4loadEv
char *__fastcall serialize::Serializer::load(xpc_object_t *this)
{
  char *v2; // x19
  _OWORD *v3; // x0
  _OWORD *v4; // x0
  _OWORD *v5; // x0
  _OWORD *v6; // x0
  int v8; // w8
  int v9; // w8
  int v10; // w8
  int v11; // w8
  void *__p[2]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v13; // [xsp+18h] [xbp-18h]

  *(_BYTE *)this = 0;
  switch ( (unsigned int)xpc_dictionary_get_int64(this[1], "type") )
  {
    case 1u:
      v2 = (char *)operator new(0x40uLL);
      sub_100009C90((int)__p, (char *)&unk_100017422);
      *(_QWORD *)v2 = off_1000185F8;
      *((_DWORD *)v2 + 2) = 1;
      v3 = v2 + 16;
      if ( (SHIBYTE(v13) & 0x80000000) == 0 )
      {
        *v3 = *(_OWORD *)__p;
        *((_QWORD *)v2 + 4) = v13;
        *((_QWORD *)v2 + 6) = 0LL;
        *((_QWORD *)v2 + 7) = 0LL;
        *((_QWORD *)v2 + 5) = 0LL;
        goto LABEL_17;
      }
      sub_100006E68(v3, __p[0]);
      v8 = SHIBYTE(v13);
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
      if ( (v8 & 0x80000000) == 0 )
        goto LABEL_17;
      goto LABEL_16;
    case 2u:
      v2 = (char *)operator new(0x68uLL);
      sub_1000099D8();
      goto LABEL_17;
    case 3u:
      v2 = (char *)operator new(0x88uLL);
      sub_100009C90((int)__p, (char *)&unk_100017422);
      *(_QWORD *)v2 = off_1000185F8;
      *((_DWORD *)v2 + 2) = 3;
      v4 = v2 + 16;
      if ( (SHIBYTE(v13) & 0x80000000) == 0 )
      {
        *v4 = *(_OWORD *)__p;
        *((_QWORD *)v2 + 4) = v13;
        *((_QWORD *)v2 + 6) = 0LL;
        *((_QWORD *)v2 + 7) = 0LL;
        *((_QWORD *)v2 + 5) = 0LL;
        *(_QWORD *)v2 = off_100018680;
        *((_OWORD *)v2 + 4) = 0u;
        *((_OWORD *)v2 + 5) = 0u;
        *((_OWORD *)v2 + 6) = 0u;
        *((_OWORD *)v2 + 7) = 0u;
        *((_QWORD *)v2 + 16) = 0LL;
        goto LABEL_17;
      }
      sub_100006E68(v4, __p[0]);
      v9 = SHIBYTE(v13);
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
      *(_QWORD *)v2 = off_100018680;
      *((_OWORD *)v2 + 4) = 0u;
      *((_OWORD *)v2 + 5) = 0u;
      *((_OWORD *)v2 + 6) = 0u;
      *((_OWORD *)v2 + 7) = 0u;
      *((_QWORD *)v2 + 16) = 0LL;
      if ( v9 < 0 )
        goto LABEL_16;
      goto LABEL_17;
    case 4u:
      v2 = (char *)operator new(0x128uLL);
      sub_100009C90((int)__p, (char *)&unk_100017422);
      *(_QWORD *)v2 = off_1000185F8;
      *((_DWORD *)v2 + 2) = 4;
      v5 = v2 + 16;
      if ( (SHIBYTE(v13) & 0x80000000) == 0 )
      {
        *v5 = *(_OWORD *)__p;
        *((_QWORD *)v2 + 4) = v13;
        *((_QWORD *)v2 + 6) = 0LL;
        *((_QWORD *)v2 + 7) = 0LL;
        *((_QWORD *)v2 + 5) = 0LL;
        *(_QWORD *)v2 = &off_1000186C8;
        *((_QWORD *)v2 + 35) = 0LL;
        *((_QWORD *)v2 + 36) = 0LL;
        *((_QWORD *)v2 + 34) = 0LL;
        *((_OWORD *)v2 + 4) = 0u;
        *((_OWORD *)v2 + 5) = 0u;
        *((_OWORD *)v2 + 6) = 0u;
        *((_OWORD *)v2 + 7) = 0u;
        *((_OWORD *)v2 + 8) = 0u;
        *((_OWORD *)v2 + 9) = 0u;
        *((_OWORD *)v2 + 10) = 0u;
        *((_OWORD *)v2 + 11) = 0u;
        *((_OWORD *)v2 + 12) = 0u;
        *((_OWORD *)v2 + 13) = 0u;
        *((_OWORD *)v2 + 14) = 0u;
        *((_OWORD *)v2 + 15) = 0u;
        *(_OWORD *)(v2 + 252) = 0u;
        goto LABEL_17;
      }
      sub_100006E68(v5, __p[0]);
      v10 = SHIBYTE(v13);
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 5) = 0LL;
      *(_QWORD *)v2 = &off_1000186C8;
      *((_QWORD *)v2 + 35) = 0LL;
      *((_QWORD *)v2 + 36) = 0LL;
      *((_QWORD *)v2 + 34) = 0LL;
      *((_OWORD *)v2 + 4) = 0u;
      *((_OWORD *)v2 + 5) = 0u;
      *((_OWORD *)v2 + 6) = 0u;
      *((_OWORD *)v2 + 7) = 0u;
      *((_OWORD *)v2 + 8) = 0u;
      *((_OWORD *)v2 + 9) = 0u;
      *((_OWORD *)v2 + 10) = 0u;
      *((_OWORD *)v2 + 11) = 0u;
      *((_OWORD *)v2 + 12) = 0u;
      *((_OWORD *)v2 + 13) = 0u;
      *((_OWORD *)v2 + 14) = 0u;
      *((_OWORD *)v2 + 15) = 0u;
      *(_OWORD *)(v2 + 252) = 0u;
      if ( v10 < 0 )
        goto LABEL_16;
      goto LABEL_17;
    case 5u:
      v2 = (char *)operator new(0x88uLL);
      sub_100009C90((int)__p, (char *)&unk_100017422);
      sub_100009890(v2, __p);
      goto LABEL_15;
    case 6u:
      v2 = (char *)operator new(0x40uLL);
      sub_100009C90((int)__p, (char *)&unk_100017422);
      *(_QWORD *)v2 = off_1000185F8;
      *((_DWORD *)v2 + 2) = 6;
      v6 = v2 + 16;
      if ( SHIBYTE(v13) < 0 )
      {
        sub_100006E68(v6, __p[0]);
        v11 = SHIBYTE(v13);
        *((_QWORD *)v2 + 6) = 0LL;
        *((_QWORD *)v2 + 7) = 0LL;
        *((_QWORD *)v2 + 5) = 0LL;
        *(_QWORD *)v2 = &off_100018758;
        if ( v11 < 0 )
LABEL_16:
          operator delete(__p[0]);
      }
      else
      {
        *v6 = *(_OWORD *)__p;
        *((_QWORD *)v2 + 4) = v13;
        *((_QWORD *)v2 + 6) = 0LL;
        *((_QWORD *)v2 + 7) = 0LL;
        *((_QWORD *)v2 + 5) = 0LL;
        *(_QWORD *)v2 = &off_100018758;
      }
LABEL_17:
      (*(void (__fastcall **)(char *, xpc_object_t *))(*(_QWORD *)v2 + 24LL))(v2, this);
      return v2;
    case 7u:
      v2 = (char *)operator new(0x68uLL);
      sub_100009AD4(v2, 1LL);
      goto LABEL_17;
    case 8u:
      v2 = (char *)operator new(0xB0uLL);
      sub_100009C90((int)__p, (char *)&unk_100017422);
      sub_100009BCC(v2, 1LL, __p);
LABEL_15:
      if ( SHIBYTE(v13) < 0 )
        goto LABEL_16;
      goto LABEL_17;
    default:
      return 0LL;
  }
}