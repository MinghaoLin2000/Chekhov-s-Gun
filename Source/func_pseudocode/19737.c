-[platform_http_get getLogCategory]
id __cdecl -[platform_http_get getLogCategory](platform_http_get *self, SEL a2)
{
  return objc_retainAutoreleaseReturnValue(PKLogCategoryNetwork[0]);
}