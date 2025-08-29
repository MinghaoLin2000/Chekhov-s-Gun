-[UARPUSBDFUAccessory initWithIdentifier:serialNumber:fwVersion:]
UARPUSBDFUAccessory *__cdecl -[UARPUSBDFUAccessory initWithIdentifier:serialNumber:fwVersion:](
        UARPUSBDFUAccessory *self,
        SEL a2,
        id a3,
        id a4,
        UARPVersion *a5)
{
  id v8; // x19
  id v9; // x20
  UARPUSBDFUAccessory *v10; // x21
  os_log_t v11; // x0
  OS_os_log *log; // x8
  os_log_s *v13; // x22
  UARPUSBDFUAccessory *v14; // x22
  NSString *v15; // x0
  NSString *identifier; // x8
  NSString *v17; // x0
  NSString *modelName; // x8
  NSString *v19; // x0
  NSString *modelNumber; // x8
  NSString *v21; // x0
  NSString *vendorName; // x8
  USBAudioAsset *pRxSuperBinaries; // x0
  void *v24; // x23
  USBDFUUpdater *v25; // x0
  USBDFUUpdater *usbDfuAccessory; // x8
  UARPAccessory *v27; // x0
  UARPAccessory *uarpAccessory; // x8
  dispatch_queue_t v29; // x0
  OS_dispatch_queue *notificationQueue; // x8
  NSCondition *v31; // x0
  NSCondition *queriesCompleteLock; // x8
  NSMutableSet *v33; // x0
  NSMutableSet *pendingProperties; // x8
  __int64 v36; // [xsp+0h] [xbp-70h] BYREF
  __int64 v37; // [xsp+8h] [xbp-68h] BYREF
  objc_super v38; // [xsp+10h] [xbp-60h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v38.receiver = self;
  v38.super_class = (Class)&OBJC_CLASS___UARPUSBDFUAccessory;
  v10 = -[UARPUSBDFUAccessory init](&v38, "init");
  if ( !v10 )
  {
LABEL_11:
    v14 = objc_retain(v10);
    goto LABEL_12;
  }
  v11 = os_log_create("com.apple.accessoryupdater.uarp", "dfuUpdater");
  log = v10->_log;
  v10->_log = v11;
  objc_release(log);
  v13 = v10->_log;
  if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEBUG) )
    sub_100018ED8(v13);
  v14 = objc_retainAutoreleasedReturnValue(
          +[UARPSupportedAccessory findByAppleModelNumber:](
            &OBJC_CLASS___UARPSupportedAccessory,
            "findByAppleModelNumber:",
            v8));
  if ( v14 )
  {
    v10->_activeFW = *a5;
    v15 = (NSString *)objc_msgSend(v8, "copy");
    identifier = v10->_identifier;
    v10->_identifier = v15;
    objc_release(identifier);
    v17 = objc_retainAutoreleasedReturnValue(-[UARPUSBDFUAccessory modelName](v14, "modelName"));
    modelName = v10->_modelName;
    v10->_modelName = v17;
    objc_release(modelName);
    v19 = objc_retainAutoreleasedReturnValue(-[UARPUSBDFUAccessory appleModelNumber](v14, "appleModelNumber"));
    modelNumber = v10->_modelNumber;
    v10->_modelNumber = v19;
    objc_release(modelNumber);
    v21 = objc_retainAutoreleasedReturnValue(-[UARPUSBDFUAccessory vendorName](v14, "vendorName"));
    vendorName = v10->_vendorName;
    v10->_vendorName = v21;
    objc_release(vendorName);
    pRxSuperBinaries = v10->_pRxSuperBinaries;
    v10->_pRxSuperBinaries = 0LL;
    objc_release(pRxSuperBinaries);
    v24 = objc_retainAutoreleasedReturnValue(-[UARPUSBDFUAccessory hardwareID](v14, "hardwareID"));
    v25 = -[USBDFUUpdater initWithVendorID:productID:serialNumber:dfuModeActive:simulator:](
            objc_alloc(&OBJC_CLASS___USBDFUUpdater),
            "initWithVendorID:productID:serialNumber:dfuModeActive:simulator:",
            objc_msgSend(v24, "vendorID"),
            objc_msgSend(v24, "productID"),
            v9,
            -[UARPUSBDFUAccessory dfuMode](v14, "dfuMode"),
            -[UARPUSBDFUAccessory isSimulator](v14, "isSimulator"));
    usbDfuAccessory = v10->_usbDfuAccessory;
    v10->_usbDfuAccessory = v25;
    objc_release(usbDfuAccessory);
    if ( (unsigned int)-[UARPUSBDFUAccessory isSimulator](v14, "isSimulator")
      && (unsigned int)-[UARPUSBDFUAccessory dfuMode](v14, "dfuMode") )
    {
      v36 = 0LL;
      v37 = 0LL;
      -[USBDFUUpdater openDfuDevice](v10->_usbDfuAccessory, "openDfuDevice");
      if ( !-[USBDFUUpdater dfuGetVersionCmdMajor:minor:release:build:](
              v10->_usbDfuAccessory,
              "dfuGetVersionCmdMajor:minor:release:build:",
              (char *)&v37 + 4,
              &v37,
              (char *)&v36 + 4,
              &v36) )
      {
        v10->_stagedFW.major = HIDWORD(v37);
        v10->_stagedFW.minor = v37;
        v10->_stagedFW.release = HIDWORD(v36);
        v10->_stagedFW.build = v36;
      }
      -[USBDFUUpdater closeDfuDevice](v10->_usbDfuAccessory, "closeDfuDevice");
    }
    v27 = (UARPAccessory *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___UARPAccessory), "initWithModelNumber:", v8);
    uarpAccessory = v10->_uarpAccessory;
    v10->_uarpAccessory = v27;
    objc_release(uarpAccessory);
    -[UARPAccessory setCapability:](
      v10->_uarpAccessory,
      "setCapability:",
      -[UARPUSBDFUAccessory capabilities](v14, "capabilities"));
    -[UARPAccessory setSerialNumber:](v10->_uarpAccessory, "setSerialNumber:", v9);
    v10->_requiresPowerAssertion = (unsigned __int8)-[UARPUSBDFUAccessory updateRequiresPowerAssertion](
                                                      v14,
                                                      "updateRequiresPowerAssertion");
    v29 = dispatch_queue_create("com.apple.accessoryupdater.uarpdfuotp.notification.queue", 0LL);
    notificationQueue = v10->_notificationQueue;
    v10->_notificationQueue = (OS_dispatch_queue *)v29;
    objc_release(notificationQueue);
    v10->_mNotificationPort = IONotificationPortCreate(kIOMainPortDefault);
    v31 = (NSCondition *)objc_alloc_init((Class)&OBJC_CLASS___NSCondition);
    queriesCompleteLock = v10->_queriesCompleteLock;
    v10->_queriesCompleteLock = v31;
    objc_release(queriesCompleteLock);
    -[NSCondition setName:](v10->_queriesCompleteLock, "setName:", CFSTR("queriesComplete"));
    v33 = (NSMutableSet *)objc_alloc_init((Class)&OBJC_CLASS___NSMutableSet);
    pendingProperties = v10->_pendingProperties;
    v10->_pendingProperties = v33;
    objc_release(pendingProperties);
    objc_release(v24);
    objc_release(v14);
    goto LABEL_11;
  }
LABEL_12:
  objc_release(v9);
  objc_release(v8);
  objc_release(v10);
  return v14;
}