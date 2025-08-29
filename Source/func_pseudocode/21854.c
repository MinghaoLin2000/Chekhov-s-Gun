__ZN12ObjConverter14updateMaterialERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall ObjConverter::updateMaterial(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  unsigned __int64 v4; // x21
  __int128 v5; // q0
  __int64 v6; // x0
  unsigned __int64 v7; // x8
  __int64 v8; // x10
  unsigned __int64 v9; // x9
  __int64 v10; // x11
  __int64 v11; // x0
  int v12; // w8
  __int128 v13; // q0
  int v14; // w21
  __int128 v15; // [xsp+0h] [xbp-70h] BYREF
  __int64 v16; // [xsp+10h] [xbp-60h]
  void *v17[2]; // [xsp+18h] [xbp-58h]
  __int64 v18; // [xsp+28h] [xbp-48h]
  void *__p[2]; // [xsp+30h] [xbp-40h] BYREF
  __int64 v20; // [xsp+40h] [xbp-30h]
  char v21; // [xsp+4Fh] [xbp-21h] BYREF

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
    v20 = *(_QWORD *)(a2 + 16);
    goto LABEL_7;
  }
  sub_100009C90((int)__p, "white");
LABEL_7:
  fileFormatUtils::makeValidIdentifier(&v15, __p);
  if ( SHIBYTE(v20) < 0 )
    operator delete(__p[0]);
  *(_OWORD *)__p = v15;
  v20 = v16;
  v3 = sub_100011178(a1 + 184, __p);
  if ( a1 + 192 == v3 )
  {
    v4 = *(_QWORD *)(a1 + 144);
    if ( v4 >= *(_QWORD *)(a1 + 152) )
    {
      v6 = sub_100010E6C(a1 + 136, __p);
    }
    else
    {
      if ( SHIBYTE(v20) < 0 )
      {
        sub_100006E68(*(void **)(a1 + 144), __p[0]);
      }
      else
      {
        v5 = *(_OWORD *)__p;
        *(_QWORD *)(v4 + 16) = v20;
        *(_OWORD *)v4 = v5;
      }
      v6 = v4 + 24;
      *(_QWORD *)(a1 + 144) = v4 + 24;
    }
    *(_QWORD *)(a1 + 144) = v6;
    sub_1000100F8(&v15, __p);
    v7 = *(_QWORD *)(a1 + 168);
    if ( v7 >= *(_QWORD *)(a1 + 176) )
    {
      v11 = sub_100011274(a1 + 160, &v15);
      v12 = SHIBYTE(v18);
      *(_QWORD *)(a1 + 168) = v11;
      if ( v12 < 0 )
        operator delete(v17[0]);
    }
    else
    {
      *(_QWORD *)v7 = v15;
      v8 = *((_QWORD *)&v15 + 1);
      *(_QWORD *)(v7 + 8) = *((_QWORD *)&v15 + 1);
      v9 = v7 + 8;
      v10 = v16;
      *(_QWORD *)(v7 + 16) = v16;
      if ( v10 )
      {
        *(_QWORD *)(v8 + 16) = v9;
        v15 = (unsigned __int64)&v15 + 8;
        v16 = 0LL;
      }
      else
      {
        *(_QWORD *)v7 = v9;
      }
      v13 = *(_OWORD *)v17;
      *(_QWORD *)(v7 + 40) = v18;
      *(_OWORD *)(v7 + 24) = v13;
      v17[1] = 0LL;
      v18 = 0LL;
      v17[0] = 0LL;
      *(_QWORD *)(a1 + 168) = v7 + 48;
    }
    sub_10001016C(&v15, *((_QWORD *)&v15 + 1));
    v14 = -1431655765 * ((*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 136)) >> 3) - 1;
    *(_DWORD *)(a1 + 212) = v14;
    *(_QWORD *)&v15 = __p;
    *(_DWORD *)(sub_100011668(a1 + 184, __p, &std::piecewise_construct, &v15, &v21) + 56) = v14;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(v3 + 56);
  }
  if ( SHIBYTE(v20) < 0 )
    operator delete(__p[0]);
}