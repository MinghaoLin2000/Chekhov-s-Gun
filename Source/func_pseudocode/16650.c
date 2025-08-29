-[EAAccessoryUpdater setDelegate:]
void __cdecl -[EAAccessoryUpdater setDelegate:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater setDelegate:]",
    334LL);
  self->delegate = (FudPluginDelegate *)a3;
}