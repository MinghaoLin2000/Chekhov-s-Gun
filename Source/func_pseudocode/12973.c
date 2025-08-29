+[TSUIOUtils newCGDataProviderForReadChannel:length:]
CGDataProvider *__cdecl +[TSUIOUtils newCGDataProviderForReadChannel:length:](
        id a1,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  return (CGDataProvider *)_objc_msgSend(
                             a1,
                             "newCGDataProviderForReadChannel:length:outInfo:outCallbacks:",
                             a3,
                             a4,
                             0LL,
                             0LL);
}