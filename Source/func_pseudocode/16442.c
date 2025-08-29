-[UARPUpdaterServiceLegacyAudio bsdNotificationReceived:]
void __cdecl -[UARPUpdaterServiceLegacyAudio bsdNotificationReceived:](
        UARPUpdaterServiceLegacyAudio *self,
        SEL a2,
        id a3)
{
  void *v4; // x0
  __int128 v5; // q0
  void *v6; // x22
  __int64 v7; // x21
  void *i; // x25
  void *v9; // x20
  void *v10; // x28
  void *v11; // x0
  void *v12; // x27
  bool v13; // zf
  void *v14; // x19
  unsigned int v15; // w26
  LegacyAudioAccessory *v16; // x19
  void *v17; // x20
  NSArray *v18; // x26
  __int128 v19; // [xsp+0h] [xbp-190h]
  UARPUpdaterServiceLegacyAudio *v20; // [xsp+28h] [xbp-168h]
  id v21; // [xsp+38h] [xbp-158h]
  NSArray *obj; // [xsp+48h] [xbp-148h]
  __int128 v23; // [xsp+50h] [xbp-140h] BYREF
  __int128 v24; // [xsp+60h] [xbp-130h]
  __int128 v25; // [xsp+70h] [xbp-120h]
  __int128 v26; // [xsp+80h] [xbp-110h]
  uint8_t buf[4]; // [xsp+90h] [xbp-100h] BYREF
  LegacyAudioAccessory *v28; // [xsp+94h] [xbp-FCh]
  __int16 v29; // [xsp+9Ch] [xbp-F4h]
  NSArray *v30; // [xsp+9Eh] [xbp-F2h]
  _BYTE v31[128]; // [xsp+B0h] [xbp-E0h] BYREF

  v21 = objc_retain(a3);
  v23 = 0u;
  v24 = 0u;
  v25 = 0u;
  v26 = 0u;
  v20 = self;
  obj = objc_retainAutoreleasedReturnValue(-[LegacyAudioController matchingAccessoriesList](self->_controller, "matchingAccessoriesList"));
  v4 = -[NSArray countByEnumeratingWithState:objects:count:](
         obj,
         "countByEnumeratingWithState:objects:count:",
         &v23,
         v31,
         16LL);
  if ( v4 )
  {
    v6 = v4;
    v7 = *(_QWORD *)v24;
    *(_QWORD *)&v5 = 138412546LL;
    v19 = v5;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v24 != v7 )
          objc_enumerationMutation(obj);
        v9 = *(void **)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("MatchingType"), v19));
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("MatchingDictionary")));
        v12 = v11;
        if ( v10 )
          v13 = v11 == 0LL;
        else
          v13 = 1;
        if ( !v13 )
        {
          if ( (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("com.apple.notifyd.matching")) )
          {
            v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", CFSTR("Notification")));
            v15 = (unsigned int)objc_msgSend(v14, "isEqualToString:", v21);
            objc_release(v14);
            if ( v15 )
            {
              v16 = -[LegacyAudioAccessory initWithDelegate:](
                      objc_alloc(&OBJC_CLASS___LegacyAudioAccessory),
                      "initWithDelegate:",
                      v20);
              -[LegacyAudioController addActiveAccessory:](v20->_controller, "addActiveAccessory:", v16);
              if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
              {
                v18 = objc_retainAutoreleasedReturnValue(-[LegacyAudioController activeAccessories](v20->_controller, "activeAccessories"));
                *(_DWORD *)buf = v19;
                v28 = v16;
                v29 = 2112;
                v30 = v18;
                _os_log_debug_impl(
                  (void *)&_mh_execute_header,
                  (os_log_t)&_os_log_default,
                  OS_LOG_TYPE_DEBUG,
                  "Added accessory %@, active accessories %@",
                  buf,
                  0x16u);
                objc_release(v18);
              }
              v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("DeviceClass")));
              -[LegacyAudioAccessory handleConnect:options:](
                v16,
                "handleConnect:options:",
                v17,
                &__NSDictionary0__struct);
              objc_release(v17);
              objc_release(v16);
            }
          }
        }
        objc_release(v12);
        objc_release(v10);
      }
      v6 = -[NSArray countByEnumeratingWithState:objects:count:](
             obj,
             "countByEnumeratingWithState:objects:count:",
             &v23,
             v31,
             16LL);
    }
    while ( v6 );
  }
  objc_release(obj);
  objc_release(v21);
}