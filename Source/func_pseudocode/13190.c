+[NSInputStream tsu_inputStreamWithReadChannel:length:]
id __cdecl +[NSInputStream tsu_inputStreamWithReadChannel:length:](id a1, SEL a2, id a3, unsigned __int64 a4)
{
  id v5; // x21
  TSUReadChannelInputStreamAdapter *v6; // x19
  SFUReadChannelNSInputStreamAdaptor *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = -[TSUReadChannelInputStreamAdapter initWithReadChannel:length:](
         objc_alloc(&OBJC_CLASS___TSUReadChannelInputStreamAdapter),
         "initWithReadChannel:length:",
         v5,
         a4);
  objc_release(v5);
  v7 = -[SFUReadChannelNSInputStreamAdaptor initWithSFUInputStream:](
         objc_alloc(&OBJC_CLASS___SFUReadChannelNSInputStreamAdaptor),
         "initWithSFUInputStream:",
         v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}