-[VideoConversionTask isMetadataTrackExtractionConversion]
bool __cdecl -[VideoConversionTask isMetadataTrackExtractionConversion](VideoConversionTask *self, SEL a2)
{
  NSMutableDictionary *v2; // x19
  void *v3; // x20
  unsigned __int8 v4; // w21

  v2 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           v2,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionIsVideoMetadataTrackExtractionKey")));
  v4 = (unsigned __int8)objc_msgSend(v3, "boolValue");
  objc_release(v3);
  objc_release(v2);
  return v4;
}