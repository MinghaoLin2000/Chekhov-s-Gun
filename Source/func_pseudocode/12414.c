__ZN6snappy8internal16CompressFragmentEPKcmPcPti
char *__fastcall snappy::internal::CompressFragment(
        snappy::internal *this,
        const char *a2,
        char *a3,
        char *a4,
        unsigned __int16 *a5)
{
  unsigned __int64 v5; // x13
  snappy::internal *v7; // x20
  const char *v8; // x5
  __int16 v10; // w23
  unsigned __int64 v11; // x6
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x27
  __int16 v14; // w26
  char *v15; // x0
  snappy::internal *v16; // x1
  snappy::internal *v17; // x22
  unsigned __int64 v18; // x28
  char *v19; // x7
  __int64 v20; // x10
  __int64 v21; // x12
  __int16 v22; // w14
  __int64 v23; // x9
  __int64 v24; // x11
  __int64 i; // x15
  int v26; // w0
  unsigned int v27; // w2
  __int64 v28; // x17
  unsigned int v29; // w8
  snappy::internal *v30; // x10
  snappy::internal *v31; // x9
  unsigned int v32; // w11
  __int64 v33; // x10
  __int64 v34; // x10
  _DWORD *v35; // x26
  unsigned int v36; // w14
  int v37; // w8
  char *v38; // x19
  int v39; // w9
  int v40; // w10
  unsigned int v41; // w11
  int v42; // w12
  unsigned int v43; // w13
  int v44; // w9
  _QWORD *v45; // x9
  const char *v46; // x8
  unsigned __int64 v47; // x10
  bool v48; // w14
  __int64 v49; // x11
  unsigned __int64 v50; // x12
  unsigned __int64 v51; // x13
  int v52; // w15
  unsigned int v53; // w14
  int v54; // w16
  int v55; // w17
  unsigned int v56; // w17
  unsigned __int64 v57; // x13
  int v58; // w14
  unsigned int v59; // w15
  int v60; // w16
  int v61; // w17
  unsigned int v62; // w17
  unsigned __int64 v63; // x11
  __int64 v64; // x12
  unsigned __int64 v65; // x10
  int v66; // w9
  unsigned int v67; // w11
  int v68; // w12
  int v69; // w13
  unsigned __int64 v70; // x9
  unsigned __int64 v71; // x8
  unsigned __int64 v72; // x10
  int v73; // w10
  int v74; // w11
  int v75; // w9
  unsigned __int64 v76; // x9
  int v77; // w10
  unsigned int v78; // w11
  int v79; // w12
  int v80; // w13
  bool v81; // cf
  unsigned int v82; // w8
  __int64 v83; // x8
  unsigned int v84; // w9
  int v85; // w9
  int v86; // w8
  int v87; // w21
  int v88; // w8
  char *v89; // x19
  int v90; // w9
  int v91; // w10
  unsigned int v92; // w12
  int v93; // w13
  unsigned int v94; // w14
  int v95; // w9
  int v97; // [xsp+0h] [xbp-80h]
  char *v98; // [xsp+8h] [xbp-78h]
  unsigned __int64 v99; // [xsp+10h] [xbp-70h]
  const char *v100; // [xsp+18h] [xbp-68h]
  const char *v101; // [xsp+28h] [xbp-58h]

  v7 = this;
  v8 = &a2[(_QWORD)this];
  if ( (unsigned __int64)a2 >= 0xF )
  {
    v10 = (_WORD)a5 - 1;
    v11 = (unsigned __int64)(v8 - 15);
    LODWORD(v12) = *(_DWORD *)((char *)this + 1);
    v13 = (unsigned __int64)(v8 - 16);
    v14 = 1 - (_WORD)this;
    v15 = (char *)this + (_QWORD)a2;
    v16 = v7;
    v101 = v8 - 8;
    while ( 1 )
    {
      v17 = (snappy::internal *)((char *)v16 + 1);
      v18 = *(_QWORD *)((char *)v16 + 1);
      if ( (__int64)(v11 - ((_QWORD)v16 + 1)) < 16 )
      {
        v29 = 33;
      }
      else
      {
        v19 = v15;
        v20 = 0LL;
        v21 = 0LL;
        v5 = (unsigned __int64)v16 + 5;
        v22 = v14 + (_WORD)v16;
        v23 = -2LL;
        v24 = -1LL;
        do
        {
          for ( i = 0LL; i != 4; ++i )
          {
            if ( v20 == i )
              v26 = v12;
            else
              v26 = v18;
            v27 = *(_DWORD *)&v10 & ((unsigned int)(506832829 * v26) >> 18);
            v28 = *(unsigned __int16 *)&a4[2 * v27];
            *(_WORD *)&a4[2 * v27] = v22 + i;
            if ( *(_DWORD *)((char *)v7 + v28) == v26 )
            {
              v35 = (_DWORD *)((char *)v7 + v28);
              *a3 = 4 * (i - v20);
              *(_OWORD *)(a3 + 1) = *(_OWORD *)v16;
              v17 = (snappy::internal *)((char *)v16 + i - v24);
              a3 = &a3[i - v23];
              v15 = v19;
              goto LABEL_31;
            }
            v18 >>= 8;
          }
          v18 = *(_QWORD *)(v5 + 4 * v21++);
          v20 -= 4LL;
          v23 -= 4LL;
          v24 -= 4LL;
          v22 += 4;
        }
        while ( v21 != 4 );
        v17 = (snappy::internal *)((char *)v16 + 17);
        v29 = 49;
        v15 = v19;
      }
      v30 = (snappy::internal *)((char *)v17 + 1);
      if ( (unsigned __int64)v17 + 1 > v11 )
      {
LABEL_111:
        v7 = v16;
        break;
      }
      while ( 1 )
      {
        v31 = v30;
        v32 = *(_DWORD *)&v10 & ((unsigned int)(506832829 * v18) >> 18);
        v33 = *(unsigned __int16 *)&a4[2 * v32];
        *(_WORD *)&a4[2 * v32] = (_WORD)v17 - (_WORD)v7;
        if ( *(_DWORD *)((char *)v7 + v33) == (_DWORD)v18 )
          break;
        v18 = *(unsigned int *)v31;
        v34 = v29 >> 5;
        v29 += v29 >> 5;
        v30 = (snappy::internal *)((char *)v31 + v34);
        v17 = v31;
        if ( (unsigned __int64)v30 > v11 )
          goto LABEL_111;
      }
      v35 = (_DWORD *)((char *)v7 + v33);
      v36 = (_DWORD)v17 - (_DWORD)v16;
      v37 = (_DWORD)v17 - (_DWORD)v16 - 1;
      if ( (int)v17 - (int)v16 > 16 )
      {
        v99 = v11;
        v100 = v8;
        v98 = v15;
        if ( v36 >= 0x3D )
        {
          v39 = 0;
          v40 = 4;
          v41 = (_DWORD)v17 - (_DWORD)v16 - 1;
          do
          {
            v42 = 1 << v40;
            v43 = v41 >> (1 << v40);
            if ( !v43 )
              v42 = 0;
            v39 += v42;
            if ( v43 )
              v41 >>= 1 << v40;
            --v40;
          }
          while ( v40 != -1 );
          v44 = v39 >> 3;
          *a3 = 4 * v44 - 16;
          *(_DWORD *)(a3 + 1) = v37;
          v38 = &a3[v44 + 2];
        }
        else
        {
          *a3 = 4 * v37;
          v38 = a3 + 1;
        }
        v97 = (_DWORD)v17 - (_DWORD)v16;
        memcpy(v38, v16, (unsigned int)((_DWORD)v17 - (_DWORD)v16));
        v15 = v98;
        a3 = &v38[v97];
        v11 = v99;
        v8 = v100;
      }
      else
      {
        *a3 = 4 * v37;
        *(_OWORD *)(a3 + 1) = *(_OWORD *)v16;
        a3 += (int)v36 + 1;
      }
      do
      {
LABEL_31:
        v45 = v35 + 1;
        v46 = (char *)v17 + 4;
        if ( v13 >= (unsigned __int64)v17 + 4 )
        {
          if ( *v45 != *(_QWORD *)v46 )
          {
            v65 = *(_QWORD *)v46 ^ *v45;
            if ( (_DWORD)v65 )
            {
              v66 = 31;
              v67 = 16;
              v68 = -5;
              do
              {
                v69 = (_DWORD)v65 << v67;
                if ( (_DWORD)v65 << v67 )
                  LODWORD(v65) = (_DWORD)v65 << v67;
                if ( v69 )
                  v5 = v67;
                else
                  v5 = 0LL;
                v66 -= v5;
                v67 >>= 1;
                v81 = __CFADD__(v68++, 1);
              }
              while ( !v81 );
            }
            else
            {
              v76 = HIDWORD(v65);
              v77 = 31;
              v78 = 16;
              v79 = -5;
              do
              {
                v80 = (_DWORD)v76 << v78;
                if ( (_DWORD)v76 << v78 )
                  LODWORD(v76) = (_DWORD)v76 << v78;
                if ( v80 )
                  v5 = v78;
                else
                  v5 = 0LL;
                v77 -= v5;
                v78 >>= 1;
                v81 = __CFADD__(v79++, 1);
              }
              while ( !v81 );
              v66 = v77 + 32;
            }
            v18 = *(_QWORD *)&v46[v66 >> 3];
            v70 = ((__int64)v66 >> 3) + 4;
            v16 = (snappy::internal *)((char *)v17 + v70);
            v71 = v17 - (snappy::internal *)v35;
LABEL_99:
            v75 = ((_DWORD)v71 << 8) + 4 * v70;
            goto LABEL_100;
          }
          v46 = (char *)v17 + 12;
          v47 = 8LL;
        }
        else
        {
          v47 = 0LL;
        }
        v48 = 1;
        while ( (unsigned __int64)v46 <= v13 )
        {
          v49 = *(_QWORD *)((char *)v45 + v47);
          v50 = *(_QWORD *)v46;
          if ( v49 == *(_QWORD *)v46 )
          {
            v46 += 8;
            v47 += 8LL;
          }
          else
          {
            v51 = v50 ^ v49;
            if ( (unsigned int)v50 != (unsigned int)v49 )
            {
              v52 = 31;
              v53 = 16;
              v54 = -5;
              do
              {
                v55 = (_DWORD)v51 << v53;
                if ( (_DWORD)v51 << v53 )
                  LODWORD(v51) = (_DWORD)v51 << v53;
                if ( v55 )
                  v56 = v53;
                else
                  v56 = 0;
                v52 -= v56;
                v53 >>= 1;
                v81 = __CFADD__(v54++, 1);
              }
              while ( !v81 );
            }
            else
            {
              v57 = HIDWORD(v51);
              v58 = 31;
              v59 = 16;
              v60 = -5;
              do
              {
                v61 = (_DWORD)v57 << v59;
                if ( (_DWORD)v57 << v59 )
                  LODWORD(v57) = (_DWORD)v57 << v59;
                if ( v61 )
                  v62 = v59;
                else
                  v62 = 0;
                v58 -= v62;
                v59 >>= 1;
                v81 = __CFADD__(v60++, 1);
              }
              while ( !v81 );
              v52 = v58 + 32;
            }
            v48 = 0;
            v18 = *(_QWORD *)&v46[v52 >> 3];
            v47 += v52 >> 3;
            v5 = v47;
          }
          if ( v49 != v50 )
            goto LABEL_80;
        }
        if ( v46 >= v8 )
        {
LABEL_66:
          v48 = v47 < 8;
          v5 = v47;
        }
        else
        {
          v63 = &v8[v47] - v46;
          v64 = v15 - v46;
          v5 = v47;
          while ( *((unsigned __int8 *)v45 + v5) == *(unsigned __int8 *)v46 )
          {
            ++v46;
            ++v5;
            if ( !--v64 )
            {
              v47 = v63;
              goto LABEL_66;
            }
          }
          if ( v46 <= v101 )
            v18 = *(_QWORD *)v46;
          v48 = v5 < 8;
        }
LABEL_80:
        v70 = v5 + 4;
        v16 = (snappy::internal *)((char *)v17 + v5 + 4);
        v71 = v17 - (snappy::internal *)v35;
        if ( v48 )
          goto LABEL_99;
        if ( v70 >= 0x44 )
        {
          v72 = (v71 << 8) + 0x1000000FELL;
          do
          {
            *a3 = -2;
            v5 = v72 >> 8;
            a3[1] = BYTE1(v72);
            a3[2] = BYTE2(v72);
            a3[3] = (unsigned int)(((_DWORD)v71 << 8) + 254) >> 24;
            a3 += 3;
            v70 -= 64LL;
          }
          while ( v70 > 0x43 );
        }
        if ( v70 < 0x41 )
        {
          if ( v70 > 0xB )
          {
            v85 = 4 * v70 - 2;
            v86 = v85 + ((_DWORD)v71 << 8);
            *a3 = v85;
            a3[1] = BYTE1(v86);
            a3[2] = BYTE2(v86);
            a3[3] = HIBYTE(v86);
            a3 += 3;
            goto LABEL_107;
          }
          v73 = (_DWORD)v71 << 8;
        }
        else
        {
          v73 = (_DWORD)v71 << 8;
          v74 = ((_DWORD)v71 << 8) + 238;
          *a3 = -18;
          a3[1] = BYTE1(v74);
          a3[2] = BYTE2(v74);
          a3[3] = HIBYTE(v74);
          a3 += 3;
          LODWORD(v70) = v70 - 60;
        }
        v75 = v73 + 4 * v70;
LABEL_100:
        v81 = v71 >= 0x800;
        if ( v71 >= 0x800 )
          v82 = -2;
        else
          v82 = (((unsigned int)v71 >> 3) & 0xE0) - 15;
        *(_DWORD *)a3 = v82 + v75;
        if ( v81 )
          v83 = 3LL;
        else
          v83 = 2LL;
        a3 += v83;
LABEL_107:
        if ( (unsigned __int64)v16 >= v11 )
          goto LABEL_111;
        *(_WORD *)&a4[2 * (*(_DWORD *)&v10 & ((unsigned int)(506832829 * *(_DWORD *)((char *)v16 - 1)) >> 18))] = (_WORD)v16 - (_WORD)v7 - 1;
        v84 = *(_DWORD *)&v10 & ((unsigned int)(506832829 * v18) >> 18);
        v35 = (_DWORD *)((char *)v7 + *(unsigned __int16 *)&a4[2 * v84]);
        *(_WORD *)&a4[2 * v84] = (_WORD)v16 - (_WORD)v7;
        v17 = v16;
      }
      while ( *v35 == (_DWORD)v18 );
      v12 = v18 >> 8;
      v14 = 1 - (_WORD)v7;
    }
  }
  if ( v7 < (snappy::internal *)v8 )
  {
    v87 = (_DWORD)v8 - (_DWORD)v7;
    v88 = (_DWORD)v8 - (_DWORD)v7 - 1;
    if ( (int)v8 - (int)v7 >= 61 )
    {
      v90 = 0;
      v91 = 4;
      v92 = (_DWORD)v8 - (_DWORD)v7 - 1;
      do
      {
        v93 = 1 << v91;
        v94 = v92 >> (1 << v91);
        if ( !v94 )
          v93 = 0;
        v90 += v93;
        if ( v94 )
          v92 >>= 1 << v91;
        --v91;
      }
      while ( v91 != -1 );
      v95 = v90 >> 3;
      *a3 = 4 * v95 - 16;
      *(_DWORD *)(a3 + 1) = v88;
      v89 = &a3[v95 + 2];
    }
    else
    {
      *a3 = 4 * v88;
      v89 = a3 + 1;
    }
    memcpy(v89, v7, v87);
    return &v89[v87];
  }
  return a3;
}