-[IPPSessionTransaction getLogCategory]
id __cdecl -[IPPSessionTransaction getLogCategory](IPPSessionTransaction *self, SEL a2)
{
  return objc_retainAutoreleaseReturnValue(PKLogCategoryNetwork[0]);
}