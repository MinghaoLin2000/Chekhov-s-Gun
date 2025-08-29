-[XPCSignpostReader logAggdTelemetry]
void __cdecl -[XPCSignpostReader logAggdTelemetry](XPCSignpostReader *self, SEL a2)
{
  NSMutableDictionary *v3; // x19
  void *v4; // x0
  void *v5; // x23
  __int64 v6; // x22
  __int64 v7; // x21
  int v8; // w24
  __int64 v9; // x25
  void *i; // x26
  __int64 *v11; // x0
  __int64 v12; // x20
  __int128 v13; // [xsp+0h] [xbp-120h] BYREF
  __int128 v14; // [xsp+10h] [xbp-110h]
  __int128 v15; // [xsp+20h] [xbp-100h]
  __int128 v16; // [xsp+30h] [xbp-F0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-D8h] BYREF

  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v3 = objc_retain(self->_numAppSignposts);
  v4 = -[NSMutableDictionary countByEnumeratingWithState:objects:count:](
         v3,
         "countByEnumeratingWithState:objects:count:",
         &v13,
         v17,
         16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0;
    v9 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v5; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v9 )
          objc_enumerationMutation(v3);
        v11 = objc_retainAutoreleasedReturnValue(
                -[NSMutableDictionary objectForKey:](
                  self->_numAppSignposts,
                  "objectForKey:",
                  *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i),
                  (_QWORD)v13));
        if ( v11[1] > 1000 )
          ++v8;
        v7 += v11[2];
        v6 += v11[3];
        objc_release(v11);
      }
      v5 = -[NSMutableDictionary countByEnumeratingWithState:objects:count:](
             v3,
             "countByEnumeratingWithState:objects:count:",
             &v13,
             v17,
             16LL);
    }
    while ( v5 );
    v12 = v8;
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
    v12 = 0LL;
  }
  objc_release(v3);
  ADClientSetValueForScalarKey(
    CFSTR("com.apple.powerlog.xpcsignpostreader.signpostprocessing.mxSignpostOverlapCounter"),
    v6);
  ADClientSetValueForScalarKey(
    CFSTR("com.apple.powerlog.xpcsignpostreader.signpostprocessing.mxSignpostProcessedCounter"),
    v7);
  ADClientSetValueForScalarKey(
    CFSTR("com.apple.powerlog.xpcsignpostreader.signpostprocessing.appThresholdExceededCount"),
    v12);
  if ( qword_100019568 >= 50001 )
    ADClientSetValueForScalarKey(
      CFSTR("com.apple.powerlog.xpcsignpostreader.signpostprocessing.overallThresholdExceededCount"),
      1LL);
}