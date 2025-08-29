-[UARPUSBDFUAccessory connectUarpController:options:]
unsigned int __cdecl -[UARPUSBDFUAccessory connectUarpController:options:](
        UARPUSBDFUAccessory *self,
        SEL a2,
        id a3,
        uarpPlatformOptionsObj *a4)
{
  id v6; // x19
  int v7; // w8
  __int128 v8; // q0
  OS_os_log *log; // x25
  unsigned int v10; // w0
  OS_os_log *v11; // x24
  unsigned int v12; // w22
  OS_os_log *v13; // x20
  int v15; // [xsp+0h] [xbp-60h] BYREF
  UARPUSBDFUAccessory *v16; // [xsp+4h] [xbp-5Ch]

  v6 = objc_retain(a3);
  v7 = *(_DWORD *)&a4->upgradeOnly;
  v8 = *(_OWORD *)&a4->responseTimeout;
  *(_OWORD *)&self->_options.maxTxPayloadLength = *(_OWORD *)&a4->maxTxPayloadLength;
  *(_OWORD *)&self->_options.responseTimeout = v8;
  *(_DWORD *)&self->_options.upgradeOnly = v7;
  *(_QWORD *)&self->_options.maxTxPayloadLength = 0x100000001000LL;
  self->_options.payloadWindowLength = 4096;
  *(_OWORD *)&self->_callbacks.fTxWatchdogSet = 0u;
  *(_OWORD *)&self->_callbacks.fActiveFirmwareVersion = 0u;
  *(_OWORD *)&self->_callbacks.fVendorSpecificCheckValidToSend = 0u;
  *(_OWORD *)&self->_callbacks.fVendorSpecificRecvMsg = 0u;
  *(_OWORD *)&self->_callbacks.fDownstreamRecvMessage = 0u;
  *(_OWORD *)&self->_callbacks.fDownstreamUnreachable = 0u;
  *(_OWORD *)&self->_callbacks.fDownstreamDiscovery = 0u;
  *(_OWORD *)&self->_callbacks.fLogDebug = 0u;
  *(_OWORD *)&self->_callbacks.fLogError = 0u;
  *(_OWORD *)&self->_callbacks.fHashLog = 0u;
  *(_OWORD *)&self->_callbacks.fHashUpdate = 0u;
  *(_OWORD *)&self->_callbacks.fHashInfo = 0u;
  *(_OWORD *)&self->_callbacks.fDecompressBuffer = 0u;
  *(_OWORD *)&self->_callbacks.fFriendlyName = 0u;
  *(_OWORD *)&self->_callbacks.fLayer2WatchdogCancel = 0u;
  *(_OWORD *)&self->_callbacks.fRescindAllAssetsAck = 0u;
  *(_OWORD *)&self->_callbacks.fAssetSolicitation = 0u;
  *(_OWORD *)&self->_callbacks.fStagedFirmwareVersionResponse = 0u;
  *(_OWORD *)&self->_callbacks.fLastErrorResponse = 0u;
  *(_OWORD *)&self->_callbacks.fHardwareVersionResponse = 0u;
  *(_OWORD *)&self->_callbacks.fActiveFirmwareVersionResponse = 0u;
  *(_OWORD *)&self->_callbacks.fModelNameResponse = 0u;
  *(_OWORD *)&self->_callbacks.fSerialNumberResponse = 0u;
  *(_OWORD *)&self->_callbacks.fApplyStagedAssetsResponse = 0u;
  *(_OWORD *)&self->_callbacks.fManufacturerNameResponse = 0u;
  *(_OWORD *)&self->_callbacks.fDataTransferResumeAck = 0u;
  *(_OWORD *)&self->_callbacks.fDynamicAssetOffered = 0u;
  *(_OWORD *)&self->_callbacks.fSendMessage = 0u;
  *(_OWORD *)&self->_callbacks.fDataTransferPauseAck = 0u;
  *(_OWORD *)&self->_callbacks.fRequestBuffer = 0u;
  *(_OWORD *)&self->_callbacks.fRequestTransmitMsgBuffer = 0u;
  self->_callbacks.fRequestBuffer = sub_10000A238;
  self->_callbacks.fReturnBuffer = sub_10000A274;
  self->_callbacks.fRequestTransmitMsgBuffer = sub_10000A27C;
  self->_callbacks.fReturnTransmitMsgBuffer = sub_10000A2E4;
  self->_callbacks.fSendMessage = sub_10000A2F4;
  self->_callbacks.fSuperBinaryOffered = sub_10000A3E4;
  self->_callbacks.fDynamicAssetOffered = sub_10000A61C;
  self->_callbacks.fApplyStagedAssets = sub_10000A6A4;
  self->_callbacks.fManufacturerName = sub_10000A760;
  self->_callbacks.fModelName = sub_10000A87C;
  self->_callbacks.fFriendlyName = sub_10000A87C;
  self->_callbacks.fSerialNumber = sub_10000A99C;
  self->_callbacks.fHardwareVersion = sub_10000AAB8;
  self->_callbacks.fActiveFirmwareVersion2 = sub_10000AB50;
  self->_callbacks.fStagedFirmwareVersion2 = sub_10000ABC0;
  self->_localEpApple.callbacks.fAppleModelNumber = sub_10000AC30;
  self->_localEpApple.callbacks.fHwFusingType = sub_10000AD4C;
  *(_WORD *)&self->_localEpApple.supportsPersonalization = 0;
  self->_localEP.fVendorSpecific = uarpPlatformEndpointCallbackAppleSpecific;
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    LOWORD(v15) = 0;
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, "Init Platform Endpoint", (uint8_t *)&v15, 2u);
  }
  v10 = uarpPlatformEndpointInit(&self->_localEP);
  v11 = self->_log;
  if ( v10 )
  {
    v12 = v10;
    if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_ERROR) )
      sub_100018F5C(v11);
  }
  else
  {
    if ( os_log_type_enabled(self->_log, OS_LOG_TYPE_INFO) )
    {
      v15 = 138412290;
      v16 = self;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v11,
        OS_LOG_TYPE_INFO,
        "Link Controller to Accessory %@",
        (uint8_t *)&v15,
        0xCu);
    }
    v12 = uarpPlatformRemoteEndpointAdd(&self->_localEP, &self->_remoteEP, &self->_options, v6);
    if ( v12 )
    {
      v13 = self->_log;
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
        sub_100018F5C(v13);
    }
  }
  objc_release(v6);
  return v12;
}