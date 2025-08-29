_uarpPlatformEndpointSendMessageCompleteInternal
__int64 __fastcall uarpPlatformEndpointSendMessageCompleteInternal(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3; // x9
  __int64 *i; // x10
  __int64 v5; // x8

  if ( result )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v3 = *(unsigned __int16 *)(a2 + 112);
        if ( *(_WORD *)(a2 + 112) )
        {
          for ( i = *(__int64 **)(a2 + 120); ; ++i )
          {
            v5 = *i;
            if ( *i )
            {
              if ( *(_QWORD *)v5 == a3 )
                break;
            }
            if ( !--v3 )
              return result;
          }
          *(_BYTE *)(v5 + 32) = 0;
          if ( !*(_WORD *)(a2 + 18) || !*(_BYTE *)(v5 + 31) )
            return uarpTransmitQueuePendingEntryComplete();
        }
      }
    }
  }
  return result;
}