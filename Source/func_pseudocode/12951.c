-[TSUBufferedReadChannel _resetStreamReadChannelIfNeededForOffset:length:]
void __cdecl -[TSUBufferedReadChannel _resetStreamReadChannelIfNeededForOffset:length:](
        TSUBufferedReadChannel *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4)
{
  signed __int64 v5; // x21
  signed __int64 streamOutputOffset; // x8
  unsigned __int64 streamOutputOutstandingLength; // x9
  unsigned __int64 v9; // x8
  NSUInteger v11; // x0
  NSUInteger v12; // x23
  void *v13; // x0
  void *v14; // x25
  signed __int64 v15; // x24
  char *v16; // x26
  void *v17; // x22
  void *v18; // x20
  void *v19; // x27
  char *v20; // x0
  unsigned int v21; // w26
  os_log_s *v22; // x28
  NSString *v23; // x28
  NSString *v24; // x21
  void *v25; // x21
  void *v26; // x0
  OS_dispatch_data *currentStreamOutputData; // x0
  id streamReadChannelSourceHandler; // x0
  __int64 (__fastcall **streamReadChannelBlock)(id, TSUBufferedReadChannelHelper *, void *); // x20
  TSUBufferedReadChannelHelper *v30; // x21
  TSUStreamReadChannel *v31; // x0
  TSUStreamReadChannel *streamReadChannel; // x8
  TSUStreamReadChannel *v33; // x0
  unsigned __int64 v34; // [xsp+28h] [xbp-1A8h]
  signed __int64 v35; // [xsp+30h] [xbp-1A0h]
  NSArray *obj; // [xsp+38h] [xbp-198h]
  __int64 v37; // [xsp+40h] [xbp-190h]
  _QWORD v38[5]; // [xsp+48h] [xbp-188h] BYREF
  __int128 v39; // [xsp+70h] [xbp-160h] BYREF
  __int128 v40; // [xsp+80h] [xbp-150h]
  __int128 v41; // [xsp+90h] [xbp-140h]
  __int128 v42; // [xsp+A0h] [xbp-130h]
  uint8_t buf[4]; // [xsp+B0h] [xbp-120h] BYREF
  unsigned int v44; // [xsp+B4h] [xbp-11Ch]
  __int16 v45; // [xsp+B8h] [xbp-118h]
  const char *v46; // [xsp+BAh] [xbp-116h]
  __int16 v47; // [xsp+C2h] [xbp-10Eh]
  const char *v48; // [xsp+C4h] [xbp-10Ch]
  __int16 v49; // [xsp+CCh] [xbp-104h]
  int v50; // [xsp+CEh] [xbp-102h]
  __int16 v51; // [xsp+D2h] [xbp-FEh]
  const char *v52; // [xsp+D4h] [xbp-FCh]
  _BYTE v53[128]; // [xsp+E8h] [xbp-E8h] BYREF

  v5 = a3;
  streamOutputOffset = self->_streamOutputOffset;
  if ( streamOutputOffset <= a3 )
  {
    streamOutputOutstandingLength = self->_streamOutputOutstandingLength;
    v9 = streamOutputOutstandingLength + streamOutputOffset;
    if ( streamOutputOutstandingLength == -1LL || v9 > a3 )
      return;
  }
  -[TSUBufferedReadChannel _closeStreamReadChannel](self, "_closeStreamReadChannel");
  *(_OWORD *)&self->_sourceOffset = xmmword_10018EEA0;
  *(_OWORD *)&self->_streamOutputOffset = xmmword_10018EEA0;
  self->_streamOutputLength = 0LL;
  v11 = -[NSArray count](self->_blockInfos, "count");
  if ( !v11 )
  {
    v17 = 0LL;
    goto LABEL_33;
  }
  v12 = v11;
  v41 = 0u;
  v42 = 0u;
  v39 = 0u;
  v40 = 0u;
  obj = objc_retain(self->_blockInfos);
  v13 = -[NSArray countByEnumeratingWithState:objects:count:](
          obj,
          "countByEnumeratingWithState:objects:count:",
          &v39,
          v53,
          16LL);
  if ( !v13 )
  {
    v17 = 0LL;
    goto LABEL_32;
  }
  v14 = v13;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v37 = *(_QWORD *)v40;
  v34 = a4;
  v35 = v5;
  do
  {
    v18 = 0LL;
    do
    {
      if ( *(_QWORD *)v40 != v37 )
        objc_enumerationMutation(obj);
      v19 = *(void **)(*((_QWORD *)&v39 + 1) + 8LL * (_QWORD)v18);
      v15 += (signed __int64)objc_msgSend(v19, "decodedLength");
      if ( v16 )
      {
        objc_msgSend(v17, "addObject:", v19);
        self->_sourceLength += (unsigned __int64)objc_msgSend(v19, "encodedLength");
        v16 = &v16[(_QWORD)objc_msgSend(v19, "decodedLength")];
        v20 = (char *)objc_msgSend(v19, "decodedLength") + self->_streamOutputOutstandingLength;
      }
      else
      {
        if ( v15 <= v5 )
        {
          self->_sourceOffset += (signed __int64)objc_msgSend(v19, "encodedLength");
          v16 = 0LL;
          self->_streamOutputOffset += (signed __int64)objc_msgSend(v19, "decodedLength");
          goto LABEL_23;
        }
        if ( v17 )
        {
          v21 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                  &OBJC_CLASS___TSUAssertionHandler,
                  "_atomicIncrementAssertCount");
          if ( TSUAssertCat_init_token != -1 )
            dispatch_once(&TSUAssertCat_init_token, &stru_1001DDAB0);
          v22 = (os_log_s *)TSUAssertCat_log_t;
          if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 67110146;
            v44 = v21;
            v45 = 2082;
            v46 = "-[TSUBufferedReadChannel _resetStreamReadChannelIfNeededForOffset:length:]";
            v47 = 2082;
            v48 = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/So"
                  "urces/iWorkXPC/shared/utility/TSUBufferedReadChannel.m";
            v49 = 1024;
            v50 = 149;
            v51 = 2082;
            v52 = "blockInfos";
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              v22,
              OS_LOG_TYPE_ERROR,
              "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d expected nil value for '%{public}s'",
              buf,
              0x2Cu);
          }
          v23 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "-[TSUBufferedReadChannel _resetStreamReadChannelIfNeededForOffset:length:]"));
          v24 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithUTF8String:](
                    &OBJC_CLASS___NSString,
                    "stringWithUTF8String:",
                    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/"
                    "Sources/iWorkXPC/shared/utility/TSUBufferedReadChannel.m"));
          +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
            &OBJC_CLASS___TSUAssertionHandler,
            "handleFailureInFunction:file:lineNumber:isFatal:description:",
            v23,
            v24,
            149LL,
            0LL,
            "expected nil value for '%{public}s'",
            "blockInfos");
          objc_release(v24);
          objc_release(v23);
          +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
          a4 = v34;
        }
        v25 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableArray), "initWithCapacity:", v12);
        objc_release(v17);
        objc_msgSend(v25, "addObject:", v19);
        self->_sourceLength = (unsigned __int64)objc_msgSend(v19, "encodedLength");
        v16 = (char *)objc_msgSend(v19, "decodedLength");
        v20 = (char *)objc_msgSend(v19, "decodedLength");
        v17 = v25;
        v5 = v35;
      }
      self->_streamOutputOutstandingLength = (unsigned __int64)v20;
      if ( (unsigned __int64)v16 > a4 )
        goto LABEL_32;
