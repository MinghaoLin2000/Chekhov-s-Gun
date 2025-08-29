-[TSUZipArchive tsp_dataForEntry:]
id __cdecl -[TSUZipArchive tsp_dataForEntry:](TSUZipArchive *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  id v6; // x22
  id v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( v4 )
  {
    v5 = objc_autoreleasePoolPush();
    v6 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive streamReadChannelForEntry:](self, "streamReadChannelForEntry:", v4));
    v7 = objc_retainAutoreleasedReturnValue(+[TSPReadChannelUtils dataFromReadChannel:](&OBJC_CLASS___TSPReadChannelUtils, "dataFromReadChannel:", v6));
    objc_msgSend(v6, "close");
    objc_release(v6);
    objc_autoreleasePoolPop(v5);
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}