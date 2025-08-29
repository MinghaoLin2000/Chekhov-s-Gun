-[EAFirmwareUpdater logStatusString:]
void __cdecl -[EAFirmwareUpdater logStatusString:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  -[EAFirmwareUpdater log:format:](
    self,
    "log:format:",
    5LL,
    CFSTR("%s %@"),
    "-[EAFirmwareUpdater logStatusString:]",
    objc_autorelease(objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:", CFSTR("STATUS: %@"), a3)));
}