__ZN12ObjConverterC2ERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEERKNS0_12basic_stringIcS3_NS0_9allocatorIcEEEESB_P10XpcSandbox
__int64 __fastcall ObjConverter::ObjConverter(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5)
{
  __int128 v9; // q0
  void *v11[2]; // [xsp+8h] [xbp-88h] BYREF
  char v12; // [xsp+1Fh] [xbp-71h]
  void *__p[2]; // [xsp+20h] [xbp-70h] BYREF
  __int64 v14; // [xsp+30h] [xbp-60h]

  *(_OWORD *)(a1 + 8) = 0u;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = off_1000185C8;
  *(_QWORD *)(a1 + 104) = a1 + 112;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_OWORD *)(a1 + 128) = 0u;
  *(_OWORD *)(a1 + 144) = 0u;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_OWORD *)(a1 + 160) = 0u;
  *(_QWORD *)(a1 + 184) = a1 + 192;
  *(_QWORD *)(a1 + 208) = -1LL;
  *(_OWORD *)(a1 + 216) = 0u;
  *(_OWORD *)(a1 + 232) = 0u;
  if ( *(char *)(a3 + 23) < 0 )
  {
    sub_100006E68(__p, *(void **)a3);
  }
  else
  {
    *(_OWORD *)__p = *(_OWORD *)a3;
    v14 = *(_QWORD *)(a3 + 16);
  }
  fileFormatUtils::makeValidIdentifier((_QWORD *)(a1 + 256), __p);
  *(_OWORD *)(a1 + 296) = 0u;
  *(_OWORD *)(a1 + 312) = 0u;
  *(_OWORD *)(a1 + 280) = 0u;
  if ( SHIBYTE(v14) < 0 )
    operator delete(__p[0]);
  if ( *((char *)a4 + 23) < 0 )
  {
    sub_100006E68((void *)(a1 + 328), *(void **)a4);
  }
  else
  {
    v9 = *a4;
    *(_QWORD *)(a1 + 344) = *((_QWORD *)a4 + 2);
    *(_OWORD *)(a1 + 328) = v9;
  }
  *(_QWORD *)(a1 + 352) = a5;
  sub_100009C90((int)v11, (char *)&unk_100017422);
  ObjConverter::setGroup(a1, v11);
  if ( v12 < 0 )
    operator delete(v11[0]);
  ObjConverter::parseObj(a1, a2);
  return a1;
}