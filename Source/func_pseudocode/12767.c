-[TSUZipArchive streamReadChannelForEntry:]
id __cdecl -[TSUZipArchive streamReadChannelForEntry:](TSUZipArchive *self, SEL a2, id a3)
{
  return -[TSUZipArchive streamReadChannelForEntry:validateCRC:](
           self,
           "streamReadChannelForEntry:validateCRC:",
           a3,
           1LL);
}