+[ATEnforcementService reasonCodeFromNumberValue:]
signed __int64 __cdecl +[ATEnforcementService reasonCodeFromNumberValue:](id a1, SEL a2, id a3)
{
  signed __int64 result; // x0
  signed __int64 v4; // x8

  result = (signed __int64)objc_msgSend(a3, "integerValue");
  if ( result == 1001 )
    v4 = 1001LL;
  else
    v4 = 0LL;
  if ( result != 1002 )
    return v4;
  return result;
}