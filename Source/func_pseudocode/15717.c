-[UARPDFUUpdater assetAvailablityUpdateForAccessoryID:assetID:]
void __cdecl -[UARPDFUUpdater assetAvailablityUpdateForAccessoryID:assetID:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  OS_os_log *log; // x22
  os_log_s *v9; // x22
  void *v10; // x23
  id v11; // x22
  OS_os_log *v12; // x21
  OS_os_log *v13; // x23
  const char *v14; // x3
  UARPController *uarpController; // x21
  void *v16; // x23
  _BYTE v17[24]; // [xsp+0h] [xbp-70h] BYREF
  void *v18; // [xsp+18h] [xbp-58h]
  __int16 v19; // [xsp+20h] [xbp-50h]
  id v20; // [xsp+22h] [xbp-4Eh]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    v9 = objc_retain(log);
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "availableFirmwareVersion"));
    *(_DWORD *)v17 = 136315906;
    *(_QWORD *)&v17[4] = "-[UARPDFUUpdater assetAvailablityUpdateForAccessoryID:assetID:]";
    *(_WORD *)&v17[12] = 2112;
    *(_QWORD *)&v17[14] = v6;
    *(_WORD *)&v17[22] = 2112;
    v18 = v10;
    v19 = 2112;
    v20 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_INFO,
      "%s: accessory = %@, available version = %@, assetID = %@",
      v17,
      0x2Au);
    objc_release(v10);
    objc_release(v9);
  }
  v11 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessory:](self, "getDfuAccessoryForUarpAccessory:", v6));
  if ( v11 )
  {
    if ( objc_msgSend(v7, "downloadStatus") == (void *)2 )
    {
      -[UARPDFUUpdater assetDownloadFailed:assetID:](self, "assetDownloadFailed:assetID:", v11, v7);
      goto LABEL_18;
    }
    if ( objc_msgSend(v7, "updateAvailabilityStatus") == (void *)6 )
    {
      -[UARPDFUUpdater assetNotFound:assetID:](self, "assetNotFound:assetID:", v11, v7);
      goto LABEL_18;
    }
    if ( objc_msgSend(v7, "updateAvailabilityStatus") == (void *)1 )
    {
      v13 = self->_log;
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)v17 = 136315394;
        *(_QWORD *)&v17[4] = "-[UARPDFUUpdater assetAvailablityUpdateForAccessoryID:assetID:]";
        *(_WORD *)&v17[12] = 2112;
        *(_QWORD *)&v17[14] = v7;
        v14 = "%s: Asset found On Asset Server assetID = %@";
LABEL_16:
        _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_INFO, v14, v17, 0x16u);
        goto LABEL_17;
      }
      goto LABEL_17;
    }
    if ( objc_msgSend(v7, "updateAvailabilityStatus") == (void *)4 )
    {
      v13 = self->_log;
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_INFO) )
      {
        *(_DWORD *)v17 = 136315394;
        *(_QWORD *)&v17[4] = "-[UARPDFUUpdater assetAvailablityUpdateForAccessoryID:assetID:]";
        *(_WORD *)&v17[12] = 2112;
        *(_QWORD *)&v17[14] = v7;
        v14 = "%s: Asset found On Dropbox assetID = %@";
        goto LABEL_16;
      }
LABEL_17:
      uarpController = self->_uarpController;
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "uarpAccessory", *(_OWORD *)v17, *(_QWORD *)&v17[16]));
      -[UARPController downloadAvailableFirmwareUpdate:assetID:withUserIntent:](
        uarpController,
        "downloadAvailableFirmwareUpdate:assetID:withUserIntent:",
        v16,
        v7,
        1LL);
      objc_release(v16);
      goto LABEL_18;
    }
    if ( objc_msgSend(v7, "updateAvailabilityStatus") == (void *)3 )
      -[UARPDFUUpdater assetOnLocalStorage:assetID:](self, "assetOnLocalStorage:assetID:", v11, v7);
  }
  else
  {
    v12 = self->_log;
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
      sub_10001877C(v6, v12);
  }
LABEL_18:
  objc_release(v11);
  objc_release(v7);
  objc_release(v6);
}