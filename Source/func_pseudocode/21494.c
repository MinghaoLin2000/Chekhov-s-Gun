-[LSRConnection getJitProfileData:contextualStrings:clientID:reply:]
void __cdecl -[LSRConnection getJitProfileData:contextualStrings:clientID:reply:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  -[EARInterface getJitProfileData:contextualStrings:clientID:reply:](
    self->_earInterface,
    "getJitProfileData:contextualStrings:clientID:reply:",
    a3,
    a4,
    a5,
    a6);
}