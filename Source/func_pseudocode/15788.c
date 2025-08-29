_uarpPlatformEndpointStreamingRecvBytes
__int64 __fastcall uarpPlatformEndpointStreamingRecvBytes(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 result; // x0
  char *v7; // x19
  __int64 v8; // x22
  _DWORD *v9; // x23
  unsigned int v10; // w8
  char v11; // t1
  __int64 v12; // x3

  result = 30LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v7 = a3;
      if ( a3 )
      {
        LODWORD(v8) = a4;
        if ( a4 )
        {
          v9 = *(_DWORD **)(a2 + 88);
          if ( v9 )
            goto LABEL_6;
          result = uarpPlatformEndpointStreamingRecvInit(a1, a2);
          if ( (_DWORD)result )
            return result;
          v9 = *(_DWORD **)(a2 + 88);
          if ( v9 )
          {
LABEL_6:
            if ( v9[2] >= (unsigned int)v8 )
            {
              v8 = (unsigned int)v8;
              v10 = v9[4];
              do
              {
                v11 = *v7++;
                *(_BYTE *)(*(_QWORD *)v9 + v10) = v11;
                v10 = v9[4] + 1;
                v9[4] = v10;
                if ( v10 == 6 )
                {
                  v12 = (unsigned int)uarpNtohs(*(unsigned __int16 *)(*(_QWORD *)v9 + 2LL)) + 6;
                  v9[3] = v12;
                  v10 = v9[4];
                }
                else
                {
                  v12 = (unsigned int)v9[3];
                }
                if ( v10 == (_DWORD)v12 )
                {
                  result = uarpPlatformEndpointRecvMessage(a1, a2, *(_QWORD *)v9, v12);
                  if ( (_DWORD)result )
                    return result;
                  bzero(*(void **)v9, (unsigned int)v9[2]);
                  v10 = 0;
                  v9[3] = 0;
                  v9[4] = 0;
                }
                --v8;
              }
              while ( v8 );
              return 0LL;
            }
            else
            {
              return 30LL;
            }
          }
          else
          {
            return 27LL;
          }
        }
      }
    }
  }
  return result;
}