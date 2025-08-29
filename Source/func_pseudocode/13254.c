-[TSUFileIOChannel initForReadingDescriptor:cleanupHandler:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSUFileIOChannel initForReadingDescriptor:cleanupHandler:](TSUFileIOChannel *self, SEL a2, int a3, id a4)
{
  return -[TSUFileIOChannel initWithType:descriptor:cleanupHandler:](
           self,
           "initWithType:descriptor:cleanupHandler:",
           1LL,
           *(_QWORD *)&a3,
           a4);
}