-[SiriNCService windowedPosition]
bool __cdecl -[SiriNCService windowedPosition](SiriNCService *self, SEL a2)
{
  return -[SiriNCService windowedLaunch](self, "windowedLaunch")
      || (void *)-[SiriNCService breakoutState](self, "breakoutState") == (void *)2;
}