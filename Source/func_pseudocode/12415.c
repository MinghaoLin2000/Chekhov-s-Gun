__ZN6snappy18SnappyDecompressor9RefillTagEv
__int64 __fastcall snappy::SnappyDecompressor::RefillTag(snappy::SnappyDecompressor *this)
{
  unsigned __int8 *v2; // x1
  unsigned __int8 *v3; // x8
  __int64 v4; // x0
  __int64 v5; // x8
  unsigned int v6; // w9
  unsigned int v8; // w23
  unsigned int v9; // w22
  char *v10; // x20
  const void *v11; // x0
  size_t v12; // x21
  char *v13; // x8
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v2 = (unsigned __int8 *)*((_QWORD *)this + 1);
  v3 = (unsigned __int8 *)*((_QWORD *)this + 2);
  if ( v2 == v3 )
  {
    (*(void (**)(void))(**(_QWORD **)this + 32LL))();
    v15 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, &v15);
    v5 = v15;
    *((_DWORD *)this + 8) = v15;
    *((_BYTE *)this + 36) = v5 == 0;
    if ( !v5 )
      return 0LL;
    v2 = (unsigned __int8 *)v4;
    v3 = (unsigned __int8 *)(v4 + v5);
    *((_QWORD *)this + 2) = v3;
  }
  v6 = *v2;
  if ( v6 >= 0xF0 && (v6 & 3) == 0 )
    v8 = (v6 >> 2) - 58;
  else
    v8 = (0x5030201u >> (8 * (v6 & 3))) & 7;
  v9 = (_DWORD)v3 - (_DWORD)v2;
  if ( v8 > (int)v3 - (int)v2 )
  {
    v10 = (char *)this + 37;
    memmove((char *)this + 37, v2, (unsigned int)((_DWORD)v3 - (_DWORD)v2));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this, *((unsigned int *)this + 8));
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v15 = 0LL;
      v11 = (const void *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 24LL))(
                            *(_QWORD *)this,
                            &v15);
      if ( !v15 )
        return 0LL;
      if ( v8 - v9 >= (unsigned int)v15 )
        v12 = (unsigned int)v15;
      else
        v12 = v8 - v9;
      memcpy(&v10[v9], v11, v12);
      v9 += v12;
      (*(void (__fastcall **)(_QWORD, size_t))(**(_QWORD **)this + 32LL))(*(_QWORD *)this, v12);
      if ( v9 >= v8 )
      {
        v13 = &v10[v8];
        goto LABEL_20;
      }
    }
  }
  if ( v9 > 4 )
  {
    *((_QWORD *)this + 1) = v2;
  }
  else
  {
    v10 = (char *)this + 37;
    memmove((char *)this + 37, v2, (unsigned int)((_DWORD)v3 - (_DWORD)v2));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this, *((unsigned int *)this + 8));
    *((_DWORD *)this + 8) = 0;
    v13 = (char *)this + v9 + 37;
LABEL_20:
    *((_QWORD *)this + 1) = v10;
    *((_QWORD *)this + 2) = v13;
  }
  return 1LL;
}