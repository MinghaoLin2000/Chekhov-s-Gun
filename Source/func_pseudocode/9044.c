+[TSPFileManager copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:]
// local variable allocation has failed, the output may be wrong!
void __cdecl +[TSPFileManager copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:](
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
  _BOOL8 v9; // x23
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x22
  id v19; // x0
  void (__fastcall **v20)(_QWORD, _QWORD, _QWORD); // x24
  id v21; // x23
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v9 = a8;
  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = objc_retain(a6);
  v18 = objc_retain(a7);
  v19 = objc_retain(a9);
  v20 = (void (__fastcall **)(_QWORD, _QWORD, _QWORD))v19;
  if ( v15 && v17 )
  {
    if ( (UnsafePointer(v16, v18) & 1) != 0 )
      objc_msgSend(
        a1,
        "transcodeReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:",
        v15,
        v16,
        a5,
        v17,
        v18,
        v9,
        v20);
    else
      objc_msgSend(a1, "copyDataFromReadChannel:size:toWriteChannel:synchronous:completion:", v15, a5, v17, v9, v20);
  }
  else if ( v19 )
  {
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSError tsp_unknownReadErrorWithUserInfo:](
              &OBJC_CLASS___NSError,
              "tsp_unknownReadErrorWithUserInfo:",
              0LL));
    ((void (__fastcall **)(_QWORD, _QWORD, id))v20)[2](v20, 0LL, v21);
    objc_release(v21);
  }
  objc_release(v20);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v15);
}