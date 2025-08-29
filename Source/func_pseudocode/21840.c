__ZN12StlConverter14parseStlBinaryERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE
__int64 __fastcall StlConverter::parseStlBinary(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0
  unsigned __int64 v5; // x21
  unsigned __int64 v6; // x22
  int v7; // s2
  int v8; // s0
  _QWORD *v9; // x27
  _DWORD *v10; // x8
  __int64 v11; // x0
  _QWORD *v12; // x26
  unsigned __int64 v13; // x11
  char *v14; // x10
  _DWORD *v15; // x27
  char *v16; // x0
  __int64 v17; // x27
  unsigned __int64 v18; // x9
  unsigned __int64 v19; // x11
  __int64 v20; // x1
  __int64 v21; // x8
  _DWORD *v22; // x9
  int v23; // t1
  __int64 v24; // x27
  int v25; // s2
  int v26; // s0
  _DWORD *v27; // x8
  __int64 v28; // x0
  __int64 v29; // x26
  int v30; // s2
  int v31; // s0
  _DWORD *v32; // x8
  __int64 v33; // x0
  __int64 v34; // x27
  int v35; // s2
  int v36; // s0
  _DWORD *v37; // x8
  int v38; // [xsp+8h] [xbp-F8h] BYREF
  int v39; // [xsp+Ch] [xbp-F4h]
  int v40; // [xsp+10h] [xbp-F0h]
  _DWORD v41[3]; // [xsp+14h] [xbp-ECh] BYREF
  int v42; // [xsp+20h] [xbp-E0h] BYREF
  int v43; // [xsp+24h] [xbp-DCh]
  int v44; // [xsp+28h] [xbp-D8h]
  int v45; // [xsp+2Ch] [xbp-D4h]
  int v46; // [xsp+30h] [xbp-D0h]
  int v47; // [xsp+34h] [xbp-CCh]
  int v48; // [xsp+38h] [xbp-C8h]
  int v49; // [xsp+3Ch] [xbp-C4h]
  int v50; // [xsp+40h] [xbp-C0h]
  int v51; // [xsp+44h] [xbp-BCh]
  int v52; // [xsp+48h] [xbp-B8h]
  int v53; // [xsp+4Ch] [xbp-B4h]
  unsigned int v54; // [xsp+54h] [xbp-ACh] BYREF
  _BYTE v55[80]; // [xsp+58h] [xbp-A8h] BYREF

  StlConverter::addSolid(a1, (__int64)(a1 + 5));
  std::istream::read(a2, v55, 80LL);
  v54 = 0;
  result = std::istream::read(a2, &v54, 4LL);
  if ( !(v54 >> 28) )
  {
    sub_1000062A8(a1[4] + 48LL);
    result = sub_1000062A8(a1[4] + 24LL);
    if ( v54 )
    {
      v5 = 0LL;
      v6 = 84LL;
      do
      {
        if ( v6 >= a1[8] + 50LL )
          break;
        std::istream::read(a2, &v42, 50LL);
        v7 = v43;
        v8 = v44;
        v41[0] = v42;
        v41[1] = v43;
        v41[2] = v44;
        v9 = (_QWORD *)a1[4];
        v10 = (_DWORD *)v9[7];
        if ( (unsigned __int64)v10 >= v9[8] )
        {
          v11 = sub_100007DF0(v9 + 6, v41);
          v12 = (_QWORD *)a1[4];
        }
        else
        {
          *v10 = v42;
          v10[1] = v7;
          v11 = (__int64)(v10 + 3);
          v12 = v9;
          v10[2] = v8;
        }
        v9[7] = v11;
        v13 = v12[11];
        v14 = (char *)v12[10];
        if ( (unsigned __int64)v14 >= v13 )
        {
          v16 = (char *)v12[9];
          v17 = (v14 - v16) >> 2;
          if ( (unsigned __int64)(v17 + 1) >> 62 )
            sub_100007480(v12 + 9);
          v18 = v13 - (_QWORD)v16;
          v19 = (__int64)(v13 - (_QWORD)v16) >> 1;
          if ( v19 <= v17 + 1 )
            v19 = v17 + 1;
          if ( v18 >= 0x7FFFFFFFFFFFFFFCLL )
            v20 = 0x3FFFFFFFFFFFFFFFLL;
          else
            v20 = v19;
          if ( v20 )
          {
            v21 = sub_100007F5C(v12 + 11);
            v16 = (char *)v12[9];
            v14 = (char *)v12[10];
          }
          else
          {
            v21 = 0LL;
          }
          v22 = (_DWORD *)(v21 + 4 * v17);
          *v22 = 3;
          v15 = v22 + 1;
          while ( v14 != v16 )
          {
            v23 = *((_DWORD *)v14 - 1);
            v14 -= 4;
            *--v22 = v23;
          }
          v12[9] = v22;
          v12[10] = v15;
          v12[11] = v21 + 4 * v20;
          if ( v16 )
            operator delete(v16);
        }
        else
        {
          *(_DWORD *)v14 = 3;
          v15 = v14 + 4;
        }
        v12[10] = v15;
        v24 = a1[4];
        v25 = v46;
        v26 = v47;
        v38 = v45;
        v39 = v46;
        v40 = v47;
        v27 = *(_DWORD **)(v24 + 32);
        if ( (unsigned __int64)v27 >= *(_QWORD *)(v24 + 40) )
        {
          v28 = sub_10000B99C(v24 + 24, &v38);
          v29 = a1[4];
        }
        else
        {
          *v27 = v45;
          v27[1] = v25;
          v28 = (__int64)(v27 + 3);
          v29 = v24;
          v27[2] = v26;
        }
        *(_QWORD *)(v24 + 32) = v28;
        v30 = v49;
        v31 = v50;
        v38 = v48;
        v39 = v49;
        v40 = v50;
        v32 = *(_DWORD **)(v29 + 32);
        if ( (unsigned __int64)v32 >= *(_QWORD *)(v29 + 40) )
        {
          v33 = sub_10000B99C(v29 + 24, &v38);
          v34 = a1[4];
        }
        else
        {
          *v32 = v48;
          v32[1] = v30;
          v33 = (__int64)(v32 + 3);
          v34 = v29;
          v32[2] = v31;
        }
        *(_QWORD *)(v29 + 32) = v33;
        v35 = v52;
        v36 = v53;
        v38 = v51;
        v39 = v52;
        v40 = v53;
        v37 = *(_DWORD **)(v34 + 32);
        if ( (unsigned __int64)v37 >= *(_QWORD *)(v34 + 40) )
        {
          result = sub_10000B99C(v34 + 24, &v38);
        }
        else
        {
          *v37 = v51;
          v37[1] = v35;
          result = (__int64)(v37 + 3);
          v37[2] = v36;
        }
        v6 += 50LL;
        *(_QWORD *)(v34 + 32) = result;
        ++v5;
      }
      while ( v5 < v54 );
    }
  }
  return result;
}