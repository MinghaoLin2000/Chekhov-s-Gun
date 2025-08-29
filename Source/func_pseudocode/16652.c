-[EAAccessoryUpdater bootstrapWithOptions:]
void __cdecl -[EAAccessoryUpdater bootstrapWithOptions:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  FudPluginDelegate *delegate; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater bootstrapWithOptions:]",
    347LL);
  delegate = self->delegate;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[FudPluginDelegate didBootstrap:info:error:](delegate, "didBootstrap:info:error:", 1LL, 0LL, 0LL);
}