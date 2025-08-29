-[IPPSessionTransaction finishedWriting0]
void __cdecl -[IPPSessionTransaction finishedWriting0](IPPSessionTransaction *self, SEL a2)
{
  NSOutputStream *outputStream; // x0
  NSOutputStream *v4; // x0
  DocumentCompressor *documentCompressor; // x21
  NSOutputStream *v6; // x20
  NSOutputStream *v7; // x0
  NSInputStream *inputStream; // x0
  _QWORD v9[4]; // [xsp+8h] [xbp-48h] BYREF
  id v10; // [xsp+28h] [xbp-28h]

  outputStream = self->_outputStream;
  if ( outputStream && self->_documentCompressor )
  {
    v4 = objc_retain(outputStream);
    documentCompressor = self->_documentCompressor;
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_100008D18;
    v9[3] = &unk_100090F38;
    v10 = v4;
    v6 = objc_retain(v4);
    -[DocumentCompressor finalChunkCompletionHandler:](documentCompressor, "finalChunkCompletionHandler:", v9);
    objc_release(v10);
    objc_release(v6);
    outputStream = self->_outputStream;
  }
  -[NSOutputStream close](outputStream, "close");
  v7 = self->_outputStream;
  self->_outputStream = 0LL;
  objc_release(v7);
  inputStream = self->_inputStream;
  self->_inputStream = 0LL;
  objc_release(inputStream);
}