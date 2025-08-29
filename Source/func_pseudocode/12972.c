+[TSUIOUtils newCGDataProviderForInputStream:outInfo:outCallbacks:]
CGDataProvider *__cdecl +[TSUIOUtils newCGDataProviderForInputStream:outInfo:outCallbacks:](
        id a1,
        SEL a2,
        id a3,
        void **a4,
        const CGDataProviderSequentialCallbacks **a5)
{
  id v7; // x19
  CGDataProvider *Sequential; // x20

  if ( !a3 )
    return 0LL;
  v7 = objc_retain(a3);
  CFRetain(v7);
  if ( a4 )
    *a4 = v7;
  if ( a5 )
    *a5 = (const CGDataProviderSequentialCallbacks *)&unk_1001DDD00;
  Sequential = CGDataProviderCreateSequential(v7, (const CGDataProviderSequentialCallbacks *)&unk_1001DDD00);
  objc_release(v7);
  return Sequential;
}