_uarpApplePlatformMessageExceededRetries
__int64 __fastcall uarpApplePlatformMessageExceededRetries(__int64 result, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // x23
  __int64 v9; // x20
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, _QWORD); // x4
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = *(_QWORD **)(result + 40);
  if ( v4 )
  {
    word_10002AC90 = 2492;
    byte_10002AC92 = 99;
    if ( *(_WORD *)(a3 + 6) == 2492 && *(_BYTE *)(a3 + 8) == 99 )
    {
      v9 = result;
      result = uarpHtons(*(unsigned __int16 *)(a3 + 9));
      if ( a4 >= 0xF && (_DWORD)result == 32 )
      {
        result = uarpHtonl(*(unsigned int *)(a3 + 11));
        if ( (_DWORD)result == 1 )
        {
          v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[2];
          if ( !v10 )
            return result;
        }
        else
        {
          result = uarpHtonl(*(unsigned int *)(a3 + 11));
          if ( (_DWORD)result == 2 )
          {
            v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[4];
            if ( !v10 )
              return result;
          }
          else
          {
            result = uarpHtonl(*(unsigned int *)(a3 + 11));
            if ( (_DWORD)result == 3 )
            {
              v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[6];
              if ( !v10 )
                return result;
            }
            else
            {
              result = uarpHtonl(*(unsigned int *)(a3 + 11));
              if ( (_DWORD)result == 4 )
              {
                v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[8];
                if ( !v10 )
                  return result;
              }
              else
              {
                result = uarpHtonl(*(unsigned int *)(a3 + 11));
                if ( (_DWORD)result == 5 )
                {
                  v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[10];
                  if ( !v10 )
                    return result;
                }
                else
                {
                  result = uarpHtonl(*(unsigned int *)(a3 + 11));
                  if ( (_DWORD)result == 6 )
                  {
                    v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[12];
                    if ( !v10 )
                      return result;
                  }
                  else
                  {
                    result = uarpHtonl(*(unsigned int *)(a3 + 11));
                    if ( (_DWORD)result == 7 )
                    {
                      v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[14];
                      if ( !v10 )
                        return result;
                    }
                    else
                    {
                      result = uarpHtonl(*(unsigned int *)(a3 + 11));
                      if ( (_DWORD)result == 29 )
                      {
                        v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[16];
                        if ( !v10 )
                          return result;
                      }
                      else
                      {
                        result = uarpHtonl(*(unsigned int *)(a3 + 11));
                        if ( (_DWORD)result == 8 )
                        {
                          v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[18];
                          if ( !v10 )
                            return result;
                        }
                        else
                        {
                          result = uarpHtonl(*(unsigned int *)(a3 + 11));
                          if ( (_DWORD)result == 9 )
                          {
                            v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[20];
                            if ( !v10 )
                              return result;
                          }
                          else
                          {
                            result = uarpHtonl(*(unsigned int *)(a3 + 11));
                            if ( (_DWORD)result == 10 )
                            {
                              v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[22];
                              if ( !v10 )
                                return result;
                            }
                            else
                            {
                              result = uarpHtonl(*(unsigned int *)(a3 + 11));
                              if ( (_DWORD)result == 11 )
                              {
                                v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[24];
                                if ( !v10 )
                                  return result;
                              }
                              else
                              {
                                result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                if ( (_DWORD)result == 12 )
                                {
                                  v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[26];
                                  if ( !v10 )
                                    return result;
                                }
                                else
                                {
                                  result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                  if ( (_DWORD)result == 13 )
                                  {
                                    v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[28];
                                    if ( !v10 )
                                      return result;
                                  }
                                  else
                                  {
                                    result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                    if ( (_DWORD)result == 14 )
                                    {
                                      v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[30];
                                      if ( !v10 )
                                        return result;
                                    }
                                    else
                                    {
                                      result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                      if ( (_DWORD)result == 15 )
                                      {
                                        v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[32];
                                        if ( !v10 )
                                          return result;
                                      }
                                      else
                                      {
                                        result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                        if ( (_DWORD)result == 16 )
                                        {
                                          v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[34];
                                          if ( !v10 )
                                            return result;
                                        }
                                        else
                                        {
                                          result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                          if ( (_DWORD)result == 17 )
                                          {
                                            v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[36];
                                            if ( !v10 )
                                              return result;
                                          }
                                          else
                                          {
                                            result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                            if ( (_DWORD)result == 18 )
                                            {
                                              v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[38];
                                              if ( !v10 )
                                                return result;
                                            }
                                            else
                                            {
                                              result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                              if ( (_DWORD)result == 19 )
                                              {
                                                v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[40];
                                                if ( !v10 )
                                                  return result;
                                              }
                                              else
                                              {
                                                result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                                if ( (_DWORD)result == 20 )
                                                {
                                                  v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[42];
                                                  if ( !v10 )
                                                    return result;
                                                }
                                                else
                                                {
                                                  result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                                  if ( (_DWORD)result == 21 )
                                                  {
                                                    v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[44];
                                                    if ( !v10 )
                                                      return result;
                                                  }
                                                  else
                                                  {
                                                    result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                                    if ( (_DWORD)result == 22 )
                                                    {
                                                      v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[46];
                                                      if ( !v10 )
                                                        return result;
                                                    }
                                                    else
                                                    {
                                                      result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                                      if ( (_DWORD)result == 23 )
                                                      {
                                                        v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[48];
                                                        if ( !v10 )
                                                          return result;
                                                      }
                                                      else
                                                      {
                                                        result = uarpHtonl(*(unsigned int *)(a3 + 11));
                                                        if ( (_DWORD)result != 24 )
                                                          return result;
                                                        v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v4[50];
                                                        if ( !v10 )
                                                          return result;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v11 = *(_QWORD *)(v9 + 544);
        v12 = *(_QWORD *)(a2 + 40);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return v10(v11, v12, 0LL, 0LL);
      }
    }
  }
  return result;
}