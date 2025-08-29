-[UARPDFUUpdater connectUARPForUARPAccessory:]
bool __cdecl -[UARPDFUUpdater connectUARPForUARPAccessory:](UARPDFUUpdater *self, SEL a2, id a3)
{
  id v4; // x19
  UARPController *uarpController; // x21
  void *v6; // x22
  UARPController *v7; // x21
  void *v8; // x22
  bool v9; // w20
  OS_os_log *log; // x20
  OS_os_log *v11; // x20
  _OWORD v13[2]; // [xsp+0h] [xbp-50h] BYREF
  int v14; // [xsp+20h] [xbp-30h]

  v4 = objc_retain(a3);
  v14 = 0;
  memset(v13, 0, sizeof(v13));
  objc_msgSend(v4, "connectUarpController:options:", self, v13);
  uarpController = self->_uarpController;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "uarpAccessory"));
  LOBYTE(uarpController) = (unsigned __int8)-[UARPController addAccessory:assetID:](
                                              uarpController,
                                              "addAccessory:assetID:",
                                              v6,
                                              0LL);
  objc_release(v6);
  if ( ((unsigned __int8)uarpController & 1) == 0 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100018708(v4, log);
    goto LABEL_8;
  }
  v7 = self->_uarpController;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "uarpAccessory"));
  LOBYTE(v7) = (unsigned __int8)-[UARPController accessoryReachable:](v7, "accessoryReachable:", v8);
  objc_release(v8);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    v11 = self->_log;
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_ERROR) )
      sub_100018694(v4, v11);
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  v9 = 1;
LABEL_9:
  objc_release(v4);
  return v9;
}