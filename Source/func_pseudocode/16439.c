-[UARPUpdaterServiceLegacyAudio getMatchingServicesListWithReply:]
void __cdecl -[UARPUpdaterServiceLegacyAudio getMatchingServicesListWithReply:](
        UARPUpdaterServiceLegacyAudio *self,
        SEL a2,
        id a3)
{
  NSArray *v4; // x20
  void *v5; // x0
  void *v6; // x23
  __int64 v7; // x26
  const __CFString *v8; // x22
  const __CFString *v9; // x24
  const __CFString *v10; // x25
  void *v11; // x21
  void *v12; // x19
  void *v13; // x27
  void *v14; // x0
  void *v15; // x28
  bool v16; // zf
  void *v17; // x19
  const __CFString *v18; // x23
  const __CFString *v19; // x24
  __int64 v20; // x22
  const __CFString *v21; // x26
  NSArray *v22; // x25
  void *v23; // x20
  void *v24; // x0
  void (__fastcall **v25)(id, void *); // [xsp+0h] [xbp-140h]
  void *v26; // [xsp+10h] [xbp-130h]
  void *v27; // [xsp+18h] [xbp-128h]
  __int128 v28; // [xsp+20h] [xbp-120h] BYREF
  __int128 v29; // [xsp+30h] [xbp-110h]
  __int128 v30; // [xsp+40h] [xbp-100h]
  __int128 v31; // [xsp+50h] [xbp-F0h]
  _BYTE v32[128]; // [xsp+60h] [xbp-E0h] BYREF

  v25 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v26 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(-[LegacyAudioController matchingAccessoriesList](self->_controller, "matchingAccessoriesList"));
  v5 = -[NSArray countByEnumeratingWithState:objects:count:](
         v4,
         "countByEnumeratingWithState:objects:count:",
         &v28,
         v32,
         16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v29;
    v8 = CFSTR("MatchingType");
    v9 = CFSTR("MatchingDictionary");
    v10 = CFSTR("com.apple.ExternalAccessory.matching");
    do
    {
      v11 = 0LL;
      v27 = v6;
      do
      {
        if ( *(_QWORD *)v29 != v7 )
          objc_enumerationMutation(v4);
        v12 = *(void **)(*((_QWORD *)&v28 + 1) + 8LL * (_QWORD)v11);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", v8));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", v9));
        v15 = v14;
        if ( v13 )
          v16 = v14 == 0LL;
        else
          v16 = 1;
        if ( !v16 && (unsigned int)objc_msgSend(v13, "isEqualToString:", v10) )
        {
          v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", CFSTR("DeviceClass")));
          v18 = v9;
          v19 = v8;
          v20 = v7;
          v21 = v10;
          v22 = v4;
          v23 = objc_msgSend(
                  objc_alloc((Class)&OBJC_CLASS___UARPServiceUpdaterAccessoryMatchingRule),
                  "initWithIdentifier:xpcEventStream:matchingDictionary:",
                  v17,
                  v13,
                  v15);
          objc_msgSend(v26, "addObject:", v23);
          v24 = v23;
          v4 = v22;
          v10 = v21;
          v7 = v20;
          v8 = v19;
          v9 = v18;
          v6 = v27;
          objc_release(v24);
          objc_release(v17);
        }
        objc_release(v15);
        objc_release(v13);
        v11 = (char *)v11 + 1;
      }
      while ( v6 != v11 );
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             v4,
             "countByEnumeratingWithState:objects:count:",
             &v28,
             v32,
             16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  v25[2](v25, v26);
  objc_release(v26);
  objc_release(v25);
}