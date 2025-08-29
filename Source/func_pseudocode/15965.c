_uarpProcessPayloadTLVInternal
void *__fastcall uarpProcessPayloadTLVInternal(
        void *result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  __int64 v10; // x20
  int v11; // w24
  __int64 v12; // x0
  unsigned int v13; // w2
  unsigned int v14; // w2
  void **v15; // x24
  void *v16; // x0
  size_t v17; // x2
  void **v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // [xsp+8h] [xbp-38h] BYREF
  int v22; // [xsp+Ch] [xbp-34h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v10 = (__int64)result;
  if ( (_DWORD)a4 != -858619624 )
  {
    v11 = a4;
    if ( (_DWORD)a4 == -858619625 )
    {
      if ( (_DWORD)a5 == 2 )
      {
        v12 = uarpNtohs(*a6);
        *(_DWORD *)(a3 + 76) = v12;
        UARPLayer2HashInfo(v10, v12, (_DWORD *)(a3 + 88), (_DWORD *)(a3 + 104));
        v13 = *(_DWORD *)(a3 + 88);
        if ( !v13 || !(unsigned int)UARPLayer2RequestBuffer(v10, (__int64 *)(a3 + 80), v13) && *(_QWORD *)(a3 + 80) )
        {
          v14 = *(_DWORD *)(a3 + 104);
          if ( !v14 || !(unsigned int)UARPLayer2RequestBuffer(v10, (__int64 *)(a3 + 96), v14) && *(_QWORD *)(a3 + 96) )
          {
            v19 = *(unsigned int *)(a3 + 76);
            v20 = *(_QWORD *)(a3 + 80);
            if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
              __break(0xC471u);
            return (void *)UARPLayer2HashInit(v10, v19, v20);
          }
        }
        *(_DWORD *)(a3 + 76) = 0;
      }
LABEL_11:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (void *)UARPLayer2AssetCorrupt(v10, a2);
    }
    if ( *(_DWORD *)(a3 + 76) )
    {
      v22 = uarpHtonl(a4);
      UARPLayer2HashUpdate(v10, *(unsigned int *)(a3 + 76), *(_QWORD *)(a3 + 80), (__int64)&v22, 4LL);
      v21 = uarpHtonl(a5);
      UARPLayer2HashUpdate(v10, *(unsigned int *)(a3 + 76), *(_QWORD *)(a3 + 80), (__int64)&v21, 4LL);
      result = (void *)UARPLayer2HashUpdate(v10, *(unsigned int *)(a3 + 76), *(_QWORD *)(a3 + 80), (__int64)a6, a5);
    }
    if ( v11 > -858619631 )
    {
      if ( v11 == -858619630 )
      {
        if ( (_DWORD)a5 == 2 )
        {
          result = (void *)uarpNtohs(*a6);
          *(_DWORD *)(a3 + 56) = (_DWORD)result;
          return result;
        }
      }
      else
      {
        if ( v11 != -858619623 )
          return result;
        if ( (_DWORD)a5 == 4 )
        {
          result = (void *)uarpNtohl(*(unsigned int *)a6);
          *(_DWORD *)(a3 + 128) = (_DWORD)result;
          return result;
        }
      }
    }
    else if ( v11 == -858619641 )
    {
      *(_DWORD *)(a3 + 72) = a5;
      v18 = (void **)(a3 + 64);
      if ( !(unsigned int)UARPLayer2RequestBuffer(v10, (__int64 *)(a3 + 64), a5) && *v18 )
        return memcpy(*v18, a6, *(unsigned int *)(a3 + 72));
    }
    else
    {
      if ( v11 != -858619636 )
        return result;
      if ( (_DWORD)a5 == 4 )
      {
        result = (void *)uarpNtohl(*(unsigned int *)a6);
        if ( (_DWORD)result )
        {
          *(_BYTE *)(a3 + 52) = 1;
          if ( !*(_QWORD *)(a2 + 656) )
          {
            result = (void *)UARPLayer2RequestBuffer(v10, (__int64 *)(a2 + 656), *(_DWORD *)(a2 + 648));
            if ( *(_QWORD *)(a2 + 656) )
            {
              *(_DWORD *)(a2 + 664) = *(_DWORD *)(a2 + 648);
              *(_BYTE *)(a2 + 668) = 0;
            }
          }
          return result;
        }
      }
    }
    return (void *)UARPLayer2AssetCorrupt(v10, a2);
  }
  *(_DWORD *)(a3 + 120) = a5;
  v15 = (void **)(a3 + 112);
  if ( (unsigned int)UARPLayer2RequestBuffer((__int64)result, (__int64 *)(a3 + 112), a5) )
    goto LABEL_11;
  v16 = *v15;
  if ( !*v15 )
    goto LABEL_11;
  v17 = *(unsigned int *)(a3 + 120);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return memcpy(v16, a6, v17);
}