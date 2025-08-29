-[IKPTRecentsService saveImageData:forUID:]
void __cdecl -[IKPTRecentsService saveImageData:forUID:](IKPTRecentsService *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  void *v7; // x19
  id v8; // x20
  void *v9; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a4, "lastPathComponent"));
  v8 = objc_retainAutoreleasedReturnValue(-[IKPTRecentsService repositoryPath](self, "repositoryPath"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingPathComponent:", v7));
  objc_release(v8);
  objc_msgSend(v6, "writeToFile:atomically:", v9, 1LL);
  objc_release(v6);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}