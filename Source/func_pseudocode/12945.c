-[TSUBufferedReadChannel initWithReadChannel:blockInfos:streamReadChannelBlock:]
TSUBufferedReadChannel *__cdecl -[TSUBufferedReadChannel initWithReadChannel:blockInfos:streamReadChannelBlock:](
        TSUBufferedReadChannel *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  return -[TSUBufferedReadChannel initWithReadChannel:sourceReadBufferSize:blockInfos:streamReadChannelBlock:](
           self,
           "initWithReadChannel:sourceReadBufferSize:blockInfos:streamReadChannelBlock:",
           a3,
           0x200000LL,
           a4,
           a5);
}