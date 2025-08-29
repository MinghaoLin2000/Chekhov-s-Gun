_SiriUIRequestSourceFromNCEventSource
__int64 __fastcall SiriUIRequestSourceFromNCEventSource(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v5; // x9
  __int64 v6; // x10
  bool v7; // zf

  result = 0LL;
  switch ( a2 )
  {
    case 0LL:
      if ( a1 == 1 )
        result = 3LL;
      else
        result = 0LL;
      break;
    case 1LL:
      v5 = 6LL;
      v6 = 25LL;
      v7 = a1 == 15;
      goto LABEL_8;
    case 2LL:
      v5 = 4LL;
      v6 = 26LL;
      v7 = a1 == 17;
LABEL_8:
      if ( v7 )
        result = v6;
      else
        result = v5;
      break;
    case 3LL:
      result = 9LL;
      break;
    case 4LL:
      result = 8LL;
      break;
    case 5LL:
      result = 23LL;
      break;
    case 6LL:
      result = 5LL;
      break;
    case 7LL:
    case 10LL:
      result = 12LL;
      break;
    case 8LL:
      if ( a3 == 8 )
        result = 19LL;
      else
        result = 22LL;
      break;
    case 9LL:
      result = 7LL;
      break;
    case 12LL:
      result = 28LL;
      break;
    default:
      return result;
  }
  return result;
}