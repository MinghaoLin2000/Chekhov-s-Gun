-[UARPDFUUpdater startUpdateForAccessory:assetID:]
void __cdecl -[UARPDFUUpdater startUpdateForAccessory:assetID:](UARPDFUUpdater *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x22
  OS_os_log *log; // x21
  void *v9; // x23
  void *v10; // x21
  void *v11; // x23
  void *v12; // x24
  id v13; // x22
  void *v14; // x23
  OS_os_log *v15; // x24
  UARPController *uarpController; // x20
  void *v17; // x24

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100018430(log);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "identifier"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[UARPSupportedAccessory findByAppleModelNumber:](
            &OBJC_CLASS___UARPSupportedAccessory,
            "findByAppleModelNumber:",
            v9));
  objc_release(v9);
  if ( (unsigned int)objc_msgSend(v10, "updateRequiresPowerAssertion") )
    objc_msgSend(v6, "setRequiresPowerAssertion:", 1LL);
  if ( self->_serviceInstance )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "uarpAccessory"));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "getID"));
    -[UARPDFUUpdater queryProperties:accessoryID:](self, "queryProperties:accessoryID:", &off_100024CB8, v12);
    objc_release(v12);
    objc_release(v11);
    objc_msgSend(v6, "waitForQueriesCompletion:", &off_100024CB8);
  }
  v13 = objc_retain(v7);
  v14 = v13;
  if ( !v13 )
    v14 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UARPAssetID), "initWithLocationType:remoteURL:", 3LL, 0LL);
  v15 = self->_log;
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEBUG) )
    sub_1000183A4(v14, v6, v15);
  uarpController = self->_uarpController;
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "uarpAccessory"));
  -[UARPController changeAssetLocation:assetID:](uarpController, "changeAssetLocation:assetID:", v17, v14);
  objc_release(v17);
  objc_release(v14);
  objc_release(v10);
  objc_release(v13);
  objc_release(v6);
}