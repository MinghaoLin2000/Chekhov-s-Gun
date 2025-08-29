+[TSPFileManager transcodeReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:]
// local variable allocation has failed, the output may be wrong!
void __cdecl +[TSPFileManager transcodeReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5,
        id a6,
        id a7,
        bool a8,
        id a9)
{
  _BOOL8 v9; // x21
  id v15; // x19
  void (__fastcall **v16)(id, _QWORD, id); // x20
  id v17; // x28
  id v18; // x25
  id v19; // x26
  TSPCryptoTranscodeReadChannel *v20; // x24
  id v21; // x21
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v9 = a8;
  v15 = objc_retain(a6);
  v16 = (void (__fastcall **)(id, _QWORD, id))objc_retain(a9);
  v17 = objc_retain(a7);
  v18 = objc_retain(a4);
  v19 = objc_retain(a3);
  v20 = -[TSPCryptoTranscodeReadChannel initWithReadChannel:decryptionInfo:encryptionInfo:](
          objc_alloc(&OBJC_CLASS___TSPCryptoTranscodeReadChannel),
          "initWithReadChannel:decryptionInfo:encryptionInfo:",
          v19,
          v18,
          v17);
  objc_release(v17);
  objc_release(v18);
  objc_release(v19);
  if ( v20 )
  {
    objc_msgSend(a1, "copyDataFromReadChannel:size:toWriteChannel:synchronous:completion:", v20, a5, v15, v9, v16);
    -[TSPCryptoTranscodeReadChannel close](v20, "close");
  }
  else if ( v16 )
  {
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSError tsp_unknownReadErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsp_unknownReadErrorWithUserInfo:",
              0LL));
    v16[2](v16, 0LL, v21);
    objc_release(v21);
  }
  objc_release(v20);
  objc_release(v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v15);
}