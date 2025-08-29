-[ExportSessionVideoTranscodingTask performPassthroughConversion]
void __cdecl -[ExportSessionVideoTranscodingTask performPassthroughConversion](
        ExportSessionVideoTranscodingTask *self,
        SEL a2)
{
  AVAsset *v3; // x21
  id v4; // x20
  id v5; // x21
  AVAsset *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[ExportSessionVideoTranscodingTask exportSessionForInputAsset:presetName:](
           self,
           "exportSessionForInputAsset:presetName:",
           v3,
           AVAssetExportPresetPassthrough));
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(
           -[ExportSessionVideoTranscodingTask outputFileTypeForExportSession:](
             self,
             "outputFileTypeForExportSession:",
             v4));
    if ( v5 )
    {
      v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
      -[ExportSessionVideoTranscodingTask addOutputMetadataFromOptionsAndInputAsset:toExportSession:](
        self,
        "addOutputMetadataFromOptionsAndInputAsset:toExportSession:",
        v6,
        v4);
      objc_release(v6);
      -[ExportSessionVideoTranscodingTask configureOutputForExportSession:outputFileType:](
        self,
        "configureOutputForExportSession:outputFileType:",
        v4,
        v5);
      -[ExportSessionVideoTranscodingTask startExportSession:](self, "startExportSession:", v4);
    }
    objc_release(v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}