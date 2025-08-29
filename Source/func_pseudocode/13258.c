-[TSUFileIOChannel initForRandomWritingURL:error:cleanupHandler:]
id __cdecl -[TSUFileIOChannel initForRandomWritingURL:error:cleanupHandler:](
        TSUFileIOChannel *self,
        SEL a2,
        id a3,
        id *a4,
        id a5)
{
  return -[TSUFileIOChannel initWithType:URL:oflag:mode:error:cleanupHandler:](
           self,
           "initWithType:URL:oflag:mode:error:cleanupHandler:",
           1LL,
           a3,
           1537LL,
           420LL,
           a4,
           a5);
}