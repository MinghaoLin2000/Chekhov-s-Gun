-[TSUBufferedReadChannel readFromOffsetAndWait:length:handler:]
void __cdecl -[TSUBufferedReadChannel readFromOffsetAndWait:length:handler:](
        TSUBufferedReadChannel *self,
        SEL a2,
        signed __int64 a3,
        unsigned __int64 a4,
        id a5)
{
  +[TSUIOUtils readFromOffsetAndWait:offset:length:handler:](
    &OBJC_CLASS___TSUIOUtils,
    "readFromOffsetAndWait:offset:length:handler:",
    self,
    a3,
    a4,
    a5);
}