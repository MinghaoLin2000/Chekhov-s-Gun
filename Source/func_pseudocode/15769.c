-[USBAudioAsset initWithUarpAsset:nextAsset:]
USBAudioAsset *__cdecl -[USBAudioAsset initWithUarpAsset:nextAsset:](
        USBAudioAsset *self,
        SEL a2,
        uarpPlatformAsset *a3,
        id a4)
{
  id v7; // x19
  USBAudioAsset *v8; // x20
  os_log_t v9; // x0
  OS_os_log *log; // x8
  os_log_s *v11; // x23
  NSMutableData *v12; // x0
  NSMutableData *payload; // x8
  objc_super v15; // [xsp+0h] [xbp-40h] BYREF

  v7 = objc_retain(a4);
  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___USBAudioAsset;
  v8 = -[USBAudioAsset init](&v15, "init");
  if ( v8 )
  {
    v9 = os_log_create("com.apple.accessoryupdater.uarp", "dfuUpdater");
    log = v8->_log;
    v8->_log = v9;
    objc_release(log);
    v11 = v8->_log;
    if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEBUG) )
      sub_100019468(v11);
    v8->_pAsset = a3;
    objc_storeStrong((id *)&v8->_next, a4);
    *(_OWORD *)&v8->_assetCallbacks.fAssetReady = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetGetBytesAtOffset = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetReleased = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetPreProcessingNotification = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetAllHeadersAndMetaDataComplete = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetOrphaned = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetProcessingNotification2 = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetSetBytesAtOffset2 = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetRescindedAck = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fPayloadData = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fPayloadDataComplete2 = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fPayloadReady = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fPayloadMetaDataComplete = 0u;
    *(_OWORD *)&v8->_assetCallbacks.fAssetMetaDataComplete = 0u;
    v8->_assetCallbacks.fAssetReady = sub_10000BC14;
    v8->_assetCallbacks.fAssetAllHeadersAndMetaDataComplete = sub_10000BCB0;
    v8->_assetCallbacks.fPayloadData = sub_10000C018;
    v8->_assetCallbacks.fPayloadDataComplete = sub_10000C0C8;
    v8->_callbacks = &v8->_assetCallbacks;
    v12 = (NSMutableData *)objc_alloc((Class)&OBJC_CLASS___NSMutableData);
    payload = v8->_payload;
    v8->_payload = v12;
    objc_release(payload);
  }
  objc_release(v7);
  return v8;
}