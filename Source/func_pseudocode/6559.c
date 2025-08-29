-[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformationLogString]
id __cdecl -[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformationLogString](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  NSDictionary *v2; // x0
  NSDictionary *v3; // x19
  id v4; // x20
  __int64 v5; // d0
  __int64 v6; // d8
  id v7; // x22
  __int64 v8; // d0
  __int64 v9; // d9
  id v10; // x23
  __int64 v11; // d0
  __int64 v12; // d10
  id v13; // x24
  __int64 v14; // d0
  __CFString *v15; // x21
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(
         -[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformation](
           self,
           "requestCompletionPerfCheckExtraInformation"));
  v3 = v2;
  if ( v2 )
  {
    v4 = objc_retainAutoreleasedReturnValue(
           -[NSDictionary objectForKeyedSubscript:](
             v2,
             "objectForKeyedSubscript:",
             CFSTR("processMemoryPeakKiloBytesInitial")));
    objc_msgSend(v4, "doubleValue");
    v6 = v5;
    v7 = objc_retainAutoreleasedReturnValue(
           -[NSDictionary objectForKeyedSubscript:](
             v3,
             "objectForKeyedSubscript:",
             CFSTR("processMemoryPeakKiloBytesAfterRequest")));
    objc_msgSend(v7, "doubleValue");
    v9 = v8;
    v10 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", CFSTR("cpuTimeMilliSeconds")));
    objc_msgSend(v10, "doubleValue");
    v12 = v11;
    v13 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v3, "objectForKeyedSubscript:", CFSTR("cpuMillionInstructions")));
    objc_msgSend(v13, "doubleValue");
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR(", dirty memory peak before/after request: %.0f/%.0f KB, CPU time %.0fms, instructions %.1fM"),
              v6,
              v9,
              v12,
              v14));
    objc_release(v13);
    objc_release(v10);
    objc_release(v7);
    objc_release(v4);
  }
  else
  {
    v15 = CFSTR(" (error getting perf check info)");
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}