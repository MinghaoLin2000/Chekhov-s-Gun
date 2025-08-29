-[UARPDFUUpdater accessoryTransferComplete:assetID:status:]
void __cdecl -[UARPDFUUpdater accessoryTransferComplete:assetID:status:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5)
{
  id v8; // x19
  id v9; // x20
  OS_os_log *log; // x23
  os_log_s *v11; // x23
  void *v12; // x24
  UARPController *uarpController; // x21
  void *v14; // x22
  NSArray *v15; // x23
  void *v16; // [xsp+8h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  const char *v18; // [xsp+14h] [xbp-6Ch]
  __int16 v19; // [xsp+1Ch] [xbp-64h]
  void *v20; // [xsp+1Eh] [xbp-62h]
  __int16 v21; // [xsp+26h] [xbp-5Ah]
  __int64 v22; // [xsp+28h] [xbp-58h]
  __int16 v23; // [xsp+30h] [xbp-50h]
  id v24; // [xsp+32h] [xbp-4Eh]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    v11 = objc_retain(log);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "tag"));
    *(_DWORD *)buf = 136315906;
    v18 = "-[UARPDFUUpdater accessoryTransferComplete:assetID:status:]";
    v19 = 2112;
    v20 = v12;
    v21 = 2080;
    v22 = UARPFirmwareStagingCompletionStatusToString(a5);
    v23 = 2112;
    v24 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v11,
      OS_LOG_TYPE_INFO,
      "%s: accessory asset transfer <tag=%@> complete with status <%s> %@",
      buf,
      0x2Au);
    objc_release(v12);
    objc_release(v11);
  }
  if ( a5 )
  {
    if ( -[UARPDFUUpdater removeAccessory:](self, "removeAccessory:", v8) )
      objc_msgSend(v8, "disableDisconnectCallback");
  }
  else
  {
    uarpController = self->_uarpController;
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
    v16 = v14;
    v15 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v16, 1LL));
    -[UARPController applyStagedFirmwareOnAccessoryList:withUserIntent:](
      uarpController,
      "applyStagedFirmwareOnAccessoryList:withUserIntent:",
      v15,
      0LL);
    objc_release(v15);
    objc_release(v14);
  }
  objc_release(v9);
  objc_release(v8);
}