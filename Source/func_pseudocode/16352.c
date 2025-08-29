-[EAFirmwareUpdater supportedProtocolForAccessory:]
id __cdecl -[EAFirmwareUpdater supportedProtocolForAccessory:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  id result; // x0
  id v6; // x20
  id v7; // x21
  __int64 v8; // x23
  void *v9; // x25
  void *v10; // x22
  __int128 v11; // [xsp+0h] [xbp-110h] BYREF
  __int128 v12; // [xsp+10h] [xbp-100h]
  __int128 v13; // [xsp+20h] [xbp-F0h]
  __int128 v14; // [xsp+30h] [xbp-E0h]
  _BYTE v15[128]; // [xsp+48h] [xbp-C8h] BYREF

  if ( !a3 )
    return 0LL;
  result = -[EAFirmwareUpdater bootloaderProtocol](self, "bootloaderProtocol");
  if ( result )
  {
    result = -[EAFirmwareUpdater appProtocol](self, "appProtocol");
    if ( result )
    {
      result = objc_msgSend(a3, "protocolStrings");
      if ( result )
      {
        v6 = result;
        v13 = 0u;
        v14 = 0u;
        v11 = 0u;
        v12 = 0u;
        result = objc_msgSend(result, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
        if ( result )
        {
          v7 = result;
          v8 = *(_QWORD *)v12;
          while ( 2 )
          {
            v9 = 0LL;
            do
            {
              if ( *(_QWORD *)v12 != v8 )
                objc_enumerationMutation(v6);
              v10 = *(void **)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)v9);
              if ( -[EAFirmwareUpdater isMultiAssetSession](self, "isMultiAssetSession") )
              {
                if ( objc_msgSend(
                       v10,
                       "rangeOfString:options:",
                       -[EAFirmwareUpdater multiAssetAppProtocol](self, "multiAssetAppProtocol"),
                       1LL) != (void *)0x7FFFFFFFFFFFFFFFLL )
                  return -[EAFirmwareUpdater multiAssetAppProtocol](self, "multiAssetAppProtocol");
              }
              else
              {
                if ( objc_msgSend(
                       v10,
                       "rangeOfString:options:",
                       -[EAFirmwareUpdater bootloaderProtocol](self, "bootloaderProtocol"),
                       1LL) != (void *)0x7FFFFFFFFFFFFFFFLL )
                  return -[EAFirmwareUpdater bootloaderProtocol](self, "bootloaderProtocol");
                if ( objc_msgSend(
                       v10,
                       "rangeOfString:options:",
                       -[EAFirmwareUpdater appProtocol](self, "appProtocol"),
                       1LL) != (void *)0x7FFFFFFFFFFFFFFFLL )
                  return -[EAFirmwareUpdater appProtocol](self, "appProtocol");
              }
              v9 = (char *)v9 + 1;
            }
            while ( v7 != v9 );
            result = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
            v7 = result;
            if ( result )
              continue;
            break;
          }
        }
      }
    }
  }
  return result;
}