-[EAFirmwareUpdater applyFirmware:progress:update:personalization:]
id __cdecl -[EAFirmwareUpdater applyFirmware:progress:update:personalization:](
        EAFirmwareUpdater *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  void *v11; // x0
  bool v12; // zf
  iAUPServer *iAUPServer; // x0
  iAUPServer *v14; // x0
  FirmwareBundle *v15; // x0
  FirmwareBundle *v16; // x20
  id v17; // x21
  const char *v18; // x26
  const char *v19; // x27
  void *v20; // x22
  const char *v21; // x28
  const char *v22; // x24
  OS_dispatch_queue *v23; // x0
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  void *v25; // x20
  const __CFString *v27; // x2
  __int64 v28; // x1
  _QWORD block[5]; // [xsp+40h] [xbp-90h] BYREF
  const __CFString *v30; // [xsp+68h] [xbp-68h] BYREF
  const __CFString *v31; // [xsp+70h] [xbp-60h] BYREF

  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s"),
    "-[EAFirmwareUpdater applyFirmware:progress:update:personalization:]");
  self->_applyCompletion = _Block_copy(a3);
  self->_progressHandler = _Block_copy(a4);
  self->_updateHandler = _Block_copy(a5);
  v11 = _Block_copy(a6);
  self->_personalizationRequestHandler = v11;
  if ( !self->_applyCompletion
    || !self->_progressHandler
    || (self->_updateHandler ? (v12 = v11 == 0LL) : (v12 = 1), v12) )
  {
    -[EAFirmwareUpdater log:format:](
      self,
      "log:format:",
      5LL,
      CFSTR("%s %@"),
      "-[EAFirmwareUpdater applyFirmware:progress:update:personalization:]",
      objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:", CFSTR("Invalid handlers passed"))));
    return 0LL;
  }
  iAUPServer = self->_iAUPServer;
  if ( !iAUPServer )
  {
    v14 = -[iAUPServer initInstanceWithByteEscape:](
            objc_alloc(&OBJC_CLASS___iAUPServer),
            "initInstanceWithByteEscape:",
            self->_byteEscape);
    self->_iAUPServer = v14;
    if ( !v14 )
    {
      v27 = CFSTR("Can't create iAUPServer");
      v28 = 17LL;
      goto LABEL_36;
    }
    -[iAUPServer setDelegate:](v14, "setDelegate:", self);
    iAUPServer = self->_iAUPServer;
  }
  -[iAUPServer setAckAppReentry:](iAUPServer, "setAckAppReentry:", self->_closeEASession);
  if ( -[EAFirmwareUpdater isMultiAssetSession](self, "isMultiAssetSession")
    || -[iAUPServer firmwareBundle](self->_iAUPServer, "firmwareBundle") )
  {
    goto LABEL_26;
  }
  if ( !-[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL") )
  {
    v27 = CFSTR("No firmware bundle URL");
LABEL_35:
    v28 = 6LL;
    goto LABEL_36;
  }
  v15 = -[FirmwareBundle initWithBundlePath:](
          objc_alloc(&OBJC_CLASS___FirmwareBundle),
          "initWithBundlePath:",
          -[NSURL path](-[EAFirmwareUpdater firmwareBundleURL](self, "firmwareBundleURL"), "path"));
  if ( !v15 )
  {
    v27 = CFSTR("Unable to allocated FirmwareBundle object");
    goto LABEL_35;
  }
  v16 = v15;
  v17 = objc_alloc((Class)&OBJC_CLASS___NSString);
  v18 = "nil";
  if ( -[FirmwareBundle firmwareImage](v16, "firmwareImage") )
    v19 = "valid";
  else
    v19 = "nil";
  v20 = (void *)-[FirmwareBundle firmwareImageSize](v16, "firmwareImageSize");
  if ( -[FirmwareBundle hash](v16, "hash") )
    v21 = "valid";
  else
    v21 = "nil";
  if ( -[FirmwareBundle signature](v16, "signature") )
    v22 = "valid";
  else
    v22 = "nil";
  if ( -[FirmwareBundle certificate](v16, "certificate") )
    v18 = "valid";
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater applyFirmware:progress:update:personalization:]",
    objc_autorelease(
      objc_msgSend(
        v17,
        "initWithFormat:",
        CFSTR("FirmwareBundle created [image=%s imageSize=%d hash=%s signature=%s cert=%s productID=%d baseAddress=%d]\n"),
        v19,
        v20,
        v21,
        v22,
        v18,
        -[FirmwareBundle productIDCode](v16, "productIDCode"),
        -[FirmwareBundle firmwareImageBaseAddress](v16, "firmwareImageBaseAddress"))));
  -[iAUPServer setFirmwareBundle:](self->_iAUPServer, "setFirmwareBundle:", v16);
  objc_release(v16);
LABEL_26:
  -[NSNotificationCenter addObserver:selector:name:object:](
    +[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"),
    "addObserver:selector:name:object:",
    self,
    "_accessoryDidConnect:",
    EAAccessoryDidConnectNotification,
    0LL);
  -[NSNotificationCenter addObserver:selector:name:object:](
    +[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"),
    "addObserver:selector:name:object:",
    self,
    "_accessoryDidDisconnect:",
    EAAccessoryDidDisconnectNotification,
    0LL);
  v23 = (OS_dispatch_queue *)dispatch_queue_create("com.apple.MobileAccessoryUpdater.EAFirmwareUpdater", 0LL);
  self->_eaNotificationDispatchQueue = v23;
  if ( v23 )
  {
    -[iAUPServer setDispatchQ:](self->_iAUPServer, "setDispatchQ:", v23);
    eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10000B7D8;
    block[3] = &unk_1000315C0;
    block[4] = self;
    dispatch_async(eaNotificationDispatchQueue, block);
    return 0LL;
  }
  v27 = CFSTR("Unable to allocate dispatch queue for EA notifications");
  v28 = 19LL;
LABEL_36:
  v25 = (void *)sub_100009A6C(0LL, v28, v27);
  if ( v25 )
  {
    v30 = CFSTR("Event");
    v31 = CFSTR("com.apple.fud.updateFailed");
    -[EAFirmwareUpdater updateComplete:error:](
      self,
      "updateComplete:error:",
      +[NSDictionary dictionaryWithObjects:forKeys:count:](
        &OBJC_CLASS___NSDictionary,
        "dictionaryWithObjects:forKeys:count:",
        &v31,
        &v30,
        1LL),
      v25);
  }
  return v25;
}