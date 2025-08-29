-[ExportSessionVideoTranscodingTask addOutputMetadataFromOptionsAndInputAsset:toExportSession:]
void __cdecl -[ExportSessionVideoTranscodingTask addOutputMetadataFromOptionsAndInputAsset:toExportSession:](
        ExportSessionVideoTranscodingTask *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  NSMutableDictionary *v8; // x20
  void *v9; // x21
  unsigned __int8 v10; // w22
  AVMetadataItemFilter *v11; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(
         -[ExportSessionVideoTranscodingTask metadataItemsFromOptionsAndInputAsset:](
           self,
           "metadataItemsFromOptionsAndInputAsset:",
           a3));
  objc_msgSend(v6, "setMetadata:", v7);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           v8,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionAVMetadataIncludeLocationKey")));
  v10 = (unsigned __int8)objc_msgSend(v9, "boolValue");
  objc_release(v9);
  objc_release(v8);
  if ( (v10 & 1) == 0 )
  {
    v11 = objc_retainAutoreleasedReturnValue(
            +[AVMetadataItemFilter metadataItemFilterForSharing](
              &OBJC_CLASS___AVMetadataItemFilter,
              "metadataItemFilterForSharing"));
    objc_msgSend(v6, "setMetadataItemFilter:", v11);
    objc_release(v11);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}