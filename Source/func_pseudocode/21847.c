__ZN12ObjConverter8setGroupERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall ObjConverter::setGroup(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  ObjConverter::Group *v4; // x0
  void *v5; // x21
  __int128 v6; // [xsp+8h] [xbp-58h] BYREF
  __int64 v7; // [xsp+18h] [xbp-48h]
  void *__p[2]; // [xsp+20h] [xbp-40h] BYREF
  __int64 v9; // [xsp+30h] [xbp-30h]
  char v10; // [xsp+3Fh] [xbp-21h] BYREF

  if ( *(char *)(a2 + 23) < 0 )
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      sub_100006E68(__p, *(void **)a2);
      goto LABEL_7;
    }
  }
  else if ( *(_BYTE *)(a2 + 23) )
  {
    *(_OWORD *)__p = *(_OWORD *)a2;
    v9 = *(_QWORD *)(a2 + 16);
    goto LABEL_7;
  }
  sub_100009C90((int)__p, "default");
LABEL_7:
  fileFormatUtils::makeValidIdentifier(&v6, __p);
  if ( SHIBYTE(v9) < 0 )
    operator delete(__p[0]);
  *(_OWORD *)__p = v6;
  v9 = v7;
  v3 = sub_100011178(a1 + 104, __p);
  if ( a1 + 112 == v3 )
  {
    v5 = operator new(0x90uLL);
    sub_100010240(v5, *(unsigned int *)(a1 + 208));
    *(_QWORD *)(a1 + 128) = v5;
    *(_QWORD *)&v6 = __p;
    *(_QWORD *)(sub_100011A98(a1 + 104, __p, &std::piecewise_construct, &v6, &v10) + 56) = v5;
  }
  else
  {
    v4 = *(ObjConverter::Group **)(v3 + 56);
    *(_QWORD *)(a1 + 128) = v4;
    ObjConverter::Group::setMaterial(v4, *(_DWORD *)(a1 + 208));
  }
  if ( SHIBYTE(v9) < 0 )
    operator delete(__p[0]);
}