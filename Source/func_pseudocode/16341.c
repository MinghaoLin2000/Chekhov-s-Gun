-[EAFirmwareUpdater dealloc]
void __cdecl -[EAFirmwareUpdater dealloc](EAFirmwareUpdater *self, SEL a2)
{
  NSString *appProtocol; // x0
  NSString *bootloaderProtocol; // x0
  NSString *multiAssetAppProtocol; // x0
  NSString *protocolString; // x0
  iAUPServer *iAUPServer; // x0
  NSDictionary *manifestIDs; // x0
  NSArray *manifestList; // x0
  NSArray *buildIdentities; // x0
  NSString *serialNumber; // x0
  objc_super v12; // [xsp+10h] [xbp-20h] BYREF

  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater dealloc]",
    objc_autorelease(
      objc_msgSend(
        objc_alloc((Class)&OBJC_CLASS___NSString),
        "initWithFormat:",
        CFSTR("%s: EAFirmwareUpdater dealloc\n"),
        "-[EAFirmwareUpdater dealloc]")));
  -[EAFirmwareUpdater stopReconnectTimer](self, "stopReconnectTimer");
  appProtocol = self->_appProtocol;
  if ( appProtocol )
    objc_release(appProtocol);
  bootloaderProtocol = self->_bootloaderProtocol;
  if ( bootloaderProtocol )
    objc_release(bootloaderProtocol);
  multiAssetAppProtocol = self->_multiAssetAppProtocol;
  if ( multiAssetAppProtocol )
    objc_release(multiAssetAppProtocol);
  protocolString = self->_protocolString;
  if ( protocolString )
    objc_release(protocolString);
  iAUPServer = self->_iAUPServer;
  if ( iAUPServer )
    objc_release(iAUPServer);
  manifestIDs = self->_manifestIDs;
  if ( manifestIDs )
    objc_release(manifestIDs);
  manifestList = self->_manifestList;
  if ( manifestList )
    objc_release(manifestList);
  buildIdentities = self->_buildIdentities;
  if ( buildIdentities )
    objc_release(buildIdentities);
  serialNumber = self->_serialNumber;
  if ( serialNumber )
    objc_release(serialNumber);
  objc_release(self->_name);
  objc_release(self->_modelNumber);
  pthread_mutex_destroy(&self->_flushOutputLock);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___EAFirmwareUpdater;
  -[EAFirmwareUpdater dealloc](&v12, "dealloc");
}