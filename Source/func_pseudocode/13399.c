_TSUNormalizeRangeVector
__int64 __fastcall TSUNormalizeRangeVector(__int64 *a1)
{
  __int64 result; // x0
  unsigned __int64 *v4; // x8
  unsigned __int64 *v5; // x9
  __int64 v6; // x11
  _BOOL4 v7; // w16
  unsigned __int64 v8; // x10
  unsigned __int64 v10; // x11
  unsigned __int64 v11; // x15
  unsigned __int64 v12; // x13
  unsigned __int64 v13; // x17
  __int64 *v14; // x16
  unsigned __int64 v15; // x14
  __int64 *v16; // x15
  __int64 v17; // x17
  unsigned __int64 v18; // x15
  unsigned __int64 v19; // x15
  __int64 v20; // x9

  result = *a1;
  if ( (unsigned __int64)(a1[1] - result) < 0x11 )
    return result;
  result = sub_100157D04();
  v5 = (unsigned __int64 *)*a1;
  v4 = (unsigned __int64 *)a1[1];
  v6 = (__int64)v4 - *a1;
  v7 = v4 != (unsigned __int64 *)*a1;
  v8 = 0LL;
  if ( (unsigned __int64)v6 >= 0x11 && v4 != v5 )
  {
    v10 = v6 >> 4;
    v11 = *v5;
    v12 = 1LL;
    while ( 2 )
    {
      if ( v10 <= v12 + 1 )
        v13 = v12 + 1;
      else
        v13 = v10;
      v14 = (__int64 *)&v5[2 * v12 + 1];
      while ( 1 )
      {
        v15 = *(v14 - 1);
        if ( v11 != v15 )
          break;
        ++v12;
        v14 += 2;
        if ( v13 == v12 )
        {
          if ( v8 >= v10 )
            return result;
          goto LABEL_25;
        }
      }
      v16 = (__int64 *)&v5[2 * v8];
      v17 = *v16;
      result = v16[1];
      v18 = *v14;
      if ( result + v17 >= v15 )
      {
        v19 = v18 + v15;
        if ( result + v17 >= v19 )
        {
LABEL_21:
          ++v12;
          v7 = v8 < v10;
          if ( v12 < v10 )
          {
            v11 = v15;
            if ( v8 < v10 )
              continue;
          }
          goto LABEL_7;
        }
        v18 = v19 - v17;
      }
      else
      {
        ++v8;
        v5[2 * v8] = v15;
      }
      break;
    }
    v5[2 * v8 + 1] = v18;
    goto LABEL_21;
  }
LABEL_7:
  if ( v7 )
  {
LABEL_25:
    v20 = (__int64)&v5[2 * v8 + 2];
    if ( (unsigned __int64 *)v20 != v4 )
      a1[1] = v20;
  }
  return result;
}