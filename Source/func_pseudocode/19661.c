-[IPPSessionDelegate getLogCategory]
id __cdecl -[IPPSessionDelegate getLogCategory](IPPSessionDelegate *self, SEL a2)
{
  return objc_retainAutoreleaseReturnValue(PKLogCategoryNetwork[0]);
}