LABEL_23:
      if ( !--v12 )
      {
        self->_sourceLength = -1LL;
        self->_streamOutputOutstandingLength = -1LL;
      }
      v18 = (char *)v18 + 1;
    }
    while ( v14 != v18 );
    v26 = -[NSArray countByEnumeratingWithState:objects:count:](
            obj,
            "countByEnumeratingWithState:objects:count:",
            &v39,
            v53,
            16LL);
    v14 = v26;
  }
  while ( v26 );
LABEL_32:
  objc_release(obj);
LABEL_33:
  currentStreamOutputData = self->_currentStreamOutputData;
  self->_currentStreamOutputData = 0LL;
  objc_release(currentStreamOutputData);
  self->_isStreamOutputDone = 0;
  streamReadChannelSourceHandler = self->_streamReadChannelSourceHandler;
  self->_streamReadChannelSourceHandler = 0LL;
  objc_release(streamReadChannelSourceHandler);
  streamReadChannelBlock = (__int64 (__fastcall **)(id, TSUBufferedReadChannelHelper *, void *))self->_streamReadChannelBlock;
  v30 = -[TSUBufferedReadChannelHelper initWithBufferedReadChannel:](
          objc_alloc(&OBJC_CLASS___TSUBufferedReadChannelHelper),
          "initWithBufferedReadChannel:",
          self);
  v31 = (TSUStreamReadChannel *)objc_retainAutoreleasedReturnValue((id)streamReadChannelBlock[2](
                                                                         streamReadChannelBlock,
                                                                         v30,
                                                                         v17));
  streamReadChannel = self->_streamReadChannel;
  self->_streamReadChannel = v31;
  objc_release(streamReadChannel);
  objc_release(v30);
  v33 = self->_streamReadChannel;
  v38[0] = _NSConcreteStackBlock;
  v38[1] = 3254779904LL;
  v38[2] = sub_10013D0FC;
  v38[3] = &unk_1001DDAF0;
  v38[4] = self;
  -[TSUStreamReadChannel readWithHandler:](v33, "readWithHandler:", v38);
  objc_release(v17);
}