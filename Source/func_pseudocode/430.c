-[FileEventObserver setEventStreamRef:]
void __cdecl -[FileEventObserver setEventStreamRef:](FileEventObserver *self, SEL a2, __FSEventStream *a3)
{
  self->_eventStreamRef = a3;
}