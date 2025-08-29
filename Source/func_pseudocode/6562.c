-[MediaConversionRequestTracker markAsCompletedWithInitialRequestIdentifier:]
void __cdecl -[MediaConversionRequestTracker markAsCompletedWithInitialRequestIdentifier:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3)
{
  NSMutableArray *v5; // x19
  NSDictionary *v6; // x23
  void *v7; // x21
  NSNumber *v8; // x22
  NSString *v9; // x22
  unsigned __int8 v10; // w23
  NSDictionary *v11; // x22
  NSMutableArray *coreImageGraphDumpPaths; // x2
  const __CFString *v13; // x3
  void *v14; // x0
  NSError *v15; // x23
  NSAssertionHandler *v16; // x23
  NSAssertionHandler *v17; // x23
  NSAssertionHandler *v18; // x23
  NSAssertionHandler *v19; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = (NSMutableArray *)objc_retain(a3);
  -[MediaConversionRequestTracker didCompleteRequest](self, "didCompleteRequest");
  v6 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker outputInformation](self, "outputInformation"));
  v7 = -[NSDictionary mutableCopy](v6, "mutableCopy");
  objc_release(v6);
  if ( v7 )
  {
    if ( !self->_enqueueTime )
    {
      v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v17,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("MediaConversionDebugUtilities.m"),
        306LL,
        CFSTR("Unexpected missing enqueue time"));
      objc_release(v17);
    }
    if ( !self->_dequeueAndStartProcessingTime )
    {
      v18 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v18,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("MediaConversionDebugUtilities.m"),
        307LL,
        CFSTR("Unexpected missing dequeue time"));
      objc_release(v18);
    }
    if ( !self->_endTime )
    {
      v19 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v19,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("MediaConversionDebugUtilities.m"),
        308LL,
        CFSTR("Unexpected missing end time"));
      objc_release(v19);
    }
    objc_msgSend(
      v7,
      "setObject:forKeyedSubscript:",
      self->_enqueueTime,
      CFSTR("PAMediaConversionServiceConversionStartDateKey"));
    objc_msgSend(
      v7,
      "setObject:forKeyedSubscript:",
      self->_dequeueAndStartProcessingTime,
      CFSTR("PAMediaConversionServiceConversionDequeueAndStartProcessingDateKey"));
    objc_msgSend(
      v7,
      "setObject:forKeyedSubscript:",
      self->_endTime,
      CFSTR("PAMediaConversionServiceConversionEndDateKey"));
    -[NSDate timeIntervalSinceDate:](self->_endTime, "timeIntervalSinceDate:", self->_enqueueTime);
    v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:"));
    objc_msgSend(
      v7,
      "setObject:forKeyedSubscript:",
      v8,
      CFSTR("PAMediaConversionServiceConversionTotalDurationTimeIntervalServiceSideKey"));
    objc_release(v8);
    if ( v5
      && (v9 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestIdentifier](self, "requestIdentifier")),
          v10 = (unsigned __int8)-[NSMutableArray isEqualToString:](v5, "isEqualToString:", v9),
          objc_release(v9),
          (v10 & 1) == 0) )
    {
      v13 = CFSTR("PAMediaConversionServiceDeduplicatedAgainstOriginalRequestIdentifierKey");
      v14 = v7;
      coreImageGraphDumpPaths = v5;
    }
    else
    {
      v11 = objc_retainAutoreleasedReturnValue(
              -[MediaConversionRequestTracker requestCompletionPerfCheckExtraInformation](
                self,
                "requestCompletionPerfCheckExtraInformation"));
      objc_msgSend(v7, "setObject:forKeyedSubscript:", v11, CFSTR("PAMediaConversionServiceConversionPerfCheckDataKey"));
      objc_release(v11);
      coreImageGraphDumpPaths = self->_coreImageGraphDumpPaths;
      v13 = CFSTR("PAMediaConversionServiceUnitTestSupportCoreImageGraphDumpPathsKey");
      v14 = v7;
    }
    objc_msgSend(v14, "setObject:forKeyedSubscript:", coreImageGraphDumpPaths, v13);
    -[MediaConversionRequestTracker setOutputInformation:](self, "setOutputInformation:", v7);
  }
  else
  {
    v15 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker error](self, "error"));
    objc_release(v15);
    if ( !v15 )
    {
      v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v16,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("MediaConversionDebugUtilities.m"),
        303LL,
        CFSTR("Unexpected nil result information and error"));
      objc_release(v16);
    }
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}