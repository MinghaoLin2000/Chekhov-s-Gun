-[UARPUpdaterDisplayControllerDelegate consentRequested]
bool __cdecl -[UARPUpdaterDisplayControllerDelegate consentRequested](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2)
{
  id v3; // x19
  id v4; // x0
  id v5; // x20
  void *v6; // x21
  __int64 v7; // x24
  void *i; // x25
  void *v9; // x22
  unsigned __int8 v10; // w23
  __int128 v12; // [xsp+0h] [xbp-110h] BYREF
  __int128 v13; // [xsp+10h] [xbp-100h]
  __int128 v14; // [xsp+20h] [xbp-F0h]
  __int128 v15; // [xsp+30h] [xbp-E0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-C8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(
         -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
           self,
           "localizedStringForKey:",
           CFSTR("Apple Studio Display")));
  v4 = objc_retainAutoreleasedReturnValue(
         -[SUOSUExternalUpdateProvider availableUpdatesFromDaemon](
           self->_updateController,
           "availableUpdatesFromDaemon"));
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v5 = objc_retain(v4);
  v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)v13;
    while ( 2 )
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v13 != v7 )
          objc_enumerationMutation(v5);
        v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i), "productKey", (_QWORD)v12));
        v10 = (unsigned __int8)objc_msgSend(v9, "containsString:", v3);
        objc_release(v9);
        if ( (v10 & 1) != 0 )
        {
          LOBYTE(v6) = 1;
          goto LABEL_11;
        }
      }
      v6 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v12, v16, 16LL);
      if ( v6 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v5);
  objc_release(v5);
  objc_release(v3);
  return (char)v6;
}