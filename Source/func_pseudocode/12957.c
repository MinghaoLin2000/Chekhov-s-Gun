-[TSUBufferedReadChannel _readFromOffset:length:handler:]
void __cdecl -[TSUBufferedReadChannel _readFromOffset:length:handler:](
        TSUBufferedReadChannel *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4,
        id a5)
{
  id v8; // x19
  unsigned __int64 v9; // x21
  signed __int64 v10; // x23
  dispatch_data_s *v11; // x0
  dispatch_data_s *v12; // x20
  size_t size; // x0
  NSThread *v14; // x24
  NSMutableDictionary *v15; // x25
  NSThread *v16; // x24
  NSMutableDictionary *v17; // x25
  OS_dispatch_data *currentStreamOutputData; // x0
  unsigned __int64 streamOutputLength; // x8
  unsigned __int64 streamOutputOutstandingLength; // x9
  TSUReadChannel *sourceReadChannel; // x24
  signed __int64 sourceOffset; // x25
  unsigned __int64 sourceReadBufferSize; // x26
  _QWORD v24[5]; // [xsp+8h] [xbp-C8h] BYREF
  id v25; // [xsp+30h] [xbp-A0h]
  _QWORD *v26; // [xsp+38h] [xbp-98h]
  unsigned __int64 v27; // [xsp+40h] [xbp-90h]
  signed __int64 v28; // [xsp+48h] [xbp-88h]
  unsigned __int64 v29; // [xsp+50h] [xbp-80h]
  _QWORD v30[4]; // [xsp+58h] [xbp-78h] BYREF
  unsigned __int8 v31; // [xsp+7Fh] [xbp-51h] BYREF

  v8 = objc_retain(a5);
  v9 = (a3 & (a3 >> 63)) + a4;
  v10 = a3 & ~(a3 >> 63);
  -[TSUBufferedReadChannel _resetStreamReadChannelIfNeededForOffset:length:](
    self,
    "_resetStreamReadChannelIfNeededForOffset:length:",
    v10,
    v9);
  v31 = 0;
  v11 = (dispatch_data_s *)objc_retainAutoreleasedReturnValue(
                             -[TSUBufferedReadChannel _currentDataIntersectionWithOffset:length:isReadDone:](
                               self,
                               "_currentDataIntersectionWithOffset:length:isReadDone:",
                               v10,
                               v9,
                               &v31));
  v12 = v11;
  if ( v11 )
  {
    size = dispatch_data_get_size(v11);
    v10 += size;
    v9 -= size;
  }
  else if ( !v31 )
  {
    goto LABEL_6;
  }
  v14 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
  v15 = objc_retainAutoreleasedReturnValue(-[NSThread threadDictionary](v14, "threadDictionary"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v15,
    "setObject:forKeyedSubscript:",
    &__kCFBooleanTrue,
    CFSTR("TSUBufferedReadChannelInvokingHandler"));
  objc_release(v15);
  objc_release(v14);
  (*((void (__fastcall **)(id, _QWORD, dispatch_data_s *, _QWORD))v8 + 2))(v8, v31, v12, 0LL);
  v16 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
  v17 = objc_retainAutoreleasedReturnValue(-[NSThread threadDictionary](v16, "threadDictionary"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v17,
    "setObject:forKeyedSubscript:",
    &__kCFBooleanFalse,
    CFSTR("TSUBufferedReadChannelInvokingHandler"));
  objc_release(v17);
  objc_release(v16);
  if ( v31 )
  {
    dispatch_resume((dispatch_object_t)self->_readQueue);
    goto LABEL_12;
  }
LABEL_6:
  -[TSUBufferedReadChannel _resetStreamReadChannelIfNeededForOffset:length:](
    self,
    "_resetStreamReadChannelIfNeededForOffset:length:",
    v10,
    v9);
  currentStreamOutputData = self->_currentStreamOutputData;
  self->_currentStreamOutputData = 0LL;
  objc_release(currentStreamOutputData);
  streamOutputOutstandingLength = self->_streamOutputOutstandingLength;
  streamOutputLength = self->_streamOutputLength;
  self->_streamOutputOffset += streamOutputLength;
  if ( streamOutputOutstandingLength != -1LL )
    self->_streamOutputOutstandingLength = streamOutputOutstandingLength - streamOutputLength;
  self->_streamOutputLength = 0LL;
  sourceReadChannel = self->_sourceReadChannel;
  sourceOffset = self->_sourceOffset;
  if ( self->_sourceLength >= self->_sourceReadBufferSize )
    sourceReadBufferSize = self->_sourceReadBufferSize;
  else
    sourceReadBufferSize = self->_sourceLength;
  v30[0] = 0LL;
  v30[1] = v30;
  v30[2] = 0x2020000000LL;
  v30[3] = 0LL;
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_10013D860;
  v24[3] = &unk_1001DDBA0;
  v24[4] = self;
  v25 = objc_retain(v8);
  v26 = v30;
  v27 = sourceReadBufferSize;
  v28 = v10;
  v29 = v9;
  -[TSUReadChannel readFromOffset:length:handler:](
    sourceReadChannel,
    "readFromOffset:length:handler:",
    sourceOffset,
    sourceReadBufferSize,
    v24);
  objc_release(v25);
  _Block_object_dispose(v30, 8);
LABEL_12:
  objc_release(v12);
  objc_release(v8);
}