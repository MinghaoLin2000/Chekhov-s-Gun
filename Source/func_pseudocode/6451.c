-[ExportSessionVideoTranscodingTask configureOutputForExportSession:outputFileType:]
void __cdecl -[ExportSessionVideoTranscodingTask configureOutputForExportSession:outputFileType:](
        ExportSessionVideoTranscodingTask *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  NSURL *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  objc_msgSend(v6, "setOutputFileType:", a4);
  v7 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputMainResourceURL](self, "outputMainResourceURL"));
  objc_msgSend(v6, "setOutputURL:", v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}