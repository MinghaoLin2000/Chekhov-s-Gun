__ZN12ObjConverter11setMaterialERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall ObjConverter::setMaterial(__int64 a1, __int64 a2)
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
  ObjConverter::Group *v15; // x0
  __int128 v16; // [xsp+0h] [xbp-70h] BYREF
  __int64 v17; // [xsp+10h] [xbp-60h]
  void *v18[2]; // [xsp+18h] [xbp-58h]
  __int64 v19; // [xsp+28h] [xbp-48h]
  void *__p[2]; // [xsp+30h] [xbp-40h] BYREF
  __int64 v21; // [xsp+40h] [xbp-30h]
  char v22; // [xsp+4Fh] [xbp-21h] BYREF

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
    v21 = *(_QWORD *)(a2 + 16);
    goto LABEL_7;
  }
  sub_100009C90((int)__p, "white");
LABEL_7:
  fileFormatUtils::makeValidIdentifier(&v16, __p);
  if ( SHIBYTE(v21) < 0 )
    operator delete(__p[0]);
  *(_OWORD *)__p = v16;
  v21 = v17;
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
      if ( SHIBYTE(v21) < 0 )
      {
        sub_100006E68(*(void **)(a1 + 144), __p[0]);
      }
      else
      {
        v5 = *(_OWORD *)__p;
        *(_QWORD *)(v4 + 16) = v21;
        *(_OWORD *)v4 = v5;
      }
      v6 = v4 + 24;
      *(_QWORD *)(a1 + 144) = v4 + 24;
    }
    *(_QWORD *)(a1 + 144) = v6;
    sub_1000100F8(&v16, __p);
    v7 = *(_QWORD *)(a1 + 168);
    if ( v7 >= *(_QWORD *)(a1 + 176) )
    {
      v11 = sub_100011274(a1 + 160, &v16);
      v12 = SHIBYTE(v19);
      *(_QWORD *)(a1 + 168) = v11;
      if ( v12 < 0 )
        operator delete(v18[0]);
    }
    else
    {
      *(_QWORD *)v7 = v16;
      v8 = *((_QWORD *)&v16 + 1);
      *(_QWORD *)(v7 + 8) = *((_QWORD *)&v16 + 1);
      v9 = v7 + 8;
      v10 = v17;
      *(_QWORD *)(v7 + 16) = v17;
      if ( v10 )
      {
        *(_QWORD *)(v8 + 16) = v9;
        v16 = (unsigned __int64)&v16 + 8;
        v17 = 0LL;
      }
      else
      {
        *(_QWORD *)v7 = v9;
      }
      v13 = *(_OWORD *)v18;
      *(_QWORD *)(v7 + 40) = v19;
      *(_OWORD *)(v7 + 24) = v13;
      v18[1] = 0LL;
      v19 = 0LL;
      v18[0] = 0LL;
      *(_QWORD *)(a1 + 168) = v7 + 48;
    }
    sub_10001016C(&v16, *((_QWORD *)&v16 + 1));
    v14 = -1431655765 * ((*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 136)) >> 3) - 1;
    *(_DWORD *)(a1 + 208) = v14;
    *(_QWORD *)&v16 = __p;
    *(_DWORD *)(sub_100011668(a1 + 184, __p, &std::piecewise_construct, &v16, &v22) + 56) = v14;
  }
  else
  {
    *(_DWORD *)(a1 + 208) = *(_DWORD *)(v3 + 56);
  }
  v15 = *(ObjConverter::Group **)(a1 + 128);
  if ( v15 )
    ObjConverter::Group::setMaterial(v15, *(_DWORD *)(a1 + 208));
  if ( SHIBYTE(v21) < 0 )
    operator delete(__p[0]);
}