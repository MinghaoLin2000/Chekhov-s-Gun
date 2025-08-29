-[FileEventObserver isObserving]
bool __cdecl -[FileEventObserver isObserving](FileEventObserver *self, SEL a2)
{
  return -[FileEventObserver eventStreamRef](self, "eventStreamRef") != 0LL;
}