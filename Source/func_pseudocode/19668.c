-[IPPSession getLogCategory]
id __cdecl -[IPPSession getLogCategory](IPPSession *self, SEL a2)
{
  return objc_retainAutoreleaseReturnValue(PKLogCategoryNetwork[0]);
}