-[SiriNCService windowedLaunch]
// attributes: thunk
bool __cdecl -[SiriNCService windowedLaunch](SiriNCService *self, SEL a2)
{
  return SiriUIShowSiriInWindow(self, a2);
}