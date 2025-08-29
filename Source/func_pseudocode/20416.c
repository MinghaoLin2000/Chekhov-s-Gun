-[PrintdRPCService getLogCategory]
id __cdecl -[PrintdRPCService getLogCategory](PrintdRPCService *self, SEL a2)
{
  return objc_retainAutoreleaseReturnValue(PKLogCategoryDefault[0]);
}