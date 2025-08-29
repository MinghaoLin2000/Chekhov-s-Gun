-[ExportSessionVideoTranscodingTask exportPresetName]
id __cdecl -[ExportSessionVideoTranscodingTask exportPresetName](ExportSessionVideoTranscodingTask *self, SEL a2)
{
  NSMutableDictionary *v2; // x20
  NSString *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKey:](
           v2,
           "objectForKey:",
           CFSTR("PAMediaConversionServiceOptionExportPresetNameKey")));
  objc_release(v2);
  if ( !v3 )
    v3 = objc_retain(AVAssetExportPresetAppleM4V720pHD);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}