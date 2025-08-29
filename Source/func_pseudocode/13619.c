+[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:]
// local variable allocation has failed, the output may be wrong!
void __cdecl +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5,
        bool a6,
        const char *a7)
{
  __int64 v7; // [xsp+50h] [xbp+10h] BYREF

  objc_msgSend(
    a1,
    "handleFailureInFunction:file:lineNumber:isFatal:format:args:",
    a3,
    a4,
    a5,
    a6,
    +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", a7),
    &v7);
}