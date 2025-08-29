+[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:format:args:]
// local variable allocation has failed, the output may be wrong!
void __cdecl +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:format:args:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5,
        bool a6,
        id a7,
        char *a8)
{
  _BOOL8 v9; // x19
  void *v13; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v9 = a6;
  v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "tsu_initUnRedactedWithFormat:arguments:", a7, a8);
  if ( qword_1001F8088 )
  {
    (*(void (**)(void))(qword_1001F8088 + 16))();
  }
  else if ( qword_1001F80C0 )
  {
    objc_msgSend(
      (id)qword_1001F80C0,
      "handleFailureInFunction:file:lineNumber:isFatal:format:message:",
      a3,
      a4,
      a5,
      v9,
      a7,
      v13);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}